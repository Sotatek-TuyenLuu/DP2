#include "vtkIOAMRInstantiator.h"
#include "vtkAMRDataSetCache.h"
#include "vtkAMREnzoParticlesReader.h"
#include "vtkAMREnzoReader.h"
#include "vtkAMRFlashParticlesReader.h"
#include "vtkAMRFlashReader.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkAMRDataSetCache)
vtkInstantiatorNewMacro(vtkAMREnzoParticlesReader)
vtkInstantiatorNewMacro(vtkAMREnzoReader)
vtkInstantiatorNewMacro(vtkAMRFlashParticlesReader)
vtkInstantiatorNewMacro(vtkAMRFlashReader)



void vtkIOAMRInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkAMRDataSetCache", vtkInstantiatorvtkAMRDataSetCacheNew);
  vtkInstantiator::RegisterInstantiator("vtkAMREnzoParticlesReader", vtkInstantiatorvtkAMREnzoParticlesReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkAMREnzoReader", vtkInstantiatorvtkAMREnzoReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkAMRFlashParticlesReader", vtkInstantiatorvtkAMRFlashParticlesReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkAMRFlashReader", vtkInstantiatorvtkAMRFlashReaderNew);


}

void vtkIOAMRInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkAMRDataSetCache", vtkInstantiatorvtkAMRDataSetCacheNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAMREnzoParticlesReader", vtkInstantiatorvtkAMREnzoParticlesReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAMREnzoReader", vtkInstantiatorvtkAMREnzoReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAMRFlashParticlesReader", vtkInstantiatorvtkAMRFlashParticlesReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAMRFlashReader", vtkInstantiatorvtkAMRFlashReaderNew);


}

vtkIOAMRInstantiator::vtkIOAMRInstantiator()
{
  if(++vtkIOAMRInstantiator::Count == 1)
    {
    vtkIOAMRInstantiator::ClassInitialize();
    }
}

vtkIOAMRInstantiator::~vtkIOAMRInstantiator()
{
  if(--vtkIOAMRInstantiator::Count == 0)
    {
    vtkIOAMRInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkIOAMRInstantiator::Count;
