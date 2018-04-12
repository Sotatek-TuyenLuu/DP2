#include "vtkIOMINCInstantiator.h"
#include "vtkMINCImageAttributes.h"
#include "vtkMINCImageReader.h"
#include "vtkMINCImageWriter.h"
#include "vtkMNIObjectReader.h"
#include "vtkMNIObjectWriter.h"
#include "vtkMNITagPointReader.h"
#include "vtkMNITagPointWriter.h"
#include "vtkMNITransformReader.h"
#include "vtkMNITransformWriter.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkMINCImageAttributes)
vtkInstantiatorNewMacro(vtkMINCImageReader)
vtkInstantiatorNewMacro(vtkMINCImageWriter)
vtkInstantiatorNewMacro(vtkMNIObjectReader)
vtkInstantiatorNewMacro(vtkMNIObjectWriter)
vtkInstantiatorNewMacro(vtkMNITagPointReader)
vtkInstantiatorNewMacro(vtkMNITagPointWriter)
vtkInstantiatorNewMacro(vtkMNITransformReader)
vtkInstantiatorNewMacro(vtkMNITransformWriter)



void vtkIOMINCInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkMINCImageAttributes", vtkInstantiatorvtkMINCImageAttributesNew);
  vtkInstantiator::RegisterInstantiator("vtkMINCImageReader", vtkInstantiatorvtkMINCImageReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkMINCImageWriter", vtkInstantiatorvtkMINCImageWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkMNIObjectReader", vtkInstantiatorvtkMNIObjectReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkMNIObjectWriter", vtkInstantiatorvtkMNIObjectWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkMNITagPointReader", vtkInstantiatorvtkMNITagPointReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkMNITagPointWriter", vtkInstantiatorvtkMNITagPointWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkMNITransformReader", vtkInstantiatorvtkMNITransformReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkMNITransformWriter", vtkInstantiatorvtkMNITransformWriterNew);


}

void vtkIOMINCInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkMINCImageAttributes", vtkInstantiatorvtkMINCImageAttributesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMINCImageReader", vtkInstantiatorvtkMINCImageReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMINCImageWriter", vtkInstantiatorvtkMINCImageWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMNIObjectReader", vtkInstantiatorvtkMNIObjectReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMNIObjectWriter", vtkInstantiatorvtkMNIObjectWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMNITagPointReader", vtkInstantiatorvtkMNITagPointReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMNITagPointWriter", vtkInstantiatorvtkMNITagPointWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMNITransformReader", vtkInstantiatorvtkMNITransformReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMNITransformWriter", vtkInstantiatorvtkMNITransformWriterNew);


}

vtkIOMINCInstantiator::vtkIOMINCInstantiator()
{
  if(++vtkIOMINCInstantiator::Count == 1)
    {
    vtkIOMINCInstantiator::ClassInitialize();
    }
}

vtkIOMINCInstantiator::~vtkIOMINCInstantiator()
{
  if(--vtkIOMINCInstantiator::Count == 0)
    {
    vtkIOMINCInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkIOMINCInstantiator::Count;
