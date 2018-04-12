#ifndef __vtkCommonTransformsInstantiator_h
#define __vtkCommonTransformsInstantiator_h

#include "vtkInstantiator.h"

#include "vtkCommonTransformsModule.h"


class VTKCOMMONTRANSFORMS_EXPORT vtkCommonTransformsInstantiator
{
  public:
  vtkCommonTransformsInstantiator();
  ~vtkCommonTransformsInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkCommonTransformsInstantiator vtkCommonTransformsInstantiatorInitializer;

#endif
