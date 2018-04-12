#ifndef __vtkImagingMathInstantiator_h
#define __vtkImagingMathInstantiator_h

#include "vtkInstantiator.h"

#include "vtkImagingMathModule.h"


class VTKIMAGINGMATH_EXPORT vtkImagingMathInstantiator
{
  public:
  vtkImagingMathInstantiator();
  ~vtkImagingMathInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkImagingMathInstantiator vtkImagingMathInstantiatorInitializer;

#endif
