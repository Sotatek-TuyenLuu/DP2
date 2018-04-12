#ifndef __vtkFiltersGeneralInstantiator_h
#define __vtkFiltersGeneralInstantiator_h

#include "vtkInstantiator.h"

#include "vtkFiltersGeneralModule.h"


class VTKFILTERSGENERAL_EXPORT vtkFiltersGeneralInstantiator
{
  public:
  vtkFiltersGeneralInstantiator();
  ~vtkFiltersGeneralInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkFiltersGeneralInstantiator vtkFiltersGeneralInstantiatorInitializer;

#endif
