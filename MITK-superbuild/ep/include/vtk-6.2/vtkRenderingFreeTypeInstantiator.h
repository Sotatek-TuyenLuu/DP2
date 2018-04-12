#ifndef __vtkRenderingFreeTypeInstantiator_h
#define __vtkRenderingFreeTypeInstantiator_h

#include "vtkInstantiator.h"

#include "vtkRenderingFreeTypeModule.h"


class VTKRENDERINGFREETYPE_EXPORT vtkRenderingFreeTypeInstantiator
{
  public:
  vtkRenderingFreeTypeInstantiator();
  ~vtkRenderingFreeTypeInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkRenderingFreeTypeInstantiator vtkRenderingFreeTypeInstantiatorInitializer;

#endif
