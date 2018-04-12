#include "vtkGeovisCoreInstantiator.h"
#include "vtkCompassRepresentation.h"
#include "vtkCompassWidget.h"
#include "vtkGeoAdaptiveArcs.h"
#include "vtkGeoAlignedImageSource.h"
#include "vtkGeoArcs.h"
#include "vtkGeoAssignCoordinates.h"
#include "vtkGeoCamera.h"
#include "vtkGeoFileImageSource.h"
#include "vtkGeoFileTerrainSource.h"
#include "vtkGeoGlobeSource.h"
#include "vtkGeoGraticule.h"
#include "vtkGeoImageNode.h"
#include "vtkGeoInteractorStyle.h"
#include "vtkGeoProjection.h"
#include "vtkGeoProjectionSource.h"
#include "vtkGeoRandomGraphSource.h"
#include "vtkGeoSampleArcs.h"
#include "vtkGeoSphereTransform.h"
#include "vtkGeoTerrain.h"
#include "vtkGeoTerrain2D.h"
#include "vtkGeoTerrainNode.h"
#include "vtkGeoTransform.h"
#include "vtkGeoTreeNode.h"
#include "vtkGeoTreeNodeCache.h"
#include "vtkGlobeSource.h"
#include "vtkGeoAlignedImageRepresentation.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkCompassRepresentation)
vtkInstantiatorNewMacro(vtkCompassWidget)
vtkInstantiatorNewMacro(vtkGeoAdaptiveArcs)
vtkInstantiatorNewMacro(vtkGeoAlignedImageSource)
vtkInstantiatorNewMacro(vtkGeoArcs)
vtkInstantiatorNewMacro(vtkGeoAssignCoordinates)
vtkInstantiatorNewMacro(vtkGeoCamera)
vtkInstantiatorNewMacro(vtkGeoFileImageSource)
vtkInstantiatorNewMacro(vtkGeoFileTerrainSource)
vtkInstantiatorNewMacro(vtkGeoGlobeSource)
vtkInstantiatorNewMacro(vtkGeoGraticule)
vtkInstantiatorNewMacro(vtkGeoImageNode)
vtkInstantiatorNewMacro(vtkGeoInteractorStyle)
vtkInstantiatorNewMacro(vtkGeoProjection)
vtkInstantiatorNewMacro(vtkGeoProjectionSource)
vtkInstantiatorNewMacro(vtkGeoRandomGraphSource)
vtkInstantiatorNewMacro(vtkGeoSampleArcs)
vtkInstantiatorNewMacro(vtkGeoSphereTransform)
vtkInstantiatorNewMacro(vtkGeoTerrain)
vtkInstantiatorNewMacro(vtkGeoTerrain2D)
vtkInstantiatorNewMacro(vtkGeoTerrainNode)
vtkInstantiatorNewMacro(vtkGeoTransform)
vtkInstantiatorNewMacro(vtkGeoTreeNode)
vtkInstantiatorNewMacro(vtkGeoTreeNodeCache)
vtkInstantiatorNewMacro(vtkGlobeSource)
vtkInstantiatorNewMacro(vtkGeoAlignedImageRepresentation)



void vtkGeovisCoreInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkCompassRepresentation", vtkInstantiatorvtkCompassRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkCompassWidget", vtkInstantiatorvtkCompassWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkGeoAdaptiveArcs", vtkInstantiatorvtkGeoAdaptiveArcsNew);
  vtkInstantiator::RegisterInstantiator("vtkGeoAlignedImageSource", vtkInstantiatorvtkGeoAlignedImageSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkGeoArcs", vtkInstantiatorvtkGeoArcsNew);
  vtkInstantiator::RegisterInstantiator("vtkGeoAssignCoordinates", vtkInstantiatorvtkGeoAssignCoordinatesNew);
  vtkInstantiator::RegisterInstantiator("vtkGeoCamera", vtkInstantiatorvtkGeoCameraNew);
  vtkInstantiator::RegisterInstantiator("vtkGeoFileImageSource", vtkInstantiatorvtkGeoFileImageSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkGeoFileTerrainSource", vtkInstantiatorvtkGeoFileTerrainSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkGeoGlobeSource", vtkInstantiatorvtkGeoGlobeSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkGeoGraticule", vtkInstantiatorvtkGeoGraticuleNew);
  vtkInstantiator::RegisterInstantiator("vtkGeoImageNode", vtkInstantiatorvtkGeoImageNodeNew);
  vtkInstantiator::RegisterInstantiator("vtkGeoInteractorStyle", vtkInstantiatorvtkGeoInteractorStyleNew);
  vtkInstantiator::RegisterInstantiator("vtkGeoProjection", vtkInstantiatorvtkGeoProjectionNew);
  vtkInstantiator::RegisterInstantiator("vtkGeoProjectionSource", vtkInstantiatorvtkGeoProjectionSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkGeoRandomGraphSource", vtkInstantiatorvtkGeoRandomGraphSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkGeoSampleArcs", vtkInstantiatorvtkGeoSampleArcsNew);
  vtkInstantiator::RegisterInstantiator("vtkGeoSphereTransform", vtkInstantiatorvtkGeoSphereTransformNew);
  vtkInstantiator::RegisterInstantiator("vtkGeoTerrain", vtkInstantiatorvtkGeoTerrainNew);
  vtkInstantiator::RegisterInstantiator("vtkGeoTerrain2D", vtkInstantiatorvtkGeoTerrain2DNew);
  vtkInstantiator::RegisterInstantiator("vtkGeoTerrainNode", vtkInstantiatorvtkGeoTerrainNodeNew);
  vtkInstantiator::RegisterInstantiator("vtkGeoTransform", vtkInstantiatorvtkGeoTransformNew);
  vtkInstantiator::RegisterInstantiator("vtkGeoTreeNode", vtkInstantiatorvtkGeoTreeNodeNew);
  vtkInstantiator::RegisterInstantiator("vtkGeoTreeNodeCache", vtkInstantiatorvtkGeoTreeNodeCacheNew);
  vtkInstantiator::RegisterInstantiator("vtkGlobeSource", vtkInstantiatorvtkGlobeSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkGeoAlignedImageRepresentation", vtkInstantiatorvtkGeoAlignedImageRepresentationNew);


}

void vtkGeovisCoreInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkCompassRepresentation", vtkInstantiatorvtkCompassRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCompassWidget", vtkInstantiatorvtkCompassWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeoAdaptiveArcs", vtkInstantiatorvtkGeoAdaptiveArcsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeoAlignedImageSource", vtkInstantiatorvtkGeoAlignedImageSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeoArcs", vtkInstantiatorvtkGeoArcsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeoAssignCoordinates", vtkInstantiatorvtkGeoAssignCoordinatesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeoCamera", vtkInstantiatorvtkGeoCameraNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeoFileImageSource", vtkInstantiatorvtkGeoFileImageSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeoFileTerrainSource", vtkInstantiatorvtkGeoFileTerrainSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeoGlobeSource", vtkInstantiatorvtkGeoGlobeSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeoGraticule", vtkInstantiatorvtkGeoGraticuleNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeoImageNode", vtkInstantiatorvtkGeoImageNodeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeoInteractorStyle", vtkInstantiatorvtkGeoInteractorStyleNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeoProjection", vtkInstantiatorvtkGeoProjectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeoProjectionSource", vtkInstantiatorvtkGeoProjectionSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeoRandomGraphSource", vtkInstantiatorvtkGeoRandomGraphSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeoSampleArcs", vtkInstantiatorvtkGeoSampleArcsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeoSphereTransform", vtkInstantiatorvtkGeoSphereTransformNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeoTerrain", vtkInstantiatorvtkGeoTerrainNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeoTerrain2D", vtkInstantiatorvtkGeoTerrain2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeoTerrainNode", vtkInstantiatorvtkGeoTerrainNodeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeoTransform", vtkInstantiatorvtkGeoTransformNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeoTreeNode", vtkInstantiatorvtkGeoTreeNodeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeoTreeNodeCache", vtkInstantiatorvtkGeoTreeNodeCacheNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGlobeSource", vtkInstantiatorvtkGlobeSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeoAlignedImageRepresentation", vtkInstantiatorvtkGeoAlignedImageRepresentationNew);


}

vtkGeovisCoreInstantiator::vtkGeovisCoreInstantiator()
{
  if(++vtkGeovisCoreInstantiator::Count == 1)
    {
    vtkGeovisCoreInstantiator::ClassInitialize();
    }
}

vtkGeovisCoreInstantiator::~vtkGeovisCoreInstantiator()
{
  if(--vtkGeovisCoreInstantiator::Count == 0)
    {
    vtkGeovisCoreInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkGeovisCoreInstantiator::Count;
