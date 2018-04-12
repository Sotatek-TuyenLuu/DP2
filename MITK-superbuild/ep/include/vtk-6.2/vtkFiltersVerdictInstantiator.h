#ifndef __vtkFiltersVerdictInstantiator_h
#define __vtkFiltersVerdictInstantiator_h

#include "vtkInstantiator.h"

#include "vtkFiltersVerdictModule.h"


class VTKFILTERSVERDICT_EXPORT vtkFiltersVerdictInstantiator
{
  public:
  vtkFiltersVerdictInstantiator();
  ~vtkFiltersVerdictInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkFiltersVerdictInstantiator vtkFiltersVerdictInstantiatorInitializer;

#endif
