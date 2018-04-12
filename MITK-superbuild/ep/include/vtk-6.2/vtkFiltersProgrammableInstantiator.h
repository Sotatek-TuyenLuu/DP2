#ifndef __vtkFiltersProgrammableInstantiator_h
#define __vtkFiltersProgrammableInstantiator_h

#include "vtkInstantiator.h"

#include "vtkFiltersProgrammableModule.h"


class VTKFILTERSPROGRAMMABLE_EXPORT vtkFiltersProgrammableInstantiator
{
  public:
  vtkFiltersProgrammableInstantiator();
  ~vtkFiltersProgrammableInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkFiltersProgrammableInstantiator vtkFiltersProgrammableInstantiatorInitializer;

#endif
