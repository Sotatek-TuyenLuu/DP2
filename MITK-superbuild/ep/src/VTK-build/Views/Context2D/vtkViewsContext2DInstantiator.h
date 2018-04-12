#ifndef __vtkViewsContext2DInstantiator_h
#define __vtkViewsContext2DInstantiator_h

#include "vtkInstantiator.h"

#include "vtkViewsContext2DModule.h"


class VTKVIEWSCONTEXT2D_EXPORT vtkViewsContext2DInstantiator
{
  public:
  vtkViewsContext2DInstantiator();
  ~vtkViewsContext2DInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkViewsContext2DInstantiator vtkViewsContext2DInstantiatorInitializer;

#endif
