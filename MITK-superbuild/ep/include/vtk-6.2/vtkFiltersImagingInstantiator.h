#ifndef __vtkFiltersImagingInstantiator_h
#define __vtkFiltersImagingInstantiator_h

#include "vtkInstantiator.h"

#include "vtkFiltersImagingModule.h"


class VTKFILTERSIMAGING_EXPORT vtkFiltersImagingInstantiator
{
  public:
  vtkFiltersImagingInstantiator();
  ~vtkFiltersImagingInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkFiltersImagingInstantiator vtkFiltersImagingInstantiatorInitializer;

#endif
