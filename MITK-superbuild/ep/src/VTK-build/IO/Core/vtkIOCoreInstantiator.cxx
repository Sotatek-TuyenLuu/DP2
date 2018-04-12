#include "vtkIOCoreInstantiator.h"
#include "vtkArrayReader.h"
#include "vtkArrayWriter.h"
#include "vtkASCIITextCodec.h"
#include "vtkBase64InputStream.h"
#include "vtkBase64OutputStream.h"
#include "vtkBase64Utilities.h"
#include "vtkDelimitedTextWriter.h"
#include "vtkGlobFileNames.h"
#include "vtkInputStream.h"
#include "vtkJavaScriptDataWriter.h"
#include "vtkOutputStream.h"
#include "vtkSortFileNames.h"
#include "vtkTextCodecFactory.h"
#include "vtkUTF16TextCodec.h"
#include "vtkUTF8TextCodec.h"
#include "vtkZLibDataCompressor.h"
#include "vtkArrayDataReader.h"
#include "vtkArrayDataWriter.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkArrayReader)
vtkInstantiatorNewMacro(vtkArrayWriter)
vtkInstantiatorNewMacro(vtkASCIITextCodec)
vtkInstantiatorNewMacro(vtkBase64InputStream)
vtkInstantiatorNewMacro(vtkBase64OutputStream)
vtkInstantiatorNewMacro(vtkBase64Utilities)
vtkInstantiatorNewMacro(vtkDelimitedTextWriter)
vtkInstantiatorNewMacro(vtkGlobFileNames)
vtkInstantiatorNewMacro(vtkInputStream)
vtkInstantiatorNewMacro(vtkJavaScriptDataWriter)
vtkInstantiatorNewMacro(vtkOutputStream)
vtkInstantiatorNewMacro(vtkSortFileNames)
vtkInstantiatorNewMacro(vtkTextCodecFactory)
vtkInstantiatorNewMacro(vtkUTF16TextCodec)
vtkInstantiatorNewMacro(vtkUTF8TextCodec)
vtkInstantiatorNewMacro(vtkZLibDataCompressor)
vtkInstantiatorNewMacro(vtkArrayDataReader)
vtkInstantiatorNewMacro(vtkArrayDataWriter)



void vtkIOCoreInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkArrayReader", vtkInstantiatorvtkArrayReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkArrayWriter", vtkInstantiatorvtkArrayWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkASCIITextCodec", vtkInstantiatorvtkASCIITextCodecNew);
  vtkInstantiator::RegisterInstantiator("vtkBase64InputStream", vtkInstantiatorvtkBase64InputStreamNew);
  vtkInstantiator::RegisterInstantiator("vtkBase64OutputStream", vtkInstantiatorvtkBase64OutputStreamNew);
  vtkInstantiator::RegisterInstantiator("vtkBase64Utilities", vtkInstantiatorvtkBase64UtilitiesNew);
  vtkInstantiator::RegisterInstantiator("vtkDelimitedTextWriter", vtkInstantiatorvtkDelimitedTextWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkGlobFileNames", vtkInstantiatorvtkGlobFileNamesNew);
  vtkInstantiator::RegisterInstantiator("vtkInputStream", vtkInstantiatorvtkInputStreamNew);
  vtkInstantiator::RegisterInstantiator("vtkJavaScriptDataWriter", vtkInstantiatorvtkJavaScriptDataWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkOutputStream", vtkInstantiatorvtkOutputStreamNew);
  vtkInstantiator::RegisterInstantiator("vtkSortFileNames", vtkInstantiatorvtkSortFileNamesNew);
  vtkInstantiator::RegisterInstantiator("vtkTextCodecFactory", vtkInstantiatorvtkTextCodecFactoryNew);
  vtkInstantiator::RegisterInstantiator("vtkUTF16TextCodec", vtkInstantiatorvtkUTF16TextCodecNew);
  vtkInstantiator::RegisterInstantiator("vtkUTF8TextCodec", vtkInstantiatorvtkUTF8TextCodecNew);
  vtkInstantiator::RegisterInstantiator("vtkZLibDataCompressor", vtkInstantiatorvtkZLibDataCompressorNew);
  vtkInstantiator::RegisterInstantiator("vtkArrayDataReader", vtkInstantiatorvtkArrayDataReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkArrayDataWriter", vtkInstantiatorvtkArrayDataWriterNew);


}

void vtkIOCoreInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkArrayReader", vtkInstantiatorvtkArrayReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkArrayWriter", vtkInstantiatorvtkArrayWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkASCIITextCodec", vtkInstantiatorvtkASCIITextCodecNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBase64InputStream", vtkInstantiatorvtkBase64InputStreamNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBase64OutputStream", vtkInstantiatorvtkBase64OutputStreamNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBase64Utilities", vtkInstantiatorvtkBase64UtilitiesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDelimitedTextWriter", vtkInstantiatorvtkDelimitedTextWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGlobFileNames", vtkInstantiatorvtkGlobFileNamesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInputStream", vtkInstantiatorvtkInputStreamNew);
  vtkInstantiator::UnRegisterInstantiator("vtkJavaScriptDataWriter", vtkInstantiatorvtkJavaScriptDataWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOutputStream", vtkInstantiatorvtkOutputStreamNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSortFileNames", vtkInstantiatorvtkSortFileNamesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTextCodecFactory", vtkInstantiatorvtkTextCodecFactoryNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUTF16TextCodec", vtkInstantiatorvtkUTF16TextCodecNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUTF8TextCodec", vtkInstantiatorvtkUTF8TextCodecNew);
  vtkInstantiator::UnRegisterInstantiator("vtkZLibDataCompressor", vtkInstantiatorvtkZLibDataCompressorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkArrayDataReader", vtkInstantiatorvtkArrayDataReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkArrayDataWriter", vtkInstantiatorvtkArrayDataWriterNew);


}

vtkIOCoreInstantiator::vtkIOCoreInstantiator()
{
  if(++vtkIOCoreInstantiator::Count == 1)
    {
    vtkIOCoreInstantiator::ClassInitialize();
    }
}

vtkIOCoreInstantiator::~vtkIOCoreInstantiator()
{
  if(--vtkIOCoreInstantiator::Count == 0)
    {
    vtkIOCoreInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkIOCoreInstantiator::Count;
