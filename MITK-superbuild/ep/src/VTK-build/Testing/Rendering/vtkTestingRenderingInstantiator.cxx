#include "vtkTestingRenderingInstantiator.h"
#include "vtkTesting.h"
#include "vtkTestingInteractor.h"
#include "vtkTestingObjectFactory.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkTesting)
vtkInstantiatorNewMacro(vtkTestingInteractor)
vtkInstantiatorNewMacro(vtkTestingObjectFactory)



void vtkTestingRenderingInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkTesting", vtkInstantiatorvtkTestingNew);
  vtkInstantiator::RegisterInstantiator("vtkTestingInteractor", vtkInstantiatorvtkTestingInteractorNew);
  vtkInstantiator::RegisterInstantiator("vtkTestingObjectFactory", vtkInstantiatorvtkTestingObjectFactoryNew);


}

void vtkTestingRenderingInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkTesting", vtkInstantiatorvtkTestingNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTestingInteractor", vtkInstantiatorvtkTestingInteractorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTestingObjectFactory", vtkInstantiatorvtkTestingObjectFactoryNew);


}

vtkTestingRenderingInstantiator::vtkTestingRenderingInstantiator()
{
  if(++vtkTestingRenderingInstantiator::Count == 1)
    {
    vtkTestingRenderingInstantiator::ClassInitialize();
    }
}

vtkTestingRenderingInstantiator::~vtkTestingRenderingInstantiator()
{
  if(--vtkTestingRenderingInstantiator::Count == 0)
    {
    vtkTestingRenderingInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkTestingRenderingInstantiator::Count;
