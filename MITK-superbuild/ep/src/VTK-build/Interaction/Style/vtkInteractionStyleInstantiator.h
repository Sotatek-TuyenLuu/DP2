#ifndef __vtkInteractionStyleInstantiator_h
#define __vtkInteractionStyleInstantiator_h

#include "vtkInstantiator.h"

#include "vtkInteractionStyleModule.h"


class VTKINTERACTIONSTYLE_EXPORT vtkInteractionStyleInstantiator
{
  public:
  vtkInteractionStyleInstantiator();
  ~vtkInteractionStyleInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkInteractionStyleInstantiator vtkInteractionStyleInstantiatorInitializer;

#endif
