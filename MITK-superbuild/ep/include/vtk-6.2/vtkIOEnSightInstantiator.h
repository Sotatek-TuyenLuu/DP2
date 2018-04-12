#ifndef __vtkIOEnSightInstantiator_h
#define __vtkIOEnSightInstantiator_h

#include "vtkInstantiator.h"

#include "vtkIOEnSightModule.h"


class VTKIOENSIGHT_EXPORT vtkIOEnSightInstantiator
{
  public:
  vtkIOEnSightInstantiator();
  ~vtkIOEnSightInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkIOEnSightInstantiator vtkIOEnSightInstantiatorInitializer;

#endif
