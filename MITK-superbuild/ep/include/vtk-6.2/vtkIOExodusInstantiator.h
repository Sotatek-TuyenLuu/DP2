#ifndef __vtkIOExodusInstantiator_h
#define __vtkIOExodusInstantiator_h

#include "vtkInstantiator.h"

#include "vtkIOExodusModule.h"


class VTKIOEXODUS_EXPORT vtkIOExodusInstantiator
{
  public:
  vtkIOExodusInstantiator();
  ~vtkIOExodusInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkIOExodusInstantiator vtkIOExodusInstantiatorInitializer;

#endif
