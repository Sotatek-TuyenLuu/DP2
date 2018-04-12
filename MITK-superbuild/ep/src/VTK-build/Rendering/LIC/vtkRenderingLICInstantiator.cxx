#include "vtkRenderingLICInstantiator.h"
#include "vtkImageDataLIC2D.h"
#include "vtkStructuredGridLIC2D.h"
#include "vtkSurfaceLICDefaultPainter.h"
#include "vtkSurfaceLICPainter.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkImageDataLIC2D)
vtkInstantiatorNewMacro(vtkStructuredGridLIC2D)
vtkInstantiatorNewMacro(vtkSurfaceLICDefaultPainter)
vtkInstantiatorNewMacro(vtkSurfaceLICPainter)



void vtkRenderingLICInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkImageDataLIC2D", vtkInstantiatorvtkImageDataLIC2DNew);
  vtkInstantiator::RegisterInstantiator("vtkStructuredGridLIC2D", vtkInstantiatorvtkStructuredGridLIC2DNew);
  vtkInstantiator::RegisterInstantiator("vtkSurfaceLICDefaultPainter", vtkInstantiatorvtkSurfaceLICDefaultPainterNew);
  vtkInstantiator::RegisterInstantiator("vtkSurfaceLICPainter", vtkInstantiatorvtkSurfaceLICPainterNew);


}

void vtkRenderingLICInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkImageDataLIC2D", vtkInstantiatorvtkImageDataLIC2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStructuredGridLIC2D", vtkInstantiatorvtkStructuredGridLIC2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSurfaceLICDefaultPainter", vtkInstantiatorvtkSurfaceLICDefaultPainterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSurfaceLICPainter", vtkInstantiatorvtkSurfaceLICPainterNew);


}

vtkRenderingLICInstantiator::vtkRenderingLICInstantiator()
{
  if(++vtkRenderingLICInstantiator::Count == 1)
    {
    vtkRenderingLICInstantiator::ClassInitialize();
    }
}

vtkRenderingLICInstantiator::~vtkRenderingLICInstantiator()
{
  if(--vtkRenderingLICInstantiator::Count == 0)
    {
    vtkRenderingLICInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkRenderingLICInstantiator::Count;
