#include "vtkIOExodusInstantiator.h"
#include "vtkCPExodusIIElementBlock.h"
#include "vtkCPExodusIIInSituReader.h"
#include "vtkExodusIICache.h"
#include "vtkExodusIIReader.h"
#include "vtkExodusIIWriter.h"
#include "vtkModelMetadata.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkCPExodusIIElementBlock)
vtkInstantiatorNewMacro(vtkCPExodusIIInSituReader)
vtkInstantiatorNewMacro(vtkExodusIICache)
vtkInstantiatorNewMacro(vtkExodusIIReader)
vtkInstantiatorNewMacro(vtkExodusIIWriter)
vtkInstantiatorNewMacro(vtkModelMetadata)



void vtkIOExodusInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkCPExodusIIElementBlock", vtkInstantiatorvtkCPExodusIIElementBlockNew);
  vtkInstantiator::RegisterInstantiator("vtkCPExodusIIInSituReader", vtkInstantiatorvtkCPExodusIIInSituReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkExodusIICache", vtkInstantiatorvtkExodusIICacheNew);
  vtkInstantiator::RegisterInstantiator("vtkExodusIIReader", vtkInstantiatorvtkExodusIIReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkExodusIIWriter", vtkInstantiatorvtkExodusIIWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkModelMetadata", vtkInstantiatorvtkModelMetadataNew);


}

void vtkIOExodusInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkCPExodusIIElementBlock", vtkInstantiatorvtkCPExodusIIElementBlockNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCPExodusIIInSituReader", vtkInstantiatorvtkCPExodusIIInSituReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExodusIICache", vtkInstantiatorvtkExodusIICacheNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExodusIIReader", vtkInstantiatorvtkExodusIIReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExodusIIWriter", vtkInstantiatorvtkExodusIIWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkModelMetadata", vtkInstantiatorvtkModelMetadataNew);


}

vtkIOExodusInstantiator::vtkIOExodusInstantiator()
{
  if(++vtkIOExodusInstantiator::Count == 1)
    {
    vtkIOExodusInstantiator::ClassInitialize();
    }
}

vtkIOExodusInstantiator::~vtkIOExodusInstantiator()
{
  if(--vtkIOExodusInstantiator::Count == 0)
    {
    vtkIOExodusInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkIOExodusInstantiator::Count;
