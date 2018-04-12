#ifndef __vtkRenderingGL2PSInstantiator_h
#define __vtkRenderingGL2PSInstantiator_h

#include "vtkInstantiator.h"

#include "vtkRenderingGL2PSModule.h"


class VTKRENDERINGGL2PS_EXPORT vtkRenderingGL2PSInstantiator
{
  public:
  vtkRenderingGL2PSInstantiator();
  ~vtkRenderingGL2PSInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkRenderingGL2PSInstantiator vtkRenderingGL2PSInstantiatorInitializer;

#endif
