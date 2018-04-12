#ifndef __vtkRenderingFreeTypeOpenGLInstantiator_h
#define __vtkRenderingFreeTypeOpenGLInstantiator_h

#include "vtkInstantiator.h"

#include "vtkRenderingFreeTypeOpenGLModule.h"


class VTKRENDERINGFREETYPEOPENGL_EXPORT vtkRenderingFreeTypeOpenGLInstantiator
{
  public:
  vtkRenderingFreeTypeOpenGLInstantiator();
  ~vtkRenderingFreeTypeOpenGLInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkRenderingFreeTypeOpenGLInstantiator vtkRenderingFreeTypeOpenGLInstantiatorInitializer;

#endif
