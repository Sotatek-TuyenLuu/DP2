#include "vtkFiltersCoreInstantiator.h"
#include "vtkAppendFilter.h"
#include "vtkAppendPolyData.h"
#include "vtkAppendSelection.h"
#include "vtkArrayCalculator.h"
#include "vtkAssignAttribute.h"
#include "vtkAttributeDataToFieldDataFilter.h"
#include "vtkCellDataToPointData.h"
#include "vtkCleanPolyData.h"
#include "vtkClipPolyData.h"
#include "vtkCompositeDataProbeFilter.h"
#include "vtkConnectivityFilter.h"
#include "vtkContourFilter.h"
#include "vtkContourGrid.h"
#include "vtkDataObjectGenerator.h"
#include "vtkDataObjectToDataSetFilter.h"
#include "vtkDataSetEdgeSubdivisionCriterion.h"
#include "vtkDataSetToDataObjectFilter.h"
#include "vtkDecimatePolylineFilter.h"
#include "vtkDecimatePro.h"
#include "vtkDelaunay2D.h"
#include "vtkDelaunay3D.h"
#include "vtkElevationFilter.h"
#include "vtkExecutionTimer.h"
#include "vtkFeatureEdges.h"
#include "vtkFieldDataToAttributeDataFilter.h"
#include "vtkGlyph2D.h"
#include "vtkGlyph3D.h"
#include "vtkHedgeHog.h"
#include "vtkHull.h"
#include "vtkIdFilter.h"
#include "vtkMarchingCubes.h"
#include "vtkMarchingSquares.h"
#include "vtkMaskFields.h"
#include "vtkMaskPoints.h"
#include "vtkMaskPolyData.h"
#include "vtkMassProperties.h"
#include "vtkMergeDataObjectFilter.h"
#include "vtkMergeFields.h"
#include "vtkMergeFilter.h"
#include "vtkPointDataToCellData.h"
#include "vtkPolyDataConnectivityFilter.h"
#include "vtkPolyDataNormals.h"
#include "vtkProbeFilter.h"
#include "vtkQuadricClustering.h"
#include "vtkQuadricDecimation.h"
#include "vtkRearrangeFields.h"
#include "vtkReverseSense.h"
#include "vtkSimpleElevationFilter.h"
#include "vtkSmoothPolyDataFilter.h"
#include "vtkStripper.h"
#include "vtkStructuredGridOutlineFilter.h"
#include "vtkSynchronizedTemplates2D.h"
#include "vtkSynchronizedTemplates3D.h"
#include "vtkSynchronizedTemplatesCutter3D.h"
#include "vtkTensorGlyph.h"
#include "vtkThreshold.h"
#include "vtkThresholdPoints.h"
#include "vtkTransposeTable.h"
#include "vtkTriangleFilter.h"
#include "vtkTubeFilter.h"
#include "vtkVectorDot.h"
#include "vtkVectorNorm.h"
#include "vtkWindowedSincPolyDataFilter.h"
#include "vtkCutter.h"
#include "vtkCompositeCutter.h"
#include "vtkGridSynchronizedTemplates3D.h"
#include "vtkRectilinearSynchronizedTemplates.h"
#include "vtkStreamingTessellator.h"
#include "vtkImplicitPolyDataDistance.h"
#include "vtkCenterOfMass.h"
#include "vtkGhostArray.h"
#include "vtkImageAppend.h"
#include "vtkStructuredGridAppend.h"
#include "vtkAppendCompositeDataLeaves.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkAppendFilter)
vtkInstantiatorNewMacro(vtkAppendPolyData)
vtkInstantiatorNewMacro(vtkAppendSelection)
vtkInstantiatorNewMacro(vtkArrayCalculator)
vtkInstantiatorNewMacro(vtkAssignAttribute)
vtkInstantiatorNewMacro(vtkAttributeDataToFieldDataFilter)
vtkInstantiatorNewMacro(vtkCellDataToPointData)
vtkInstantiatorNewMacro(vtkCleanPolyData)
vtkInstantiatorNewMacro(vtkClipPolyData)
vtkInstantiatorNewMacro(vtkCompositeDataProbeFilter)
vtkInstantiatorNewMacro(vtkConnectivityFilter)
vtkInstantiatorNewMacro(vtkContourFilter)
vtkInstantiatorNewMacro(vtkContourGrid)
vtkInstantiatorNewMacro(vtkDataObjectGenerator)
vtkInstantiatorNewMacro(vtkDataObjectToDataSetFilter)
vtkInstantiatorNewMacro(vtkDataSetEdgeSubdivisionCriterion)
vtkInstantiatorNewMacro(vtkDataSetToDataObjectFilter)
vtkInstantiatorNewMacro(vtkDecimatePolylineFilter)
vtkInstantiatorNewMacro(vtkDecimatePro)
vtkInstantiatorNewMacro(vtkDelaunay2D)
vtkInstantiatorNewMacro(vtkDelaunay3D)
vtkInstantiatorNewMacro(vtkElevationFilter)
vtkInstantiatorNewMacro(vtkExecutionTimer)
vtkInstantiatorNewMacro(vtkFeatureEdges)
vtkInstantiatorNewMacro(vtkFieldDataToAttributeDataFilter)
vtkInstantiatorNewMacro(vtkGlyph2D)
vtkInstantiatorNewMacro(vtkGlyph3D)
vtkInstantiatorNewMacro(vtkHedgeHog)
vtkInstantiatorNewMacro(vtkHull)
vtkInstantiatorNewMacro(vtkIdFilter)
vtkInstantiatorNewMacro(vtkMarchingCubes)
vtkInstantiatorNewMacro(vtkMarchingSquares)
vtkInstantiatorNewMacro(vtkMaskFields)
vtkInstantiatorNewMacro(vtkMaskPoints)
vtkInstantiatorNewMacro(vtkMaskPolyData)
vtkInstantiatorNewMacro(vtkMassProperties)
vtkInstantiatorNewMacro(vtkMergeDataObjectFilter)
vtkInstantiatorNewMacro(vtkMergeFields)
vtkInstantiatorNewMacro(vtkMergeFilter)
vtkInstantiatorNewMacro(vtkPointDataToCellData)
vtkInstantiatorNewMacro(vtkPolyDataConnectivityFilter)
vtkInstantiatorNewMacro(vtkPolyDataNormals)
vtkInstantiatorNewMacro(vtkProbeFilter)
vtkInstantiatorNewMacro(vtkQuadricClustering)
vtkInstantiatorNewMacro(vtkQuadricDecimation)
vtkInstantiatorNewMacro(vtkRearrangeFields)
vtkInstantiatorNewMacro(vtkReverseSense)
vtkInstantiatorNewMacro(vtkSimpleElevationFilter)
vtkInstantiatorNewMacro(vtkSmoothPolyDataFilter)
vtkInstantiatorNewMacro(vtkStripper)
vtkInstantiatorNewMacro(vtkStructuredGridOutlineFilter)
vtkInstantiatorNewMacro(vtkSynchronizedTemplates2D)
vtkInstantiatorNewMacro(vtkSynchronizedTemplates3D)
vtkInstantiatorNewMacro(vtkSynchronizedTemplatesCutter3D)
vtkInstantiatorNewMacro(vtkTensorGlyph)
vtkInstantiatorNewMacro(vtkThreshold)
vtkInstantiatorNewMacro(vtkThresholdPoints)
vtkInstantiatorNewMacro(vtkTransposeTable)
vtkInstantiatorNewMacro(vtkTriangleFilter)
vtkInstantiatorNewMacro(vtkTubeFilter)
vtkInstantiatorNewMacro(vtkVectorDot)
vtkInstantiatorNewMacro(vtkVectorNorm)
vtkInstantiatorNewMacro(vtkWindowedSincPolyDataFilter)
vtkInstantiatorNewMacro(vtkCutter)
vtkInstantiatorNewMacro(vtkCompositeCutter)
vtkInstantiatorNewMacro(vtkGridSynchronizedTemplates3D)
vtkInstantiatorNewMacro(vtkRectilinearSynchronizedTemplates)
vtkInstantiatorNewMacro(vtkStreamingTessellator)
vtkInstantiatorNewMacro(vtkImplicitPolyDataDistance)
vtkInstantiatorNewMacro(vtkCenterOfMass)
vtkInstantiatorNewMacro(vtkGhostArray)
vtkInstantiatorNewMacro(vtkImageAppend)
vtkInstantiatorNewMacro(vtkStructuredGridAppend)
vtkInstantiatorNewMacro(vtkAppendCompositeDataLeaves)



void vtkFiltersCoreInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkAppendFilter", vtkInstantiatorvtkAppendFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkAppendPolyData", vtkInstantiatorvtkAppendPolyDataNew);
  vtkInstantiator::RegisterInstantiator("vtkAppendSelection", vtkInstantiatorvtkAppendSelectionNew);
  vtkInstantiator::RegisterInstantiator("vtkArrayCalculator", vtkInstantiatorvtkArrayCalculatorNew);
  vtkInstantiator::RegisterInstantiator("vtkAssignAttribute", vtkInstantiatorvtkAssignAttributeNew);
  vtkInstantiator::RegisterInstantiator("vtkAttributeDataToFieldDataFilter", vtkInstantiatorvtkAttributeDataToFieldDataFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkCellDataToPointData", vtkInstantiatorvtkCellDataToPointDataNew);
  vtkInstantiator::RegisterInstantiator("vtkCleanPolyData", vtkInstantiatorvtkCleanPolyDataNew);
  vtkInstantiator::RegisterInstantiator("vtkClipPolyData", vtkInstantiatorvtkClipPolyDataNew);
  vtkInstantiator::RegisterInstantiator("vtkCompositeDataProbeFilter", vtkInstantiatorvtkCompositeDataProbeFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkConnectivityFilter", vtkInstantiatorvtkConnectivityFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkContourFilter", vtkInstantiatorvtkContourFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkContourGrid", vtkInstantiatorvtkContourGridNew);
  vtkInstantiator::RegisterInstantiator("vtkDataObjectGenerator", vtkInstantiatorvtkDataObjectGeneratorNew);
  vtkInstantiator::RegisterInstantiator("vtkDataObjectToDataSetFilter", vtkInstantiatorvtkDataObjectToDataSetFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkDataSetEdgeSubdivisionCriterion", vtkInstantiatorvtkDataSetEdgeSubdivisionCriterionNew);
  vtkInstantiator::RegisterInstantiator("vtkDataSetToDataObjectFilter", vtkInstantiatorvtkDataSetToDataObjectFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkDecimatePolylineFilter", vtkInstantiatorvtkDecimatePolylineFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkDecimatePro", vtkInstantiatorvtkDecimateProNew);
  vtkInstantiator::RegisterInstantiator("vtkDelaunay2D", vtkInstantiatorvtkDelaunay2DNew);
  vtkInstantiator::RegisterInstantiator("vtkDelaunay3D", vtkInstantiatorvtkDelaunay3DNew);
  vtkInstantiator::RegisterInstantiator("vtkElevationFilter", vtkInstantiatorvtkElevationFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkExecutionTimer", vtkInstantiatorvtkExecutionTimerNew);
  vtkInstantiator::RegisterInstantiator("vtkFeatureEdges", vtkInstantiatorvtkFeatureEdgesNew);
  vtkInstantiator::RegisterInstantiator("vtkFieldDataToAttributeDataFilter", vtkInstantiatorvtkFieldDataToAttributeDataFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkGlyph2D", vtkInstantiatorvtkGlyph2DNew);
  vtkInstantiator::RegisterInstantiator("vtkGlyph3D", vtkInstantiatorvtkGlyph3DNew);
  vtkInstantiator::RegisterInstantiator("vtkHedgeHog", vtkInstantiatorvtkHedgeHogNew);
  vtkInstantiator::RegisterInstantiator("vtkHull", vtkInstantiatorvtkHullNew);
  vtkInstantiator::RegisterInstantiator("vtkIdFilter", vtkInstantiatorvtkIdFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkMarchingCubes", vtkInstantiatorvtkMarchingCubesNew);
  vtkInstantiator::RegisterInstantiator("vtkMarchingSquares", vtkInstantiatorvtkMarchingSquaresNew);
  vtkInstantiator::RegisterInstantiator("vtkMaskFields", vtkInstantiatorvtkMaskFieldsNew);
  vtkInstantiator::RegisterInstantiator("vtkMaskPoints", vtkInstantiatorvtkMaskPointsNew);
  vtkInstantiator::RegisterInstantiator("vtkMaskPolyData", vtkInstantiatorvtkMaskPolyDataNew);
  vtkInstantiator::RegisterInstantiator("vtkMassProperties", vtkInstantiatorvtkMassPropertiesNew);
  vtkInstantiator::RegisterInstantiator("vtkMergeDataObjectFilter", vtkInstantiatorvtkMergeDataObjectFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkMergeFields", vtkInstantiatorvtkMergeFieldsNew);
  vtkInstantiator::RegisterInstantiator("vtkMergeFilter", vtkInstantiatorvtkMergeFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkPointDataToCellData", vtkInstantiatorvtkPointDataToCellDataNew);
  vtkInstantiator::RegisterInstantiator("vtkPolyDataConnectivityFilter", vtkInstantiatorvtkPolyDataConnectivityFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkPolyDataNormals", vtkInstantiatorvtkPolyDataNormalsNew);
  vtkInstantiator::RegisterInstantiator("vtkProbeFilter", vtkInstantiatorvtkProbeFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkQuadricClustering", vtkInstantiatorvtkQuadricClusteringNew);
  vtkInstantiator::RegisterInstantiator("vtkQuadricDecimation", vtkInstantiatorvtkQuadricDecimationNew);
  vtkInstantiator::RegisterInstantiator("vtkRearrangeFields", vtkInstantiatorvtkRearrangeFieldsNew);
  vtkInstantiator::RegisterInstantiator("vtkReverseSense", vtkInstantiatorvtkReverseSenseNew);
  vtkInstantiator::RegisterInstantiator("vtkSimpleElevationFilter", vtkInstantiatorvtkSimpleElevationFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkSmoothPolyDataFilter", vtkInstantiatorvtkSmoothPolyDataFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkStripper", vtkInstantiatorvtkStripperNew);
  vtkInstantiator::RegisterInstantiator("vtkStructuredGridOutlineFilter", vtkInstantiatorvtkStructuredGridOutlineFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkSynchronizedTemplates2D", vtkInstantiatorvtkSynchronizedTemplates2DNew);
  vtkInstantiator::RegisterInstantiator("vtkSynchronizedTemplates3D", vtkInstantiatorvtkSynchronizedTemplates3DNew);
  vtkInstantiator::RegisterInstantiator("vtkSynchronizedTemplatesCutter3D", vtkInstantiatorvtkSynchronizedTemplatesCutter3DNew);
  vtkInstantiator::RegisterInstantiator("vtkTensorGlyph", vtkInstantiatorvtkTensorGlyphNew);
  vtkInstantiator::RegisterInstantiator("vtkThreshold", vtkInstantiatorvtkThresholdNew);
  vtkInstantiator::RegisterInstantiator("vtkThresholdPoints", vtkInstantiatorvtkThresholdPointsNew);
  vtkInstantiator::RegisterInstantiator("vtkTransposeTable", vtkInstantiatorvtkTransposeTableNew);
  vtkInstantiator::RegisterInstantiator("vtkTriangleFilter", vtkInstantiatorvtkTriangleFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkTubeFilter", vtkInstantiatorvtkTubeFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkVectorDot", vtkInstantiatorvtkVectorDotNew);
  vtkInstantiator::RegisterInstantiator("vtkVectorNorm", vtkInstantiatorvtkVectorNormNew);
  vtkInstantiator::RegisterInstantiator("vtkWindowedSincPolyDataFilter", vtkInstantiatorvtkWindowedSincPolyDataFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkCutter", vtkInstantiatorvtkCutterNew);
  vtkInstantiator::RegisterInstantiator("vtkCompositeCutter", vtkInstantiatorvtkCompositeCutterNew);
  vtkInstantiator::RegisterInstantiator("vtkGridSynchronizedTemplates3D", vtkInstantiatorvtkGridSynchronizedTemplates3DNew);
  vtkInstantiator::RegisterInstantiator("vtkRectilinearSynchronizedTemplates", vtkInstantiatorvtkRectilinearSynchronizedTemplatesNew);
  vtkInstantiator::RegisterInstantiator("vtkStreamingTessellator", vtkInstantiatorvtkStreamingTessellatorNew);
  vtkInstantiator::RegisterInstantiator("vtkImplicitPolyDataDistance", vtkInstantiatorvtkImplicitPolyDataDistanceNew);
  vtkInstantiator::RegisterInstantiator("vtkCenterOfMass", vtkInstantiatorvtkCenterOfMassNew);
  vtkInstantiator::RegisterInstantiator("vtkGhostArray", vtkInstantiatorvtkGhostArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkImageAppend", vtkInstantiatorvtkImageAppendNew);
  vtkInstantiator::RegisterInstantiator("vtkStructuredGridAppend", vtkInstantiatorvtkStructuredGridAppendNew);
  vtkInstantiator::RegisterInstantiator("vtkAppendCompositeDataLeaves", vtkInstantiatorvtkAppendCompositeDataLeavesNew);


}

void vtkFiltersCoreInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkAppendFilter", vtkInstantiatorvtkAppendFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAppendPolyData", vtkInstantiatorvtkAppendPolyDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAppendSelection", vtkInstantiatorvtkAppendSelectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkArrayCalculator", vtkInstantiatorvtkArrayCalculatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAssignAttribute", vtkInstantiatorvtkAssignAttributeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAttributeDataToFieldDataFilter", vtkInstantiatorvtkAttributeDataToFieldDataFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCellDataToPointData", vtkInstantiatorvtkCellDataToPointDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCleanPolyData", vtkInstantiatorvtkCleanPolyDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkClipPolyData", vtkInstantiatorvtkClipPolyDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCompositeDataProbeFilter", vtkInstantiatorvtkCompositeDataProbeFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkConnectivityFilter", vtkInstantiatorvtkConnectivityFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkContourFilter", vtkInstantiatorvtkContourFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkContourGrid", vtkInstantiatorvtkContourGridNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataObjectGenerator", vtkInstantiatorvtkDataObjectGeneratorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataObjectToDataSetFilter", vtkInstantiatorvtkDataObjectToDataSetFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataSetEdgeSubdivisionCriterion", vtkInstantiatorvtkDataSetEdgeSubdivisionCriterionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataSetToDataObjectFilter", vtkInstantiatorvtkDataSetToDataObjectFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDecimatePolylineFilter", vtkInstantiatorvtkDecimatePolylineFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDecimatePro", vtkInstantiatorvtkDecimateProNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDelaunay2D", vtkInstantiatorvtkDelaunay2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDelaunay3D", vtkInstantiatorvtkDelaunay3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkElevationFilter", vtkInstantiatorvtkElevationFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExecutionTimer", vtkInstantiatorvtkExecutionTimerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFeatureEdges", vtkInstantiatorvtkFeatureEdgesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFieldDataToAttributeDataFilter", vtkInstantiatorvtkFieldDataToAttributeDataFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGlyph2D", vtkInstantiatorvtkGlyph2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGlyph3D", vtkInstantiatorvtkGlyph3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHedgeHog", vtkInstantiatorvtkHedgeHogNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHull", vtkInstantiatorvtkHullNew);
  vtkInstantiator::UnRegisterInstantiator("vtkIdFilter", vtkInstantiatorvtkIdFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMarchingCubes", vtkInstantiatorvtkMarchingCubesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMarchingSquares", vtkInstantiatorvtkMarchingSquaresNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMaskFields", vtkInstantiatorvtkMaskFieldsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMaskPoints", vtkInstantiatorvtkMaskPointsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMaskPolyData", vtkInstantiatorvtkMaskPolyDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMassProperties", vtkInstantiatorvtkMassPropertiesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMergeDataObjectFilter", vtkInstantiatorvtkMergeDataObjectFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMergeFields", vtkInstantiatorvtkMergeFieldsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMergeFilter", vtkInstantiatorvtkMergeFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPointDataToCellData", vtkInstantiatorvtkPointDataToCellDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPolyDataConnectivityFilter", vtkInstantiatorvtkPolyDataConnectivityFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPolyDataNormals", vtkInstantiatorvtkPolyDataNormalsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProbeFilter", vtkInstantiatorvtkProbeFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkQuadricClustering", vtkInstantiatorvtkQuadricClusteringNew);
  vtkInstantiator::UnRegisterInstantiator("vtkQuadricDecimation", vtkInstantiatorvtkQuadricDecimationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRearrangeFields", vtkInstantiatorvtkRearrangeFieldsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkReverseSense", vtkInstantiatorvtkReverseSenseNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSimpleElevationFilter", vtkInstantiatorvtkSimpleElevationFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSmoothPolyDataFilter", vtkInstantiatorvtkSmoothPolyDataFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStripper", vtkInstantiatorvtkStripperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStructuredGridOutlineFilter", vtkInstantiatorvtkStructuredGridOutlineFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSynchronizedTemplates2D", vtkInstantiatorvtkSynchronizedTemplates2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSynchronizedTemplates3D", vtkInstantiatorvtkSynchronizedTemplates3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSynchronizedTemplatesCutter3D", vtkInstantiatorvtkSynchronizedTemplatesCutter3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTensorGlyph", vtkInstantiatorvtkTensorGlyphNew);
  vtkInstantiator::UnRegisterInstantiator("vtkThreshold", vtkInstantiatorvtkThresholdNew);
  vtkInstantiator::UnRegisterInstantiator("vtkThresholdPoints", vtkInstantiatorvtkThresholdPointsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTransposeTable", vtkInstantiatorvtkTransposeTableNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTriangleFilter", vtkInstantiatorvtkTriangleFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTubeFilter", vtkInstantiatorvtkTubeFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVectorDot", vtkInstantiatorvtkVectorDotNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVectorNorm", vtkInstantiatorvtkVectorNormNew);
  vtkInstantiator::UnRegisterInstantiator("vtkWindowedSincPolyDataFilter", vtkInstantiatorvtkWindowedSincPolyDataFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCutter", vtkInstantiatorvtkCutterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCompositeCutter", vtkInstantiatorvtkCompositeCutterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGridSynchronizedTemplates3D", vtkInstantiatorvtkGridSynchronizedTemplates3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRectilinearSynchronizedTemplates", vtkInstantiatorvtkRectilinearSynchronizedTemplatesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStreamingTessellator", vtkInstantiatorvtkStreamingTessellatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImplicitPolyDataDistance", vtkInstantiatorvtkImplicitPolyDataDistanceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCenterOfMass", vtkInstantiatorvtkCenterOfMassNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGhostArray", vtkInstantiatorvtkGhostArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageAppend", vtkInstantiatorvtkImageAppendNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStructuredGridAppend", vtkInstantiatorvtkStructuredGridAppendNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAppendCompositeDataLeaves", vtkInstantiatorvtkAppendCompositeDataLeavesNew);


}

vtkFiltersCoreInstantiator::vtkFiltersCoreInstantiator()
{
  if(++vtkFiltersCoreInstantiator::Count == 1)
    {
    vtkFiltersCoreInstantiator::ClassInitialize();
    }
}

vtkFiltersCoreInstantiator::~vtkFiltersCoreInstantiator()
{
  if(--vtkFiltersCoreInstantiator::Count == 0)
    {
    vtkFiltersCoreInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkFiltersCoreInstantiator::Count;
