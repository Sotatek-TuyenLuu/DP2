#include "vtkImagingMorphologicalInstantiator.h"
#include "vtkImageConnector.h"
#include "vtkImageContinuousDilate3D.h"
#include "vtkImageContinuousErode3D.h"
#include "vtkImageDilateErode3D.h"
#include "vtkImageIslandRemoval2D.h"
#include "vtkImageNonMaximumSuppression.h"
#include "vtkImageOpenClose3D.h"
#include "vtkImageSeedConnectivity.h"
#include "vtkImageSkeleton2D.h"
#include "vtkImageThresholdConnectivity.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkImageConnector)
vtkInstantiatorNewMacro(vtkImageContinuousDilate3D)
vtkInstantiatorNewMacro(vtkImageContinuousErode3D)
vtkInstantiatorNewMacro(vtkImageDilateErode3D)
vtkInstantiatorNewMacro(vtkImageIslandRemoval2D)
vtkInstantiatorNewMacro(vtkImageNonMaximumSuppression)
vtkInstantiatorNewMacro(vtkImageOpenClose3D)
vtkInstantiatorNewMacro(vtkImageSeedConnectivity)
vtkInstantiatorNewMacro(vtkImageSkeleton2D)
vtkInstantiatorNewMacro(vtkImageThresholdConnectivity)



void vtkImagingMorphologicalInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkImageConnector", vtkInstantiatorvtkImageConnectorNew);
  vtkInstantiator::RegisterInstantiator("vtkImageContinuousDilate3D", vtkInstantiatorvtkImageContinuousDilate3DNew);
  vtkInstantiator::RegisterInstantiator("vtkImageContinuousErode3D", vtkInstantiatorvtkImageContinuousErode3DNew);
  vtkInstantiator::RegisterInstantiator("vtkImageDilateErode3D", vtkInstantiatorvtkImageDilateErode3DNew);
  vtkInstantiator::RegisterInstantiator("vtkImageIslandRemoval2D", vtkInstantiatorvtkImageIslandRemoval2DNew);
  vtkInstantiator::RegisterInstantiator("vtkImageNonMaximumSuppression", vtkInstantiatorvtkImageNonMaximumSuppressionNew);
  vtkInstantiator::RegisterInstantiator("vtkImageOpenClose3D", vtkInstantiatorvtkImageOpenClose3DNew);
  vtkInstantiator::RegisterInstantiator("vtkImageSeedConnectivity", vtkInstantiatorvtkImageSeedConnectivityNew);
  vtkInstantiator::RegisterInstantiator("vtkImageSkeleton2D", vtkInstantiatorvtkImageSkeleton2DNew);
  vtkInstantiator::RegisterInstantiator("vtkImageThresholdConnectivity", vtkInstantiatorvtkImageThresholdConnectivityNew);


}

void vtkImagingMorphologicalInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkImageConnector", vtkInstantiatorvtkImageConnectorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageContinuousDilate3D", vtkInstantiatorvtkImageContinuousDilate3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageContinuousErode3D", vtkInstantiatorvtkImageContinuousErode3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageDilateErode3D", vtkInstantiatorvtkImageDilateErode3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageIslandRemoval2D", vtkInstantiatorvtkImageIslandRemoval2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageNonMaximumSuppression", vtkInstantiatorvtkImageNonMaximumSuppressionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageOpenClose3D", vtkInstantiatorvtkImageOpenClose3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageSeedConnectivity", vtkInstantiatorvtkImageSeedConnectivityNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageSkeleton2D", vtkInstantiatorvtkImageSkeleton2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageThresholdConnectivity", vtkInstantiatorvtkImageThresholdConnectivityNew);


}

vtkImagingMorphologicalInstantiator::vtkImagingMorphologicalInstantiator()
{
  if(++vtkImagingMorphologicalInstantiator::Count == 1)
    {
    vtkImagingMorphologicalInstantiator::ClassInitialize();
    }
}

vtkImagingMorphologicalInstantiator::~vtkImagingMorphologicalInstantiator()
{
  if(--vtkImagingMorphologicalInstantiator::Count == 0)
    {
    vtkImagingMorphologicalInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkImagingMorphologicalInstantiator::Count;
