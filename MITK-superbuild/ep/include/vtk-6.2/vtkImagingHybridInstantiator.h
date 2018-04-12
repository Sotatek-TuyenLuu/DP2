#ifndef __vtkImagingHybridInstantiator_h
#define __vtkImagingHybridInstantiator_h

#include "vtkInstantiator.h"

#include "vtkImagingHybridModule.h"


class VTKIMAGINGHYBRID_EXPORT vtkImagingHybridInstantiator
{
  public:
  vtkImagingHybridInstantiator();
  ~vtkImagingHybridInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkImagingHybridInstantiator vtkImagingHybridInstantiatorInitializer;

#endif
