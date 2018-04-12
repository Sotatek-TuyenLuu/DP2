#ifndef __vtkIOParallelXMLInstantiator_h
#define __vtkIOParallelXMLInstantiator_h

#include "vtkInstantiator.h"

#include "vtkIOParallelXMLModule.h"


class VTKIOPARALLELXML_EXPORT vtkIOParallelXMLInstantiator
{
  public:
  vtkIOParallelXMLInstantiator();
  ~vtkIOParallelXMLInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkIOParallelXMLInstantiator vtkIOParallelXMLInstantiatorInitializer;

#endif
