#ifndef __vtkRenderingVolumeInstantiator_h
#define __vtkRenderingVolumeInstantiator_h

#include "vtkInstantiator.h"

#include "vtkRenderingVolumeModule.h"


class VTKRENDERINGVOLUME_EXPORT vtkRenderingVolumeInstantiator
{
  public:
  vtkRenderingVolumeInstantiator();
  ~vtkRenderingVolumeInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkRenderingVolumeInstantiator vtkRenderingVolumeInstantiatorInitializer;

#endif
