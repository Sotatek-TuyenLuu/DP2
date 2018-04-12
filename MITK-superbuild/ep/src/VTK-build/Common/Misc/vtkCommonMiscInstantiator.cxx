#include "vtkCommonMiscInstantiator.h"
#include "vtkContourValues.h"
#include "vtkFunctionParser.h"
#include "vtkHeap.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkContourValues)
vtkInstantiatorNewMacro(vtkFunctionParser)
vtkInstantiatorNewMacro(vtkHeap)



void vtkCommonMiscInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkContourValues", vtkInstantiatorvtkContourValuesNew);
  vtkInstantiator::RegisterInstantiator("vtkFunctionParser", vtkInstantiatorvtkFunctionParserNew);
  vtkInstantiator::RegisterInstantiator("vtkHeap", vtkInstantiatorvtkHeapNew);


}

void vtkCommonMiscInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkContourValues", vtkInstantiatorvtkContourValuesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFunctionParser", vtkInstantiatorvtkFunctionParserNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHeap", vtkInstantiatorvtkHeapNew);


}

vtkCommonMiscInstantiator::vtkCommonMiscInstantiator()
{
  if(++vtkCommonMiscInstantiator::Count == 1)
    {
    vtkCommonMiscInstantiator::ClassInitialize();
    }
}

vtkCommonMiscInstantiator::~vtkCommonMiscInstantiator()
{
  if(--vtkCommonMiscInstantiator::Count == 0)
    {
    vtkCommonMiscInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkCommonMiscInstantiator::Count;
