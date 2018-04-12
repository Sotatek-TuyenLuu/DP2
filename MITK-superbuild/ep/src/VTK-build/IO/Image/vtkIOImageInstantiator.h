#ifndef __vtkIOImageInstantiator_h
#define __vtkIOImageInstantiator_h

#include "vtkInstantiator.h"

#include "vtkIOImageModule.h"


class VTKIOIMAGE_EXPORT vtkIOImageInstantiator
{
  public:
  vtkIOImageInstantiator();
  ~vtkIOImageInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkIOImageInstantiator vtkIOImageInstantiatorInitializer;

#endif
