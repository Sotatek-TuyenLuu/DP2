#include "vtkFiltersGeneralInstantiator.h"
#include "vtkAnnotationLink.h"
#include "vtkAppendPoints.h"
#include "vtkAreaContourSpectrumFilter.h"
#include "vtkAxes.h"
#include "vtkBlankStructuredGrid.h"
#include "vtkBlankStructuredGridWithImage.h"
#include "vtkBlockIdScalars.h"
#include "vtkBoxClipDataSet.h"
#include "vtkBrownianPoints.h"
#include "vtkCellCenters.h"
#include "vtkCellDerivatives.h"
#include "vtkClipClosedSurface.h"
#include "vtkClipConvexPolyData.h"
#include "vtkClipDataSet.h"
#include "vtkClipVolume.h"
#include "vtkCoincidentPoints.h"
#include "vtkContourTriangulator.h"
#include "vtkCursor2D.h"
#include "vtkCursor3D.h"
#include "vtkCurvatures.h"
#include "vtkDataSetGradient.h"
#include "vtkDataSetGradientPrecompute.h"
#include "vtkDataSetTriangleFilter.h"
#include "vtkDeformPointSet.h"
#include "vtkDensifyPolyData.h"
#include "vtkDiscreteMarchingCubes.h"
#include "vtkEdgePoints.h"
#include "vtkGradientFilter.h"
#include "vtkGraphLayoutFilter.h"
#include "vtkGraphToPoints.h"
#include "vtkHierarchicalDataLevelFilter.h"
#include "vtkHyperStreamline.h"
#include "vtkIconGlyphFilter.h"
#include "vtkImageMarchingCubes.h"
#include "vtkInterpolateDataSetAttributes.h"
#include "vtkLevelIdScalars.h"
#include "vtkLinkEdgels.h"
#include "vtkMergeCells.h"
#include "vtkMultiBlockDataGroupFilter.h"
#include "vtkMultiBlockMergeFilter.h"
#include "vtkMultiThreshold.h"
#include "vtkOBBDicer.h"
#include "vtkOBBTree.h"
#include "vtkPassThrough.h"
#include "vtkPolyDataStreamer.h"
#include "vtkPolyDataToReebGraphFilter.h"
#include "vtkProbePolyhedron.h"
#include "vtkQuadraturePointInterpolator.h"
#include "vtkQuadraturePointsGenerator.h"
#include "vtkQuadratureSchemeDictionaryGenerator.h"
#include "vtkQuantizePolyDataPoints.h"
#include "vtkRandomAttributeGenerator.h"
#include "vtkRectilinearGridClip.h"
#include "vtkRectilinearGridToTetrahedra.h"
#include "vtkRecursiveDividingCubes.h"
#include "vtkReflectionFilter.h"
#include "vtkRotationFilter.h"
#include "vtkShrinkFilter.h"
#include "vtkShrinkPolyData.h"
#include "vtkSpatialRepresentationFilter.h"
#include "vtkSplineFilter.h"
#include "vtkSplitField.h"
#include "vtkStructuredGridClip.h"
#include "vtkSubPixelPositionEdgels.h"
#include "vtkTableBasedClipDataSet.h"
#include "vtkTableToPolyData.h"
#include "vtkTableToStructuredGrid.h"
#include "vtkTemporalPathLineFilter.h"
#include "vtkTemporalStatistics.h"
#include "vtkTessellatorFilter.h"
#include "vtkTimeSourceExample.h"
#include "vtkTransformFilter.h"
#include "vtkTransformPolyDataFilter.h"
#include "vtkUncertaintyTubeFilter.h"
#include "vtkVertexGlyphFilter.h"
#include "vtkVolumeContourSpectrumFilter.h"
#include "vtkVoxelContoursToSurfaceFilter.h"
#include "vtkWarpLens.h"
#include "vtkWarpScalar.h"
#include "vtkWarpTo.h"
#include "vtkWarpVector.h"
#include "vtkYoungsMaterialInterface.h"
#include "vtkMarchingContourFilter.h"
#include "vtkRectilinearGridToPointSet.h"
#include "vtkGraphWeightEuclideanDistanceFilter.h"
#include "vtkImageDataToPointSet.h"
#include "vtkIntersectionPolyDataFilter.h"
#include "vtkBooleanOperationPolyDataFilter.h"
#include "vtkDistancePolyDataFilter.h"
#include "vtkOverlappingAMRLevelIdScalars.h"
#include "vtkExtractArray.h"
#include "vtkMatricizeArray.h"
#include "vtkNormalizeMatrixVectors.h"
#include "vtkPassArrays.h"
#include "vtkSplitColumnComponents.h"
#include "vtkCellTreeLocator.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkAnnotationLink)
vtkInstantiatorNewMacro(vtkAppendPoints)
vtkInstantiatorNewMacro(vtkAreaContourSpectrumFilter)
vtkInstantiatorNewMacro(vtkAxes)
vtkInstantiatorNewMacro(vtkBlankStructuredGrid)
vtkInstantiatorNewMacro(vtkBlankStructuredGridWithImage)
vtkInstantiatorNewMacro(vtkBlockIdScalars)
vtkInstantiatorNewMacro(vtkBoxClipDataSet)
vtkInstantiatorNewMacro(vtkBrownianPoints)
vtkInstantiatorNewMacro(vtkCellCenters)
vtkInstantiatorNewMacro(vtkCellDerivatives)
vtkInstantiatorNewMacro(vtkClipClosedSurface)
vtkInstantiatorNewMacro(vtkClipConvexPolyData)
vtkInstantiatorNewMacro(vtkClipDataSet)
vtkInstantiatorNewMacro(vtkClipVolume)
vtkInstantiatorNewMacro(vtkCoincidentPoints)
vtkInstantiatorNewMacro(vtkContourTriangulator)
vtkInstantiatorNewMacro(vtkCursor2D)
vtkInstantiatorNewMacro(vtkCursor3D)
vtkInstantiatorNewMacro(vtkCurvatures)
vtkInstantiatorNewMacro(vtkDataSetGradient)
vtkInstantiatorNewMacro(vtkDataSetGradientPrecompute)
vtkInstantiatorNewMacro(vtkDataSetTriangleFilter)
vtkInstantiatorNewMacro(vtkDeformPointSet)
vtkInstantiatorNewMacro(vtkDensifyPolyData)
vtkInstantiatorNewMacro(vtkDiscreteMarchingCubes)
vtkInstantiatorNewMacro(vtkEdgePoints)
vtkInstantiatorNewMacro(vtkGradientFilter)
vtkInstantiatorNewMacro(vtkGraphLayoutFilter)
vtkInstantiatorNewMacro(vtkGraphToPoints)
vtkInstantiatorNewMacro(vtkHierarchicalDataLevelFilter)
vtkInstantiatorNewMacro(vtkHyperStreamline)
vtkInstantiatorNewMacro(vtkIconGlyphFilter)
vtkInstantiatorNewMacro(vtkImageMarchingCubes)
vtkInstantiatorNewMacro(vtkInterpolateDataSetAttributes)
vtkInstantiatorNewMacro(vtkLevelIdScalars)
vtkInstantiatorNewMacro(vtkLinkEdgels)
vtkInstantiatorNewMacro(vtkMergeCells)
vtkInstantiatorNewMacro(vtkMultiBlockDataGroupFilter)
vtkInstantiatorNewMacro(vtkMultiBlockMergeFilter)
vtkInstantiatorNewMacro(vtkMultiThreshold)
vtkInstantiatorNewMacro(vtkOBBDicer)
vtkInstantiatorNewMacro(vtkOBBTree)
vtkInstantiatorNewMacro(vtkPassThrough)
vtkInstantiatorNewMacro(vtkPolyDataStreamer)
vtkInstantiatorNewMacro(vtkPolyDataToReebGraphFilter)
vtkInstantiatorNewMacro(vtkProbePolyhedron)
vtkInstantiatorNewMacro(vtkQuadraturePointInterpolator)
vtkInstantiatorNewMacro(vtkQuadraturePointsGenerator)
vtkInstantiatorNewMacro(vtkQuadratureSchemeDictionaryGenerator)
vtkInstantiatorNewMacro(vtkQuantizePolyDataPoints)
vtkInstantiatorNewMacro(vtkRandomAttributeGenerator)
vtkInstantiatorNewMacro(vtkRectilinearGridClip)
vtkInstantiatorNewMacro(vtkRectilinearGridToTetrahedra)
vtkInstantiatorNewMacro(vtkRecursiveDividingCubes)
vtkInstantiatorNewMacro(vtkReflectionFilter)
vtkInstantiatorNewMacro(vtkRotationFilter)
vtkInstantiatorNewMacro(vtkShrinkFilter)
vtkInstantiatorNewMacro(vtkShrinkPolyData)
vtkInstantiatorNewMacro(vtkSpatialRepresentationFilter)
vtkInstantiatorNewMacro(vtkSplineFilter)
vtkInstantiatorNewMacro(vtkSplitField)
vtkInstantiatorNewMacro(vtkStructuredGridClip)
vtkInstantiatorNewMacro(vtkSubPixelPositionEdgels)
vtkInstantiatorNewMacro(vtkTableBasedClipDataSet)
vtkInstantiatorNewMacro(vtkTableToPolyData)
vtkInstantiatorNewMacro(vtkTableToStructuredGrid)
vtkInstantiatorNewMacro(vtkTemporalPathLineFilter)
vtkInstantiatorNewMacro(vtkTemporalStatistics)
vtkInstantiatorNewMacro(vtkTessellatorFilter)
vtkInstantiatorNewMacro(vtkTimeSourceExample)
vtkInstantiatorNewMacro(vtkTransformFilter)
vtkInstantiatorNewMacro(vtkTransformPolyDataFilter)
vtkInstantiatorNewMacro(vtkUncertaintyTubeFilter)
vtkInstantiatorNewMacro(vtkVertexGlyphFilter)
vtkInstantiatorNewMacro(vtkVolumeContourSpectrumFilter)
vtkInstantiatorNewMacro(vtkVoxelContoursToSurfaceFilter)
vtkInstantiatorNewMacro(vtkWarpLens)
vtkInstantiatorNewMacro(vtkWarpScalar)
vtkInstantiatorNewMacro(vtkWarpTo)
vtkInstantiatorNewMacro(vtkWarpVector)
vtkInstantiatorNewMacro(vtkYoungsMaterialInterface)
vtkInstantiatorNewMacro(vtkMarchingContourFilter)
vtkInstantiatorNewMacro(vtkRectilinearGridToPointSet)
vtkInstantiatorNewMacro(vtkGraphWeightEuclideanDistanceFilter)
vtkInstantiatorNewMacro(vtkImageDataToPointSet)
vtkInstantiatorNewMacro(vtkIntersectionPolyDataFilter)
vtkInstantiatorNewMacro(vtkBooleanOperationPolyDataFilter)
vtkInstantiatorNewMacro(vtkDistancePolyDataFilter)
vtkInstantiatorNewMacro(vtkOverlappingAMRLevelIdScalars)
vtkInstantiatorNewMacro(vtkExtractArray)
vtkInstantiatorNewMacro(vtkMatricizeArray)
vtkInstantiatorNewMacro(vtkNormalizeMatrixVectors)
vtkInstantiatorNewMacro(vtkPassArrays)
vtkInstantiatorNewMacro(vtkSplitColumnComponents)
vtkInstantiatorNewMacro(vtkCellTreeLocator)



void vtkFiltersGeneralInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkAnnotationLink", vtkInstantiatorvtkAnnotationLinkNew);
  vtkInstantiator::RegisterInstantiator("vtkAppendPoints", vtkInstantiatorvtkAppendPointsNew);
  vtkInstantiator::RegisterInstantiator("vtkAreaContourSpectrumFilter", vtkInstantiatorvtkAreaContourSpectrumFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkAxes", vtkInstantiatorvtkAxesNew);
  vtkInstantiator::RegisterInstantiator("vtkBlankStructuredGrid", vtkInstantiatorvtkBlankStructuredGridNew);
  vtkInstantiator::RegisterInstantiator("vtkBlankStructuredGridWithImage", vtkInstantiatorvtkBlankStructuredGridWithImageNew);
  vtkInstantiator::RegisterInstantiator("vtkBlockIdScalars", vtkInstantiatorvtkBlockIdScalarsNew);
  vtkInstantiator::RegisterInstantiator("vtkBoxClipDataSet", vtkInstantiatorvtkBoxClipDataSetNew);
  vtkInstantiator::RegisterInstantiator("vtkBrownianPoints", vtkInstantiatorvtkBrownianPointsNew);
  vtkInstantiator::RegisterInstantiator("vtkCellCenters", vtkInstantiatorvtkCellCentersNew);
  vtkInstantiator::RegisterInstantiator("vtkCellDerivatives", vtkInstantiatorvtkCellDerivativesNew);
  vtkInstantiator::RegisterInstantiator("vtkClipClosedSurface", vtkInstantiatorvtkClipClosedSurfaceNew);
  vtkInstantiator::RegisterInstantiator("vtkClipConvexPolyData", vtkInstantiatorvtkClipConvexPolyDataNew);
  vtkInstantiator::RegisterInstantiator("vtkClipDataSet", vtkInstantiatorvtkClipDataSetNew);
  vtkInstantiator::RegisterInstantiator("vtkClipVolume", vtkInstantiatorvtkClipVolumeNew);
  vtkInstantiator::RegisterInstantiator("vtkCoincidentPoints", vtkInstantiatorvtkCoincidentPointsNew);
  vtkInstantiator::RegisterInstantiator("vtkContourTriangulator", vtkInstantiatorvtkContourTriangulatorNew);
  vtkInstantiator::RegisterInstantiator("vtkCursor2D", vtkInstantiatorvtkCursor2DNew);
  vtkInstantiator::RegisterInstantiator("vtkCursor3D", vtkInstantiatorvtkCursor3DNew);
  vtkInstantiator::RegisterInstantiator("vtkCurvatures", vtkInstantiatorvtkCurvaturesNew);
  vtkInstantiator::RegisterInstantiator("vtkDataSetGradient", vtkInstantiatorvtkDataSetGradientNew);
  vtkInstantiator::RegisterInstantiator("vtkDataSetGradientPrecompute", vtkInstantiatorvtkDataSetGradientPrecomputeNew);
  vtkInstantiator::RegisterInstantiator("vtkDataSetTriangleFilter", vtkInstantiatorvtkDataSetTriangleFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkDeformPointSet", vtkInstantiatorvtkDeformPointSetNew);
  vtkInstantiator::RegisterInstantiator("vtkDensifyPolyData", vtkInstantiatorvtkDensifyPolyDataNew);
  vtkInstantiator::RegisterInstantiator("vtkDiscreteMarchingCubes", vtkInstantiatorvtkDiscreteMarchingCubesNew);
  vtkInstantiator::RegisterInstantiator("vtkEdgePoints", vtkInstantiatorvtkEdgePointsNew);
  vtkInstantiator::RegisterInstantiator("vtkGradientFilter", vtkInstantiatorvtkGradientFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkGraphLayoutFilter", vtkInstantiatorvtkGraphLayoutFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkGraphToPoints", vtkInstantiatorvtkGraphToPointsNew);
  vtkInstantiator::RegisterInstantiator("vtkHierarchicalDataLevelFilter", vtkInstantiatorvtkHierarchicalDataLevelFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkHyperStreamline", vtkInstantiatorvtkHyperStreamlineNew);
  vtkInstantiator::RegisterInstantiator("vtkIconGlyphFilter", vtkInstantiatorvtkIconGlyphFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkImageMarchingCubes", vtkInstantiatorvtkImageMarchingCubesNew);
  vtkInstantiator::RegisterInstantiator("vtkInterpolateDataSetAttributes", vtkInstantiatorvtkInterpolateDataSetAttributesNew);
  vtkInstantiator::RegisterInstantiator("vtkLevelIdScalars", vtkInstantiatorvtkLevelIdScalarsNew);
  vtkInstantiator::RegisterInstantiator("vtkLinkEdgels", vtkInstantiatorvtkLinkEdgelsNew);
  vtkInstantiator::RegisterInstantiator("vtkMergeCells", vtkInstantiatorvtkMergeCellsNew);
  vtkInstantiator::RegisterInstantiator("vtkMultiBlockDataGroupFilter", vtkInstantiatorvtkMultiBlockDataGroupFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkMultiBlockMergeFilter", vtkInstantiatorvtkMultiBlockMergeFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkMultiThreshold", vtkInstantiatorvtkMultiThresholdNew);
  vtkInstantiator::RegisterInstantiator("vtkOBBDicer", vtkInstantiatorvtkOBBDicerNew);
  vtkInstantiator::RegisterInstantiator("vtkOBBTree", vtkInstantiatorvtkOBBTreeNew);
  vtkInstantiator::RegisterInstantiator("vtkPassThrough", vtkInstantiatorvtkPassThroughNew);
  vtkInstantiator::RegisterInstantiator("vtkPolyDataStreamer", vtkInstantiatorvtkPolyDataStreamerNew);
  vtkInstantiator::RegisterInstantiator("vtkPolyDataToReebGraphFilter", vtkInstantiatorvtkPolyDataToReebGraphFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkProbePolyhedron", vtkInstantiatorvtkProbePolyhedronNew);
  vtkInstantiator::RegisterInstantiator("vtkQuadraturePointInterpolator", vtkInstantiatorvtkQuadraturePointInterpolatorNew);
  vtkInstantiator::RegisterInstantiator("vtkQuadraturePointsGenerator", vtkInstantiatorvtkQuadraturePointsGeneratorNew);
  vtkInstantiator::RegisterInstantiator("vtkQuadratureSchemeDictionaryGenerator", vtkInstantiatorvtkQuadratureSchemeDictionaryGeneratorNew);
  vtkInstantiator::RegisterInstantiator("vtkQuantizePolyDataPoints", vtkInstantiatorvtkQuantizePolyDataPointsNew);
  vtkInstantiator::RegisterInstantiator("vtkRandomAttributeGenerator", vtkInstantiatorvtkRandomAttributeGeneratorNew);
  vtkInstantiator::RegisterInstantiator("vtkRectilinearGridClip", vtkInstantiatorvtkRectilinearGridClipNew);
  vtkInstantiator::RegisterInstantiator("vtkRectilinearGridToTetrahedra", vtkInstantiatorvtkRectilinearGridToTetrahedraNew);
  vtkInstantiator::RegisterInstantiator("vtkRecursiveDividingCubes", vtkInstantiatorvtkRecursiveDividingCubesNew);
  vtkInstantiator::RegisterInstantiator("vtkReflectionFilter", vtkInstantiatorvtkReflectionFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkRotationFilter", vtkInstantiatorvtkRotationFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkShrinkFilter", vtkInstantiatorvtkShrinkFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkShrinkPolyData", vtkInstantiatorvtkShrinkPolyDataNew);
  vtkInstantiator::RegisterInstantiator("vtkSpatialRepresentationFilter", vtkInstantiatorvtkSpatialRepresentationFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkSplineFilter", vtkInstantiatorvtkSplineFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkSplitField", vtkInstantiatorvtkSplitFieldNew);
  vtkInstantiator::RegisterInstantiator("vtkStructuredGridClip", vtkInstantiatorvtkStructuredGridClipNew);
  vtkInstantiator::RegisterInstantiator("vtkSubPixelPositionEdgels", vtkInstantiatorvtkSubPixelPositionEdgelsNew);
  vtkInstantiator::RegisterInstantiator("vtkTableBasedClipDataSet", vtkInstantiatorvtkTableBasedClipDataSetNew);
  vtkInstantiator::RegisterInstantiator("vtkTableToPolyData", vtkInstantiatorvtkTableToPolyDataNew);
  vtkInstantiator::RegisterInstantiator("vtkTableToStructuredGrid", vtkInstantiatorvtkTableToStructuredGridNew);
  vtkInstantiator::RegisterInstantiator("vtkTemporalPathLineFilter", vtkInstantiatorvtkTemporalPathLineFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkTemporalStatistics", vtkInstantiatorvtkTemporalStatisticsNew);
  vtkInstantiator::RegisterInstantiator("vtkTessellatorFilter", vtkInstantiatorvtkTessellatorFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkTimeSourceExample", vtkInstantiatorvtkTimeSourceExampleNew);
  vtkInstantiator::RegisterInstantiator("vtkTransformFilter", vtkInstantiatorvtkTransformFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkTransformPolyDataFilter", vtkInstantiatorvtkTransformPolyDataFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkUncertaintyTubeFilter", vtkInstantiatorvtkUncertaintyTubeFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkVertexGlyphFilter", vtkInstantiatorvtkVertexGlyphFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkVolumeContourSpectrumFilter", vtkInstantiatorvtkVolumeContourSpectrumFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkVoxelContoursToSurfaceFilter", vtkInstantiatorvtkVoxelContoursToSurfaceFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkWarpLens", vtkInstantiatorvtkWarpLensNew);
  vtkInstantiator::RegisterInstantiator("vtkWarpScalar", vtkInstantiatorvtkWarpScalarNew);
  vtkInstantiator::RegisterInstantiator("vtkWarpTo", vtkInstantiatorvtkWarpToNew);
  vtkInstantiator::RegisterInstantiator("vtkWarpVector", vtkInstantiatorvtkWarpVectorNew);
  vtkInstantiator::RegisterInstantiator("vtkYoungsMaterialInterface", vtkInstantiatorvtkYoungsMaterialInterfaceNew);
  vtkInstantiator::RegisterInstantiator("vtkMarchingContourFilter", vtkInstantiatorvtkMarchingContourFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkRectilinearGridToPointSet", vtkInstantiatorvtkRectilinearGridToPointSetNew);
  vtkInstantiator::RegisterInstantiator("vtkGraphWeightEuclideanDistanceFilter", vtkInstantiatorvtkGraphWeightEuclideanDistanceFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkImageDataToPointSet", vtkInstantiatorvtkImageDataToPointSetNew);
  vtkInstantiator::RegisterInstantiator("vtkIntersectionPolyDataFilter", vtkInstantiatorvtkIntersectionPolyDataFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkBooleanOperationPolyDataFilter", vtkInstantiatorvtkBooleanOperationPolyDataFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkDistancePolyDataFilter", vtkInstantiatorvtkDistancePolyDataFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkOverlappingAMRLevelIdScalars", vtkInstantiatorvtkOverlappingAMRLevelIdScalarsNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractArray", vtkInstantiatorvtkExtractArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkMatricizeArray", vtkInstantiatorvtkMatricizeArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkNormalizeMatrixVectors", vtkInstantiatorvtkNormalizeMatrixVectorsNew);
  vtkInstantiator::RegisterInstantiator("vtkPassArrays", vtkInstantiatorvtkPassArraysNew);
  vtkInstantiator::RegisterInstantiator("vtkSplitColumnComponents", vtkInstantiatorvtkSplitColumnComponentsNew);
  vtkInstantiator::RegisterInstantiator("vtkCellTreeLocator", vtkInstantiatorvtkCellTreeLocatorNew);


}

void vtkFiltersGeneralInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkAnnotationLink", vtkInstantiatorvtkAnnotationLinkNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAppendPoints", vtkInstantiatorvtkAppendPointsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAreaContourSpectrumFilter", vtkInstantiatorvtkAreaContourSpectrumFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAxes", vtkInstantiatorvtkAxesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBlankStructuredGrid", vtkInstantiatorvtkBlankStructuredGridNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBlankStructuredGridWithImage", vtkInstantiatorvtkBlankStructuredGridWithImageNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBlockIdScalars", vtkInstantiatorvtkBlockIdScalarsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBoxClipDataSet", vtkInstantiatorvtkBoxClipDataSetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBrownianPoints", vtkInstantiatorvtkBrownianPointsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCellCenters", vtkInstantiatorvtkCellCentersNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCellDerivatives", vtkInstantiatorvtkCellDerivativesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkClipClosedSurface", vtkInstantiatorvtkClipClosedSurfaceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkClipConvexPolyData", vtkInstantiatorvtkClipConvexPolyDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkClipDataSet", vtkInstantiatorvtkClipDataSetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkClipVolume", vtkInstantiatorvtkClipVolumeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCoincidentPoints", vtkInstantiatorvtkCoincidentPointsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkContourTriangulator", vtkInstantiatorvtkContourTriangulatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCursor2D", vtkInstantiatorvtkCursor2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCursor3D", vtkInstantiatorvtkCursor3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCurvatures", vtkInstantiatorvtkCurvaturesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataSetGradient", vtkInstantiatorvtkDataSetGradientNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataSetGradientPrecompute", vtkInstantiatorvtkDataSetGradientPrecomputeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataSetTriangleFilter", vtkInstantiatorvtkDataSetTriangleFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDeformPointSet", vtkInstantiatorvtkDeformPointSetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDensifyPolyData", vtkInstantiatorvtkDensifyPolyDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDiscreteMarchingCubes", vtkInstantiatorvtkDiscreteMarchingCubesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkEdgePoints", vtkInstantiatorvtkEdgePointsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGradientFilter", vtkInstantiatorvtkGradientFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGraphLayoutFilter", vtkInstantiatorvtkGraphLayoutFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGraphToPoints", vtkInstantiatorvtkGraphToPointsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHierarchicalDataLevelFilter", vtkInstantiatorvtkHierarchicalDataLevelFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHyperStreamline", vtkInstantiatorvtkHyperStreamlineNew);
  vtkInstantiator::UnRegisterInstantiator("vtkIconGlyphFilter", vtkInstantiatorvtkIconGlyphFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageMarchingCubes", vtkInstantiatorvtkImageMarchingCubesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInterpolateDataSetAttributes", vtkInstantiatorvtkInterpolateDataSetAttributesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLevelIdScalars", vtkInstantiatorvtkLevelIdScalarsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLinkEdgels", vtkInstantiatorvtkLinkEdgelsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMergeCells", vtkInstantiatorvtkMergeCellsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMultiBlockDataGroupFilter", vtkInstantiatorvtkMultiBlockDataGroupFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMultiBlockMergeFilter", vtkInstantiatorvtkMultiBlockMergeFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMultiThreshold", vtkInstantiatorvtkMultiThresholdNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOBBDicer", vtkInstantiatorvtkOBBDicerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOBBTree", vtkInstantiatorvtkOBBTreeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPassThrough", vtkInstantiatorvtkPassThroughNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPolyDataStreamer", vtkInstantiatorvtkPolyDataStreamerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPolyDataToReebGraphFilter", vtkInstantiatorvtkPolyDataToReebGraphFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProbePolyhedron", vtkInstantiatorvtkProbePolyhedronNew);
  vtkInstantiator::UnRegisterInstantiator("vtkQuadraturePointInterpolator", vtkInstantiatorvtkQuadraturePointInterpolatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkQuadraturePointsGenerator", vtkInstantiatorvtkQuadraturePointsGeneratorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkQuadratureSchemeDictionaryGenerator", vtkInstantiatorvtkQuadratureSchemeDictionaryGeneratorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkQuantizePolyDataPoints", vtkInstantiatorvtkQuantizePolyDataPointsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRandomAttributeGenerator", vtkInstantiatorvtkRandomAttributeGeneratorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRectilinearGridClip", vtkInstantiatorvtkRectilinearGridClipNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRectilinearGridToTetrahedra", vtkInstantiatorvtkRectilinearGridToTetrahedraNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRecursiveDividingCubes", vtkInstantiatorvtkRecursiveDividingCubesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkReflectionFilter", vtkInstantiatorvtkReflectionFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRotationFilter", vtkInstantiatorvtkRotationFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkShrinkFilter", vtkInstantiatorvtkShrinkFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkShrinkPolyData", vtkInstantiatorvtkShrinkPolyDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSpatialRepresentationFilter", vtkInstantiatorvtkSpatialRepresentationFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSplineFilter", vtkInstantiatorvtkSplineFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSplitField", vtkInstantiatorvtkSplitFieldNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStructuredGridClip", vtkInstantiatorvtkStructuredGridClipNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSubPixelPositionEdgels", vtkInstantiatorvtkSubPixelPositionEdgelsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTableBasedClipDataSet", vtkInstantiatorvtkTableBasedClipDataSetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTableToPolyData", vtkInstantiatorvtkTableToPolyDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTableToStructuredGrid", vtkInstantiatorvtkTableToStructuredGridNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTemporalPathLineFilter", vtkInstantiatorvtkTemporalPathLineFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTemporalStatistics", vtkInstantiatorvtkTemporalStatisticsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTessellatorFilter", vtkInstantiatorvtkTessellatorFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTimeSourceExample", vtkInstantiatorvtkTimeSourceExampleNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTransformFilter", vtkInstantiatorvtkTransformFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTransformPolyDataFilter", vtkInstantiatorvtkTransformPolyDataFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUncertaintyTubeFilter", vtkInstantiatorvtkUncertaintyTubeFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVertexGlyphFilter", vtkInstantiatorvtkVertexGlyphFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVolumeContourSpectrumFilter", vtkInstantiatorvtkVolumeContourSpectrumFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVoxelContoursToSurfaceFilter", vtkInstantiatorvtkVoxelContoursToSurfaceFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkWarpLens", vtkInstantiatorvtkWarpLensNew);
  vtkInstantiator::UnRegisterInstantiator("vtkWarpScalar", vtkInstantiatorvtkWarpScalarNew);
  vtkInstantiator::UnRegisterInstantiator("vtkWarpTo", vtkInstantiatorvtkWarpToNew);
  vtkInstantiator::UnRegisterInstantiator("vtkWarpVector", vtkInstantiatorvtkWarpVectorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkYoungsMaterialInterface", vtkInstantiatorvtkYoungsMaterialInterfaceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMarchingContourFilter", vtkInstantiatorvtkMarchingContourFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRectilinearGridToPointSet", vtkInstantiatorvtkRectilinearGridToPointSetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGraphWeightEuclideanDistanceFilter", vtkInstantiatorvtkGraphWeightEuclideanDistanceFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageDataToPointSet", vtkInstantiatorvtkImageDataToPointSetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkIntersectionPolyDataFilter", vtkInstantiatorvtkIntersectionPolyDataFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBooleanOperationPolyDataFilter", vtkInstantiatorvtkBooleanOperationPolyDataFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDistancePolyDataFilter", vtkInstantiatorvtkDistancePolyDataFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOverlappingAMRLevelIdScalars", vtkInstantiatorvtkOverlappingAMRLevelIdScalarsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractArray", vtkInstantiatorvtkExtractArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMatricizeArray", vtkInstantiatorvtkMatricizeArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkNormalizeMatrixVectors", vtkInstantiatorvtkNormalizeMatrixVectorsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPassArrays", vtkInstantiatorvtkPassArraysNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSplitColumnComponents", vtkInstantiatorvtkSplitColumnComponentsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCellTreeLocator", vtkInstantiatorvtkCellTreeLocatorNew);


}

vtkFiltersGeneralInstantiator::vtkFiltersGeneralInstantiator()
{
  if(++vtkFiltersGeneralInstantiator::Count == 1)
    {
    vtkFiltersGeneralInstantiator::ClassInitialize();
    }
}

vtkFiltersGeneralInstantiator::~vtkFiltersGeneralInstantiator()
{
  if(--vtkFiltersGeneralInstantiator::Count == 0)
    {
    vtkFiltersGeneralInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkFiltersGeneralInstantiator::Count;
