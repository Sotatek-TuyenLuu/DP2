#include "vtkImagingColorInstantiator.h"
#include "vtkImageHSIToRGB.h"
#include "vtkImageHSVToRGB.h"
#include "vtkImageLuminance.h"
#include "vtkImageMapToRGBA.h"
#include "vtkImageMapToWindowLevelColors.h"
#include "vtkImageQuantizeRGBToIndex.h"
#include "vtkImageRGBToHSI.h"
#include "vtkImageRGBToHSV.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkImageHSIToRGB)
vtkInstantiatorNewMacro(vtkImageHSVToRGB)
vtkInstantiatorNewMacro(vtkImageLuminance)
vtkInstantiatorNewMacro(vtkImageMapToRGBA)
vtkInstantiatorNewMacro(vtkImageMapToWindowLevelColors)
vtkInstantiatorNewMacro(vtkImageQuantizeRGBToIndex)
vtkInstantiatorNewMacro(vtkImageRGBToHSI)
vtkInstantiatorNewMacro(vtkImageRGBToHSV)



void vtkImagingColorInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkImageHSIToRGB", vtkInstantiatorvtkImageHSIToRGBNew);
  vtkInstantiator::RegisterInstantiator("vtkImageHSVToRGB", vtkInstantiatorvtkImageHSVToRGBNew);
  vtkInstantiator::RegisterInstantiator("vtkImageLuminance", vtkInstantiatorvtkImageLuminanceNew);
  vtkInstantiator::RegisterInstantiator("vtkImageMapToRGBA", vtkInstantiatorvtkImageMapToRGBANew);
  vtkInstantiator::RegisterInstantiator("vtkImageMapToWindowLevelColors", vtkInstantiatorvtkImageMapToWindowLevelColorsNew);
  vtkInstantiator::RegisterInstantiator("vtkImageQuantizeRGBToIndex", vtkInstantiatorvtkImageQuantizeRGBToIndexNew);
  vtkInstantiator::RegisterInstantiator("vtkImageRGBToHSI", vtkInstantiatorvtkImageRGBToHSINew);
  vtkInstantiator::RegisterInstantiator("vtkImageRGBToHSV", vtkInstantiatorvtkImageRGBToHSVNew);


}

void vtkImagingColorInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkImageHSIToRGB", vtkInstantiatorvtkImageHSIToRGBNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageHSVToRGB", vtkInstantiatorvtkImageHSVToRGBNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageLuminance", vtkInstantiatorvtkImageLuminanceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageMapToRGBA", vtkInstantiatorvtkImageMapToRGBANew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageMapToWindowLevelColors", vtkInstantiatorvtkImageMapToWindowLevelColorsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageQuantizeRGBToIndex", vtkInstantiatorvtkImageQuantizeRGBToIndexNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageRGBToHSI", vtkInstantiatorvtkImageRGBToHSINew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageRGBToHSV", vtkInstantiatorvtkImageRGBToHSVNew);


}

vtkImagingColorInstantiator::vtkImagingColorInstantiator()
{
  if(++vtkImagingColorInstantiator::Count == 1)
    {
    vtkImagingColorInstantiator::ClassInitialize();
    }
}

vtkImagingColorInstantiator::~vtkImagingColorInstantiator()
{
  if(--vtkImagingColorInstantiator::Count == 0)
    {
    vtkImagingColorInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkImagingColorInstantiator::Count;
