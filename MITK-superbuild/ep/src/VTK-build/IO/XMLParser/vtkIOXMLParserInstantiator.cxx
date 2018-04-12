#include "vtkIOXMLParserInstantiator.h"
#include "vtkXMLDataParser.h"
#include "vtkXMLParser.h"
#include "vtkXMLUtilities.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkXMLDataParser)
vtkInstantiatorNewMacro(vtkXMLParser)
vtkInstantiatorNewMacro(vtkXMLUtilities)



void vtkIOXMLParserInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkXMLDataParser", vtkInstantiatorvtkXMLDataParserNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLParser", vtkInstantiatorvtkXMLParserNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLUtilities", vtkInstantiatorvtkXMLUtilitiesNew);


}

void vtkIOXMLParserInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkXMLDataParser", vtkInstantiatorvtkXMLDataParserNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLParser", vtkInstantiatorvtkXMLParserNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLUtilities", vtkInstantiatorvtkXMLUtilitiesNew);


}

vtkIOXMLParserInstantiator::vtkIOXMLParserInstantiator()
{
  if(++vtkIOXMLParserInstantiator::Count == 1)
    {
    vtkIOXMLParserInstantiator::ClassInitialize();
    }
}

vtkIOXMLParserInstantiator::~vtkIOXMLParserInstantiator()
{
  if(--vtkIOXMLParserInstantiator::Count == 0)
    {
    vtkIOXMLParserInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkIOXMLParserInstantiator::Count;
