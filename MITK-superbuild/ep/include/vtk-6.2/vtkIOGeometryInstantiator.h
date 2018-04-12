#ifndef __vtkIOGeometryInstantiator_h
#define __vtkIOGeometryInstantiator_h

#include "vtkInstantiator.h"

#include "vtkIOGeometryModule.h"


class VTKIOGEOMETRY_EXPORT vtkIOGeometryInstantiator
{
  public:
  vtkIOGeometryInstantiator();
  ~vtkIOGeometryInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkIOGeometryInstantiator vtkIOGeometryInstantiatorInitializer;

#endif
