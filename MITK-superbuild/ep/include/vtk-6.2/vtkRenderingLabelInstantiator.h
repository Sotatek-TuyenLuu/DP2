#ifndef __vtkRenderingLabelInstantiator_h
#define __vtkRenderingLabelInstantiator_h

#include "vtkInstantiator.h"

#include "vtkRenderingLabelModule.h"


class VTKRENDERINGLABEL_EXPORT vtkRenderingLabelInstantiator
{
  public:
  vtkRenderingLabelInstantiator();
  ~vtkRenderingLabelInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkRenderingLabelInstantiator vtkRenderingLabelInstantiatorInitializer;

#endif
