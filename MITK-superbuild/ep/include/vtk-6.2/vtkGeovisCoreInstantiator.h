#ifndef __vtkGeovisCoreInstantiator_h
#define __vtkGeovisCoreInstantiator_h

#include "vtkInstantiator.h"

#include "vtkGeovisCoreModule.h"


class VTKGEOVISCORE_EXPORT vtkGeovisCoreInstantiator
{
  public:
  vtkGeovisCoreInstantiator();
  ~vtkGeovisCoreInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkGeovisCoreInstantiator vtkGeovisCoreInstantiatorInitializer;

#endif
