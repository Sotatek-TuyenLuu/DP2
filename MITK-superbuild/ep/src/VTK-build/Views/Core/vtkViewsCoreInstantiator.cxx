#include "vtkViewsCoreInstantiator.h"
#include "vtkConvertSelectionDomain.h"
#include "vtkDataRepresentation.h"
#include "vtkEmptyRepresentation.h"
#include "vtkRenderViewBase.h"
#include "vtkView.h"
#include "vtkViewTheme.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkConvertSelectionDomain)
vtkInstantiatorNewMacro(vtkDataRepresentation)
vtkInstantiatorNewMacro(vtkEmptyRepresentation)
vtkInstantiatorNewMacro(vtkRenderViewBase)
vtkInstantiatorNewMacro(vtkView)
vtkInstantiatorNewMacro(vtkViewTheme)



void vtkViewsCoreInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkConvertSelectionDomain", vtkInstantiatorvtkConvertSelectionDomainNew);
  vtkInstantiator::RegisterInstantiator("vtkDataRepresentation", vtkInstantiatorvtkDataRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkEmptyRepresentation", vtkInstantiatorvtkEmptyRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkRenderViewBase", vtkInstantiatorvtkRenderViewBaseNew);
  vtkInstantiator::RegisterInstantiator("vtkView", vtkInstantiatorvtkViewNew);
  vtkInstantiator::RegisterInstantiator("vtkViewTheme", vtkInstantiatorvtkViewThemeNew);


}

void vtkViewsCoreInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkConvertSelectionDomain", vtkInstantiatorvtkConvertSelectionDomainNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataRepresentation", vtkInstantiatorvtkDataRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkEmptyRepresentation", vtkInstantiatorvtkEmptyRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRenderViewBase", vtkInstantiatorvtkRenderViewBaseNew);
  vtkInstantiator::UnRegisterInstantiator("vtkView", vtkInstantiatorvtkViewNew);
  vtkInstantiator::UnRegisterInstantiator("vtkViewTheme", vtkInstantiatorvtkViewThemeNew);


}

vtkViewsCoreInstantiator::vtkViewsCoreInstantiator()
{
  if(++vtkViewsCoreInstantiator::Count == 1)
    {
    vtkViewsCoreInstantiator::ClassInitialize();
    }
}

vtkViewsCoreInstantiator::~vtkViewsCoreInstantiator()
{
  if(--vtkViewsCoreInstantiator::Count == 0)
    {
    vtkViewsCoreInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkViewsCoreInstantiator::Count;
