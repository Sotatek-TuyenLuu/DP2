#ifndef __vtkFiltersSelectionInstantiator_h
#define __vtkFiltersSelectionInstantiator_h

#include "vtkInstantiator.h"

#include "vtkFiltersSelectionModule.h"


class VTKFILTERSSELECTION_EXPORT vtkFiltersSelectionInstantiator
{
  public:
  vtkFiltersSelectionInstantiator();
  ~vtkFiltersSelectionInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkFiltersSelectionInstantiator vtkFiltersSelectionInstantiatorInitializer;

#endif
