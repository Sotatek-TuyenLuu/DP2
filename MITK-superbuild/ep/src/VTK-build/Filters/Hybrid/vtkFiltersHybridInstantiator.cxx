#include "vtkFiltersHybridInstantiator.h"
#include "vtkBSplineTransform.h"
#include "vtkDepthSortPolyData.h"
#include "vtkDSPFilterDefinition.h"
#include "vtkDSPFilterGroup.h"
#include "vtkEarthSource.h"
#include "vtkFacetReader.h"
#include "vtkGreedyTerrainDecimation.h"
#include "vtkGridTransform.h"
#include "vtkImageToPolyDataFilter.h"
#include "vtkImplicitModeller.h"
#include "vtkPCAAnalysisFilter.h"
#include "vtkPolyDataSilhouette.h"
#include "vtkProcrustesAlignmentFilter.h"
#include "vtkProjectedTerrainPath.h"
#include "vtkRenderLargeImage.h"
#include "vtkTemporalDataSetCache.h"
#include "vtkTemporalFractal.h"
#include "vtkTemporalInterpolator.h"
#include "vtkTemporalShiftScale.h"
#include "vtkTemporalSnapToTimeStep.h"
#include "vtkTransformToGrid.h"
#include "vtkWeightedTransformFilter.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkBSplineTransform)
vtkInstantiatorNewMacro(vtkDepthSortPolyData)
vtkInstantiatorNewMacro(vtkDSPFilterDefinition)
vtkInstantiatorNewMacro(vtkDSPFilterGroup)
vtkInstantiatorNewMacro(vtkEarthSource)
vtkInstantiatorNewMacro(vtkFacetReader)
vtkInstantiatorNewMacro(vtkGreedyTerrainDecimation)
vtkInstantiatorNewMacro(vtkGridTransform)
vtkInstantiatorNewMacro(vtkImageToPolyDataFilter)
vtkInstantiatorNewMacro(vtkImplicitModeller)
vtkInstantiatorNewMacro(vtkPCAAnalysisFilter)
vtkInstantiatorNewMacro(vtkPolyDataSilhouette)
vtkInstantiatorNewMacro(vtkProcrustesAlignmentFilter)
vtkInstantiatorNewMacro(vtkProjectedTerrainPath)
vtkInstantiatorNewMacro(vtkRenderLargeImage)
vtkInstantiatorNewMacro(vtkTemporalDataSetCache)
vtkInstantiatorNewMacro(vtkTemporalFractal)
vtkInstantiatorNewMacro(vtkTemporalInterpolator)
vtkInstantiatorNewMacro(vtkTemporalShiftScale)
vtkInstantiatorNewMacro(vtkTemporalSnapToTimeStep)
vtkInstantiatorNewMacro(vtkTransformToGrid)
vtkInstantiatorNewMacro(vtkWeightedTransformFilter)



void vtkFiltersHybridInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkBSplineTransform", vtkInstantiatorvtkBSplineTransformNew);
  vtkInstantiator::RegisterInstantiator("vtkDepthSortPolyData", vtkInstantiatorvtkDepthSortPolyDataNew);
  vtkInstantiator::RegisterInstantiator("vtkDSPFilterDefinition", vtkInstantiatorvtkDSPFilterDefinitionNew);
  vtkInstantiator::RegisterInstantiator("vtkDSPFilterGroup", vtkInstantiatorvtkDSPFilterGroupNew);
  vtkInstantiator::RegisterInstantiator("vtkEarthSource", vtkInstantiatorvtkEarthSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkFacetReader", vtkInstantiatorvtkFacetReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkGreedyTerrainDecimation", vtkInstantiatorvtkGreedyTerrainDecimationNew);
  vtkInstantiator::RegisterInstantiator("vtkGridTransform", vtkInstantiatorvtkGridTransformNew);
  vtkInstantiator::RegisterInstantiator("vtkImageToPolyDataFilter", vtkInstantiatorvtkImageToPolyDataFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkImplicitModeller", vtkInstantiatorvtkImplicitModellerNew);
  vtkInstantiator::RegisterInstantiator("vtkPCAAnalysisFilter", vtkInstantiatorvtkPCAAnalysisFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkPolyDataSilhouette", vtkInstantiatorvtkPolyDataSilhouetteNew);
  vtkInstantiator::RegisterInstantiator("vtkProcrustesAlignmentFilter", vtkInstantiatorvtkProcrustesAlignmentFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkProjectedTerrainPath", vtkInstantiatorvtkProjectedTerrainPathNew);
  vtkInstantiator::RegisterInstantiator("vtkRenderLargeImage", vtkInstantiatorvtkRenderLargeImageNew);
  vtkInstantiator::RegisterInstantiator("vtkTemporalDataSetCache", vtkInstantiatorvtkTemporalDataSetCacheNew);
  vtkInstantiator::RegisterInstantiator("vtkTemporalFractal", vtkInstantiatorvtkTemporalFractalNew);
  vtkInstantiator::RegisterInstantiator("vtkTemporalInterpolator", vtkInstantiatorvtkTemporalInterpolatorNew);
  vtkInstantiator::RegisterInstantiator("vtkTemporalShiftScale", vtkInstantiatorvtkTemporalShiftScaleNew);
  vtkInstantiator::RegisterInstantiator("vtkTemporalSnapToTimeStep", vtkInstantiatorvtkTemporalSnapToTimeStepNew);
  vtkInstantiator::RegisterInstantiator("vtkTransformToGrid", vtkInstantiatorvtkTransformToGridNew);
  vtkInstantiator::RegisterInstantiator("vtkWeightedTransformFilter", vtkInstantiatorvtkWeightedTransformFilterNew);


}

void vtkFiltersHybridInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkBSplineTransform", vtkInstantiatorvtkBSplineTransformNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDepthSortPolyData", vtkInstantiatorvtkDepthSortPolyDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDSPFilterDefinition", vtkInstantiatorvtkDSPFilterDefinitionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDSPFilterGroup", vtkInstantiatorvtkDSPFilterGroupNew);
  vtkInstantiator::UnRegisterInstantiator("vtkEarthSource", vtkInstantiatorvtkEarthSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFacetReader", vtkInstantiatorvtkFacetReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGreedyTerrainDecimation", vtkInstantiatorvtkGreedyTerrainDecimationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGridTransform", vtkInstantiatorvtkGridTransformNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageToPolyDataFilter", vtkInstantiatorvtkImageToPolyDataFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImplicitModeller", vtkInstantiatorvtkImplicitModellerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPCAAnalysisFilter", vtkInstantiatorvtkPCAAnalysisFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPolyDataSilhouette", vtkInstantiatorvtkPolyDataSilhouetteNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProcrustesAlignmentFilter", vtkInstantiatorvtkProcrustesAlignmentFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProjectedTerrainPath", vtkInstantiatorvtkProjectedTerrainPathNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRenderLargeImage", vtkInstantiatorvtkRenderLargeImageNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTemporalDataSetCache", vtkInstantiatorvtkTemporalDataSetCacheNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTemporalFractal", vtkInstantiatorvtkTemporalFractalNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTemporalInterpolator", vtkInstantiatorvtkTemporalInterpolatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTemporalShiftScale", vtkInstantiatorvtkTemporalShiftScaleNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTemporalSnapToTimeStep", vtkInstantiatorvtkTemporalSnapToTimeStepNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTransformToGrid", vtkInstantiatorvtkTransformToGridNew);
  vtkInstantiator::UnRegisterInstantiator("vtkWeightedTransformFilter", vtkInstantiatorvtkWeightedTransformFilterNew);


}

vtkFiltersHybridInstantiator::vtkFiltersHybridInstantiator()
{
  if(++vtkFiltersHybridInstantiator::Count == 1)
    {
    vtkFiltersHybridInstantiator::ClassInitialize();
    }
}

vtkFiltersHybridInstantiator::~vtkFiltersHybridInstantiator()
{
  if(--vtkFiltersHybridInstantiator::Count == 0)
    {
    vtkFiltersHybridInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkFiltersHybridInstantiator::Count;
