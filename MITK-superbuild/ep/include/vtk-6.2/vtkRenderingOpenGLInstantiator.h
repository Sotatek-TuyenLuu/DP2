#ifndef __vtkRenderingOpenGLInstantiator_h
#define __vtkRenderingOpenGLInstantiator_h

#include "vtkInstantiator.h"

#include "vtkRenderingOpenGLModule.h"


class VTKRENDERINGOPENGL_EXPORT vtkRenderingOpenGLInstantiator
{
  public:
  vtkRenderingOpenGLInstantiator();
  ~vtkRenderingOpenGLInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkRenderingOpenGLInstantiator vtkRenderingOpenGLInstantiatorInitializer;

#endif
