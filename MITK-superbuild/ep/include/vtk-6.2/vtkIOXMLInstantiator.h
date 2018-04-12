#ifndef __vtkIOXMLInstantiator_h
#define __vtkIOXMLInstantiator_h

#include "vtkInstantiator.h"

#include "vtkIOXMLModule.h"


class VTKIOXML_EXPORT vtkIOXMLInstantiator
{
  public:
  vtkIOXMLInstantiator();
  ~vtkIOXMLInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkIOXMLInstantiator vtkIOXMLInstantiatorInitializer;

#endif
