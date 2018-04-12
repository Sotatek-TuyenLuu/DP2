#ifndef __vtkIOVideoInstantiator_h
#define __vtkIOVideoInstantiator_h

#include "vtkInstantiator.h"

#include "vtkIOVideoModule.h"


class VTKIOVIDEO_EXPORT vtkIOVideoInstantiator
{
  public:
  vtkIOVideoInstantiator();
  ~vtkIOVideoInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkIOVideoInstantiator vtkIOVideoInstantiatorInitializer;

#endif
