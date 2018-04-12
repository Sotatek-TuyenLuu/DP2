#ifndef __vtkImagingColorInstantiator_h
#define __vtkImagingColorInstantiator_h

#include "vtkInstantiator.h"

#include "vtkImagingColorModule.h"


class VTKIMAGINGCOLOR_EXPORT vtkImagingColorInstantiator
{
  public:
  vtkImagingColorInstantiator();
  ~vtkImagingColorInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkImagingColorInstantiator vtkImagingColorInstantiatorInitializer;

#endif
