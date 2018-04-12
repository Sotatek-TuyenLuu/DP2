#ifndef __vtkFiltersGeometryInstantiator_h
#define __vtkFiltersGeometryInstantiator_h

#include "vtkInstantiator.h"

#include "vtkFiltersGeometryModule.h"


class VTKFILTERSGEOMETRY_EXPORT vtkFiltersGeometryInstantiator
{
  public:
  vtkFiltersGeometryInstantiator();
  ~vtkFiltersGeometryInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkFiltersGeometryInstantiator vtkFiltersGeometryInstantiatorInitializer;

#endif
