#ifndef __vtkCommonCoreInstantiator_h
#define __vtkCommonCoreInstantiator_h

#include "vtkInstantiator.h"

#include "vtkCommonCoreModule.h"


class VTKCOMMONCORE_EXPORT vtkCommonCoreInstantiator
{
  public:
  vtkCommonCoreInstantiator();
  ~vtkCommonCoreInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkCommonCoreInstantiator vtkCommonCoreInstantiatorInitializer;

#endif
