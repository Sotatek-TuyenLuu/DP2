#ifndef __vtkFiltersSMPInstantiator_h
#define __vtkFiltersSMPInstantiator_h

#include "vtkInstantiator.h"

#include "vtkFiltersSMPModule.h"


class VTKFILTERSSMP_EXPORT vtkFiltersSMPInstantiator
{
  public:
  vtkFiltersSMPInstantiator();
  ~vtkFiltersSMPInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkFiltersSMPInstantiator vtkFiltersSMPInstantiatorInitializer;

#endif
