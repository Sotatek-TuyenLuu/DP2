#ifndef __vtkInfovisCoreInstantiator_h
#define __vtkInfovisCoreInstantiator_h

#include "vtkInstantiator.h"

#include "vtkInfovisCoreModule.h"


class VTKINFOVISCORE_EXPORT vtkInfovisCoreInstantiator
{
  public:
  vtkInfovisCoreInstantiator();
  ~vtkInfovisCoreInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkInfovisCoreInstantiator vtkInfovisCoreInstantiatorInitializer;

#endif
