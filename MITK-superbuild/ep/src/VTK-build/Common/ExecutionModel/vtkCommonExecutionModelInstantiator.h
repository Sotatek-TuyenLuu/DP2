#ifndef __vtkCommonExecutionModelInstantiator_h
#define __vtkCommonExecutionModelInstantiator_h

#include "vtkInstantiator.h"

#include "vtkCommonExecutionModelModule.h"


class VTKCOMMONEXECUTIONMODEL_EXPORT vtkCommonExecutionModelInstantiator
{
  public:
  vtkCommonExecutionModelInstantiator();
  ~vtkCommonExecutionModelInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkCommonExecutionModelInstantiator vtkCommonExecutionModelInstantiatorInitializer;

#endif
