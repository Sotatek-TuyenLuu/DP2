#include "vtkIOInfovisInstantiator.h"
#include "vtkBiomTableReader.h"
#include "vtkChacoGraphReader.h"
#include "vtkDelimitedTextReader.h"
#include "vtkDIMACSGraphReader.h"
#include "vtkDIMACSGraphWriter.h"
#include "vtkFixedWidthTextReader.h"
#include "vtkISIReader.h"
#include "vtkMultiNewickTreeReader.h"
#include "vtkNewickTreeReader.h"
#include "vtkNewickTreeWriter.h"
#include "vtkPhyloXMLTreeReader.h"
#include "vtkPhyloXMLTreeWriter.h"
#include "vtkRISReader.h"
#include "vtkTulipReader.h"
#include "vtkXGMLReader.h"
#include "vtkXMLTreeReader.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkBiomTableReader)
vtkInstantiatorNewMacro(vtkChacoGraphReader)
vtkInstantiatorNewMacro(vtkDelimitedTextReader)
vtkInstantiatorNewMacro(vtkDIMACSGraphReader)
vtkInstantiatorNewMacro(vtkDIMACSGraphWriter)
vtkInstantiatorNewMacro(vtkFixedWidthTextReader)
vtkInstantiatorNewMacro(vtkISIReader)
vtkInstantiatorNewMacro(vtkMultiNewickTreeReader)
vtkInstantiatorNewMacro(vtkNewickTreeReader)
vtkInstantiatorNewMacro(vtkNewickTreeWriter)
vtkInstantiatorNewMacro(vtkPhyloXMLTreeReader)
vtkInstantiatorNewMacro(vtkPhyloXMLTreeWriter)
vtkInstantiatorNewMacro(vtkRISReader)
vtkInstantiatorNewMacro(vtkTulipReader)
vtkInstantiatorNewMacro(vtkXGMLReader)
vtkInstantiatorNewMacro(vtkXMLTreeReader)



void vtkIOInfovisInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkBiomTableReader", vtkInstantiatorvtkBiomTableReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkChacoGraphReader", vtkInstantiatorvtkChacoGraphReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkDelimitedTextReader", vtkInstantiatorvtkDelimitedTextReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkDIMACSGraphReader", vtkInstantiatorvtkDIMACSGraphReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkDIMACSGraphWriter", vtkInstantiatorvtkDIMACSGraphWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkFixedWidthTextReader", vtkInstantiatorvtkFixedWidthTextReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkISIReader", vtkInstantiatorvtkISIReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkMultiNewickTreeReader", vtkInstantiatorvtkMultiNewickTreeReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkNewickTreeReader", vtkInstantiatorvtkNewickTreeReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkNewickTreeWriter", vtkInstantiatorvtkNewickTreeWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkPhyloXMLTreeReader", vtkInstantiatorvtkPhyloXMLTreeReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkPhyloXMLTreeWriter", vtkInstantiatorvtkPhyloXMLTreeWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkRISReader", vtkInstantiatorvtkRISReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkTulipReader", vtkInstantiatorvtkTulipReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkXGMLReader", vtkInstantiatorvtkXGMLReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLTreeReader", vtkInstantiatorvtkXMLTreeReaderNew);


}

void vtkIOInfovisInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkBiomTableReader", vtkInstantiatorvtkBiomTableReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkChacoGraphReader", vtkInstantiatorvtkChacoGraphReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDelimitedTextReader", vtkInstantiatorvtkDelimitedTextReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDIMACSGraphReader", vtkInstantiatorvtkDIMACSGraphReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDIMACSGraphWriter", vtkInstantiatorvtkDIMACSGraphWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFixedWidthTextReader", vtkInstantiatorvtkFixedWidthTextReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkISIReader", vtkInstantiatorvtkISIReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMultiNewickTreeReader", vtkInstantiatorvtkMultiNewickTreeReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkNewickTreeReader", vtkInstantiatorvtkNewickTreeReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkNewickTreeWriter", vtkInstantiatorvtkNewickTreeWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPhyloXMLTreeReader", vtkInstantiatorvtkPhyloXMLTreeReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPhyloXMLTreeWriter", vtkInstantiatorvtkPhyloXMLTreeWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRISReader", vtkInstantiatorvtkRISReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTulipReader", vtkInstantiatorvtkTulipReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXGMLReader", vtkInstantiatorvtkXGMLReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLTreeReader", vtkInstantiatorvtkXMLTreeReaderNew);


}

vtkIOInfovisInstantiator::vtkIOInfovisInstantiator()
{
  if(++vtkIOInfovisInstantiator::Count == 1)
    {
    vtkIOInfovisInstantiator::ClassInitialize();
    }
}

vtkIOInfovisInstantiator::~vtkIOInfovisInstantiator()
{
  if(--vtkIOInfovisInstantiator::Count == 0)
    {
    vtkIOInfovisInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkIOInfovisInstantiator::Count;
