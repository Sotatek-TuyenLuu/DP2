#include "vtkImagingFourierInstantiator.h"
#include "vtkImageButterworthHighPass.h"
#include "vtkImageButterworthLowPass.h"
#include "vtkImageFFT.h"
#include "vtkImageFourierCenter.h"
#include "vtkImageIdealHighPass.h"
#include "vtkImageIdealLowPass.h"
#include "vtkImageRFFT.h"
#include "vtkTableFFT.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkImageButterworthHighPass)
vtkInstantiatorNewMacro(vtkImageButterworthLowPass)
vtkInstantiatorNewMacro(vtkImageFFT)
vtkInstantiatorNewMacro(vtkImageFourierCenter)
vtkInstantiatorNewMacro(vtkImageIdealHighPass)
vtkInstantiatorNewMacro(vtkImageIdealLowPass)
vtkInstantiatorNewMacro(vtkImageRFFT)
vtkInstantiatorNewMacro(vtkTableFFT)



void vtkImagingFourierInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkImageButterworthHighPass", vtkInstantiatorvtkImageButterworthHighPassNew);
  vtkInstantiator::RegisterInstantiator("vtkImageButterworthLowPass", vtkInstantiatorvtkImageButterworthLowPassNew);
  vtkInstantiator::RegisterInstantiator("vtkImageFFT", vtkInstantiatorvtkImageFFTNew);
  vtkInstantiator::RegisterInstantiator("vtkImageFourierCenter", vtkInstantiatorvtkImageFourierCenterNew);
  vtkInstantiator::RegisterInstantiator("vtkImageIdealHighPass", vtkInstantiatorvtkImageIdealHighPassNew);
  vtkInstantiator::RegisterInstantiator("vtkImageIdealLowPass", vtkInstantiatorvtkImageIdealLowPassNew);
  vtkInstantiator::RegisterInstantiator("vtkImageRFFT", vtkInstantiatorvtkImageRFFTNew);
  vtkInstantiator::RegisterInstantiator("vtkTableFFT", vtkInstantiatorvtkTableFFTNew);


}

void vtkImagingFourierInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkImageButterworthHighPass", vtkInstantiatorvtkImageButterworthHighPassNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageButterworthLowPass", vtkInstantiatorvtkImageButterworthLowPassNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageFFT", vtkInstantiatorvtkImageFFTNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageFourierCenter", vtkInstantiatorvtkImageFourierCenterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageIdealHighPass", vtkInstantiatorvtkImageIdealHighPassNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageIdealLowPass", vtkInstantiatorvtkImageIdealLowPassNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageRFFT", vtkInstantiatorvtkImageRFFTNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTableFFT", vtkInstantiatorvtkTableFFTNew);


}

vtkImagingFourierInstantiator::vtkImagingFourierInstantiator()
{
  if(++vtkImagingFourierInstantiator::Count == 1)
    {
    vtkImagingFourierInstantiator::ClassInitialize();
    }
}

vtkImagingFourierInstantiator::~vtkImagingFourierInstantiator()
{
  if(--vtkImagingFourierInstantiator::Count == 0)
    {
    vtkImagingFourierInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkImagingFourierInstantiator::Count;
