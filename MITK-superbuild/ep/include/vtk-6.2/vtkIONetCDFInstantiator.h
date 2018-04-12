#ifndef __vtkIONetCDFInstantiator_h
#define __vtkIONetCDFInstantiator_h

#include "vtkInstantiator.h"

#include "vtkIONetCDFModule.h"


class VTKIONETCDF_EXPORT vtkIONetCDFInstantiator
{
  public:
  vtkIONetCDFInstantiator();
  ~vtkIONetCDFInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkIONetCDFInstantiator vtkIONetCDFInstantiatorInitializer;

#endif
