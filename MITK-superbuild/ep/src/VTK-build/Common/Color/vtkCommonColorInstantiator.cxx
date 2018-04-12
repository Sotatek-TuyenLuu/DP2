#include "vtkCommonColorInstantiator.h"
#include "vtkColorSeries.h"
#include "vtkNamedColors.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkColorSeries)
vtkInstantiatorNewMacro(vtkNamedColors)



void vtkCommonColorInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkColorSeries", vtkInstantiatorvtkColorSeriesNew);
  vtkInstantiator::RegisterInstantiator("vtkNamedColors", vtkInstantiatorvtkNamedColorsNew);


}

void vtkCommonColorInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkColorSeries", vtkInstantiatorvtkColorSeriesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkNamedColors", vtkInstantiatorvtkNamedColorsNew);


}

vtkCommonColorInstantiator::vtkCommonColorInstantiator()
{
  if(++vtkCommonColorInstantiator::Count == 1)
    {
    vtkCommonColorInstantiator::ClassInitialize();
    }
}

vtkCommonColorInstantiator::~vtkCommonColorInstantiator()
{
  if(--vtkCommonColorInstantiator::Count == 0)
    {
    vtkCommonColorInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkCommonColorInstantiator::Count;
