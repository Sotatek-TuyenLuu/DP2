#ifndef __vtkImagingSourcesInstantiator_h
#define __vtkImagingSourcesInstantiator_h

#include "vtkInstantiator.h"

#include "vtkImagingSourcesModule.h"


class VTKIMAGINGSOURCES_EXPORT vtkImagingSourcesInstantiator
{
  public:
  vtkImagingSourcesInstantiator();
  ~vtkImagingSourcesInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkImagingSourcesInstantiator vtkImagingSourcesInstantiatorInitializer;

#endif
