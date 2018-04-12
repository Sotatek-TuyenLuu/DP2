#ifndef __vtkFiltersCoreInstantiator_h
#define __vtkFiltersCoreInstantiator_h

#include "vtkInstantiator.h"

#include "vtkFiltersCoreModule.h"


class VTKFILTERSCORE_EXPORT vtkFiltersCoreInstantiator
{
  public:
  vtkFiltersCoreInstantiator();
  ~vtkFiltersCoreInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkFiltersCoreInstantiator vtkFiltersCoreInstantiatorInitializer;

#endif
