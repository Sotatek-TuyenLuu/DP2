#include "vtkViewsContext2DInstantiator.h"
#include "vtkContextView.h"
#include "vtkContextInteractorStyle.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkContextView)
vtkInstantiatorNewMacro(vtkContextInteractorStyle)



void vtkViewsContext2DInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkContextView", vtkInstantiatorvtkContextViewNew);
  vtkInstantiator::RegisterInstantiator("vtkContextInteractorStyle", vtkInstantiatorvtkContextInteractorStyleNew);


}

void vtkViewsContext2DInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkContextView", vtkInstantiatorvtkContextViewNew);
  vtkInstantiator::UnRegisterInstantiator("vtkContextInteractorStyle", vtkInstantiatorvtkContextInteractorStyleNew);


}

vtkViewsContext2DInstantiator::vtkViewsContext2DInstantiator()
{
  if(++vtkViewsContext2DInstantiator::Count == 1)
    {
    vtkViewsContext2DInstantiator::ClassInitialize();
    }
}

vtkViewsContext2DInstantiator::~vtkViewsContext2DInstantiator()
{
  if(--vtkViewsContext2DInstantiator::Count == 0)
    {
    vtkViewsContext2DInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkViewsContext2DInstantiator::Count;
