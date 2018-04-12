#ifndef __vtkFiltersFlowPathsInstantiator_h
#define __vtkFiltersFlowPathsInstantiator_h

#include "vtkInstantiator.h"

#include "vtkFiltersFlowPathsModule.h"


class VTKFILTERSFLOWPATHS_EXPORT vtkFiltersFlowPathsInstantiator
{
  public:
  vtkFiltersFlowPathsInstantiator();
  ~vtkFiltersFlowPathsInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkFiltersFlowPathsInstantiator vtkFiltersFlowPathsInstantiatorInitializer;

#endif
