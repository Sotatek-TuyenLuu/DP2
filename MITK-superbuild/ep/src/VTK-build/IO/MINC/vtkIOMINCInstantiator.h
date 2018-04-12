#ifndef __vtkIOMINCInstantiator_h
#define __vtkIOMINCInstantiator_h

#include "vtkInstantiator.h"

#include "vtkIOMINCModule.h"


class VTKIOMINC_EXPORT vtkIOMINCInstantiator
{
  public:
  vtkIOMINCInstantiator();
  ~vtkIOMINCInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkIOMINCInstantiator vtkIOMINCInstantiatorInitializer;

#endif
