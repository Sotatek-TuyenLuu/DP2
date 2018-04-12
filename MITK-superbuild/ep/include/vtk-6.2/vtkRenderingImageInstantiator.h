#ifndef __vtkRenderingImageInstantiator_h
#define __vtkRenderingImageInstantiator_h

#include "vtkInstantiator.h"

#include "vtkRenderingImageModule.h"


class VTKRENDERINGIMAGE_EXPORT vtkRenderingImageInstantiator
{
  public:
  vtkRenderingImageInstantiator();
  ~vtkRenderingImageInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkRenderingImageInstantiator vtkRenderingImageInstantiatorInitializer;

#endif
