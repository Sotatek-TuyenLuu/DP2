#include "vtkRenderingContext2DInstantiator.h"
#include "vtkBlockItem.h"
#include "vtkBrush.h"
#include "vtkContext2D.h"
#include "vtkContextActor.h"
#include "vtkContextClip.h"
#include "vtkContextMapper2D.h"
#include "vtkContextScene.h"
#include "vtkContextTransform.h"
#include "vtkImageItem.h"
#include "vtkPen.h"
#include "vtkTooltipItem.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkBlockItem)
vtkInstantiatorNewMacro(vtkBrush)
vtkInstantiatorNewMacro(vtkContext2D)
vtkInstantiatorNewMacro(vtkContextActor)
vtkInstantiatorNewMacro(vtkContextClip)
vtkInstantiatorNewMacro(vtkContextMapper2D)
vtkInstantiatorNewMacro(vtkContextScene)
vtkInstantiatorNewMacro(vtkContextTransform)
vtkInstantiatorNewMacro(vtkImageItem)
vtkInstantiatorNewMacro(vtkPen)
vtkInstantiatorNewMacro(vtkTooltipItem)



void vtkRenderingContext2DInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkBlockItem", vtkInstantiatorvtkBlockItemNew);
  vtkInstantiator::RegisterInstantiator("vtkBrush", vtkInstantiatorvtkBrushNew);
  vtkInstantiator::RegisterInstantiator("vtkContext2D", vtkInstantiatorvtkContext2DNew);
  vtkInstantiator::RegisterInstantiator("vtkContextActor", vtkInstantiatorvtkContextActorNew);
  vtkInstantiator::RegisterInstantiator("vtkContextClip", vtkInstantiatorvtkContextClipNew);
  vtkInstantiator::RegisterInstantiator("vtkContextMapper2D", vtkInstantiatorvtkContextMapper2DNew);
  vtkInstantiator::RegisterInstantiator("vtkContextScene", vtkInstantiatorvtkContextSceneNew);
  vtkInstantiator::RegisterInstantiator("vtkContextTransform", vtkInstantiatorvtkContextTransformNew);
  vtkInstantiator::RegisterInstantiator("vtkImageItem", vtkInstantiatorvtkImageItemNew);
  vtkInstantiator::RegisterInstantiator("vtkPen", vtkInstantiatorvtkPenNew);
  vtkInstantiator::RegisterInstantiator("vtkTooltipItem", vtkInstantiatorvtkTooltipItemNew);


}

void vtkRenderingContext2DInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkBlockItem", vtkInstantiatorvtkBlockItemNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBrush", vtkInstantiatorvtkBrushNew);
  vtkInstantiator::UnRegisterInstantiator("vtkContext2D", vtkInstantiatorvtkContext2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkContextActor", vtkInstantiatorvtkContextActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkContextClip", vtkInstantiatorvtkContextClipNew);
  vtkInstantiator::UnRegisterInstantiator("vtkContextMapper2D", vtkInstantiatorvtkContextMapper2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkContextScene", vtkInstantiatorvtkContextSceneNew);
  vtkInstantiator::UnRegisterInstantiator("vtkContextTransform", vtkInstantiatorvtkContextTransformNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageItem", vtkInstantiatorvtkImageItemNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPen", vtkInstantiatorvtkPenNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTooltipItem", vtkInstantiatorvtkTooltipItemNew);


}

vtkRenderingContext2DInstantiator::vtkRenderingContext2DInstantiator()
{
  if(++vtkRenderingContext2DInstantiator::Count == 1)
    {
    vtkRenderingContext2DInstantiator::ClassInitialize();
    }
}

vtkRenderingContext2DInstantiator::~vtkRenderingContext2DInstantiator()
{
  if(--vtkRenderingContext2DInstantiator::Count == 0)
    {
    vtkRenderingContext2DInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkRenderingContext2DInstantiator::Count;
