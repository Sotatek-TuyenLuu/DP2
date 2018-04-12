#include "vtkRenderingContextOpenGLInstantiator.h"
#include "vtkOpenGLContextActor.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkOpenGLContextActor)



void vtkRenderingContextOpenGLInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkOpenGLContextActor", vtkInstantiatorvtkOpenGLContextActorNew);


}

void vtkRenderingContextOpenGLInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLContextActor", vtkInstantiatorvtkOpenGLContextActorNew);


}

vtkRenderingContextOpenGLInstantiator::vtkRenderingContextOpenGLInstantiator()
{
  if(++vtkRenderingContextOpenGLInstantiator::Count == 1)
    {
    vtkRenderingContextOpenGLInstantiator::ClassInitialize();
    }
}

vtkRenderingContextOpenGLInstantiator::~vtkRenderingContextOpenGLInstantiator()
{
  if(--vtkRenderingContextOpenGLInstantiator::Count == 0)
    {
    vtkRenderingContextOpenGLInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkRenderingContextOpenGLInstantiator::Count;
