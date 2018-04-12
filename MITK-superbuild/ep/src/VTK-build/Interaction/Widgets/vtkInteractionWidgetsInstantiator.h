#ifndef __vtkInteractionWidgetsInstantiator_h
#define __vtkInteractionWidgetsInstantiator_h

#include "vtkInstantiator.h"

#include "vtkInteractionWidgetsModule.h"


class VTKINTERACTIONWIDGETS_EXPORT vtkInteractionWidgetsInstantiator
{
  public:
  vtkInteractionWidgetsInstantiator();
  ~vtkInteractionWidgetsInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkInteractionWidgetsInstantiator vtkInteractionWidgetsInstantiatorInitializer;

#endif
