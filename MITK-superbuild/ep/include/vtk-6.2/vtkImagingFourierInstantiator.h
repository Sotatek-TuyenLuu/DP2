#ifndef __vtkImagingFourierInstantiator_h
#define __vtkImagingFourierInstantiator_h

#include "vtkInstantiator.h"

#include "vtkImagingFourierModule.h"


class VTKIMAGINGFOURIER_EXPORT vtkImagingFourierInstantiator
{
  public:
  vtkImagingFourierInstantiator();
  ~vtkImagingFourierInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkImagingFourierInstantiator vtkImagingFourierInstantiatorInitializer;

#endif
