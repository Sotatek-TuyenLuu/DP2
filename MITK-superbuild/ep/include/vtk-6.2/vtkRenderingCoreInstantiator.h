#ifndef __vtkRenderingCoreInstantiator_h
#define __vtkRenderingCoreInstantiator_h

#include "vtkInstantiator.h"

#include "vtkRenderingCoreModule.h"


class VTKRENDERINGCORE_EXPORT vtkRenderingCoreInstantiator
{
  public:
  vtkRenderingCoreInstantiator();
  ~vtkRenderingCoreInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkRenderingCoreInstantiator vtkRenderingCoreInstantiatorInitializer;

#endif
