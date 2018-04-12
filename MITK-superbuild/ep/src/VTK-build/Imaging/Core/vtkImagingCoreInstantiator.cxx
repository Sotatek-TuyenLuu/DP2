#include "vtkImagingCoreInstantiator.h"
#include "vtkExtractVOI.h"
#include "vtkImageAppendComponents.h"
#include "vtkImageBlend.h"
#include "vtkImageCacheFilter.h"
#include "vtkImageCast.h"
#include "vtkImageChangeInformation.h"
#include "vtkImageClip.h"
#include "vtkImageConstantPad.h"
#include "vtkImageDataStreamer.h"
#include "vtkImageDifference.h"
#include "vtkImageExtractComponents.h"
#include "vtkImageFlip.h"
#include "vtkImageMagnify.h"
#include "vtkImageMapToColors.h"
#include "vtkImageMask.h"
#include "vtkImageMirrorPad.h"
#include "vtkImagePadFilter.h"
#include "vtkImagePermute.h"
#include "vtkImageResample.h"
#include "vtkImageReslice.h"
#include "vtkImageResliceToColors.h"
#include "vtkImageShiftScale.h"
#include "vtkImageShrink3D.h"
#include "vtkImageThreshold.h"
#include "vtkImageTranslateExtent.h"
#include "vtkImageWrapPad.h"
#include "vtkRTAnalyticSource.h"
#include "vtkImageResize.h"
#include "vtkImageBSplineCoefficients.h"
#include "vtkImageStencilData.h"
#include "vtkImageStencilAlgorithm.h"
#include "vtkImageBSplineInterpolator.h"
#include "vtkImageSincInterpolator.h"
#include "vtkImageInterpolator.h"
#include "vtkImageStencilSource.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkExtractVOI)
vtkInstantiatorNewMacro(vtkImageAppendComponents)
vtkInstantiatorNewMacro(vtkImageBlend)
vtkInstantiatorNewMacro(vtkImageCacheFilter)
vtkInstantiatorNewMacro(vtkImageCast)
vtkInstantiatorNewMacro(vtkImageChangeInformation)
vtkInstantiatorNewMacro(vtkImageClip)
vtkInstantiatorNewMacro(vtkImageConstantPad)
vtkInstantiatorNewMacro(vtkImageDataStreamer)
vtkInstantiatorNewMacro(vtkImageDifference)
vtkInstantiatorNewMacro(vtkImageExtractComponents)
vtkInstantiatorNewMacro(vtkImageFlip)
vtkInstantiatorNewMacro(vtkImageMagnify)
vtkInstantiatorNewMacro(vtkImageMapToColors)
vtkInstantiatorNewMacro(vtkImageMask)
vtkInstantiatorNewMacro(vtkImageMirrorPad)
vtkInstantiatorNewMacro(vtkImagePadFilter)
vtkInstantiatorNewMacro(vtkImagePermute)
vtkInstantiatorNewMacro(vtkImageResample)
vtkInstantiatorNewMacro(vtkImageReslice)
vtkInstantiatorNewMacro(vtkImageResliceToColors)
vtkInstantiatorNewMacro(vtkImageShiftScale)
vtkInstantiatorNewMacro(vtkImageShrink3D)
vtkInstantiatorNewMacro(vtkImageThreshold)
vtkInstantiatorNewMacro(vtkImageTranslateExtent)
vtkInstantiatorNewMacro(vtkImageWrapPad)
vtkInstantiatorNewMacro(vtkRTAnalyticSource)
vtkInstantiatorNewMacro(vtkImageResize)
vtkInstantiatorNewMacro(vtkImageBSplineCoefficients)
vtkInstantiatorNewMacro(vtkImageStencilData)
vtkInstantiatorNewMacro(vtkImageStencilAlgorithm)
vtkInstantiatorNewMacro(vtkImageBSplineInterpolator)
vtkInstantiatorNewMacro(vtkImageSincInterpolator)
vtkInstantiatorNewMacro(vtkImageInterpolator)
vtkInstantiatorNewMacro(vtkImageStencilSource)



void vtkImagingCoreInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkExtractVOI", vtkInstantiatorvtkExtractVOINew);
  vtkInstantiator::RegisterInstantiator("vtkImageAppendComponents", vtkInstantiatorvtkImageAppendComponentsNew);
  vtkInstantiator::RegisterInstantiator("vtkImageBlend", vtkInstantiatorvtkImageBlendNew);
  vtkInstantiator::RegisterInstantiator("vtkImageCacheFilter", vtkInstantiatorvtkImageCacheFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkImageCast", vtkInstantiatorvtkImageCastNew);
  vtkInstantiator::RegisterInstantiator("vtkImageChangeInformation", vtkInstantiatorvtkImageChangeInformationNew);
  vtkInstantiator::RegisterInstantiator("vtkImageClip", vtkInstantiatorvtkImageClipNew);
  vtkInstantiator::RegisterInstantiator("vtkImageConstantPad", vtkInstantiatorvtkImageConstantPadNew);
  vtkInstantiator::RegisterInstantiator("vtkImageDataStreamer", vtkInstantiatorvtkImageDataStreamerNew);
  vtkInstantiator::RegisterInstantiator("vtkImageDifference", vtkInstantiatorvtkImageDifferenceNew);
  vtkInstantiator::RegisterInstantiator("vtkImageExtractComponents", vtkInstantiatorvtkImageExtractComponentsNew);
  vtkInstantiator::RegisterInstantiator("vtkImageFlip", vtkInstantiatorvtkImageFlipNew);
  vtkInstantiator::RegisterInstantiator("vtkImageMagnify", vtkInstantiatorvtkImageMagnifyNew);
  vtkInstantiator::RegisterInstantiator("vtkImageMapToColors", vtkInstantiatorvtkImageMapToColorsNew);
  vtkInstantiator::RegisterInstantiator("vtkImageMask", vtkInstantiatorvtkImageMaskNew);
  vtkInstantiator::RegisterInstantiator("vtkImageMirrorPad", vtkInstantiatorvtkImageMirrorPadNew);
  vtkInstantiator::RegisterInstantiator("vtkImagePadFilter", vtkInstantiatorvtkImagePadFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkImagePermute", vtkInstantiatorvtkImagePermuteNew);
  vtkInstantiator::RegisterInstantiator("vtkImageResample", vtkInstantiatorvtkImageResampleNew);
  vtkInstantiator::RegisterInstantiator("vtkImageReslice", vtkInstantiatorvtkImageResliceNew);
  vtkInstantiator::RegisterInstantiator("vtkImageResliceToColors", vtkInstantiatorvtkImageResliceToColorsNew);
  vtkInstantiator::RegisterInstantiator("vtkImageShiftScale", vtkInstantiatorvtkImageShiftScaleNew);
  vtkInstantiator::RegisterInstantiator("vtkImageShrink3D", vtkInstantiatorvtkImageShrink3DNew);
  vtkInstantiator::RegisterInstantiator("vtkImageThreshold", vtkInstantiatorvtkImageThresholdNew);
  vtkInstantiator::RegisterInstantiator("vtkImageTranslateExtent", vtkInstantiatorvtkImageTranslateExtentNew);
  vtkInstantiator::RegisterInstantiator("vtkImageWrapPad", vtkInstantiatorvtkImageWrapPadNew);
  vtkInstantiator::RegisterInstantiator("vtkRTAnalyticSource", vtkInstantiatorvtkRTAnalyticSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkImageResize", vtkInstantiatorvtkImageResizeNew);
  vtkInstantiator::RegisterInstantiator("vtkImageBSplineCoefficients", vtkInstantiatorvtkImageBSplineCoefficientsNew);
  vtkInstantiator::RegisterInstantiator("vtkImageStencilData", vtkInstantiatorvtkImageStencilDataNew);
  vtkInstantiator::RegisterInstantiator("vtkImageStencilAlgorithm", vtkInstantiatorvtkImageStencilAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkImageBSplineInterpolator", vtkInstantiatorvtkImageBSplineInterpolatorNew);
  vtkInstantiator::RegisterInstantiator("vtkImageSincInterpolator", vtkInstantiatorvtkImageSincInterpolatorNew);
  vtkInstantiator::RegisterInstantiator("vtkImageInterpolator", vtkInstantiatorvtkImageInterpolatorNew);
  vtkInstantiator::RegisterInstantiator("vtkImageStencilSource", vtkInstantiatorvtkImageStencilSourceNew);


}

void vtkImagingCoreInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkExtractVOI", vtkInstantiatorvtkExtractVOINew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageAppendComponents", vtkInstantiatorvtkImageAppendComponentsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageBlend", vtkInstantiatorvtkImageBlendNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageCacheFilter", vtkInstantiatorvtkImageCacheFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageCast", vtkInstantiatorvtkImageCastNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageChangeInformation", vtkInstantiatorvtkImageChangeInformationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageClip", vtkInstantiatorvtkImageClipNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageConstantPad", vtkInstantiatorvtkImageConstantPadNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageDataStreamer", vtkInstantiatorvtkImageDataStreamerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageDifference", vtkInstantiatorvtkImageDifferenceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageExtractComponents", vtkInstantiatorvtkImageExtractComponentsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageFlip", vtkInstantiatorvtkImageFlipNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageMagnify", vtkInstantiatorvtkImageMagnifyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageMapToColors", vtkInstantiatorvtkImageMapToColorsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageMask", vtkInstantiatorvtkImageMaskNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageMirrorPad", vtkInstantiatorvtkImageMirrorPadNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImagePadFilter", vtkInstantiatorvtkImagePadFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImagePermute", vtkInstantiatorvtkImagePermuteNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageResample", vtkInstantiatorvtkImageResampleNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageReslice", vtkInstantiatorvtkImageResliceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageResliceToColors", vtkInstantiatorvtkImageResliceToColorsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageShiftScale", vtkInstantiatorvtkImageShiftScaleNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageShrink3D", vtkInstantiatorvtkImageShrink3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageThreshold", vtkInstantiatorvtkImageThresholdNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageTranslateExtent", vtkInstantiatorvtkImageTranslateExtentNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageWrapPad", vtkInstantiatorvtkImageWrapPadNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRTAnalyticSource", vtkInstantiatorvtkRTAnalyticSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageResize", vtkInstantiatorvtkImageResizeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageBSplineCoefficients", vtkInstantiatorvtkImageBSplineCoefficientsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageStencilData", vtkInstantiatorvtkImageStencilDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageStencilAlgorithm", vtkInstantiatorvtkImageStencilAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageBSplineInterpolator", vtkInstantiatorvtkImageBSplineInterpolatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageSincInterpolator", vtkInstantiatorvtkImageSincInterpolatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageInterpolator", vtkInstantiatorvtkImageInterpolatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageStencilSource", vtkInstantiatorvtkImageStencilSourceNew);


}

vtkImagingCoreInstantiator::vtkImagingCoreInstantiator()
{
  if(++vtkImagingCoreInstantiator::Count == 1)
    {
    vtkImagingCoreInstantiator::ClassInitialize();
    }
}

vtkImagingCoreInstantiator::~vtkImagingCoreInstantiator()
{
  if(--vtkImagingCoreInstantiator::Count == 0)
    {
    vtkImagingCoreInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkImagingCoreInstantiator::Count;
