#include "vtkInteractionStyleInstantiator.h"
#include "vtkInteractorStyleDrawPolygon.h"
#include "vtkInteractorStyleFlight.h"
#include "vtkInteractorStyleImage.h"
#include "vtkInteractorStyleJoystickActor.h"
#include "vtkInteractorStyleJoystickCamera.h"
#include "vtkInteractorStyleMultiTouchCamera.h"
#include "vtkInteractorStyleRubberBand2D.h"
#include "vtkInteractorStyleRubberBand3D.h"
#include "vtkInteractorStyleRubberBandPick.h"
#include "vtkInteractorStyleRubberBandZoom.h"
#include "vtkInteractorStyleTerrain.h"
#include "vtkInteractorStyleTrackballActor.h"
#include "vtkInteractorStyleTrackballCamera.h"
#include "vtkInteractorStyleTrackball.h"
#include "vtkInteractorStyleUnicam.h"
#include "vtkInteractorStyleUser.h"
#include "vtkInteractorStyleSwitch.h"
#include "vtkParallelCoordinatesInteractorStyle.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkInteractorStyleDrawPolygon)
vtkInstantiatorNewMacro(vtkInteractorStyleFlight)
vtkInstantiatorNewMacro(vtkInteractorStyleImage)
vtkInstantiatorNewMacro(vtkInteractorStyleJoystickActor)
vtkInstantiatorNewMacro(vtkInteractorStyleJoystickCamera)
vtkInstantiatorNewMacro(vtkInteractorStyleMultiTouchCamera)
vtkInstantiatorNewMacro(vtkInteractorStyleRubberBand2D)
vtkInstantiatorNewMacro(vtkInteractorStyleRubberBand3D)
vtkInstantiatorNewMacro(vtkInteractorStyleRubberBandPick)
vtkInstantiatorNewMacro(vtkInteractorStyleRubberBandZoom)
vtkInstantiatorNewMacro(vtkInteractorStyleTerrain)
vtkInstantiatorNewMacro(vtkInteractorStyleTrackballActor)
vtkInstantiatorNewMacro(vtkInteractorStyleTrackballCamera)
vtkInstantiatorNewMacro(vtkInteractorStyleTrackball)
vtkInstantiatorNewMacro(vtkInteractorStyleUnicam)
vtkInstantiatorNewMacro(vtkInteractorStyleUser)
vtkInstantiatorNewMacro(vtkInteractorStyleSwitch)
vtkInstantiatorNewMacro(vtkParallelCoordinatesInteractorStyle)



void vtkInteractionStyleInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleDrawPolygon", vtkInstantiatorvtkInteractorStyleDrawPolygonNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleFlight", vtkInstantiatorvtkInteractorStyleFlightNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleImage", vtkInstantiatorvtkInteractorStyleImageNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleJoystickActor", vtkInstantiatorvtkInteractorStyleJoystickActorNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleJoystickCamera", vtkInstantiatorvtkInteractorStyleJoystickCameraNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleMultiTouchCamera", vtkInstantiatorvtkInteractorStyleMultiTouchCameraNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleRubberBand2D", vtkInstantiatorvtkInteractorStyleRubberBand2DNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleRubberBand3D", vtkInstantiatorvtkInteractorStyleRubberBand3DNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleRubberBandPick", vtkInstantiatorvtkInteractorStyleRubberBandPickNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleRubberBandZoom", vtkInstantiatorvtkInteractorStyleRubberBandZoomNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleTerrain", vtkInstantiatorvtkInteractorStyleTerrainNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleTrackballActor", vtkInstantiatorvtkInteractorStyleTrackballActorNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleTrackballCamera", vtkInstantiatorvtkInteractorStyleTrackballCameraNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleTrackball", vtkInstantiatorvtkInteractorStyleTrackballNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleUnicam", vtkInstantiatorvtkInteractorStyleUnicamNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleUser", vtkInstantiatorvtkInteractorStyleUserNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleSwitch", vtkInstantiatorvtkInteractorStyleSwitchNew);
  vtkInstantiator::RegisterInstantiator("vtkParallelCoordinatesInteractorStyle", vtkInstantiatorvtkParallelCoordinatesInteractorStyleNew);


}

void vtkInteractionStyleInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleDrawPolygon", vtkInstantiatorvtkInteractorStyleDrawPolygonNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleFlight", vtkInstantiatorvtkInteractorStyleFlightNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleImage", vtkInstantiatorvtkInteractorStyleImageNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleJoystickActor", vtkInstantiatorvtkInteractorStyleJoystickActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleJoystickCamera", vtkInstantiatorvtkInteractorStyleJoystickCameraNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleMultiTouchCamera", vtkInstantiatorvtkInteractorStyleMultiTouchCameraNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleRubberBand2D", vtkInstantiatorvtkInteractorStyleRubberBand2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleRubberBand3D", vtkInstantiatorvtkInteractorStyleRubberBand3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleRubberBandPick", vtkInstantiatorvtkInteractorStyleRubberBandPickNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleRubberBandZoom", vtkInstantiatorvtkInteractorStyleRubberBandZoomNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleTerrain", vtkInstantiatorvtkInteractorStyleTerrainNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleTrackballActor", vtkInstantiatorvtkInteractorStyleTrackballActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleTrackballCamera", vtkInstantiatorvtkInteractorStyleTrackballCameraNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleTrackball", vtkInstantiatorvtkInteractorStyleTrackballNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleUnicam", vtkInstantiatorvtkInteractorStyleUnicamNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleUser", vtkInstantiatorvtkInteractorStyleUserNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleSwitch", vtkInstantiatorvtkInteractorStyleSwitchNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParallelCoordinatesInteractorStyle", vtkInstantiatorvtkParallelCoordinatesInteractorStyleNew);


}

vtkInteractionStyleInstantiator::vtkInteractionStyleInstantiator()
{
  if(++vtkInteractionStyleInstantiator::Count == 1)
    {
    vtkInteractionStyleInstantiator::ClassInitialize();
    }
}

vtkInteractionStyleInstantiator::~vtkInteractionStyleInstantiator()
{
  if(--vtkInteractionStyleInstantiator::Count == 0)
    {
    vtkInteractionStyleInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkInteractionStyleInstantiator::Count;
