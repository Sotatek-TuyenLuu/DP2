#include "vtkIOParallelInstantiator.h"
#include "vtkEnSightWriter.h"
#include "vtkPChacoReader.h"
#include "vtkPDataSetReader.h"
#include "vtkPDataSetWriter.h"
#include "vtkPImageWriter.h"
#include "vtkPOpenFOAMReader.h"
#include "vtkPSLACReader.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkEnSightWriter)
vtkInstantiatorNewMacro(vtkPChacoReader)
vtkInstantiatorNewMacro(vtkPDataSetReader)
vtkInstantiatorNewMacro(vtkPDataSetWriter)
vtkInstantiatorNewMacro(vtkPImageWriter)
vtkInstantiatorNewMacro(vtkPOpenFOAMReader)
vtkInstantiatorNewMacro(vtkPSLACReader)



void vtkIOParallelInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkEnSightWriter", vtkInstantiatorvtkEnSightWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkPChacoReader", vtkInstantiatorvtkPChacoReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkPDataSetReader", vtkInstantiatorvtkPDataSetReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkPDataSetWriter", vtkInstantiatorvtkPDataSetWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkPImageWriter", vtkInstantiatorvtkPImageWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkPOpenFOAMReader", vtkInstantiatorvtkPOpenFOAMReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkPSLACReader", vtkInstantiatorvtkPSLACReaderNew);


}

void vtkIOParallelInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkEnSightWriter", vtkInstantiatorvtkEnSightWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPChacoReader", vtkInstantiatorvtkPChacoReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPDataSetReader", vtkInstantiatorvtkPDataSetReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPDataSetWriter", vtkInstantiatorvtkPDataSetWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPImageWriter", vtkInstantiatorvtkPImageWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPOpenFOAMReader", vtkInstantiatorvtkPOpenFOAMReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPSLACReader", vtkInstantiatorvtkPSLACReaderNew);


}

vtkIOParallelInstantiator::vtkIOParallelInstantiator()
{
  if(++vtkIOParallelInstantiator::Count == 1)
    {
    vtkIOParallelInstantiator::ClassInitialize();
    }
}

vtkIOParallelInstantiator::~vtkIOParallelInstantiator()
{
  if(--vtkIOParallelInstantiator::Count == 0)
    {
    vtkIOParallelInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkIOParallelInstantiator::Count;
