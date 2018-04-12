#ifndef __vtkIOInfovisInstantiator_h
#define __vtkIOInfovisInstantiator_h

#include "vtkInstantiator.h"

#include "vtkIOInfovisModule.h"


class VTKIOINFOVIS_EXPORT vtkIOInfovisInstantiator
{
  public:
  vtkIOInfovisInstantiator();
  ~vtkIOInfovisInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkIOInfovisInstantiator vtkIOInfovisInstantiatorInitializer;

#endif
