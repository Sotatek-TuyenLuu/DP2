#include "vtkIOLSDynaInstantiator.h"
#include "vtkLSDynaReader.h"
#include "vtkLSDynaSummaryParser.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkLSDynaReader)
vtkInstantiatorNewMacro(vtkLSDynaSummaryParser)



void vtkIOLSDynaInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkLSDynaReader", vtkInstantiatorvtkLSDynaReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkLSDynaSummaryParser", vtkInstantiatorvtkLSDynaSummaryParserNew);


}

void vtkIOLSDynaInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkLSDynaReader", vtkInstantiatorvtkLSDynaReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLSDynaSummaryParser", vtkInstantiatorvtkLSDynaSummaryParserNew);


}

vtkIOLSDynaInstantiator::vtkIOLSDynaInstantiator()
{
  if(++vtkIOLSDynaInstantiator::Count == 1)
    {
    vtkIOLSDynaInstantiator::ClassInitialize();
    }
}

vtkIOLSDynaInstantiator::~vtkIOLSDynaInstantiator()
{
  if(--vtkIOLSDynaInstantiator::Count == 0)
    {
    vtkIOLSDynaInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkIOLSDynaInstantiator::Count;
