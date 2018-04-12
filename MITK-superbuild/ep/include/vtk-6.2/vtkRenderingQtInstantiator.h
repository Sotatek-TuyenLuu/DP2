#ifndef __vtkRenderingQtInstantiator_h
#define __vtkRenderingQtInstantiator_h

#include "vtkInstantiator.h"

#include "vtkRenderingQtModule.h"


class VTKRENDERINGQT_EXPORT vtkRenderingQtInstantiator
{
  public:
  vtkRenderingQtInstantiator();
  ~vtkRenderingQtInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkRenderingQtInstantiator vtkRenderingQtInstantiatorInitializer;

#endif
