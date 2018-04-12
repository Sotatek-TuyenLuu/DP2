#ifndef __vtkRenderingVolumeOpenGLInstantiator_h
#define __vtkRenderingVolumeOpenGLInstantiator_h

#include "vtkInstantiator.h"

#include "vtkRenderingVolumeOpenGLModule.h"


class VTKRENDERINGVOLUMEOPENGL_EXPORT vtkRenderingVolumeOpenGLInstantiator
{
  public:
  vtkRenderingVolumeOpenGLInstantiator();
  ~vtkRenderingVolumeOpenGLInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkRenderingVolumeOpenGLInstantiator vtkRenderingVolumeOpenGLInstantiatorInitializer;

#endif
