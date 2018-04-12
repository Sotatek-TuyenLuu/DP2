#include "vtkFiltersVerdictInstantiator.h"
#include "vtkCellQuality.h"
#include "vtkMatrixMathFilter.h"
#include "vtkMeshQuality.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkCellQuality)
vtkInstantiatorNewMacro(vtkMatrixMathFilter)
vtkInstantiatorNewMacro(vtkMeshQuality)



void vtkFiltersVerdictInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkCellQuality", vtkInstantiatorvtkCellQualityNew);
  vtkInstantiator::RegisterInstantiator("vtkMatrixMathFilter", vtkInstantiatorvtkMatrixMathFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkMeshQuality", vtkInstantiatorvtkMeshQualityNew);


}

void vtkFiltersVerdictInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkCellQuality", vtkInstantiatorvtkCellQualityNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMatrixMathFilter", vtkInstantiatorvtkMatrixMathFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMeshQuality", vtkInstantiatorvtkMeshQualityNew);


}

vtkFiltersVerdictInstantiator::vtkFiltersVerdictInstantiator()
{
  if(++vtkFiltersVerdictInstantiator::Count == 1)
    {
    vtkFiltersVerdictInstantiator::ClassInitialize();
    }
}

vtkFiltersVerdictInstantiator::~vtkFiltersVerdictInstantiator()
{
  if(--vtkFiltersVerdictInstantiator::Count == 0)
    {
    vtkFiltersVerdictInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkFiltersVerdictInstantiator::Count;
