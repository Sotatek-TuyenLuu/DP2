#include "vtkRenderingGL2PSInstantiator.h"
#include "vtkGL2PSUtilities.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkGL2PSUtilities)



void vtkRenderingGL2PSInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkGL2PSUtilities", vtkInstantiatorvtkGL2PSUtilitiesNew);


}

void vtkRenderingGL2PSInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkGL2PSUtilities", vtkInstantiatorvtkGL2PSUtilitiesNew);


}

vtkRenderingGL2PSInstantiator::vtkRenderingGL2PSInstantiator()
{
  if(++vtkRenderingGL2PSInstantiator::Count == 1)
    {
    vtkRenderingGL2PSInstantiator::ClassInitialize();
    }
}

vtkRenderingGL2PSInstantiator::~vtkRenderingGL2PSInstantiator()
{
  if(--vtkRenderingGL2PSInstantiator::Count == 0)
    {
    vtkRenderingGL2PSInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkRenderingGL2PSInstantiator::Count;
