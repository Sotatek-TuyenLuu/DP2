#include "vtkFiltersProgrammableInstantiator.h"
#include "vtkProgrammableAttributeDataFilter.h"
#include "vtkProgrammableFilter.h"
#include "vtkProgrammableGlyphFilter.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkProgrammableAttributeDataFilter)
vtkInstantiatorNewMacro(vtkProgrammableFilter)
vtkInstantiatorNewMacro(vtkProgrammableGlyphFilter)



void vtkFiltersProgrammableInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkProgrammableAttributeDataFilter", vtkInstantiatorvtkProgrammableAttributeDataFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkProgrammableFilter", vtkInstantiatorvtkProgrammableFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkProgrammableGlyphFilter", vtkInstantiatorvtkProgrammableGlyphFilterNew);


}

void vtkFiltersProgrammableInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkProgrammableAttributeDataFilter", vtkInstantiatorvtkProgrammableAttributeDataFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProgrammableFilter", vtkInstantiatorvtkProgrammableFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProgrammableGlyphFilter", vtkInstantiatorvtkProgrammableGlyphFilterNew);


}

vtkFiltersProgrammableInstantiator::vtkFiltersProgrammableInstantiator()
{
  if(++vtkFiltersProgrammableInstantiator::Count == 1)
    {
    vtkFiltersProgrammableInstantiator::ClassInitialize();
    }
}

vtkFiltersProgrammableInstantiator::~vtkFiltersProgrammableInstantiator()
{
  if(--vtkFiltersProgrammableInstantiator::Count == 0)
    {
    vtkFiltersProgrammableInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkFiltersProgrammableInstantiator::Count;
