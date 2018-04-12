#include "vtkIOVideoInstantiator.h"
#include "vtkVideoSource.h"
#include "vtkWin32VideoSource.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkVideoSource)
vtkInstantiatorNewMacro(vtkWin32VideoSource)



void vtkIOVideoInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkVideoSource", vtkInstantiatorvtkVideoSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkWin32VideoSource", vtkInstantiatorvtkWin32VideoSourceNew);


}

void vtkIOVideoInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkVideoSource", vtkInstantiatorvtkVideoSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkWin32VideoSource", vtkInstantiatorvtkWin32VideoSourceNew);


}

vtkIOVideoInstantiator::vtkIOVideoInstantiator()
{
  if(++vtkIOVideoInstantiator::Count == 1)
    {
    vtkIOVideoInstantiator::ClassInitialize();
    }
}

vtkIOVideoInstantiator::~vtkIOVideoInstantiator()
{
  if(--vtkIOVideoInstantiator::Count == 0)
    {
    vtkIOVideoInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkIOVideoInstantiator::Count;
