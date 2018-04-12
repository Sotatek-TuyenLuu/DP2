#ifndef __vtkCommonColorInstantiator_h
#define __vtkCommonColorInstantiator_h

#include "vtkInstantiator.h"

#include "vtkCommonColorModule.h"


class VTKCOMMONCOLOR_EXPORT vtkCommonColorInstantiator
{
  public:
  vtkCommonColorInstantiator();
  ~vtkCommonColorInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkCommonColorInstantiator vtkCommonColorInstantiatorInitializer;

#endif
