#ifndef __vtkImagingMorphologicalInstantiator_h
#define __vtkImagingMorphologicalInstantiator_h

#include "vtkInstantiator.h"

#include "vtkImagingMorphologicalModule.h"


class VTKIMAGINGMORPHOLOGICAL_EXPORT vtkImagingMorphologicalInstantiator
{
  public:
  vtkImagingMorphologicalInstantiator();
  ~vtkImagingMorphologicalInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkImagingMorphologicalInstantiator vtkImagingMorphologicalInstantiatorInitializer;

#endif
