#ifndef __vtkTestingRenderingInstantiator_h
#define __vtkTestingRenderingInstantiator_h

#include "vtkInstantiator.h"

#include "vtkTestingRenderingModule.h"


class VTKTESTINGRENDERING_EXPORT vtkTestingRenderingInstantiator
{
  public:
  vtkTestingRenderingInstantiator();
  ~vtkTestingRenderingInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkTestingRenderingInstantiator vtkTestingRenderingInstantiatorInitializer;

#endif
