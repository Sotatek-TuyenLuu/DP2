#ifndef __vtkParallelCoreInstantiator_h
#define __vtkParallelCoreInstantiator_h

#include "vtkInstantiator.h"

#include "vtkParallelCoreModule.h"


class VTKPARALLELCORE_EXPORT vtkParallelCoreInstantiator
{
  public:
  vtkParallelCoreInstantiator();
  ~vtkParallelCoreInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkParallelCoreInstantiator vtkParallelCoreInstantiatorInitializer;

#endif
