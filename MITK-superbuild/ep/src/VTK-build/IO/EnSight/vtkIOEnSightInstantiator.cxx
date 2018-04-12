#include "vtkIOEnSightInstantiator.h"
#include "vtkEnSight6BinaryReader.h"
#include "vtkEnSight6Reader.h"
#include "vtkEnSightGoldBinaryReader.h"
#include "vtkEnSightGoldReader.h"
#include "vtkEnSightMasterServerReader.h"
#include "vtkGenericEnSightReader.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkEnSight6BinaryReader)
vtkInstantiatorNewMacro(vtkEnSight6Reader)
vtkInstantiatorNewMacro(vtkEnSightGoldBinaryReader)
vtkInstantiatorNewMacro(vtkEnSightGoldReader)
vtkInstantiatorNewMacro(vtkEnSightMasterServerReader)
vtkInstantiatorNewMacro(vtkGenericEnSightReader)



void vtkIOEnSightInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkEnSight6BinaryReader", vtkInstantiatorvtkEnSight6BinaryReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkEnSight6Reader", vtkInstantiatorvtkEnSight6ReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkEnSightGoldBinaryReader", vtkInstantiatorvtkEnSightGoldBinaryReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkEnSightGoldReader", vtkInstantiatorvtkEnSightGoldReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkEnSightMasterServerReader", vtkInstantiatorvtkEnSightMasterServerReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkGenericEnSightReader", vtkInstantiatorvtkGenericEnSightReaderNew);


}

void vtkIOEnSightInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkEnSight6BinaryReader", vtkInstantiatorvtkEnSight6BinaryReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkEnSight6Reader", vtkInstantiatorvtkEnSight6ReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkEnSightGoldBinaryReader", vtkInstantiatorvtkEnSightGoldBinaryReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkEnSightGoldReader", vtkInstantiatorvtkEnSightGoldReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkEnSightMasterServerReader", vtkInstantiatorvtkEnSightMasterServerReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGenericEnSightReader", vtkInstantiatorvtkGenericEnSightReaderNew);


}

vtkIOEnSightInstantiator::vtkIOEnSightInstantiator()
{
  if(++vtkIOEnSightInstantiator::Count == 1)
    {
    vtkIOEnSightInstantiator::ClassInitialize();
    }
}

vtkIOEnSightInstantiator::~vtkIOEnSightInstantiator()
{
  if(--vtkIOEnSightInstantiator::Count == 0)
    {
    vtkIOEnSightInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkIOEnSightInstantiator::Count;
