#include "vtkImagingStencilInstantiator.h"
#include "vtkImageStencil.h"
#include "vtkImageStencilToImage.h"
#include "vtkImageToImageStencil.h"
#include "vtkImplicitFunctionToImageStencil.h"
#include "vtkLassoStencilSource.h"
#include "vtkPolyDataToImageStencil.h"
#include "vtkROIStencilSource.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkImageStencil)
vtkInstantiatorNewMacro(vtkImageStencilToImage)
vtkInstantiatorNewMacro(vtkImageToImageStencil)
vtkInstantiatorNewMacro(vtkImplicitFunctionToImageStencil)
vtkInstantiatorNewMacro(vtkLassoStencilSource)
vtkInstantiatorNewMacro(vtkPolyDataToImageStencil)
vtkInstantiatorNewMacro(vtkROIStencilSource)



void vtkImagingStencilInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkImageStencil", vtkInstantiatorvtkImageStencilNew);
  vtkInstantiator::RegisterInstantiator("vtkImageStencilToImage", vtkInstantiatorvtkImageStencilToImageNew);
  vtkInstantiator::RegisterInstantiator("vtkImageToImageStencil", vtkInstantiatorvtkImageToImageStencilNew);
  vtkInstantiator::RegisterInstantiator("vtkImplicitFunctionToImageStencil", vtkInstantiatorvtkImplicitFunctionToImageStencilNew);
  vtkInstantiator::RegisterInstantiator("vtkLassoStencilSource", vtkInstantiatorvtkLassoStencilSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkPolyDataToImageStencil", vtkInstantiatorvtkPolyDataToImageStencilNew);
  vtkInstantiator::RegisterInstantiator("vtkROIStencilSource", vtkInstantiatorvtkROIStencilSourceNew);


}

void vtkImagingStencilInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkImageStencil", vtkInstantiatorvtkImageStencilNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageStencilToImage", vtkInstantiatorvtkImageStencilToImageNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageToImageStencil", vtkInstantiatorvtkImageToImageStencilNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImplicitFunctionToImageStencil", vtkInstantiatorvtkImplicitFunctionToImageStencilNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLassoStencilSource", vtkInstantiatorvtkLassoStencilSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPolyDataToImageStencil", vtkInstantiatorvtkPolyDataToImageStencilNew);
  vtkInstantiator::UnRegisterInstantiator("vtkROIStencilSource", vtkInstantiatorvtkROIStencilSourceNew);


}

vtkImagingStencilInstantiator::vtkImagingStencilInstantiator()
{
  if(++vtkImagingStencilInstantiator::Count == 1)
    {
    vtkImagingStencilInstantiator::ClassInitialize();
    }
}

vtkImagingStencilInstantiator::~vtkImagingStencilInstantiator()
{
  if(--vtkImagingStencilInstantiator::Count == 0)
    {
    vtkImagingStencilInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkImagingStencilInstantiator::Count;
