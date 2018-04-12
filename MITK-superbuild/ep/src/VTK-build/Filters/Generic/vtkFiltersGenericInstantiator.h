#ifndef __vtkFiltersGenericInstantiator_h
#define __vtkFiltersGenericInstantiator_h

#include "vtkInstantiator.h"

#include "vtkFiltersGenericModule.h"


class VTKFILTERSGENERIC_EXPORT vtkFiltersGenericInstantiator
{
  public:
  vtkFiltersGenericInstantiator();
  ~vtkFiltersGenericInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkFiltersGenericInstantiator vtkFiltersGenericInstantiatorInitializer;

#endif
