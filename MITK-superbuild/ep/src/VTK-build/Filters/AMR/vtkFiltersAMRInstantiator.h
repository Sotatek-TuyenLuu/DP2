#ifndef __vtkFiltersAMRInstantiator_h
#define __vtkFiltersAMRInstantiator_h

#include "vtkInstantiator.h"

#include "vtkFiltersAMRModule.h"


class VTKFILTERSAMR_EXPORT vtkFiltersAMRInstantiator
{
  public:
  vtkFiltersAMRInstantiator();
  ~vtkFiltersAMRInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkFiltersAMRInstantiator vtkFiltersAMRInstantiatorInitializer;

#endif
