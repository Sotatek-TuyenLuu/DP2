#include "vtkCommonDataModelInstantiator.h"
#include "vtkAdjacentVertexIterator.h"
#include "vtkAMRUtilities.h"
#include "vtkAnimationScene.h"
#include "vtkAnnotation.h"
#include "vtkAnnotationLayers.h"
#include "vtkArrayData.h"
#include "vtkAttributesErrorMetric.h"
#include "vtkBiQuadraticQuad.h"
#include "vtkBiQuadraticQuadraticHexahedron.h"
#include "vtkBiQuadraticQuadraticWedge.h"
#include "vtkBiQuadraticTriangle.h"
#include "vtkBox.h"
#include "vtkBSPCuts.h"
#include "vtkBSPIntersections.h"
#include "vtkCellArray.h"
#include "vtkCellData.h"
#include "vtkCellLinks.h"
#include "vtkCellLocator.h"
#include "vtkCellTypes.h"
#include "vtkCone.h"
#include "vtkConvexPointSet.h"
#include "vtkCubicLine.h"
#include "vtkCylinder.h"
#include "vtkDataSetCellIterator.h"
#include "vtkDataObjectCollection.h"
#include "vtkDataObject.h"
#include "vtkDataObjectTypes.h"
#include "vtkDataObjectTreeIterator.h"
#include "vtkDataSetAttributes.h"
#include "vtkDataSetCollection.h"
#include "vtkDirectedAcyclicGraph.h"
#include "vtkDirectedGraph.h"
#include "vtkEdgeListIterator.h"
#include "vtkEdgeTable.h"
#include "vtkEmptyCell.h"
#include "vtkExtractStructuredGridHelper.h"
#include "vtkFieldData.h"
#include "vtkGenericAttributeCollection.h"
#include "vtkGenericCell.h"
#include "vtkGenericEdgeTable.h"
#include "vtkGenericInterpolatedVelocityField.h"
#include "vtkGeometricErrorMetric.h"
#include "vtkGraphEdge.h"
#include "vtkGraphInternals.h"
#include "vtkHexagonalPrism.h"
#include "vtkHexahedron.h"
#include "vtkHierarchicalBoxDataIterator.h"
#include "vtkHierarchicalBoxDataSet.h"
#include "vtkHyperOctree.h"
#include "vtkHyperTreeGrid.h"
#include "vtkImageData.h"
#include "vtkImplicitBoolean.h"
#include "vtkImplicitDataSet.h"
#include "vtkImplicitFunctionCollection.h"
#include "vtkImplicitHalo.h"
#include "vtkImplicitSelectionLoop.h"
#include "vtkImplicitSum.h"
#include "vtkImplicitVolume.h"
#include "vtkImplicitWindowFunction.h"
#include "vtkIncrementalOctreeNode.h"
#include "vtkIncrementalOctreePointLocator.h"
#include "vtkInEdgeIterator.h"
#include "vtkIterativeClosestPointTransform.h"
#include "vtkKdNode.h"
#include "vtkKdTree.h"
#include "vtkKdTreePointLocator.h"
#include "vtkLine.h"
#include "vtkMeanValueCoordinatesInterpolator.h"
#include "vtkMergePoints.h"
#include "vtkMultiBlockDataSet.h"
#include "vtkMultiPieceDataSet.h"
#include "vtkMutableDirectedGraph.h"
#include "vtkMutableUndirectedGraph.h"
#include "vtkNonMergingPointLocator.h"
#include "vtkOctreePointLocator.h"
#include "vtkOctreePointLocatorNode.h"
#include "vtkOrderedTriangulator.h"
#include "vtkOutEdgeIterator.h"
#include "vtkPath.h"
#include "vtkPentagonalPrism.h"
#include "vtkPerlinNoise.h"
#include "vtkPiecewiseFunction.h"
#include "vtkPixel.h"
#include "vtkPlaneCollection.h"
#include "vtkPlane.h"
#include "vtkPlanes.h"
#include "vtkPlanesIntersection.h"
#include "vtkPointData.h"
#include "vtkPointLocator.h"
#include "vtkPointSetCellIterator.h"
#include "vtkPointsProjectedHull.h"
#include "vtkPolyDataCollection.h"
#include "vtkPolyData.h"
#include "vtkPolygon.h"
#include "vtkPolyhedron.h"
#include "vtkPolyLine.h"
#include "vtkPolyPlane.h"
#include "vtkPolyVertex.h"
#include "vtkPyramid.h"
#include "vtkQuad.h"
#include "vtkQuadraticEdge.h"
#include "vtkQuadraticHexahedron.h"
#include "vtkQuadraticLinearQuad.h"
#include "vtkQuadraticLinearWedge.h"
#include "vtkQuadraticPolygon.h"
#include "vtkQuadraticPyramid.h"
#include "vtkQuadraticQuad.h"
#include "vtkQuadraticTetra.h"
#include "vtkQuadraticTriangle.h"
#include "vtkQuadraticWedge.h"
#include "vtkQuadratureSchemeDefinition.h"
#include "vtkQuadric.h"
#include "vtkRectilinearGrid.h"
#include "vtkReebGraph.h"
#include "vtkReebGraphSimplificationMetric.h"
#include "vtkSelection.h"
#include "vtkSelectionNode.h"
#include "vtkSimpleCellTessellator.h"
#include "vtkSmoothErrorMetric.h"
#include "vtkSphere.h"
#include "vtkStructuredExtent.h"
#include "vtkStructuredGrid.h"
#include "vtkStructuredPointsCollection.h"
#include "vtkStructuredPoints.h"
#include "vtkStructuredVisibilityConstraint.h"
#include "vtkSuperquadric.h"
#include "vtkTable.h"
#include "vtkTensor.h"
#include "vtkTetra.h"
#include "vtkTreeBFSIterator.h"
#include "vtkTree.h"
#include "vtkTreeDFSIterator.h"
#include "vtkTriangle.h"
#include "vtkTriangleStrip.h"
#include "vtkTriQuadraticHexahedron.h"
#include "vtkUndirectedGraph.h"
#include "vtkUniformGrid.h"
#include "vtkUnstructuredGrid.h"
#include "vtkUnstructuredGridCellIterator.h"
#include "vtkVertex.h"
#include "vtkVertexListIterator.h"
#include "vtkVoxel.h"
#include "vtkWedge.h"
#include "vtkXMLDataElement.h"
#include "vtkMolecule.h"
#include "vtkNonOverlappingAMR.h"
#include "vtkOverlappingAMR.h"
#include "vtkAMRInformation.h"
#include "vtkUniformGridAMR.h"
#include "vtkUniformGridAMRDataIterator.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkAdjacentVertexIterator)
vtkInstantiatorNewMacro(vtkAMRUtilities)
vtkInstantiatorNewMacro(vtkAnimationScene)
vtkInstantiatorNewMacro(vtkAnnotation)
vtkInstantiatorNewMacro(vtkAnnotationLayers)
vtkInstantiatorNewMacro(vtkArrayData)
vtkInstantiatorNewMacro(vtkAttributesErrorMetric)
vtkInstantiatorNewMacro(vtkBiQuadraticQuad)
vtkInstantiatorNewMacro(vtkBiQuadraticQuadraticHexahedron)
vtkInstantiatorNewMacro(vtkBiQuadraticQuadraticWedge)
vtkInstantiatorNewMacro(vtkBiQuadraticTriangle)
vtkInstantiatorNewMacro(vtkBox)
vtkInstantiatorNewMacro(vtkBSPCuts)
vtkInstantiatorNewMacro(vtkBSPIntersections)
vtkInstantiatorNewMacro(vtkCellArray)
vtkInstantiatorNewMacro(vtkCellData)
vtkInstantiatorNewMacro(vtkCellLinks)
vtkInstantiatorNewMacro(vtkCellLocator)
vtkInstantiatorNewMacro(vtkCellTypes)
vtkInstantiatorNewMacro(vtkCone)
vtkInstantiatorNewMacro(vtkConvexPointSet)
vtkInstantiatorNewMacro(vtkCubicLine)
vtkInstantiatorNewMacro(vtkCylinder)
vtkInstantiatorNewMacro(vtkDataSetCellIterator)
vtkInstantiatorNewMacro(vtkDataObjectCollection)
vtkInstantiatorNewMacro(vtkDataObject)
vtkInstantiatorNewMacro(vtkDataObjectTypes)
vtkInstantiatorNewMacro(vtkDataObjectTreeIterator)
vtkInstantiatorNewMacro(vtkDataSetAttributes)
vtkInstantiatorNewMacro(vtkDataSetCollection)
vtkInstantiatorNewMacro(vtkDirectedAcyclicGraph)
vtkInstantiatorNewMacro(vtkDirectedGraph)
vtkInstantiatorNewMacro(vtkEdgeListIterator)
vtkInstantiatorNewMacro(vtkEdgeTable)
vtkInstantiatorNewMacro(vtkEmptyCell)
vtkInstantiatorNewMacro(vtkExtractStructuredGridHelper)
vtkInstantiatorNewMacro(vtkFieldData)
vtkInstantiatorNewMacro(vtkGenericAttributeCollection)
vtkInstantiatorNewMacro(vtkGenericCell)
vtkInstantiatorNewMacro(vtkGenericEdgeTable)
vtkInstantiatorNewMacro(vtkGenericInterpolatedVelocityField)
vtkInstantiatorNewMacro(vtkGeometricErrorMetric)
vtkInstantiatorNewMacro(vtkGraphEdge)
vtkInstantiatorNewMacro(vtkGraphInternals)
vtkInstantiatorNewMacro(vtkHexagonalPrism)
vtkInstantiatorNewMacro(vtkHexahedron)
vtkInstantiatorNewMacro(vtkHierarchicalBoxDataIterator)
vtkInstantiatorNewMacro(vtkHierarchicalBoxDataSet)
vtkInstantiatorNewMacro(vtkHyperOctree)
vtkInstantiatorNewMacro(vtkHyperTreeGrid)
vtkInstantiatorNewMacro(vtkImageData)
vtkInstantiatorNewMacro(vtkImplicitBoolean)
vtkInstantiatorNewMacro(vtkImplicitDataSet)
vtkInstantiatorNewMacro(vtkImplicitFunctionCollection)
vtkInstantiatorNewMacro(vtkImplicitHalo)
vtkInstantiatorNewMacro(vtkImplicitSelectionLoop)
vtkInstantiatorNewMacro(vtkImplicitSum)
vtkInstantiatorNewMacro(vtkImplicitVolume)
vtkInstantiatorNewMacro(vtkImplicitWindowFunction)
vtkInstantiatorNewMacro(vtkIncrementalOctreeNode)
vtkInstantiatorNewMacro(vtkIncrementalOctreePointLocator)
vtkInstantiatorNewMacro(vtkInEdgeIterator)
vtkInstantiatorNewMacro(vtkIterativeClosestPointTransform)
vtkInstantiatorNewMacro(vtkKdNode)
vtkInstantiatorNewMacro(vtkKdTree)
vtkInstantiatorNewMacro(vtkKdTreePointLocator)
vtkInstantiatorNewMacro(vtkLine)
vtkInstantiatorNewMacro(vtkMeanValueCoordinatesInterpolator)
vtkInstantiatorNewMacro(vtkMergePoints)
vtkInstantiatorNewMacro(vtkMultiBlockDataSet)
vtkInstantiatorNewMacro(vtkMultiPieceDataSet)
vtkInstantiatorNewMacro(vtkMutableDirectedGraph)
vtkInstantiatorNewMacro(vtkMutableUndirectedGraph)
vtkInstantiatorNewMacro(vtkNonMergingPointLocator)
vtkInstantiatorNewMacro(vtkOctreePointLocator)
vtkInstantiatorNewMacro(vtkOctreePointLocatorNode)
vtkInstantiatorNewMacro(vtkOrderedTriangulator)
vtkInstantiatorNewMacro(vtkOutEdgeIterator)
vtkInstantiatorNewMacro(vtkPath)
vtkInstantiatorNewMacro(vtkPentagonalPrism)
vtkInstantiatorNewMacro(vtkPerlinNoise)
vtkInstantiatorNewMacro(vtkPiecewiseFunction)
vtkInstantiatorNewMacro(vtkPixel)
vtkInstantiatorNewMacro(vtkPlaneCollection)
vtkInstantiatorNewMacro(vtkPlane)
vtkInstantiatorNewMacro(vtkPlanes)
vtkInstantiatorNewMacro(vtkPlanesIntersection)
vtkInstantiatorNewMacro(vtkPointData)
vtkInstantiatorNewMacro(vtkPointLocator)
vtkInstantiatorNewMacro(vtkPointSetCellIterator)
vtkInstantiatorNewMacro(vtkPointsProjectedHull)
vtkInstantiatorNewMacro(vtkPolyDataCollection)
vtkInstantiatorNewMacro(vtkPolyData)
vtkInstantiatorNewMacro(vtkPolygon)
vtkInstantiatorNewMacro(vtkPolyhedron)
vtkInstantiatorNewMacro(vtkPolyLine)
vtkInstantiatorNewMacro(vtkPolyPlane)
vtkInstantiatorNewMacro(vtkPolyVertex)
vtkInstantiatorNewMacro(vtkPyramid)
vtkInstantiatorNewMacro(vtkQuad)
vtkInstantiatorNewMacro(vtkQuadraticEdge)
vtkInstantiatorNewMacro(vtkQuadraticHexahedron)
vtkInstantiatorNewMacro(vtkQuadraticLinearQuad)
vtkInstantiatorNewMacro(vtkQuadraticLinearWedge)
vtkInstantiatorNewMacro(vtkQuadraticPolygon)
vtkInstantiatorNewMacro(vtkQuadraticPyramid)
vtkInstantiatorNewMacro(vtkQuadraticQuad)
vtkInstantiatorNewMacro(vtkQuadraticTetra)
vtkInstantiatorNewMacro(vtkQuadraticTriangle)
vtkInstantiatorNewMacro(vtkQuadraticWedge)
vtkInstantiatorNewMacro(vtkQuadratureSchemeDefinition)
vtkInstantiatorNewMacro(vtkQuadric)
vtkInstantiatorNewMacro(vtkRectilinearGrid)
vtkInstantiatorNewMacro(vtkReebGraph)
vtkInstantiatorNewMacro(vtkReebGraphSimplificationMetric)
vtkInstantiatorNewMacro(vtkSelection)
vtkInstantiatorNewMacro(vtkSelectionNode)
vtkInstantiatorNewMacro(vtkSimpleCellTessellator)
vtkInstantiatorNewMacro(vtkSmoothErrorMetric)
vtkInstantiatorNewMacro(vtkSphere)
vtkInstantiatorNewMacro(vtkStructuredExtent)
vtkInstantiatorNewMacro(vtkStructuredGrid)
vtkInstantiatorNewMacro(vtkStructuredPointsCollection)
vtkInstantiatorNewMacro(vtkStructuredPoints)
vtkInstantiatorNewMacro(vtkStructuredVisibilityConstraint)
vtkInstantiatorNewMacro(vtkSuperquadric)
vtkInstantiatorNewMacro(vtkTable)
vtkInstantiatorNewMacro(vtkTensor)
vtkInstantiatorNewMacro(vtkTetra)
vtkInstantiatorNewMacro(vtkTreeBFSIterator)
vtkInstantiatorNewMacro(vtkTree)
vtkInstantiatorNewMacro(vtkTreeDFSIterator)
vtkInstantiatorNewMacro(vtkTriangle)
vtkInstantiatorNewMacro(vtkTriangleStrip)
vtkInstantiatorNewMacro(vtkTriQuadraticHexahedron)
vtkInstantiatorNewMacro(vtkUndirectedGraph)
vtkInstantiatorNewMacro(vtkUniformGrid)
vtkInstantiatorNewMacro(vtkUnstructuredGrid)
vtkInstantiatorNewMacro(vtkUnstructuredGridCellIterator)
vtkInstantiatorNewMacro(vtkVertex)
vtkInstantiatorNewMacro(vtkVertexListIterator)
vtkInstantiatorNewMacro(vtkVoxel)
vtkInstantiatorNewMacro(vtkWedge)
vtkInstantiatorNewMacro(vtkXMLDataElement)
vtkInstantiatorNewMacro(vtkMolecule)
vtkInstantiatorNewMacro(vtkNonOverlappingAMR)
vtkInstantiatorNewMacro(vtkOverlappingAMR)
vtkInstantiatorNewMacro(vtkAMRInformation)
vtkInstantiatorNewMacro(vtkUniformGridAMR)
vtkInstantiatorNewMacro(vtkUniformGridAMRDataIterator)



void vtkCommonDataModelInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkAdjacentVertexIterator", vtkInstantiatorvtkAdjacentVertexIteratorNew);
  vtkInstantiator::RegisterInstantiator("vtkAMRUtilities", vtkInstantiatorvtkAMRUtilitiesNew);
  vtkInstantiator::RegisterInstantiator("vtkAnimationScene", vtkInstantiatorvtkAnimationSceneNew);
  vtkInstantiator::RegisterInstantiator("vtkAnnotation", vtkInstantiatorvtkAnnotationNew);
  vtkInstantiator::RegisterInstantiator("vtkAnnotationLayers", vtkInstantiatorvtkAnnotationLayersNew);
  vtkInstantiator::RegisterInstantiator("vtkArrayData", vtkInstantiatorvtkArrayDataNew);
  vtkInstantiator::RegisterInstantiator("vtkAttributesErrorMetric", vtkInstantiatorvtkAttributesErrorMetricNew);
  vtkInstantiator::RegisterInstantiator("vtkBiQuadraticQuad", vtkInstantiatorvtkBiQuadraticQuadNew);
  vtkInstantiator::RegisterInstantiator("vtkBiQuadraticQuadraticHexahedron", vtkInstantiatorvtkBiQuadraticQuadraticHexahedronNew);
  vtkInstantiator::RegisterInstantiator("vtkBiQuadraticQuadraticWedge", vtkInstantiatorvtkBiQuadraticQuadraticWedgeNew);
  vtkInstantiator::RegisterInstantiator("vtkBiQuadraticTriangle", vtkInstantiatorvtkBiQuadraticTriangleNew);
  vtkInstantiator::RegisterInstantiator("vtkBox", vtkInstantiatorvtkBoxNew);
  vtkInstantiator::RegisterInstantiator("vtkBSPCuts", vtkInstantiatorvtkBSPCutsNew);
  vtkInstantiator::RegisterInstantiator("vtkBSPIntersections", vtkInstantiatorvtkBSPIntersectionsNew);
  vtkInstantiator::RegisterInstantiator("vtkCellArray", vtkInstantiatorvtkCellArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkCellData", vtkInstantiatorvtkCellDataNew);
  vtkInstantiator::RegisterInstantiator("vtkCellLinks", vtkInstantiatorvtkCellLinksNew);
  vtkInstantiator::RegisterInstantiator("vtkCellLocator", vtkInstantiatorvtkCellLocatorNew);
  vtkInstantiator::RegisterInstantiator("vtkCellTypes", vtkInstantiatorvtkCellTypesNew);
  vtkInstantiator::RegisterInstantiator("vtkCone", vtkInstantiatorvtkConeNew);
  vtkInstantiator::RegisterInstantiator("vtkConvexPointSet", vtkInstantiatorvtkConvexPointSetNew);
  vtkInstantiator::RegisterInstantiator("vtkCubicLine", vtkInstantiatorvtkCubicLineNew);
  vtkInstantiator::RegisterInstantiator("vtkCylinder", vtkInstantiatorvtkCylinderNew);
  vtkInstantiator::RegisterInstantiator("vtkDataSetCellIterator", vtkInstantiatorvtkDataSetCellIteratorNew);
  vtkInstantiator::RegisterInstantiator("vtkDataObjectCollection", vtkInstantiatorvtkDataObjectCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkDataObject", vtkInstantiatorvtkDataObjectNew);
  vtkInstantiator::RegisterInstantiator("vtkDataObjectTypes", vtkInstantiatorvtkDataObjectTypesNew);
  vtkInstantiator::RegisterInstantiator("vtkDataObjectTreeIterator", vtkInstantiatorvtkDataObjectTreeIteratorNew);
  vtkInstantiator::RegisterInstantiator("vtkDataSetAttributes", vtkInstantiatorvtkDataSetAttributesNew);
  vtkInstantiator::RegisterInstantiator("vtkDataSetCollection", vtkInstantiatorvtkDataSetCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkDirectedAcyclicGraph", vtkInstantiatorvtkDirectedAcyclicGraphNew);
  vtkInstantiator::RegisterInstantiator("vtkDirectedGraph", vtkInstantiatorvtkDirectedGraphNew);
  vtkInstantiator::RegisterInstantiator("vtkEdgeListIterator", vtkInstantiatorvtkEdgeListIteratorNew);
  vtkInstantiator::RegisterInstantiator("vtkEdgeTable", vtkInstantiatorvtkEdgeTableNew);
  vtkInstantiator::RegisterInstantiator("vtkEmptyCell", vtkInstantiatorvtkEmptyCellNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractStructuredGridHelper", vtkInstantiatorvtkExtractStructuredGridHelperNew);
  vtkInstantiator::RegisterInstantiator("vtkFieldData", vtkInstantiatorvtkFieldDataNew);
  vtkInstantiator::RegisterInstantiator("vtkGenericAttributeCollection", vtkInstantiatorvtkGenericAttributeCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkGenericCell", vtkInstantiatorvtkGenericCellNew);
  vtkInstantiator::RegisterInstantiator("vtkGenericEdgeTable", vtkInstantiatorvtkGenericEdgeTableNew);
  vtkInstantiator::RegisterInstantiator("vtkGenericInterpolatedVelocityField", vtkInstantiatorvtkGenericInterpolatedVelocityFieldNew);
  vtkInstantiator::RegisterInstantiator("vtkGeometricErrorMetric", vtkInstantiatorvtkGeometricErrorMetricNew);
  vtkInstantiator::RegisterInstantiator("vtkGraphEdge", vtkInstantiatorvtkGraphEdgeNew);
  vtkInstantiator::RegisterInstantiator("vtkGraphInternals", vtkInstantiatorvtkGraphInternalsNew);
  vtkInstantiator::RegisterInstantiator("vtkHexagonalPrism", vtkInstantiatorvtkHexagonalPrismNew);
  vtkInstantiator::RegisterInstantiator("vtkHexahedron", vtkInstantiatorvtkHexahedronNew);
  vtkInstantiator::RegisterInstantiator("vtkHierarchicalBoxDataIterator", vtkInstantiatorvtkHierarchicalBoxDataIteratorNew);
  vtkInstantiator::RegisterInstantiator("vtkHierarchicalBoxDataSet", vtkInstantiatorvtkHierarchicalBoxDataSetNew);
  vtkInstantiator::RegisterInstantiator("vtkHyperOctree", vtkInstantiatorvtkHyperOctreeNew);
  vtkInstantiator::RegisterInstantiator("vtkHyperTreeGrid", vtkInstantiatorvtkHyperTreeGridNew);
  vtkInstantiator::RegisterInstantiator("vtkImageData", vtkInstantiatorvtkImageDataNew);
  vtkInstantiator::RegisterInstantiator("vtkImplicitBoolean", vtkInstantiatorvtkImplicitBooleanNew);
  vtkInstantiator::RegisterInstantiator("vtkImplicitDataSet", vtkInstantiatorvtkImplicitDataSetNew);
  vtkInstantiator::RegisterInstantiator("vtkImplicitFunctionCollection", vtkInstantiatorvtkImplicitFunctionCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkImplicitHalo", vtkInstantiatorvtkImplicitHaloNew);
  vtkInstantiator::RegisterInstantiator("vtkImplicitSelectionLoop", vtkInstantiatorvtkImplicitSelectionLoopNew);
  vtkInstantiator::RegisterInstantiator("vtkImplicitSum", vtkInstantiatorvtkImplicitSumNew);
  vtkInstantiator::RegisterInstantiator("vtkImplicitVolume", vtkInstantiatorvtkImplicitVolumeNew);
  vtkInstantiator::RegisterInstantiator("vtkImplicitWindowFunction", vtkInstantiatorvtkImplicitWindowFunctionNew);
  vtkInstantiator::RegisterInstantiator("vtkIncrementalOctreeNode", vtkInstantiatorvtkIncrementalOctreeNodeNew);
  vtkInstantiator::RegisterInstantiator("vtkIncrementalOctreePointLocator", vtkInstantiatorvtkIncrementalOctreePointLocatorNew);
  vtkInstantiator::RegisterInstantiator("vtkInEdgeIterator", vtkInstantiatorvtkInEdgeIteratorNew);
  vtkInstantiator::RegisterInstantiator("vtkIterativeClosestPointTransform", vtkInstantiatorvtkIterativeClosestPointTransformNew);
  vtkInstantiator::RegisterInstantiator("vtkKdNode", vtkInstantiatorvtkKdNodeNew);
  vtkInstantiator::RegisterInstantiator("vtkKdTree", vtkInstantiatorvtkKdTreeNew);
  vtkInstantiator::RegisterInstantiator("vtkKdTreePointLocator", vtkInstantiatorvtkKdTreePointLocatorNew);
  vtkInstantiator::RegisterInstantiator("vtkLine", vtkInstantiatorvtkLineNew);
  vtkInstantiator::RegisterInstantiator("vtkMeanValueCoordinatesInterpolator", vtkInstantiatorvtkMeanValueCoordinatesInterpolatorNew);
  vtkInstantiator::RegisterInstantiator("vtkMergePoints", vtkInstantiatorvtkMergePointsNew);
  vtkInstantiator::RegisterInstantiator("vtkMultiBlockDataSet", vtkInstantiatorvtkMultiBlockDataSetNew);
  vtkInstantiator::RegisterInstantiator("vtkMultiPieceDataSet", vtkInstantiatorvtkMultiPieceDataSetNew);
  vtkInstantiator::RegisterInstantiator("vtkMutableDirectedGraph", vtkInstantiatorvtkMutableDirectedGraphNew);
  vtkInstantiator::RegisterInstantiator("vtkMutableUndirectedGraph", vtkInstantiatorvtkMutableUndirectedGraphNew);
  vtkInstantiator::RegisterInstantiator("vtkNonMergingPointLocator", vtkInstantiatorvtkNonMergingPointLocatorNew);
  vtkInstantiator::RegisterInstantiator("vtkOctreePointLocator", vtkInstantiatorvtkOctreePointLocatorNew);
  vtkInstantiator::RegisterInstantiator("vtkOctreePointLocatorNode", vtkInstantiatorvtkOctreePointLocatorNodeNew);
  vtkInstantiator::RegisterInstantiator("vtkOrderedTriangulator", vtkInstantiatorvtkOrderedTriangulatorNew);
  vtkInstantiator::RegisterInstantiator("vtkOutEdgeIterator", vtkInstantiatorvtkOutEdgeIteratorNew);
  vtkInstantiator::RegisterInstantiator("vtkPath", vtkInstantiatorvtkPathNew);
  vtkInstantiator::RegisterInstantiator("vtkPentagonalPrism", vtkInstantiatorvtkPentagonalPrismNew);
  vtkInstantiator::RegisterInstantiator("vtkPerlinNoise", vtkInstantiatorvtkPerlinNoiseNew);
  vtkInstantiator::RegisterInstantiator("vtkPiecewiseFunction", vtkInstantiatorvtkPiecewiseFunctionNew);
  vtkInstantiator::RegisterInstantiator("vtkPixel", vtkInstantiatorvtkPixelNew);
  vtkInstantiator::RegisterInstantiator("vtkPlaneCollection", vtkInstantiatorvtkPlaneCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkPlane", vtkInstantiatorvtkPlaneNew);
  vtkInstantiator::RegisterInstantiator("vtkPlanes", vtkInstantiatorvtkPlanesNew);
  vtkInstantiator::RegisterInstantiator("vtkPlanesIntersection", vtkInstantiatorvtkPlanesIntersectionNew);
  vtkInstantiator::RegisterInstantiator("vtkPointData", vtkInstantiatorvtkPointDataNew);
  vtkInstantiator::RegisterInstantiator("vtkPointLocator", vtkInstantiatorvtkPointLocatorNew);
  vtkInstantiator::RegisterInstantiator("vtkPointSetCellIterator", vtkInstantiatorvtkPointSetCellIteratorNew);
  vtkInstantiator::RegisterInstantiator("vtkPointsProjectedHull", vtkInstantiatorvtkPointsProjectedHullNew);
  vtkInstantiator::RegisterInstantiator("vtkPolyDataCollection", vtkInstantiatorvtkPolyDataCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkPolyData", vtkInstantiatorvtkPolyDataNew);
  vtkInstantiator::RegisterInstantiator("vtkPolygon", vtkInstantiatorvtkPolygonNew);
  vtkInstantiator::RegisterInstantiator("vtkPolyhedron", vtkInstantiatorvtkPolyhedronNew);
  vtkInstantiator::RegisterInstantiator("vtkPolyLine", vtkInstantiatorvtkPolyLineNew);
  vtkInstantiator::RegisterInstantiator("vtkPolyPlane", vtkInstantiatorvtkPolyPlaneNew);
  vtkInstantiator::RegisterInstantiator("vtkPolyVertex", vtkInstantiatorvtkPolyVertexNew);
  vtkInstantiator::RegisterInstantiator("vtkPyramid", vtkInstantiatorvtkPyramidNew);
  vtkInstantiator::RegisterInstantiator("vtkQuad", vtkInstantiatorvtkQuadNew);
  vtkInstantiator::RegisterInstantiator("vtkQuadraticEdge", vtkInstantiatorvtkQuadraticEdgeNew);
  vtkInstantiator::RegisterInstantiator("vtkQuadraticHexahedron", vtkInstantiatorvtkQuadraticHexahedronNew);
  vtkInstantiator::RegisterInstantiator("vtkQuadraticLinearQuad", vtkInstantiatorvtkQuadraticLinearQuadNew);
  vtkInstantiator::RegisterInstantiator("vtkQuadraticLinearWedge", vtkInstantiatorvtkQuadraticLinearWedgeNew);
  vtkInstantiator::RegisterInstantiator("vtkQuadraticPolygon", vtkInstantiatorvtkQuadraticPolygonNew);
  vtkInstantiator::RegisterInstantiator("vtkQuadraticPyramid", vtkInstantiatorvtkQuadraticPyramidNew);
  vtkInstantiator::RegisterInstantiator("vtkQuadraticQuad", vtkInstantiatorvtkQuadraticQuadNew);
  vtkInstantiator::RegisterInstantiator("vtkQuadraticTetra", vtkInstantiatorvtkQuadraticTetraNew);
  vtkInstantiator::RegisterInstantiator("vtkQuadraticTriangle", vtkInstantiatorvtkQuadraticTriangleNew);
  vtkInstantiator::RegisterInstantiator("vtkQuadraticWedge", vtkInstantiatorvtkQuadraticWedgeNew);
  vtkInstantiator::RegisterInstantiator("vtkQuadratureSchemeDefinition", vtkInstantiatorvtkQuadratureSchemeDefinitionNew);
  vtkInstantiator::RegisterInstantiator("vtkQuadric", vtkInstantiatorvtkQuadricNew);
  vtkInstantiator::RegisterInstantiator("vtkRectilinearGrid", vtkInstantiatorvtkRectilinearGridNew);
  vtkInstantiator::RegisterInstantiator("vtkReebGraph", vtkInstantiatorvtkReebGraphNew);
  vtkInstantiator::RegisterInstantiator("vtkReebGraphSimplificationMetric", vtkInstantiatorvtkReebGraphSimplificationMetricNew);
  vtkInstantiator::RegisterInstantiator("vtkSelection", vtkInstantiatorvtkSelectionNew);
  vtkInstantiator::RegisterInstantiator("vtkSelectionNode", vtkInstantiatorvtkSelectionNodeNew);
  vtkInstantiator::RegisterInstantiator("vtkSimpleCellTessellator", vtkInstantiatorvtkSimpleCellTessellatorNew);
  vtkInstantiator::RegisterInstantiator("vtkSmoothErrorMetric", vtkInstantiatorvtkSmoothErrorMetricNew);
  vtkInstantiator::RegisterInstantiator("vtkSphere", vtkInstantiatorvtkSphereNew);
  vtkInstantiator::RegisterInstantiator("vtkStructuredExtent", vtkInstantiatorvtkStructuredExtentNew);
  vtkInstantiator::RegisterInstantiator("vtkStructuredGrid", vtkInstantiatorvtkStructuredGridNew);
  vtkInstantiator::RegisterInstantiator("vtkStructuredPointsCollection", vtkInstantiatorvtkStructuredPointsCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkStructuredPoints", vtkInstantiatorvtkStructuredPointsNew);
  vtkInstantiator::RegisterInstantiator("vtkStructuredVisibilityConstraint", vtkInstantiatorvtkStructuredVisibilityConstraintNew);
  vtkInstantiator::RegisterInstantiator("vtkSuperquadric", vtkInstantiatorvtkSuperquadricNew);
  vtkInstantiator::RegisterInstantiator("vtkTable", vtkInstantiatorvtkTableNew);
  vtkInstantiator::RegisterInstantiator("vtkTensor", vtkInstantiatorvtkTensorNew);
  vtkInstantiator::RegisterInstantiator("vtkTetra", vtkInstantiatorvtkTetraNew);
  vtkInstantiator::RegisterInstantiator("vtkTreeBFSIterator", vtkInstantiatorvtkTreeBFSIteratorNew);
  vtkInstantiator::RegisterInstantiator("vtkTree", vtkInstantiatorvtkTreeNew);
  vtkInstantiator::RegisterInstantiator("vtkTreeDFSIterator", vtkInstantiatorvtkTreeDFSIteratorNew);
  vtkInstantiator::RegisterInstantiator("vtkTriangle", vtkInstantiatorvtkTriangleNew);
  vtkInstantiator::RegisterInstantiator("vtkTriangleStrip", vtkInstantiatorvtkTriangleStripNew);
  vtkInstantiator::RegisterInstantiator("vtkTriQuadraticHexahedron", vtkInstantiatorvtkTriQuadraticHexahedronNew);
  vtkInstantiator::RegisterInstantiator("vtkUndirectedGraph", vtkInstantiatorvtkUndirectedGraphNew);
  vtkInstantiator::RegisterInstantiator("vtkUniformGrid", vtkInstantiatorvtkUniformGridNew);
  vtkInstantiator::RegisterInstantiator("vtkUnstructuredGrid", vtkInstantiatorvtkUnstructuredGridNew);
  vtkInstantiator::RegisterInstantiator("vtkUnstructuredGridCellIterator", vtkInstantiatorvtkUnstructuredGridCellIteratorNew);
  vtkInstantiator::RegisterInstantiator("vtkVertex", vtkInstantiatorvtkVertexNew);
  vtkInstantiator::RegisterInstantiator("vtkVertexListIterator", vtkInstantiatorvtkVertexListIteratorNew);
  vtkInstantiator::RegisterInstantiator("vtkVoxel", vtkInstantiatorvtkVoxelNew);
  vtkInstantiator::RegisterInstantiator("vtkWedge", vtkInstantiatorvtkWedgeNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLDataElement", vtkInstantiatorvtkXMLDataElementNew);
  vtkInstantiator::RegisterInstantiator("vtkMolecule", vtkInstantiatorvtkMoleculeNew);
  vtkInstantiator::RegisterInstantiator("vtkNonOverlappingAMR", vtkInstantiatorvtkNonOverlappingAMRNew);
  vtkInstantiator::RegisterInstantiator("vtkOverlappingAMR", vtkInstantiatorvtkOverlappingAMRNew);
  vtkInstantiator::RegisterInstantiator("vtkAMRInformation", vtkInstantiatorvtkAMRInformationNew);
  vtkInstantiator::RegisterInstantiator("vtkUniformGridAMR", vtkInstantiatorvtkUniformGridAMRNew);
  vtkInstantiator::RegisterInstantiator("vtkUniformGridAMRDataIterator", vtkInstantiatorvtkUniformGridAMRDataIteratorNew);


}

void vtkCommonDataModelInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkAdjacentVertexIterator", vtkInstantiatorvtkAdjacentVertexIteratorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAMRUtilities", vtkInstantiatorvtkAMRUtilitiesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAnimationScene", vtkInstantiatorvtkAnimationSceneNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAnnotation", vtkInstantiatorvtkAnnotationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAnnotationLayers", vtkInstantiatorvtkAnnotationLayersNew);
  vtkInstantiator::UnRegisterInstantiator("vtkArrayData", vtkInstantiatorvtkArrayDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAttributesErrorMetric", vtkInstantiatorvtkAttributesErrorMetricNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBiQuadraticQuad", vtkInstantiatorvtkBiQuadraticQuadNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBiQuadraticQuadraticHexahedron", vtkInstantiatorvtkBiQuadraticQuadraticHexahedronNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBiQuadraticQuadraticWedge", vtkInstantiatorvtkBiQuadraticQuadraticWedgeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBiQuadraticTriangle", vtkInstantiatorvtkBiQuadraticTriangleNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBox", vtkInstantiatorvtkBoxNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBSPCuts", vtkInstantiatorvtkBSPCutsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBSPIntersections", vtkInstantiatorvtkBSPIntersectionsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCellArray", vtkInstantiatorvtkCellArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCellData", vtkInstantiatorvtkCellDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCellLinks", vtkInstantiatorvtkCellLinksNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCellLocator", vtkInstantiatorvtkCellLocatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCellTypes", vtkInstantiatorvtkCellTypesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCone", vtkInstantiatorvtkConeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkConvexPointSet", vtkInstantiatorvtkConvexPointSetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCubicLine", vtkInstantiatorvtkCubicLineNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCylinder", vtkInstantiatorvtkCylinderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataSetCellIterator", vtkInstantiatorvtkDataSetCellIteratorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataObjectCollection", vtkInstantiatorvtkDataObjectCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataObject", vtkInstantiatorvtkDataObjectNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataObjectTypes", vtkInstantiatorvtkDataObjectTypesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataObjectTreeIterator", vtkInstantiatorvtkDataObjectTreeIteratorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataSetAttributes", vtkInstantiatorvtkDataSetAttributesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataSetCollection", vtkInstantiatorvtkDataSetCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDirectedAcyclicGraph", vtkInstantiatorvtkDirectedAcyclicGraphNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDirectedGraph", vtkInstantiatorvtkDirectedGraphNew);
  vtkInstantiator::UnRegisterInstantiator("vtkEdgeListIterator", vtkInstantiatorvtkEdgeListIteratorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkEdgeTable", vtkInstantiatorvtkEdgeTableNew);
  vtkInstantiator::UnRegisterInstantiator("vtkEmptyCell", vtkInstantiatorvtkEmptyCellNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractStructuredGridHelper", vtkInstantiatorvtkExtractStructuredGridHelperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFieldData", vtkInstantiatorvtkFieldDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGenericAttributeCollection", vtkInstantiatorvtkGenericAttributeCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGenericCell", vtkInstantiatorvtkGenericCellNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGenericEdgeTable", vtkInstantiatorvtkGenericEdgeTableNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGenericInterpolatedVelocityField", vtkInstantiatorvtkGenericInterpolatedVelocityFieldNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeometricErrorMetric", vtkInstantiatorvtkGeometricErrorMetricNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGraphEdge", vtkInstantiatorvtkGraphEdgeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGraphInternals", vtkInstantiatorvtkGraphInternalsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHexagonalPrism", vtkInstantiatorvtkHexagonalPrismNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHexahedron", vtkInstantiatorvtkHexahedronNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHierarchicalBoxDataIterator", vtkInstantiatorvtkHierarchicalBoxDataIteratorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHierarchicalBoxDataSet", vtkInstantiatorvtkHierarchicalBoxDataSetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHyperOctree", vtkInstantiatorvtkHyperOctreeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHyperTreeGrid", vtkInstantiatorvtkHyperTreeGridNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageData", vtkInstantiatorvtkImageDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImplicitBoolean", vtkInstantiatorvtkImplicitBooleanNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImplicitDataSet", vtkInstantiatorvtkImplicitDataSetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImplicitFunctionCollection", vtkInstantiatorvtkImplicitFunctionCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImplicitHalo", vtkInstantiatorvtkImplicitHaloNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImplicitSelectionLoop", vtkInstantiatorvtkImplicitSelectionLoopNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImplicitSum", vtkInstantiatorvtkImplicitSumNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImplicitVolume", vtkInstantiatorvtkImplicitVolumeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImplicitWindowFunction", vtkInstantiatorvtkImplicitWindowFunctionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkIncrementalOctreeNode", vtkInstantiatorvtkIncrementalOctreeNodeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkIncrementalOctreePointLocator", vtkInstantiatorvtkIncrementalOctreePointLocatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInEdgeIterator", vtkInstantiatorvtkInEdgeIteratorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkIterativeClosestPointTransform", vtkInstantiatorvtkIterativeClosestPointTransformNew);
  vtkInstantiator::UnRegisterInstantiator("vtkKdNode", vtkInstantiatorvtkKdNodeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkKdTree", vtkInstantiatorvtkKdTreeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkKdTreePointLocator", vtkInstantiatorvtkKdTreePointLocatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLine", vtkInstantiatorvtkLineNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMeanValueCoordinatesInterpolator", vtkInstantiatorvtkMeanValueCoordinatesInterpolatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMergePoints", vtkInstantiatorvtkMergePointsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMultiBlockDataSet", vtkInstantiatorvtkMultiBlockDataSetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMultiPieceDataSet", vtkInstantiatorvtkMultiPieceDataSetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMutableDirectedGraph", vtkInstantiatorvtkMutableDirectedGraphNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMutableUndirectedGraph", vtkInstantiatorvtkMutableUndirectedGraphNew);
  vtkInstantiator::UnRegisterInstantiator("vtkNonMergingPointLocator", vtkInstantiatorvtkNonMergingPointLocatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOctreePointLocator", vtkInstantiatorvtkOctreePointLocatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOctreePointLocatorNode", vtkInstantiatorvtkOctreePointLocatorNodeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOrderedTriangulator", vtkInstantiatorvtkOrderedTriangulatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOutEdgeIterator", vtkInstantiatorvtkOutEdgeIteratorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPath", vtkInstantiatorvtkPathNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPentagonalPrism", vtkInstantiatorvtkPentagonalPrismNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPerlinNoise", vtkInstantiatorvtkPerlinNoiseNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPiecewiseFunction", vtkInstantiatorvtkPiecewiseFunctionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPixel", vtkInstantiatorvtkPixelNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPlaneCollection", vtkInstantiatorvtkPlaneCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPlane", vtkInstantiatorvtkPlaneNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPlanes", vtkInstantiatorvtkPlanesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPlanesIntersection", vtkInstantiatorvtkPlanesIntersectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPointData", vtkInstantiatorvtkPointDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPointLocator", vtkInstantiatorvtkPointLocatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPointSetCellIterator", vtkInstantiatorvtkPointSetCellIteratorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPointsProjectedHull", vtkInstantiatorvtkPointsProjectedHullNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPolyDataCollection", vtkInstantiatorvtkPolyDataCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPolyData", vtkInstantiatorvtkPolyDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPolygon", vtkInstantiatorvtkPolygonNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPolyhedron", vtkInstantiatorvtkPolyhedronNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPolyLine", vtkInstantiatorvtkPolyLineNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPolyPlane", vtkInstantiatorvtkPolyPlaneNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPolyVertex", vtkInstantiatorvtkPolyVertexNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPyramid", vtkInstantiatorvtkPyramidNew);
  vtkInstantiator::UnRegisterInstantiator("vtkQuad", vtkInstantiatorvtkQuadNew);
  vtkInstantiator::UnRegisterInstantiator("vtkQuadraticEdge", vtkInstantiatorvtkQuadraticEdgeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkQuadraticHexahedron", vtkInstantiatorvtkQuadraticHexahedronNew);
  vtkInstantiator::UnRegisterInstantiator("vtkQuadraticLinearQuad", vtkInstantiatorvtkQuadraticLinearQuadNew);
  vtkInstantiator::UnRegisterInstantiator("vtkQuadraticLinearWedge", vtkInstantiatorvtkQuadraticLinearWedgeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkQuadraticPolygon", vtkInstantiatorvtkQuadraticPolygonNew);
  vtkInstantiator::UnRegisterInstantiator("vtkQuadraticPyramid", vtkInstantiatorvtkQuadraticPyramidNew);
  vtkInstantiator::UnRegisterInstantiator("vtkQuadraticQuad", vtkInstantiatorvtkQuadraticQuadNew);
  vtkInstantiator::UnRegisterInstantiator("vtkQuadraticTetra", vtkInstantiatorvtkQuadraticTetraNew);
  vtkInstantiator::UnRegisterInstantiator("vtkQuadraticTriangle", vtkInstantiatorvtkQuadraticTriangleNew);
  vtkInstantiator::UnRegisterInstantiator("vtkQuadraticWedge", vtkInstantiatorvtkQuadraticWedgeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkQuadratureSchemeDefinition", vtkInstantiatorvtkQuadratureSchemeDefinitionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkQuadric", vtkInstantiatorvtkQuadricNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRectilinearGrid", vtkInstantiatorvtkRectilinearGridNew);
  vtkInstantiator::UnRegisterInstantiator("vtkReebGraph", vtkInstantiatorvtkReebGraphNew);
  vtkInstantiator::UnRegisterInstantiator("vtkReebGraphSimplificationMetric", vtkInstantiatorvtkReebGraphSimplificationMetricNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSelection", vtkInstantiatorvtkSelectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSelectionNode", vtkInstantiatorvtkSelectionNodeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSimpleCellTessellator", vtkInstantiatorvtkSimpleCellTessellatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSmoothErrorMetric", vtkInstantiatorvtkSmoothErrorMetricNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSphere", vtkInstantiatorvtkSphereNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStructuredExtent", vtkInstantiatorvtkStructuredExtentNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStructuredGrid", vtkInstantiatorvtkStructuredGridNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStructuredPointsCollection", vtkInstantiatorvtkStructuredPointsCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStructuredPoints", vtkInstantiatorvtkStructuredPointsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStructuredVisibilityConstraint", vtkInstantiatorvtkStructuredVisibilityConstraintNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSuperquadric", vtkInstantiatorvtkSuperquadricNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTable", vtkInstantiatorvtkTableNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTensor", vtkInstantiatorvtkTensorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTetra", vtkInstantiatorvtkTetraNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTreeBFSIterator", vtkInstantiatorvtkTreeBFSIteratorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTree", vtkInstantiatorvtkTreeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTreeDFSIterator", vtkInstantiatorvtkTreeDFSIteratorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTriangle", vtkInstantiatorvtkTriangleNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTriangleStrip", vtkInstantiatorvtkTriangleStripNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTriQuadraticHexahedron", vtkInstantiatorvtkTriQuadraticHexahedronNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUndirectedGraph", vtkInstantiatorvtkUndirectedGraphNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUniformGrid", vtkInstantiatorvtkUniformGridNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUnstructuredGrid", vtkInstantiatorvtkUnstructuredGridNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUnstructuredGridCellIterator", vtkInstantiatorvtkUnstructuredGridCellIteratorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVertex", vtkInstantiatorvtkVertexNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVertexListIterator", vtkInstantiatorvtkVertexListIteratorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVoxel", vtkInstantiatorvtkVoxelNew);
  vtkInstantiator::UnRegisterInstantiator("vtkWedge", vtkInstantiatorvtkWedgeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLDataElement", vtkInstantiatorvtkXMLDataElementNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMolecule", vtkInstantiatorvtkMoleculeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkNonOverlappingAMR", vtkInstantiatorvtkNonOverlappingAMRNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOverlappingAMR", vtkInstantiatorvtkOverlappingAMRNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAMRInformation", vtkInstantiatorvtkAMRInformationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUniformGridAMR", vtkInstantiatorvtkUniformGridAMRNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUniformGridAMRDataIterator", vtkInstantiatorvtkUniformGridAMRDataIteratorNew);


}

vtkCommonDataModelInstantiator::vtkCommonDataModelInstantiator()
{
  if(++vtkCommonDataModelInstantiator::Count == 1)
    {
    vtkCommonDataModelInstantiator::ClassInitialize();
    }
}

vtkCommonDataModelInstantiator::~vtkCommonDataModelInstantiator()
{
  if(--vtkCommonDataModelInstantiator::Count == 0)
    {
    vtkCommonDataModelInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkCommonDataModelInstantiator::Count;
