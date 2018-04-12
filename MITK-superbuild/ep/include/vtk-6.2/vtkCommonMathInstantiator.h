#ifndef __vtkCommonMathInstantiator_h
#define __vtkCommonMathInstantiator_h

#include "vtkInstantiator.h"

#include "vtkCommonMathModule.h"


class VTKCOMMONMATH_EXPORT vtkCommonMathInstantiator
{
  public:
  vtkCommonMathInstantiator();
  ~vtkCommonMathInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkCommonMathInstantiator vtkCommonMathInstantiatorInitializer;

#endif
