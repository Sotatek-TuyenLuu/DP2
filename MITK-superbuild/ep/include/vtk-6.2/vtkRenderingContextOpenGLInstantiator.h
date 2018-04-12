#ifndef __vtkRenderingContextOpenGLInstantiator_h
#define __vtkRenderingContextOpenGLInstantiator_h

#include "vtkInstantiator.h"

#include "vtkRenderingContextOpenGLModule.h"


class VTKRENDERINGCONTEXTOPENGL_EXPORT vtkRenderingContextOpenGLInstantiator
{
  public:
  vtkRenderingContextOpenGLInstantiator();
  ~vtkRenderingContextOpenGLInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkRenderingContextOpenGLInstantiator vtkRenderingContextOpenGLInstantiatorInitializer;

#endif
