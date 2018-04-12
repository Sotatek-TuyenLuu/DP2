#ifndef __vtkRenderingAnnotationInstantiator_h
#define __vtkRenderingAnnotationInstantiator_h

#include "vtkInstantiator.h"

#include "vtkRenderingAnnotationModule.h"


class VTKRENDERINGANNOTATION_EXPORT vtkRenderingAnnotationInstantiator
{
  public:
  vtkRenderingAnnotationInstantiator();
  ~vtkRenderingAnnotationInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkRenderingAnnotationInstantiator vtkRenderingAnnotationInstantiatorInitializer;

#endif
