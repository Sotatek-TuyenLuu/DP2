#ifndef __vtkFiltersHybridInstantiator_h
#define __vtkFiltersHybridInstantiator_h

#include "vtkInstantiator.h"

#include "vtkFiltersHybridModule.h"


class VTKFILTERSHYBRID_EXPORT vtkFiltersHybridInstantiator
{
  public:
  vtkFiltersHybridInstantiator();
  ~vtkFiltersHybridInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkFiltersHybridInstantiator vtkFiltersHybridInstantiatorInitializer;

#endif
