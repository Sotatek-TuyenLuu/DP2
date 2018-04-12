#include "vtkIOPLYInstantiator.h"
#include "vtkPLYReader.h"
#include "vtkPLYWriter.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkPLYReader)
vtkInstantiatorNewMacro(vtkPLYWriter)



void vtkIOPLYInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkPLYReader", vtkInstantiatorvtkPLYReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkPLYWriter", vtkInstantiatorvtkPLYWriterNew);


}

void vtkIOPLYInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkPLYReader", vtkInstantiatorvtkPLYReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPLYWriter", vtkInstantiatorvtkPLYWriterNew);


}

vtkIOPLYInstantiator::vtkIOPLYInstantiator()
{
  if(++vtkIOPLYInstantiator::Count == 1)
    {
    vtkIOPLYInstantiator::ClassInitialize();
    }
}

vtkIOPLYInstantiator::~vtkIOPLYInstantiator()
{
  if(--vtkIOPLYInstantiator::Count == 0)
    {
    vtkIOPLYInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkIOPLYInstantiator::Count;
