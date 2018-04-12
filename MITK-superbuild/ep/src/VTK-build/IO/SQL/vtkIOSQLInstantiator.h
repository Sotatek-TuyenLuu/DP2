#ifndef __vtkIOSQLInstantiator_h
#define __vtkIOSQLInstantiator_h

#include "vtkInstantiator.h"

#include "vtkIOSQLModule.h"


class VTKIOSQL_EXPORT vtkIOSQLInstantiator
{
  public:
  vtkIOSQLInstantiator();
  ~vtkIOSQLInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkIOSQLInstantiator vtkIOSQLInstantiatorInitializer;

#endif
