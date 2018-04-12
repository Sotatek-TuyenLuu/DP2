#ifndef __vtkFiltersModelingInstantiator_h
#define __vtkFiltersModelingInstantiator_h

#include "vtkInstantiator.h"

#include "vtkFiltersModelingModule.h"


class VTKFILTERSMODELING_EXPORT vtkFiltersModelingInstantiator
{
  public:
  vtkFiltersModelingInstantiator();
  ~vtkFiltersModelingInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkFiltersModelingInstantiator vtkFiltersModelingInstantiatorInitializer;

#endif
