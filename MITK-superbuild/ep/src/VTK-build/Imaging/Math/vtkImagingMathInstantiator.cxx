#include "vtkImagingMathInstantiator.h"
#include "vtkImageDivergence.h"
#include "vtkImageDotProduct.h"
#include "vtkImageLogarithmicScale.h"
#include "vtkImageLogic.h"
#include "vtkImageMagnitude.h"
#include "vtkImageMaskBits.h"
#include "vtkImageMathematics.h"
#include "vtkImageWeightedSum.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkImageDivergence)
vtkInstantiatorNewMacro(vtkImageDotProduct)
vtkInstantiatorNewMacro(vtkImageLogarithmicScale)
vtkInstantiatorNewMacro(vtkImageLogic)
vtkInstantiatorNewMacro(vtkImageMagnitude)
vtkInstantiatorNewMacro(vtkImageMaskBits)
vtkInstantiatorNewMacro(vtkImageMathematics)
vtkInstantiatorNewMacro(vtkImageWeightedSum)



void vtkImagingMathInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkImageDivergence", vtkInstantiatorvtkImageDivergenceNew);
  vtkInstantiator::RegisterInstantiator("vtkImageDotProduct", vtkInstantiatorvtkImageDotProductNew);
  vtkInstantiator::RegisterInstantiator("vtkImageLogarithmicScale", vtkInstantiatorvtkImageLogarithmicScaleNew);
  vtkInstantiator::RegisterInstantiator("vtkImageLogic", vtkInstantiatorvtkImageLogicNew);
  vtkInstantiator::RegisterInstantiator("vtkImageMagnitude", vtkInstantiatorvtkImageMagnitudeNew);
  vtkInstantiator::RegisterInstantiator("vtkImageMaskBits", vtkInstantiatorvtkImageMaskBitsNew);
  vtkInstantiator::RegisterInstantiator("vtkImageMathematics", vtkInstantiatorvtkImageMathematicsNew);
  vtkInstantiator::RegisterInstantiator("vtkImageWeightedSum", vtkInstantiatorvtkImageWeightedSumNew);


}

void vtkImagingMathInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkImageDivergence", vtkInstantiatorvtkImageDivergenceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageDotProduct", vtkInstantiatorvtkImageDotProductNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageLogarithmicScale", vtkInstantiatorvtkImageLogarithmicScaleNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageLogic", vtkInstantiatorvtkImageLogicNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageMagnitude", vtkInstantiatorvtkImageMagnitudeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageMaskBits", vtkInstantiatorvtkImageMaskBitsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageMathematics", vtkInstantiatorvtkImageMathematicsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageWeightedSum", vtkInstantiatorvtkImageWeightedSumNew);


}

vtkImagingMathInstantiator::vtkImagingMathInstantiator()
{
  if(++vtkImagingMathInstantiator::Count == 1)
    {
    vtkImagingMathInstantiator::ClassInitialize();
    }
}

vtkImagingMathInstantiator::~vtkImagingMathInstantiator()
{
  if(--vtkImagingMathInstantiator::Count == 0)
    {
    vtkImagingMathInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkImagingMathInstantiator::Count;
