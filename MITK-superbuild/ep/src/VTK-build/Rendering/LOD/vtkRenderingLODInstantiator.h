#ifndef __vtkRenderingLODInstantiator_h
#define __vtkRenderingLODInstantiator_h

#include "vtkInstantiator.h"

#include "vtkRenderingLODModule.h"


class VTKRENDERINGLOD_EXPORT vtkRenderingLODInstantiator
{
  public:
  vtkRenderingLODInstantiator();
  ~vtkRenderingLODInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkRenderingLODInstantiator vtkRenderingLODInstantiatorInitializer;

#endif
