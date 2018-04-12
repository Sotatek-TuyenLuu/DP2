#ifndef __vtkFiltersStatisticsInstantiator_h
#define __vtkFiltersStatisticsInstantiator_h

#include "vtkInstantiator.h"

#include "vtkFiltersStatisticsModule.h"


class VTKFILTERSSTATISTICS_EXPORT vtkFiltersStatisticsInstantiator
{
  public:
  vtkFiltersStatisticsInstantiator();
  ~vtkFiltersStatisticsInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkFiltersStatisticsInstantiator vtkFiltersStatisticsInstantiatorInitializer;

#endif
