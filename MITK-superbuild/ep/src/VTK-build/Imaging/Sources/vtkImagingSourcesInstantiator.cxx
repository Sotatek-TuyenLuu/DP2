#include "vtkImagingSourcesInstantiator.h"
#include "vtkImageCanvasSource2D.h"
#include "vtkImageEllipsoidSource.h"
#include "vtkImageGaussianSource.h"
#include "vtkImageGridSource.h"
#include "vtkImageMandelbrotSource.h"
#include "vtkImageNoiseSource.h"
#include "vtkImageSinusoidSource.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkImageCanvasSource2D)
vtkInstantiatorNewMacro(vtkImageEllipsoidSource)
vtkInstantiatorNewMacro(vtkImageGaussianSource)
vtkInstantiatorNewMacro(vtkImageGridSource)
vtkInstantiatorNewMacro(vtkImageMandelbrotSource)
vtkInstantiatorNewMacro(vtkImageNoiseSource)
vtkInstantiatorNewMacro(vtkImageSinusoidSource)



void vtkImagingSourcesInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkImageCanvasSource2D", vtkInstantiatorvtkImageCanvasSource2DNew);
  vtkInstantiator::RegisterInstantiator("vtkImageEllipsoidSource", vtkInstantiatorvtkImageEllipsoidSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkImageGaussianSource", vtkInstantiatorvtkImageGaussianSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkImageGridSource", vtkInstantiatorvtkImageGridSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkImageMandelbrotSource", vtkInstantiatorvtkImageMandelbrotSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkImageNoiseSource", vtkInstantiatorvtkImageNoiseSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkImageSinusoidSource", vtkInstantiatorvtkImageSinusoidSourceNew);


}

void vtkImagingSourcesInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkImageCanvasSource2D", vtkInstantiatorvtkImageCanvasSource2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageEllipsoidSource", vtkInstantiatorvtkImageEllipsoidSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageGaussianSource", vtkInstantiatorvtkImageGaussianSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageGridSource", vtkInstantiatorvtkImageGridSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageMandelbrotSource", vtkInstantiatorvtkImageMandelbrotSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageNoiseSource", vtkInstantiatorvtkImageNoiseSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageSinusoidSource", vtkInstantiatorvtkImageSinusoidSourceNew);


}

vtkImagingSourcesInstantiator::vtkImagingSourcesInstantiator()
{
  if(++vtkImagingSourcesInstantiator::Count == 1)
    {
    vtkImagingSourcesInstantiator::ClassInitialize();
    }
}

vtkImagingSourcesInstantiator::~vtkImagingSourcesInstantiator()
{
  if(--vtkImagingSourcesInstantiator::Count == 0)
    {
    vtkImagingSourcesInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkImagingSourcesInstantiator::Count;
