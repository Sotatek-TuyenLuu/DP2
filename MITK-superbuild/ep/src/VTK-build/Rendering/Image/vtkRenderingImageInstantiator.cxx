#include "vtkRenderingImageInstantiator.h"
#include "vtkImageResliceMapper.h"
#include "vtkImageSliceCollection.h"
#include "vtkImageStack.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkImageResliceMapper)
vtkInstantiatorNewMacro(vtkImageSliceCollection)
vtkInstantiatorNewMacro(vtkImageStack)



void vtkRenderingImageInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkImageResliceMapper", vtkInstantiatorvtkImageResliceMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkImageSliceCollection", vtkInstantiatorvtkImageSliceCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkImageStack", vtkInstantiatorvtkImageStackNew);


}

void vtkRenderingImageInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkImageResliceMapper", vtkInstantiatorvtkImageResliceMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageSliceCollection", vtkInstantiatorvtkImageSliceCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageStack", vtkInstantiatorvtkImageStackNew);


}

vtkRenderingImageInstantiator::vtkRenderingImageInstantiator()
{
  if(++vtkRenderingImageInstantiator::Count == 1)
    {
    vtkRenderingImageInstantiator::ClassInitialize();
    }
}

vtkRenderingImageInstantiator::~vtkRenderingImageInstantiator()
{
  if(--vtkRenderingImageInstantiator::Count == 0)
    {
    vtkRenderingImageInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkRenderingImageInstantiator::Count;
