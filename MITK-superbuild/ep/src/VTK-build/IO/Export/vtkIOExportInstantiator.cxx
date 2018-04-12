#include "vtkIOExportInstantiator.h"
#include "vtkIVExporter.h"
#include "vtkOBJExporter.h"
#include "vtkOOGLExporter.h"
#include "vtkPOVExporter.h"
#include "vtkRIBExporter.h"
#include "vtkRIBLight.h"
#include "vtkRIBProperty.h"
#include "vtkVRMLExporter.h"
#include "vtkX3DExporter.h"
#include "vtkGL2PSExporter.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkIVExporter)
vtkInstantiatorNewMacro(vtkOBJExporter)
vtkInstantiatorNewMacro(vtkOOGLExporter)
vtkInstantiatorNewMacro(vtkPOVExporter)
vtkInstantiatorNewMacro(vtkRIBExporter)
vtkInstantiatorNewMacro(vtkRIBLight)
vtkInstantiatorNewMacro(vtkRIBProperty)
vtkInstantiatorNewMacro(vtkVRMLExporter)
vtkInstantiatorNewMacro(vtkX3DExporter)
vtkInstantiatorNewMacro(vtkGL2PSExporter)



void vtkIOExportInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkIVExporter", vtkInstantiatorvtkIVExporterNew);
  vtkInstantiator::RegisterInstantiator("vtkOBJExporter", vtkInstantiatorvtkOBJExporterNew);
  vtkInstantiator::RegisterInstantiator("vtkOOGLExporter", vtkInstantiatorvtkOOGLExporterNew);
  vtkInstantiator::RegisterInstantiator("vtkPOVExporter", vtkInstantiatorvtkPOVExporterNew);
  vtkInstantiator::RegisterInstantiator("vtkRIBExporter", vtkInstantiatorvtkRIBExporterNew);
  vtkInstantiator::RegisterInstantiator("vtkRIBLight", vtkInstantiatorvtkRIBLightNew);
  vtkInstantiator::RegisterInstantiator("vtkRIBProperty", vtkInstantiatorvtkRIBPropertyNew);
  vtkInstantiator::RegisterInstantiator("vtkVRMLExporter", vtkInstantiatorvtkVRMLExporterNew);
  vtkInstantiator::RegisterInstantiator("vtkX3DExporter", vtkInstantiatorvtkX3DExporterNew);
  vtkInstantiator::RegisterInstantiator("vtkGL2PSExporter", vtkInstantiatorvtkGL2PSExporterNew);


}

void vtkIOExportInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkIVExporter", vtkInstantiatorvtkIVExporterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOBJExporter", vtkInstantiatorvtkOBJExporterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOOGLExporter", vtkInstantiatorvtkOOGLExporterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPOVExporter", vtkInstantiatorvtkPOVExporterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRIBExporter", vtkInstantiatorvtkRIBExporterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRIBLight", vtkInstantiatorvtkRIBLightNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRIBProperty", vtkInstantiatorvtkRIBPropertyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVRMLExporter", vtkInstantiatorvtkVRMLExporterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkX3DExporter", vtkInstantiatorvtkX3DExporterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGL2PSExporter", vtkInstantiatorvtkGL2PSExporterNew);


}

vtkIOExportInstantiator::vtkIOExportInstantiator()
{
  if(++vtkIOExportInstantiator::Count == 1)
    {
    vtkIOExportInstantiator::ClassInitialize();
    }
}

vtkIOExportInstantiator::~vtkIOExportInstantiator()
{
  if(--vtkIOExportInstantiator::Count == 0)
    {
    vtkIOExportInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkIOExportInstantiator::Count;
