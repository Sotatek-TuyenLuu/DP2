#ifndef __vtkIOLSDynaInstantiator_h
#define __vtkIOLSDynaInstantiator_h

#include "vtkInstantiator.h"

#include "vtkIOLSDynaModule.h"


class VTKIOLSDYNA_EXPORT vtkIOLSDynaInstantiator
{
  public:
  vtkIOLSDynaInstantiator();
  ~vtkIOLSDynaInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkIOLSDynaInstantiator vtkIOLSDynaInstantiatorInitializer;

#endif
