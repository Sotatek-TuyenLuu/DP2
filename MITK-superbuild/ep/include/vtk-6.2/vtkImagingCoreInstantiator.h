#ifndef __vtkImagingCoreInstantiator_h
#define __vtkImagingCoreInstantiator_h

#include "vtkInstantiator.h"

#include "vtkImagingCoreModule.h"


class VTKIMAGINGCORE_EXPORT vtkImagingCoreInstantiator
{
  public:
  vtkImagingCoreInstantiator();
  ~vtkImagingCoreInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkImagingCoreInstantiator vtkImagingCoreInstantiatorInitializer;

#endif
