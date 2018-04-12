#ifndef __vtkChartsCoreInstantiator_h
#define __vtkChartsCoreInstantiator_h

#include "vtkInstantiator.h"

#include "vtkChartsCoreModule.h"


class VTKCHARTSCORE_EXPORT vtkChartsCoreInstantiator
{
  public:
  vtkChartsCoreInstantiator();
  ~vtkChartsCoreInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkChartsCoreInstantiator vtkChartsCoreInstantiatorInitializer;

#endif
