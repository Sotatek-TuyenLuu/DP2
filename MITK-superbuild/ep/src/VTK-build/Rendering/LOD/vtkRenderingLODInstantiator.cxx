#include "vtkRenderingLODInstantiator.h"
#include "vtkLODActor.h"
#include "vtkQuadricLODActor.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkLODActor)
vtkInstantiatorNewMacro(vtkQuadricLODActor)



void vtkRenderingLODInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkLODActor", vtkInstantiatorvtkLODActorNew);
  vtkInstantiator::RegisterInstantiator("vtkQuadricLODActor", vtkInstantiatorvtkQuadricLODActorNew);


}

void vtkRenderingLODInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkLODActor", vtkInstantiatorvtkLODActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkQuadricLODActor", vtkInstantiatorvtkQuadricLODActorNew);


}

vtkRenderingLODInstantiator::vtkRenderingLODInstantiator()
{
  if(++vtkRenderingLODInstantiator::Count == 1)
    {
    vtkRenderingLODInstantiator::ClassInitialize();
    }
}

vtkRenderingLODInstantiator::~vtkRenderingLODInstantiator()
{
  if(--vtkRenderingLODInstantiator::Count == 0)
    {
    vtkRenderingLODInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkRenderingLODInstantiator::Count;
