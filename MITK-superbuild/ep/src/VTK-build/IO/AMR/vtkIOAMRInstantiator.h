#ifndef __vtkIOAMRInstantiator_h
#define __vtkIOAMRInstantiator_h

#include "vtkInstantiator.h"

#include "vtkIOAMRModule.h"


class VTKIOAMR_EXPORT vtkIOAMRInstantiator
{
  public:
  vtkIOAMRInstantiator();
  ~vtkIOAMRInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkIOAMRInstantiator vtkIOAMRInstantiatorInitializer;

#endif
