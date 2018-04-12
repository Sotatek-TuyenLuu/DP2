#ifndef __vtkIOLegacyInstantiator_h
#define __vtkIOLegacyInstantiator_h

#include "vtkInstantiator.h"

#include "vtkIOLegacyModule.h"


class VTKIOLEGACY_EXPORT vtkIOLegacyInstantiator
{
  public:
  vtkIOLegacyInstantiator();
  ~vtkIOLegacyInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkIOLegacyInstantiator vtkIOLegacyInstantiatorInitializer;

#endif
