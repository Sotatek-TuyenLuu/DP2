#include "vtkRenderingFreeTypeOpenGLInstantiator.h"
#include "vtkOpenGLFreeTypeTextMapper.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkOpenGLFreeTypeTextMapper)



void vtkRenderingFreeTypeOpenGLInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkOpenGLFreeTypeTextMapper", vtkInstantiatorvtkOpenGLFreeTypeTextMapperNew);


}

void vtkRenderingFreeTypeOpenGLInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLFreeTypeTextMapper", vtkInstantiatorvtkOpenGLFreeTypeTextMapperNew);


}

vtkRenderingFreeTypeOpenGLInstantiator::vtkRenderingFreeTypeOpenGLInstantiator()
{
  if(++vtkRenderingFreeTypeOpenGLInstantiator::Count == 1)
    {
    vtkRenderingFreeTypeOpenGLInstantiator::ClassInitialize();
    }
}

vtkRenderingFreeTypeOpenGLInstantiator::~vtkRenderingFreeTypeOpenGLInstantiator()
{
  if(--vtkRenderingFreeTypeOpenGLInstantiator::Count == 0)
    {
    vtkRenderingFreeTypeOpenGLInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkRenderingFreeTypeOpenGLInstantiator::Count;
