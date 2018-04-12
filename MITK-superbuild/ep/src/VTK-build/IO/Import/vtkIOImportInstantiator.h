#ifndef __vtkIOImportInstantiator_h
#define __vtkIOImportInstantiator_h

#include "vtkInstantiator.h"

#include "vtkIOImportModule.h"


class VTKIOIMPORT_EXPORT vtkIOImportInstantiator
{
  public:
  vtkIOImportInstantiator();
  ~vtkIOImportInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkIOImportInstantiator vtkIOImportInstantiatorInitializer;

#endif
