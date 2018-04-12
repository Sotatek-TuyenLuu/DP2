#ifndef __vtkViewsInfovisInstantiator_h
#define __vtkViewsInfovisInstantiator_h

#include "vtkInstantiator.h"

#include "vtkViewsInfovisModule.h"


class VTKVIEWSINFOVIS_EXPORT vtkViewsInfovisInstantiator
{
  public:
  vtkViewsInfovisInstantiator();
  ~vtkViewsInfovisInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkViewsInfovisInstantiator vtkViewsInfovisInstantiatorInitializer;

#endif
