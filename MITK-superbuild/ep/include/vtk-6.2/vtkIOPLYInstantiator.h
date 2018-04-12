#ifndef __vtkIOPLYInstantiator_h
#define __vtkIOPLYInstantiator_h

#include "vtkInstantiator.h"

#include "vtkIOPLYModule.h"


class VTKIOPLY_EXPORT vtkIOPLYInstantiator
{
  public:
  vtkIOPLYInstantiator();
  ~vtkIOPLYInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkIOPLYInstantiator vtkIOPLYInstantiatorInitializer;

#endif
