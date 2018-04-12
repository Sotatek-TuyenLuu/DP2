#ifndef __vtkCommonSystemInstantiator_h
#define __vtkCommonSystemInstantiator_h

#include "vtkInstantiator.h"

#include "vtkCommonSystemModule.h"


class VTKCOMMONSYSTEM_EXPORT vtkCommonSystemInstantiator
{
  public:
  vtkCommonSystemInstantiator();
  ~vtkCommonSystemInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkCommonSystemInstantiator vtkCommonSystemInstantiatorInitializer;

#endif
