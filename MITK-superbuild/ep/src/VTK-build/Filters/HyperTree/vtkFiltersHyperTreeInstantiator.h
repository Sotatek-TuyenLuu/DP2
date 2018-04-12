#ifndef __vtkFiltersHyperTreeInstantiator_h
#define __vtkFiltersHyperTreeInstantiator_h

#include "vtkInstantiator.h"

#include "vtkFiltersHyperTreeModule.h"


class VTKFILTERSHYPERTREE_EXPORT vtkFiltersHyperTreeInstantiator
{
  public:
  vtkFiltersHyperTreeInstantiator();
  ~vtkFiltersHyperTreeInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkFiltersHyperTreeInstantiator vtkFiltersHyperTreeInstantiatorInitializer;

#endif
