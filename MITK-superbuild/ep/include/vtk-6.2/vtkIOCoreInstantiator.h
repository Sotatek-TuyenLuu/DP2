#ifndef __vtkIOCoreInstantiator_h
#define __vtkIOCoreInstantiator_h

#include "vtkInstantiator.h"

#include "vtkIOCoreModule.h"


class VTKIOCORE_EXPORT vtkIOCoreInstantiator
{
  public:
  vtkIOCoreInstantiator();
  ~vtkIOCoreInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkIOCoreInstantiator vtkIOCoreInstantiatorInitializer;

#endif
