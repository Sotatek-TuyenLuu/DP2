#ifndef __vtkCommonComputationalGeometryInstantiator_h
#define __vtkCommonComputationalGeometryInstantiator_h

#include "vtkInstantiator.h"

#include "vtkCommonComputationalGeometryModule.h"


class VTKCOMMONCOMPUTATIONALGEOMETRY_EXPORT vtkCommonComputationalGeometryInstantiator
{
  public:
  vtkCommonComputationalGeometryInstantiator();
  ~vtkCommonComputationalGeometryInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkCommonComputationalGeometryInstantiator vtkCommonComputationalGeometryInstantiatorInitializer;

#endif
