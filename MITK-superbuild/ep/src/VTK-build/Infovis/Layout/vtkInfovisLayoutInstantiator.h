#ifndef __vtkInfovisLayoutInstantiator_h
#define __vtkInfovisLayoutInstantiator_h

#include "vtkInstantiator.h"

#include "vtkInfovisLayoutModule.h"


class VTKINFOVISLAYOUT_EXPORT vtkInfovisLayoutInstantiator
{
  public:
  vtkInfovisLayoutInstantiator();
  ~vtkInfovisLayoutInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkInfovisLayoutInstantiator vtkInfovisLayoutInstantiatorInitializer;

#endif
