#ifndef __vtkFiltersSourcesInstantiator_h
#define __vtkFiltersSourcesInstantiator_h

#include "vtkInstantiator.h"

#include "vtkFiltersSourcesModule.h"


class VTKFILTERSSOURCES_EXPORT vtkFiltersSourcesInstantiator
{
  public:
  vtkFiltersSourcesInstantiator();
  ~vtkFiltersSourcesInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkFiltersSourcesInstantiator vtkFiltersSourcesInstantiatorInitializer;

#endif
