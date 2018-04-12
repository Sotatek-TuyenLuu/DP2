#ifndef __vtkFiltersParallelInstantiator_h
#define __vtkFiltersParallelInstantiator_h

#include "vtkInstantiator.h"

#include "vtkFiltersParallelModule.h"


class VTKFILTERSPARALLEL_EXPORT vtkFiltersParallelInstantiator
{
  public:
  vtkFiltersParallelInstantiator();
  ~vtkFiltersParallelInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkFiltersParallelInstantiator vtkFiltersParallelInstantiatorInitializer;

#endif
