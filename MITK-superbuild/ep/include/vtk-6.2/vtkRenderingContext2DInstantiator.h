#ifndef __vtkRenderingContext2DInstantiator_h
#define __vtkRenderingContext2DInstantiator_h

#include "vtkInstantiator.h"

#include "vtkRenderingContext2DModule.h"


class VTKRENDERINGCONTEXT2D_EXPORT vtkRenderingContext2DInstantiator
{
  public:
  vtkRenderingContext2DInstantiator();
  ~vtkRenderingContext2DInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkRenderingContext2DInstantiator vtkRenderingContext2DInstantiatorInitializer;

#endif
