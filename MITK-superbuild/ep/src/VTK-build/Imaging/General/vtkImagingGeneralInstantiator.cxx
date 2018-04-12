#include "vtkImagingGeneralInstantiator.h"
#include "vtkImageAnisotropicDiffusion2D.h"
#include "vtkImageAnisotropicDiffusion3D.h"
#include "vtkImageCheckerboard.h"
#include "vtkImageCityBlockDistance.h"
#include "vtkImageConvolve.h"
#include "vtkImageCorrelation.h"
#include "vtkImageEuclideanDistance.h"
#include "vtkImageEuclideanToPolar.h"
#include "vtkImageGaussianSmooth.h"
#include "vtkImageGradient.h"
#include "vtkImageGradientMagnitude.h"
#include "vtkImageHybridMedian2D.h"
#include "vtkImageLaplacian.h"
#include "vtkImageMedian3D.h"
#include "vtkImageNormalize.h"
#include "vtkImageRange3D.h"
#include "vtkImageSeparableConvolution.h"
#include "vtkImageSobel2D.h"
#include "vtkImageSobel3D.h"
#include "vtkImageSpatialAlgorithm.h"
#include "vtkImageVariance3D.h"
#include "vtkSimpleImageFilterExample.h"
#include "vtkImageSlab.h"
#include "vtkImageSlabReslice.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkImageAnisotropicDiffusion2D)
vtkInstantiatorNewMacro(vtkImageAnisotropicDiffusion3D)
vtkInstantiatorNewMacro(vtkImageCheckerboard)
vtkInstantiatorNewMacro(vtkImageCityBlockDistance)
vtkInstantiatorNewMacro(vtkImageConvolve)
vtkInstantiatorNewMacro(vtkImageCorrelation)
vtkInstantiatorNewMacro(vtkImageEuclideanDistance)
vtkInstantiatorNewMacro(vtkImageEuclideanToPolar)
vtkInstantiatorNewMacro(vtkImageGaussianSmooth)
vtkInstantiatorNewMacro(vtkImageGradient)
vtkInstantiatorNewMacro(vtkImageGradientMagnitude)
vtkInstantiatorNewMacro(vtkImageHybridMedian2D)
vtkInstantiatorNewMacro(vtkImageLaplacian)
vtkInstantiatorNewMacro(vtkImageMedian3D)
vtkInstantiatorNewMacro(vtkImageNormalize)
vtkInstantiatorNewMacro(vtkImageRange3D)
vtkInstantiatorNewMacro(vtkImageSeparableConvolution)
vtkInstantiatorNewMacro(vtkImageSobel2D)
vtkInstantiatorNewMacro(vtkImageSobel3D)
vtkInstantiatorNewMacro(vtkImageSpatialAlgorithm)
vtkInstantiatorNewMacro(vtkImageVariance3D)
vtkInstantiatorNewMacro(vtkSimpleImageFilterExample)
vtkInstantiatorNewMacro(vtkImageSlab)
vtkInstantiatorNewMacro(vtkImageSlabReslice)



void vtkImagingGeneralInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkImageAnisotropicDiffusion2D", vtkInstantiatorvtkImageAnisotropicDiffusion2DNew);
  vtkInstantiator::RegisterInstantiator("vtkImageAnisotropicDiffusion3D", vtkInstantiatorvtkImageAnisotropicDiffusion3DNew);
  vtkInstantiator::RegisterInstantiator("vtkImageCheckerboard", vtkInstantiatorvtkImageCheckerboardNew);
  vtkInstantiator::RegisterInstantiator("vtkImageCityBlockDistance", vtkInstantiatorvtkImageCityBlockDistanceNew);
  vtkInstantiator::RegisterInstantiator("vtkImageConvolve", vtkInstantiatorvtkImageConvolveNew);
  vtkInstantiator::RegisterInstantiator("vtkImageCorrelation", vtkInstantiatorvtkImageCorrelationNew);
  vtkInstantiator::RegisterInstantiator("vtkImageEuclideanDistance", vtkInstantiatorvtkImageEuclideanDistanceNew);
  vtkInstantiator::RegisterInstantiator("vtkImageEuclideanToPolar", vtkInstantiatorvtkImageEuclideanToPolarNew);
  vtkInstantiator::RegisterInstantiator("vtkImageGaussianSmooth", vtkInstantiatorvtkImageGaussianSmoothNew);
  vtkInstantiator::RegisterInstantiator("vtkImageGradient", vtkInstantiatorvtkImageGradientNew);
  vtkInstantiator::RegisterInstantiator("vtkImageGradientMagnitude", vtkInstantiatorvtkImageGradientMagnitudeNew);
  vtkInstantiator::RegisterInstantiator("vtkImageHybridMedian2D", vtkInstantiatorvtkImageHybridMedian2DNew);
  vtkInstantiator::RegisterInstantiator("vtkImageLaplacian", vtkInstantiatorvtkImageLaplacianNew);
  vtkInstantiator::RegisterInstantiator("vtkImageMedian3D", vtkInstantiatorvtkImageMedian3DNew);
  vtkInstantiator::RegisterInstantiator("vtkImageNormalize", vtkInstantiatorvtkImageNormalizeNew);
  vtkInstantiator::RegisterInstantiator("vtkImageRange3D", vtkInstantiatorvtkImageRange3DNew);
  vtkInstantiator::RegisterInstantiator("vtkImageSeparableConvolution", vtkInstantiatorvtkImageSeparableConvolutionNew);
  vtkInstantiator::RegisterInstantiator("vtkImageSobel2D", vtkInstantiatorvtkImageSobel2DNew);
  vtkInstantiator::RegisterInstantiator("vtkImageSobel3D", vtkInstantiatorvtkImageSobel3DNew);
  vtkInstantiator::RegisterInstantiator("vtkImageSpatialAlgorithm", vtkInstantiatorvtkImageSpatialAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkImageVariance3D", vtkInstantiatorvtkImageVariance3DNew);
  vtkInstantiator::RegisterInstantiator("vtkSimpleImageFilterExample", vtkInstantiatorvtkSimpleImageFilterExampleNew);
  vtkInstantiator::RegisterInstantiator("vtkImageSlab", vtkInstantiatorvtkImageSlabNew);
  vtkInstantiator::RegisterInstantiator("vtkImageSlabReslice", vtkInstantiatorvtkImageSlabResliceNew);


}

void vtkImagingGeneralInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkImageAnisotropicDiffusion2D", vtkInstantiatorvtkImageAnisotropicDiffusion2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageAnisotropicDiffusion3D", vtkInstantiatorvtkImageAnisotropicDiffusion3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageCheckerboard", vtkInstantiatorvtkImageCheckerboardNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageCityBlockDistance", vtkInstantiatorvtkImageCityBlockDistanceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageConvolve", vtkInstantiatorvtkImageConvolveNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageCorrelation", vtkInstantiatorvtkImageCorrelationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageEuclideanDistance", vtkInstantiatorvtkImageEuclideanDistanceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageEuclideanToPolar", vtkInstantiatorvtkImageEuclideanToPolarNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageGaussianSmooth", vtkInstantiatorvtkImageGaussianSmoothNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageGradient", vtkInstantiatorvtkImageGradientNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageGradientMagnitude", vtkInstantiatorvtkImageGradientMagnitudeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageHybridMedian2D", vtkInstantiatorvtkImageHybridMedian2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageLaplacian", vtkInstantiatorvtkImageLaplacianNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageMedian3D", vtkInstantiatorvtkImageMedian3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageNormalize", vtkInstantiatorvtkImageNormalizeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageRange3D", vtkInstantiatorvtkImageRange3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageSeparableConvolution", vtkInstantiatorvtkImageSeparableConvolutionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageSobel2D", vtkInstantiatorvtkImageSobel2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageSobel3D", vtkInstantiatorvtkImageSobel3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageSpatialAlgorithm", vtkInstantiatorvtkImageSpatialAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageVariance3D", vtkInstantiatorvtkImageVariance3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSimpleImageFilterExample", vtkInstantiatorvtkSimpleImageFilterExampleNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageSlab", vtkInstantiatorvtkImageSlabNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageSlabReslice", vtkInstantiatorvtkImageSlabResliceNew);


}

vtkImagingGeneralInstantiator::vtkImagingGeneralInstantiator()
{
  if(++vtkImagingGeneralInstantiator::Count == 1)
    {
    vtkImagingGeneralInstantiator::ClassInitialize();
    }
}

vtkImagingGeneralInstantiator::~vtkImagingGeneralInstantiator()
{
  if(--vtkImagingGeneralInstantiator::Count == 0)
    {
    vtkImagingGeneralInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkImagingGeneralInstantiator::Count;
