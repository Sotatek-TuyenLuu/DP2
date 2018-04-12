#ifndef __vtkIOXMLParserInstantiator_h
#define __vtkIOXMLParserInstantiator_h

#include "vtkInstantiator.h"

#include "vtkIOXMLParserModule.h"


class VTKIOXMLPARSER_EXPORT vtkIOXMLParserInstantiator
{
  public:
  vtkIOXMLParserInstantiator();
  ~vtkIOXMLParserInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkIOXMLParserInstantiator vtkIOXMLParserInstantiatorInitializer;

#endif
