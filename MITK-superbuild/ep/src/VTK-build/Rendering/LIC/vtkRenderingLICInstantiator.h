#ifndef __vtkRenderingLICInstantiator_h
#define __vtkRenderingLICInstantiator_h

#include "vtkInstantiator.h"

#include "vtkRenderingLICModule.h"


class VTKRENDERINGLIC_EXPORT vtkRenderingLICInstantiator
{
  public:
  vtkRenderingLICInstantiator();
  ~vtkRenderingLICInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkRenderingLICInstantiator vtkRenderingLICInstantiatorInitializer;

#endif
