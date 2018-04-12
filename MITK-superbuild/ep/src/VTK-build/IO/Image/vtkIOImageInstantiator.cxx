#include "vtkIOImageInstantiator.h"
#include "vtkBMPReader.h"
#include "vtkBMPWriter.h"
#include "vtkDEMReader.h"
#include "vtkDICOMImageReader.h"
#include "vtkGESignaReader.h"
#include "vtkImageExport.h"
#include "vtkImageImport.h"
#include "vtkImageImportExecutive.h"
#include "vtkImageReader.h"
#include "vtkImageReader2.h"
#include "vtkImageReader2Collection.h"
#include "vtkImageReader2Factory.h"
#include "vtkImageWriter.h"
#include "vtkJPEGReader.h"
#include "vtkJPEGWriter.h"
#include "vtkJSONImageWriter.h"
#include "vtkMedicalImageProperties.h"
#include "vtkMedicalImageReader2.h"
#include "vtkMetaImageReader.h"
#include "vtkMetaImageWriter.h"
#include "vtkNIFTIImageHeader.h"
#include "vtkNIFTIImageReader.h"
#include "vtkNIFTIImageWriter.h"
#include "vtkNrrdReader.h"
#include "vtkPNGReader.h"
#include "vtkPNGWriter.h"
#include "vtkPNMReader.h"
#include "vtkPNMWriter.h"
#include "vtkPostScriptWriter.h"
#include "vtkSLCReader.h"
#include "vtkTIFFReader.h"
#include "vtkTIFFWriter.h"
#include "vtkVolume16Reader.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkBMPReader)
vtkInstantiatorNewMacro(vtkBMPWriter)
vtkInstantiatorNewMacro(vtkDEMReader)
vtkInstantiatorNewMacro(vtkDICOMImageReader)
vtkInstantiatorNewMacro(vtkGESignaReader)
vtkInstantiatorNewMacro(vtkImageExport)
vtkInstantiatorNewMacro(vtkImageImport)
vtkInstantiatorNewMacro(vtkImageImportExecutive)
vtkInstantiatorNewMacro(vtkImageReader)
vtkInstantiatorNewMacro(vtkImageReader2)
vtkInstantiatorNewMacro(vtkImageReader2Collection)
vtkInstantiatorNewMacro(vtkImageReader2Factory)
vtkInstantiatorNewMacro(vtkImageWriter)
vtkInstantiatorNewMacro(vtkJPEGReader)
vtkInstantiatorNewMacro(vtkJPEGWriter)
vtkInstantiatorNewMacro(vtkJSONImageWriter)
vtkInstantiatorNewMacro(vtkMedicalImageProperties)
vtkInstantiatorNewMacro(vtkMedicalImageReader2)
vtkInstantiatorNewMacro(vtkMetaImageReader)
vtkInstantiatorNewMacro(vtkMetaImageWriter)
vtkInstantiatorNewMacro(vtkNIFTIImageHeader)
vtkInstantiatorNewMacro(vtkNIFTIImageReader)
vtkInstantiatorNewMacro(vtkNIFTIImageWriter)
vtkInstantiatorNewMacro(vtkNrrdReader)
vtkInstantiatorNewMacro(vtkPNGReader)
vtkInstantiatorNewMacro(vtkPNGWriter)
vtkInstantiatorNewMacro(vtkPNMReader)
vtkInstantiatorNewMacro(vtkPNMWriter)
vtkInstantiatorNewMacro(vtkPostScriptWriter)
vtkInstantiatorNewMacro(vtkSLCReader)
vtkInstantiatorNewMacro(vtkTIFFReader)
vtkInstantiatorNewMacro(vtkTIFFWriter)
vtkInstantiatorNewMacro(vtkVolume16Reader)



void vtkIOImageInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkBMPReader", vtkInstantiatorvtkBMPReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkBMPWriter", vtkInstantiatorvtkBMPWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkDEMReader", vtkInstantiatorvtkDEMReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkDICOMImageReader", vtkInstantiatorvtkDICOMImageReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkGESignaReader", vtkInstantiatorvtkGESignaReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkImageExport", vtkInstantiatorvtkImageExportNew);
  vtkInstantiator::RegisterInstantiator("vtkImageImport", vtkInstantiatorvtkImageImportNew);
  vtkInstantiator::RegisterInstantiator("vtkImageImportExecutive", vtkInstantiatorvtkImageImportExecutiveNew);
  vtkInstantiator::RegisterInstantiator("vtkImageReader", vtkInstantiatorvtkImageReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkImageReader2", vtkInstantiatorvtkImageReader2New);
  vtkInstantiator::RegisterInstantiator("vtkImageReader2Collection", vtkInstantiatorvtkImageReader2CollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkImageReader2Factory", vtkInstantiatorvtkImageReader2FactoryNew);
  vtkInstantiator::RegisterInstantiator("vtkImageWriter", vtkInstantiatorvtkImageWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkJPEGReader", vtkInstantiatorvtkJPEGReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkJPEGWriter", vtkInstantiatorvtkJPEGWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkJSONImageWriter", vtkInstantiatorvtkJSONImageWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkMedicalImageProperties", vtkInstantiatorvtkMedicalImagePropertiesNew);
  vtkInstantiator::RegisterInstantiator("vtkMedicalImageReader2", vtkInstantiatorvtkMedicalImageReader2New);
  vtkInstantiator::RegisterInstantiator("vtkMetaImageReader", vtkInstantiatorvtkMetaImageReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkMetaImageWriter", vtkInstantiatorvtkMetaImageWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkNIFTIImageHeader", vtkInstantiatorvtkNIFTIImageHeaderNew);
  vtkInstantiator::RegisterInstantiator("vtkNIFTIImageReader", vtkInstantiatorvtkNIFTIImageReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkNIFTIImageWriter", vtkInstantiatorvtkNIFTIImageWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkNrrdReader", vtkInstantiatorvtkNrrdReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkPNGReader", vtkInstantiatorvtkPNGReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkPNGWriter", vtkInstantiatorvtkPNGWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkPNMReader", vtkInstantiatorvtkPNMReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkPNMWriter", vtkInstantiatorvtkPNMWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkPostScriptWriter", vtkInstantiatorvtkPostScriptWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkSLCReader", vtkInstantiatorvtkSLCReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkTIFFReader", vtkInstantiatorvtkTIFFReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkTIFFWriter", vtkInstantiatorvtkTIFFWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkVolume16Reader", vtkInstantiatorvtkVolume16ReaderNew);


}

void vtkIOImageInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkBMPReader", vtkInstantiatorvtkBMPReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBMPWriter", vtkInstantiatorvtkBMPWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDEMReader", vtkInstantiatorvtkDEMReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDICOMImageReader", vtkInstantiatorvtkDICOMImageReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGESignaReader", vtkInstantiatorvtkGESignaReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageExport", vtkInstantiatorvtkImageExportNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageImport", vtkInstantiatorvtkImageImportNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageImportExecutive", vtkInstantiatorvtkImageImportExecutiveNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageReader", vtkInstantiatorvtkImageReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageReader2", vtkInstantiatorvtkImageReader2New);
  vtkInstantiator::UnRegisterInstantiator("vtkImageReader2Collection", vtkInstantiatorvtkImageReader2CollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageReader2Factory", vtkInstantiatorvtkImageReader2FactoryNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageWriter", vtkInstantiatorvtkImageWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkJPEGReader", vtkInstantiatorvtkJPEGReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkJPEGWriter", vtkInstantiatorvtkJPEGWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkJSONImageWriter", vtkInstantiatorvtkJSONImageWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMedicalImageProperties", vtkInstantiatorvtkMedicalImagePropertiesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMedicalImageReader2", vtkInstantiatorvtkMedicalImageReader2New);
  vtkInstantiator::UnRegisterInstantiator("vtkMetaImageReader", vtkInstantiatorvtkMetaImageReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMetaImageWriter", vtkInstantiatorvtkMetaImageWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkNIFTIImageHeader", vtkInstantiatorvtkNIFTIImageHeaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkNIFTIImageReader", vtkInstantiatorvtkNIFTIImageReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkNIFTIImageWriter", vtkInstantiatorvtkNIFTIImageWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkNrrdReader", vtkInstantiatorvtkNrrdReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPNGReader", vtkInstantiatorvtkPNGReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPNGWriter", vtkInstantiatorvtkPNGWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPNMReader", vtkInstantiatorvtkPNMReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPNMWriter", vtkInstantiatorvtkPNMWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPostScriptWriter", vtkInstantiatorvtkPostScriptWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSLCReader", vtkInstantiatorvtkSLCReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTIFFReader", vtkInstantiatorvtkTIFFReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTIFFWriter", vtkInstantiatorvtkTIFFWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVolume16Reader", vtkInstantiatorvtkVolume16ReaderNew);


}

vtkIOImageInstantiator::vtkIOImageInstantiator()
{
  if(++vtkIOImageInstantiator::Count == 1)
    {
    vtkIOImageInstantiator::ClassInitialize();
    }
}

vtkIOImageInstantiator::~vtkIOImageInstantiator()
{
  if(--vtkIOImageInstantiator::Count == 0)
    {
    vtkIOImageInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkIOImageInstantiator::Count;
