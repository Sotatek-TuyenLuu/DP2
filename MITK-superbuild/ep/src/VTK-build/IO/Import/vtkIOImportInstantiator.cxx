#include "vtkIOImportInstantiator.h"
#include "vtk3DSImporter.h"
#include "vtkVRMLImporter.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtk3DSImporter)
vtkInstantiatorNewMacro(vtkVRMLImporter)



void vtkIOImportInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtk3DSImporter", vtkInstantiatorvtk3DSImporterNew);
  vtkInstantiator::RegisterInstantiator("vtkVRMLImporter", vtkInstantiatorvtkVRMLImporterNew);


}

void vtkIOImportInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtk3DSImporter", vtkInstantiatorvtk3DSImporterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVRMLImporter", vtkInstantiatorvtkVRMLImporterNew);


}

vtkIOImportInstantiator::vtkIOImportInstantiator()
{
  if(++vtkIOImportInstantiator::Count == 1)
    {
    vtkIOImportInstantiator::ClassInitialize();
    }
}

vtkIOImportInstantiator::~vtkIOImportInstantiator()
{
  if(--vtkIOImportInstantiator::Count == 0)
    {
    vtkIOImportInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkIOImportInstantiator::Count;
