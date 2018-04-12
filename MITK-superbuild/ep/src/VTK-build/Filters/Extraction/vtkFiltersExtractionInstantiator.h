#ifndef __vtkFiltersExtractionInstantiator_h
#define __vtkFiltersExtractionInstantiator_h

#include "vtkInstantiator.h"

#include "vtkFiltersExtractionModule.h"


class VTKFILTERSEXTRACTION_EXPORT vtkFiltersExtractionInstantiator
{
  public:
  vtkFiltersExtractionInstantiator();
  ~vtkFiltersExtractionInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkFiltersExtractionInstantiator vtkFiltersExtractionInstantiatorInitializer;

#endif
