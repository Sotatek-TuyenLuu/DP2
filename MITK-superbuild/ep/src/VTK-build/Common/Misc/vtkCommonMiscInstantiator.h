#ifndef __vtkCommonMiscInstantiator_h
#define __vtkCommonMiscInstantiator_h

#include "vtkInstantiator.h"

#include "vtkCommonMiscModule.h"


class VTKCOMMONMISC_EXPORT vtkCommonMiscInstantiator
{
  public:
  vtkCommonMiscInstantiator();
  ~vtkCommonMiscInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkCommonMiscInstantiator vtkCommonMiscInstantiatorInitializer;

#endif
