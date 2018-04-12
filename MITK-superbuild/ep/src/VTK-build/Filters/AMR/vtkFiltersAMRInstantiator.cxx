#include "vtkFiltersAMRInstantiator.h"
#include "vtkAMRCutPlane.h"
#include "vtkAMRGaussianPulseSource.h"
#include "vtkAMRResampleFilter.h"
#include "vtkAMRSliceFilter.h"
#include "vtkAMRToMultiBlockFilter.h"
#include "vtkImageToAMR.h"
#include "vtkParallelAMRUtilities.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkAMRCutPlane)
vtkInstantiatorNewMacro(vtkAMRGaussianPulseSource)
vtkInstantiatorNewMacro(vtkAMRResampleFilter)
vtkInstantiatorNewMacro(vtkAMRSliceFilter)
vtkInstantiatorNewMacro(vtkAMRToMultiBlockFilter)
vtkInstantiatorNewMacro(vtkImageToAMR)
vtkInstantiatorNewMacro(vtkParallelAMRUtilities)



void vtkFiltersAMRInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkAMRCutPlane", vtkInstantiatorvtkAMRCutPlaneNew);
  vtkInstantiator::RegisterInstantiator("vtkAMRGaussianPulseSource", vtkInstantiatorvtkAMRGaussianPulseSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkAMRResampleFilter", vtkInstantiatorvtkAMRResampleFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkAMRSliceFilter", vtkInstantiatorvtkAMRSliceFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkAMRToMultiBlockFilter", vtkInstantiatorvtkAMRToMultiBlockFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkImageToAMR", vtkInstantiatorvtkImageToAMRNew);
  vtkInstantiator::RegisterInstantiator("vtkParallelAMRUtilities", vtkInstantiatorvtkParallelAMRUtilitiesNew);


}

void vtkFiltersAMRInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkAMRCutPlane", vtkInstantiatorvtkAMRCutPlaneNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAMRGaussianPulseSource", vtkInstantiatorvtkAMRGaussianPulseSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAMRResampleFilter", vtkInstantiatorvtkAMRResampleFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAMRSliceFilter", vtkInstantiatorvtkAMRSliceFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAMRToMultiBlockFilter", vtkInstantiatorvtkAMRToMultiBlockFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageToAMR", vtkInstantiatorvtkImageToAMRNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParallelAMRUtilities", vtkInstantiatorvtkParallelAMRUtilitiesNew);


}

vtkFiltersAMRInstantiator::vtkFiltersAMRInstantiator()
{
  if(++vtkFiltersAMRInstantiator::Count == 1)
    {
    vtkFiltersAMRInstantiator::ClassInitialize();
    }
}

vtkFiltersAMRInstantiator::~vtkFiltersAMRInstantiator()
{
  if(--vtkFiltersAMRInstantiator::Count == 0)
    {
    vtkFiltersAMRInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkFiltersAMRInstantiator::Count;
