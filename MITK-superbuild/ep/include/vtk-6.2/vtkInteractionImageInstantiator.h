#ifndef __vtkInteractionImageInstantiator_h
#define __vtkInteractionImageInstantiator_h

#include "vtkInstantiator.h"

#include "vtkInteractionImageModule.h"


class VTKINTERACTIONIMAGE_EXPORT vtkInteractionImageInstantiator
{
  public:
  vtkInteractionImageInstantiator();
  ~vtkInteractionImageInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkInteractionImageInstantiator vtkInteractionImageInstantiatorInitializer;

#endif
