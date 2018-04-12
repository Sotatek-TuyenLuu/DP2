#ifndef __vtkCommonDataModelInstantiator_h
#define __vtkCommonDataModelInstantiator_h

#include "vtkInstantiator.h"

#include "vtkCommonDataModelModule.h"


class VTKCOMMONDATAMODEL_EXPORT vtkCommonDataModelInstantiator
{
  public:
  vtkCommonDataModelInstantiator();
  ~vtkCommonDataModelInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkCommonDataModelInstantiator vtkCommonDataModelInstantiatorInitializer;

#endif
