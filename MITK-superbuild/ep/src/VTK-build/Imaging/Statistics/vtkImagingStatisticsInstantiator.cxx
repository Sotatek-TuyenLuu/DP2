#include "vtkImagingStatisticsInstantiator.h"
#include "vtkImageAccumulate.h"
#include "vtkImageHistogram.h"
#include "vtkImageHistogramStatistics.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkImageAccumulate)
vtkInstantiatorNewMacro(vtkImageHistogram)
vtkInstantiatorNewMacro(vtkImageHistogramStatistics)



void vtkImagingStatisticsInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkImageAccumulate", vtkInstantiatorvtkImageAccumulateNew);
  vtkInstantiator::RegisterInstantiator("vtkImageHistogram", vtkInstantiatorvtkImageHistogramNew);
  vtkInstantiator::RegisterInstantiator("vtkImageHistogramStatistics", vtkInstantiatorvtkImageHistogramStatisticsNew);


}

void vtkImagingStatisticsInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkImageAccumulate", vtkInstantiatorvtkImageAccumulateNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageHistogram", vtkInstantiatorvtkImageHistogramNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageHistogramStatistics", vtkInstantiatorvtkImageHistogramStatisticsNew);


}

vtkImagingStatisticsInstantiator::vtkImagingStatisticsInstantiator()
{
  if(++vtkImagingStatisticsInstantiator::Count == 1)
    {
    vtkImagingStatisticsInstantiator::ClassInitialize();
    }
}

vtkImagingStatisticsInstantiator::~vtkImagingStatisticsInstantiator()
{
  if(--vtkImagingStatisticsInstantiator::Count == 0)
    {
    vtkImagingStatisticsInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkImagingStatisticsInstantiator::Count;
