#include "vtkFiltersImagingInstantiator.h"
#include "vtkPairwiseExtractHistogram2D.h"
#include "vtkExtractHistogram2D.h"
#include "vtkComputeHistogram2DOutliers.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkPairwiseExtractHistogram2D)
vtkInstantiatorNewMacro(vtkExtractHistogram2D)
vtkInstantiatorNewMacro(vtkComputeHistogram2DOutliers)



void vtkFiltersImagingInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkPairwiseExtractHistogram2D", vtkInstantiatorvtkPairwiseExtractHistogram2DNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractHistogram2D", vtkInstantiatorvtkExtractHistogram2DNew);
  vtkInstantiator::RegisterInstantiator("vtkComputeHistogram2DOutliers", vtkInstantiatorvtkComputeHistogram2DOutliersNew);


}

void vtkFiltersImagingInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkPairwiseExtractHistogram2D", vtkInstantiatorvtkPairwiseExtractHistogram2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractHistogram2D", vtkInstantiatorvtkExtractHistogram2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkComputeHistogram2DOutliers", vtkInstantiatorvtkComputeHistogram2DOutliersNew);


}

vtkFiltersImagingInstantiator::vtkFiltersImagingInstantiator()
{
  if(++vtkFiltersImagingInstantiator::Count == 1)
    {
    vtkFiltersImagingInstantiator::ClassInitialize();
    }
}

vtkFiltersImagingInstantiator::~vtkFiltersImagingInstantiator()
{
  if(--vtkFiltersImagingInstantiator::Count == 0)
    {
    vtkFiltersImagingInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkFiltersImagingInstantiator::Count;
