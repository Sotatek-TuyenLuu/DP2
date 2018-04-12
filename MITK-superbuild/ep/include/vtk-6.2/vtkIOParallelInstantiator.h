#ifndef __vtkIOParallelInstantiator_h
#define __vtkIOParallelInstantiator_h

#include "vtkInstantiator.h"

#include "vtkIOParallelModule.h"


class VTKIOPARALLEL_EXPORT vtkIOParallelInstantiator
{
  public:
  vtkIOParallelInstantiator();
  ~vtkIOParallelInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkIOParallelInstantiator vtkIOParallelInstantiatorInitializer;

#endif
