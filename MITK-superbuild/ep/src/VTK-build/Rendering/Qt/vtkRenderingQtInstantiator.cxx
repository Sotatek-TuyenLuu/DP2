#include "vtkRenderingQtInstantiator.h"
#include "vtkQImageToImageSource.h"
#include "vtkQtInitialization.h"
#include "vtkQtLabelRenderStrategy.h"
#include "vtkQtStringToImage.h"
#include "vtkQtTreeRingLabelMapper.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkQImageToImageSource)
vtkInstantiatorNewMacro(vtkQtInitialization)
vtkInstantiatorNewMacro(vtkQtLabelRenderStrategy)
vtkInstantiatorNewMacro(vtkQtStringToImage)
vtkInstantiatorNewMacro(vtkQtTreeRingLabelMapper)



void vtkRenderingQtInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkQImageToImageSource", vtkInstantiatorvtkQImageToImageSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkQtInitialization", vtkInstantiatorvtkQtInitializationNew);
  vtkInstantiator::RegisterInstantiator("vtkQtLabelRenderStrategy", vtkInstantiatorvtkQtLabelRenderStrategyNew);
  vtkInstantiator::RegisterInstantiator("vtkQtStringToImage", vtkInstantiatorvtkQtStringToImageNew);
  vtkInstantiator::RegisterInstantiator("vtkQtTreeRingLabelMapper", vtkInstantiatorvtkQtTreeRingLabelMapperNew);


}

void vtkRenderingQtInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkQImageToImageSource", vtkInstantiatorvtkQImageToImageSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkQtInitialization", vtkInstantiatorvtkQtInitializationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkQtLabelRenderStrategy", vtkInstantiatorvtkQtLabelRenderStrategyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkQtStringToImage", vtkInstantiatorvtkQtStringToImageNew);
  vtkInstantiator::UnRegisterInstantiator("vtkQtTreeRingLabelMapper", vtkInstantiatorvtkQtTreeRingLabelMapperNew);


}

vtkRenderingQtInstantiator::vtkRenderingQtInstantiator()
{
  if(++vtkRenderingQtInstantiator::Count == 1)
    {
    vtkRenderingQtInstantiator::ClassInitialize();
    }
}

vtkRenderingQtInstantiator::~vtkRenderingQtInstantiator()
{
  if(--vtkRenderingQtInstantiator::Count == 0)
    {
    vtkRenderingQtInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkRenderingQtInstantiator::Count;
