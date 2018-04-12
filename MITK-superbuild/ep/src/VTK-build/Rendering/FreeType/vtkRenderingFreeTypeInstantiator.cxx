#include "vtkRenderingFreeTypeInstantiator.h"
#include "vtkFreeTypeStringToImage.h"
#include "vtkMathTextFreeTypeTextRenderer.h"
#include "vtkMathTextUtilities.h"
#include "vtkTextRendererStringToImage.h"
#include "vtkScaledTextActor.h"
#include "vtkVectorText.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkFreeTypeStringToImage)
vtkInstantiatorNewMacro(vtkMathTextFreeTypeTextRenderer)
vtkInstantiatorNewMacro(vtkMathTextUtilities)
vtkInstantiatorNewMacro(vtkTextRendererStringToImage)
vtkInstantiatorNewMacro(vtkScaledTextActor)
vtkInstantiatorNewMacro(vtkVectorText)



void vtkRenderingFreeTypeInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkFreeTypeStringToImage", vtkInstantiatorvtkFreeTypeStringToImageNew);
  vtkInstantiator::RegisterInstantiator("vtkMathTextFreeTypeTextRenderer", vtkInstantiatorvtkMathTextFreeTypeTextRendererNew);
  vtkInstantiator::RegisterInstantiator("vtkMathTextUtilities", vtkInstantiatorvtkMathTextUtilitiesNew);
  vtkInstantiator::RegisterInstantiator("vtkTextRendererStringToImage", vtkInstantiatorvtkTextRendererStringToImageNew);
  vtkInstantiator::RegisterInstantiator("vtkScaledTextActor", vtkInstantiatorvtkScaledTextActorNew);
  vtkInstantiator::RegisterInstantiator("vtkVectorText", vtkInstantiatorvtkVectorTextNew);


}

void vtkRenderingFreeTypeInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkFreeTypeStringToImage", vtkInstantiatorvtkFreeTypeStringToImageNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMathTextFreeTypeTextRenderer", vtkInstantiatorvtkMathTextFreeTypeTextRendererNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMathTextUtilities", vtkInstantiatorvtkMathTextUtilitiesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTextRendererStringToImage", vtkInstantiatorvtkTextRendererStringToImageNew);
  vtkInstantiator::UnRegisterInstantiator("vtkScaledTextActor", vtkInstantiatorvtkScaledTextActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVectorText", vtkInstantiatorvtkVectorTextNew);


}

vtkRenderingFreeTypeInstantiator::vtkRenderingFreeTypeInstantiator()
{
  if(++vtkRenderingFreeTypeInstantiator::Count == 1)
    {
    vtkRenderingFreeTypeInstantiator::ClassInitialize();
    }
}

vtkRenderingFreeTypeInstantiator::~vtkRenderingFreeTypeInstantiator()
{
  if(--vtkRenderingFreeTypeInstantiator::Count == 0)
    {
    vtkRenderingFreeTypeInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkRenderingFreeTypeInstantiator::Count;
