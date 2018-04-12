#include "vtkFiltersSelectionInstantiator.h"
#include "vtkKdTreeSelector.h"
#include "vtkLinearSelector.h"
#include "vtkCellDistanceSelector.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkKdTreeSelector)
vtkInstantiatorNewMacro(vtkLinearSelector)
vtkInstantiatorNewMacro(vtkCellDistanceSelector)



void vtkFiltersSelectionInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkKdTreeSelector", vtkInstantiatorvtkKdTreeSelectorNew);
  vtkInstantiator::RegisterInstantiator("vtkLinearSelector", vtkInstantiatorvtkLinearSelectorNew);
  vtkInstantiator::RegisterInstantiator("vtkCellDistanceSelector", vtkInstantiatorvtkCellDistanceSelectorNew);


}

void vtkFiltersSelectionInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkKdTreeSelector", vtkInstantiatorvtkKdTreeSelectorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLinearSelector", vtkInstantiatorvtkLinearSelectorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCellDistanceSelector", vtkInstantiatorvtkCellDistanceSelectorNew);


}

vtkFiltersSelectionInstantiator::vtkFiltersSelectionInstantiator()
{
  if(++vtkFiltersSelectionInstantiator::Count == 1)
    {
    vtkFiltersSelectionInstantiator::ClassInitialize();
    }
}

vtkFiltersSelectionInstantiator::~vtkFiltersSelectionInstantiator()
{
  if(--vtkFiltersSelectionInstantiator::Count == 0)
    {
    vtkFiltersSelectionInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkFiltersSelectionInstantiator::Count;
