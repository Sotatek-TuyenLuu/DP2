#ifndef __vtkFiltersParallelImagingInstantiator_h
#define __vtkFiltersParallelImagingInstantiator_h

#include "vtkInstantiator.h"

#include "vtkFiltersParallelImagingModule.h"


class VTKFILTERSPARALLELIMAGING_EXPORT vtkFiltersParallelImagingInstantiator
{
  public:
  vtkFiltersParallelImagingInstantiator();
  ~vtkFiltersParallelImagingInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkFiltersParallelImagingInstantiator vtkFiltersParallelImagingInstantiatorInitializer;

#endif
