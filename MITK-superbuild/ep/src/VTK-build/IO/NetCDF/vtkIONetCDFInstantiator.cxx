#include "vtkIONetCDFInstantiator.h"
#include "vtkMPASReader.h"
#include "vtkNetCDFCAMReader.h"
#include "vtkNetCDFCFReader.h"
#include "vtkNetCDFPOPReader.h"
#include "vtkNetCDFReader.h"
#include "vtkSLACParticleReader.h"
#include "vtkSLACReader.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkMPASReader)
vtkInstantiatorNewMacro(vtkNetCDFCAMReader)
vtkInstantiatorNewMacro(vtkNetCDFCFReader)
vtkInstantiatorNewMacro(vtkNetCDFPOPReader)
vtkInstantiatorNewMacro(vtkNetCDFReader)
vtkInstantiatorNewMacro(vtkSLACParticleReader)
vtkInstantiatorNewMacro(vtkSLACReader)



void vtkIONetCDFInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkMPASReader", vtkInstantiatorvtkMPASReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkNetCDFCAMReader", vtkInstantiatorvtkNetCDFCAMReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkNetCDFCFReader", vtkInstantiatorvtkNetCDFCFReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkNetCDFPOPReader", vtkInstantiatorvtkNetCDFPOPReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkNetCDFReader", vtkInstantiatorvtkNetCDFReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkSLACParticleReader", vtkInstantiatorvtkSLACParticleReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkSLACReader", vtkInstantiatorvtkSLACReaderNew);


}

void vtkIONetCDFInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkMPASReader", vtkInstantiatorvtkMPASReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkNetCDFCAMReader", vtkInstantiatorvtkNetCDFCAMReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkNetCDFCFReader", vtkInstantiatorvtkNetCDFCFReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkNetCDFPOPReader", vtkInstantiatorvtkNetCDFPOPReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkNetCDFReader", vtkInstantiatorvtkNetCDFReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSLACParticleReader", vtkInstantiatorvtkSLACParticleReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSLACReader", vtkInstantiatorvtkSLACReaderNew);


}

vtkIONetCDFInstantiator::vtkIONetCDFInstantiator()
{
  if(++vtkIONetCDFInstantiator::Count == 1)
    {
    vtkIONetCDFInstantiator::ClassInitialize();
    }
}

vtkIONetCDFInstantiator::~vtkIONetCDFInstantiator()
{
  if(--vtkIONetCDFInstantiator::Count == 0)
    {
    vtkIONetCDFInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkIONetCDFInstantiator::Count;
