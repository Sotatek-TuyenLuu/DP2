#ifndef __vtkIOExportInstantiator_h
#define __vtkIOExportInstantiator_h

#include "vtkInstantiator.h"

#include "vtkIOExportModule.h"


class VTKIOEXPORT_EXPORT vtkIOExportInstantiator
{
  public:
  vtkIOExportInstantiator();
  ~vtkIOExportInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkIOExportInstantiator vtkIOExportInstantiatorInitializer;

#endif
