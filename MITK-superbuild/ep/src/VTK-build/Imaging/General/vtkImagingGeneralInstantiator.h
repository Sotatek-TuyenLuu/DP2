#ifndef __vtkImagingGeneralInstantiator_h
#define __vtkImagingGeneralInstantiator_h

#include "vtkInstantiator.h"

#include "vtkImagingGeneralModule.h"


class VTKIMAGINGGENERAL_EXPORT vtkImagingGeneralInstantiator
{
  public:
  vtkImagingGeneralInstantiator();
  ~vtkImagingGeneralInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkImagingGeneralInstantiator vtkImagingGeneralInstantiatorInitializer;

#endif
