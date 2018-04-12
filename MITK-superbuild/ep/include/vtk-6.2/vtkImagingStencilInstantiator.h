#ifndef __vtkImagingStencilInstantiator_h
#define __vtkImagingStencilInstantiator_h

#include "vtkInstantiator.h"

#include "vtkImagingStencilModule.h"


class VTKIMAGINGSTENCIL_EXPORT vtkImagingStencilInstantiator
{
  public:
  vtkImagingStencilInstantiator();
  ~vtkImagingStencilInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkImagingStencilInstantiator vtkImagingStencilInstantiatorInitializer;

#endif
