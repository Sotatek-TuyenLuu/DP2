#include "vtkRenderingCoreInstantiator.h"
#include "vtkActor2DCollection.h"
#include "vtkActor2D.h"
#include "vtkActorCollection.h"
#include "vtkActor.h"
#include "vtkAssembly.h"
#include "vtkBackgroundColorMonitor.h"
#include "vtkCameraActor.h"
#include "vtkCamera.h"
#include "vtkCameraInterpolator.h"
#include "vtkCellCenterDepthSort.h"
#include "vtkColorTransferFunction.h"
#include "vtkCompositeDataDisplayAttributes.h"
#include "vtkCompositePolyDataMapper.h"
#include "vtkCoordinate.h"
#include "vtkCullerCollection.h"
#include "vtkDataSetMapper.h"
#include "vtkDiscretizableColorTransferFunction.h"
#include "vtkDistanceToCamera.h"
#include "vtkFollower.h"
#include "vtkFrustumCoverageCuller.h"
#include "vtkGenericRenderWindowInteractor.h"
#include "vtkGenericVertexAttributeMapping.h"
#include "vtkGlyph3DMapper.h"
#include "vtkGPUInfo.h"
#include "vtkGraphicsFactory.h"
#include "vtkGraphMapper.h"
#include "vtkGraphToGlyphs.h"
#include "vtkHierarchicalPolyDataMapper.h"
#include "vtkImageActor.h"
#include "vtkImageMapper.h"
#include "vtkImageProperty.h"
#include "vtkImageSlice.h"
#include "vtkImageSliceMapper.h"
#include "vtkInteractorEventRecorder.h"
#include "vtkLabeledContourMapper.h"
#include "vtkLightActor.h"
#include "vtkLightCollection.h"
#include "vtkLight.h"
#include "vtkLightKit.h"
#include "vtkLogLookupTable.h"
#include "vtkLookupTableWithEnabling.h"
#include "vtkMapArrayValues.h"
#include "vtkMapperCollection.h"
#include "vtkObserverMediator.h"
#include "vtkPolyDataMapper2D.h"
#include "vtkPolyDataMapper.h"
#include "vtkProp3DCollection.h"
#include "vtkProp3DFollower.h"
#include "vtkPropAssembly.h"
#include "vtkPropCollection.h"
#include "vtkProperty2D.h"
#include "vtkProperty.h"
#include "vtkRendererCollection.h"
#include "vtkRenderer.h"
#include "vtkRendererSource.h"
#include "vtkRenderWindowCollection.h"
#include "vtkRenderWindow.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkSelectVisiblePoints.h"
#include "vtkTextActor.h"
#include "vtkTextActor3D.h"
#include "vtkTexture.h"
#include "vtkTexturedActor2D.h"
#include "vtkTransformCoordinateSystems.h"
#include "vtkTransformInterpolator.h"
#include "vtkTupleInterpolator.h"
#include "vtkViewDependentErrorMetric.h"
#include "vtkVolumeCollection.h"
#include "vtkVolume.h"
#include "vtkVolumeProperty.h"
#include "vtkWindowLevelLookupTable.h"
#include "vtkWindowToImageFilter.h"
#include "vtkAssemblyNode.h"
#include "vtkAssemblyPath.h"
#include "vtkAssemblyPaths.h"
#include "vtkAreaPicker.h"
#include "vtkPicker.h"
#include "vtkPropPicker.h"
#include "vtkPickingManager.h"
#include "vtkLODProp3D.h"
#include "vtkWorldPointPicker.h"
#include "vtkCellPicker.h"
#include "vtkPointPicker.h"
#include "vtkRenderedAreaPicker.h"
#include "vtkScenePicker.h"
#include "vtkInteractorStyle.h"
#include "vtkInteractorStyleSwitchBase.h"
#include "vtkTDxInteractorStyleCamera.h"
#include "vtkTDxInteractorStyleSettings.h"
#include "vtkTextMapper.h"
#include "vtkTextProperty.h"
#include "vtkTextPropertyCollection.h"
#include "vtkPainterDeviceAdapter.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkActor2DCollection)
vtkInstantiatorNewMacro(vtkActor2D)
vtkInstantiatorNewMacro(vtkActorCollection)
vtkInstantiatorNewMacro(vtkActor)
vtkInstantiatorNewMacro(vtkAssembly)
vtkInstantiatorNewMacro(vtkBackgroundColorMonitor)
vtkInstantiatorNewMacro(vtkCameraActor)
vtkInstantiatorNewMacro(vtkCamera)
vtkInstantiatorNewMacro(vtkCameraInterpolator)
vtkInstantiatorNewMacro(vtkCellCenterDepthSort)
vtkInstantiatorNewMacro(vtkColorTransferFunction)
vtkInstantiatorNewMacro(vtkCompositeDataDisplayAttributes)
vtkInstantiatorNewMacro(vtkCompositePolyDataMapper)
vtkInstantiatorNewMacro(vtkCoordinate)
vtkInstantiatorNewMacro(vtkCullerCollection)
vtkInstantiatorNewMacro(vtkDataSetMapper)
vtkInstantiatorNewMacro(vtkDiscretizableColorTransferFunction)
vtkInstantiatorNewMacro(vtkDistanceToCamera)
vtkInstantiatorNewMacro(vtkFollower)
vtkInstantiatorNewMacro(vtkFrustumCoverageCuller)
vtkInstantiatorNewMacro(vtkGenericRenderWindowInteractor)
vtkInstantiatorNewMacro(vtkGenericVertexAttributeMapping)
vtkInstantiatorNewMacro(vtkGlyph3DMapper)
vtkInstantiatorNewMacro(vtkGPUInfo)
vtkInstantiatorNewMacro(vtkGraphicsFactory)
vtkInstantiatorNewMacro(vtkGraphMapper)
vtkInstantiatorNewMacro(vtkGraphToGlyphs)
vtkInstantiatorNewMacro(vtkHierarchicalPolyDataMapper)
vtkInstantiatorNewMacro(vtkImageActor)
vtkInstantiatorNewMacro(vtkImageMapper)
vtkInstantiatorNewMacro(vtkImageProperty)
vtkInstantiatorNewMacro(vtkImageSlice)
vtkInstantiatorNewMacro(vtkImageSliceMapper)
vtkInstantiatorNewMacro(vtkInteractorEventRecorder)
vtkInstantiatorNewMacro(vtkLabeledContourMapper)
vtkInstantiatorNewMacro(vtkLightActor)
vtkInstantiatorNewMacro(vtkLightCollection)
vtkInstantiatorNewMacro(vtkLight)
vtkInstantiatorNewMacro(vtkLightKit)
vtkInstantiatorNewMacro(vtkLogLookupTable)
vtkInstantiatorNewMacro(vtkLookupTableWithEnabling)
vtkInstantiatorNewMacro(vtkMapArrayValues)
vtkInstantiatorNewMacro(vtkMapperCollection)
vtkInstantiatorNewMacro(vtkObserverMediator)
vtkInstantiatorNewMacro(vtkPolyDataMapper2D)
vtkInstantiatorNewMacro(vtkPolyDataMapper)
vtkInstantiatorNewMacro(vtkProp3DCollection)
vtkInstantiatorNewMacro(vtkProp3DFollower)
vtkInstantiatorNewMacro(vtkPropAssembly)
vtkInstantiatorNewMacro(vtkPropCollection)
vtkInstantiatorNewMacro(vtkProperty2D)
vtkInstantiatorNewMacro(vtkProperty)
vtkInstantiatorNewMacro(vtkRendererCollection)
vtkInstantiatorNewMacro(vtkRenderer)
vtkInstantiatorNewMacro(vtkRendererSource)
vtkInstantiatorNewMacro(vtkRenderWindowCollection)
vtkInstantiatorNewMacro(vtkRenderWindow)
vtkInstantiatorNewMacro(vtkRenderWindowInteractor)
vtkInstantiatorNewMacro(vtkSelectVisiblePoints)
vtkInstantiatorNewMacro(vtkTextActor)
vtkInstantiatorNewMacro(vtkTextActor3D)
vtkInstantiatorNewMacro(vtkTexture)
vtkInstantiatorNewMacro(vtkTexturedActor2D)
vtkInstantiatorNewMacro(vtkTransformCoordinateSystems)
vtkInstantiatorNewMacro(vtkTransformInterpolator)
vtkInstantiatorNewMacro(vtkTupleInterpolator)
vtkInstantiatorNewMacro(vtkViewDependentErrorMetric)
vtkInstantiatorNewMacro(vtkVolumeCollection)
vtkInstantiatorNewMacro(vtkVolume)
vtkInstantiatorNewMacro(vtkVolumeProperty)
vtkInstantiatorNewMacro(vtkWindowLevelLookupTable)
vtkInstantiatorNewMacro(vtkWindowToImageFilter)
vtkInstantiatorNewMacro(vtkAssemblyNode)
vtkInstantiatorNewMacro(vtkAssemblyPath)
vtkInstantiatorNewMacro(vtkAssemblyPaths)
vtkInstantiatorNewMacro(vtkAreaPicker)
vtkInstantiatorNewMacro(vtkPicker)
vtkInstantiatorNewMacro(vtkPropPicker)
vtkInstantiatorNewMacro(vtkPickingManager)
vtkInstantiatorNewMacro(vtkLODProp3D)
vtkInstantiatorNewMacro(vtkWorldPointPicker)
vtkInstantiatorNewMacro(vtkCellPicker)
vtkInstantiatorNewMacro(vtkPointPicker)
vtkInstantiatorNewMacro(vtkRenderedAreaPicker)
vtkInstantiatorNewMacro(vtkScenePicker)
vtkInstantiatorNewMacro(vtkInteractorStyle)
vtkInstantiatorNewMacro(vtkInteractorStyleSwitchBase)
vtkInstantiatorNewMacro(vtkTDxInteractorStyleCamera)
vtkInstantiatorNewMacro(vtkTDxInteractorStyleSettings)
vtkInstantiatorNewMacro(vtkTextMapper)
vtkInstantiatorNewMacro(vtkTextProperty)
vtkInstantiatorNewMacro(vtkTextPropertyCollection)
vtkInstantiatorNewMacro(vtkPainterDeviceAdapter)



void vtkRenderingCoreInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkActor2DCollection", vtkInstantiatorvtkActor2DCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkActor2D", vtkInstantiatorvtkActor2DNew);
  vtkInstantiator::RegisterInstantiator("vtkActorCollection", vtkInstantiatorvtkActorCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkActor", vtkInstantiatorvtkActorNew);
  vtkInstantiator::RegisterInstantiator("vtkAssembly", vtkInstantiatorvtkAssemblyNew);
  vtkInstantiator::RegisterInstantiator("vtkBackgroundColorMonitor", vtkInstantiatorvtkBackgroundColorMonitorNew);
  vtkInstantiator::RegisterInstantiator("vtkCameraActor", vtkInstantiatorvtkCameraActorNew);
  vtkInstantiator::RegisterInstantiator("vtkCamera", vtkInstantiatorvtkCameraNew);
  vtkInstantiator::RegisterInstantiator("vtkCameraInterpolator", vtkInstantiatorvtkCameraInterpolatorNew);
  vtkInstantiator::RegisterInstantiator("vtkCellCenterDepthSort", vtkInstantiatorvtkCellCenterDepthSortNew);
  vtkInstantiator::RegisterInstantiator("vtkColorTransferFunction", vtkInstantiatorvtkColorTransferFunctionNew);
  vtkInstantiator::RegisterInstantiator("vtkCompositeDataDisplayAttributes", vtkInstantiatorvtkCompositeDataDisplayAttributesNew);
  vtkInstantiator::RegisterInstantiator("vtkCompositePolyDataMapper", vtkInstantiatorvtkCompositePolyDataMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkCoordinate", vtkInstantiatorvtkCoordinateNew);
  vtkInstantiator::RegisterInstantiator("vtkCullerCollection", vtkInstantiatorvtkCullerCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkDataSetMapper", vtkInstantiatorvtkDataSetMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkDiscretizableColorTransferFunction", vtkInstantiatorvtkDiscretizableColorTransferFunctionNew);
  vtkInstantiator::RegisterInstantiator("vtkDistanceToCamera", vtkInstantiatorvtkDistanceToCameraNew);
  vtkInstantiator::RegisterInstantiator("vtkFollower", vtkInstantiatorvtkFollowerNew);
  vtkInstantiator::RegisterInstantiator("vtkFrustumCoverageCuller", vtkInstantiatorvtkFrustumCoverageCullerNew);
  vtkInstantiator::RegisterInstantiator("vtkGenericRenderWindowInteractor", vtkInstantiatorvtkGenericRenderWindowInteractorNew);
  vtkInstantiator::RegisterInstantiator("vtkGenericVertexAttributeMapping", vtkInstantiatorvtkGenericVertexAttributeMappingNew);
  vtkInstantiator::RegisterInstantiator("vtkGlyph3DMapper", vtkInstantiatorvtkGlyph3DMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkGPUInfo", vtkInstantiatorvtkGPUInfoNew);
  vtkInstantiator::RegisterInstantiator("vtkGraphicsFactory", vtkInstantiatorvtkGraphicsFactoryNew);
  vtkInstantiator::RegisterInstantiator("vtkGraphMapper", vtkInstantiatorvtkGraphMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkGraphToGlyphs", vtkInstantiatorvtkGraphToGlyphsNew);
  vtkInstantiator::RegisterInstantiator("vtkHierarchicalPolyDataMapper", vtkInstantiatorvtkHierarchicalPolyDataMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkImageActor", vtkInstantiatorvtkImageActorNew);
  vtkInstantiator::RegisterInstantiator("vtkImageMapper", vtkInstantiatorvtkImageMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkImageProperty", vtkInstantiatorvtkImagePropertyNew);
  vtkInstantiator::RegisterInstantiator("vtkImageSlice", vtkInstantiatorvtkImageSliceNew);
  vtkInstantiator::RegisterInstantiator("vtkImageSliceMapper", vtkInstantiatorvtkImageSliceMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorEventRecorder", vtkInstantiatorvtkInteractorEventRecorderNew);
  vtkInstantiator::RegisterInstantiator("vtkLabeledContourMapper", vtkInstantiatorvtkLabeledContourMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkLightActor", vtkInstantiatorvtkLightActorNew);
  vtkInstantiator::RegisterInstantiator("vtkLightCollection", vtkInstantiatorvtkLightCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkLight", vtkInstantiatorvtkLightNew);
  vtkInstantiator::RegisterInstantiator("vtkLightKit", vtkInstantiatorvtkLightKitNew);
  vtkInstantiator::RegisterInstantiator("vtkLogLookupTable", vtkInstantiatorvtkLogLookupTableNew);
  vtkInstantiator::RegisterInstantiator("vtkLookupTableWithEnabling", vtkInstantiatorvtkLookupTableWithEnablingNew);
  vtkInstantiator::RegisterInstantiator("vtkMapArrayValues", vtkInstantiatorvtkMapArrayValuesNew);
  vtkInstantiator::RegisterInstantiator("vtkMapperCollection", vtkInstantiatorvtkMapperCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkObserverMediator", vtkInstantiatorvtkObserverMediatorNew);
  vtkInstantiator::RegisterInstantiator("vtkPolyDataMapper2D", vtkInstantiatorvtkPolyDataMapper2DNew);
  vtkInstantiator::RegisterInstantiator("vtkPolyDataMapper", vtkInstantiatorvtkPolyDataMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkProp3DCollection", vtkInstantiatorvtkProp3DCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkProp3DFollower", vtkInstantiatorvtkProp3DFollowerNew);
  vtkInstantiator::RegisterInstantiator("vtkPropAssembly", vtkInstantiatorvtkPropAssemblyNew);
  vtkInstantiator::RegisterInstantiator("vtkPropCollection", vtkInstantiatorvtkPropCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkProperty2D", vtkInstantiatorvtkProperty2DNew);
  vtkInstantiator::RegisterInstantiator("vtkProperty", vtkInstantiatorvtkPropertyNew);
  vtkInstantiator::RegisterInstantiator("vtkRendererCollection", vtkInstantiatorvtkRendererCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkRenderer", vtkInstantiatorvtkRendererNew);
  vtkInstantiator::RegisterInstantiator("vtkRendererSource", vtkInstantiatorvtkRendererSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkRenderWindowCollection", vtkInstantiatorvtkRenderWindowCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkRenderWindow", vtkInstantiatorvtkRenderWindowNew);
  vtkInstantiator::RegisterInstantiator("vtkRenderWindowInteractor", vtkInstantiatorvtkRenderWindowInteractorNew);
  vtkInstantiator::RegisterInstantiator("vtkSelectVisiblePoints", vtkInstantiatorvtkSelectVisiblePointsNew);
  vtkInstantiator::RegisterInstantiator("vtkTextActor", vtkInstantiatorvtkTextActorNew);
  vtkInstantiator::RegisterInstantiator("vtkTextActor3D", vtkInstantiatorvtkTextActor3DNew);
  vtkInstantiator::RegisterInstantiator("vtkTexture", vtkInstantiatorvtkTextureNew);
  vtkInstantiator::RegisterInstantiator("vtkTexturedActor2D", vtkInstantiatorvtkTexturedActor2DNew);
  vtkInstantiator::RegisterInstantiator("vtkTransformCoordinateSystems", vtkInstantiatorvtkTransformCoordinateSystemsNew);
  vtkInstantiator::RegisterInstantiator("vtkTransformInterpolator", vtkInstantiatorvtkTransformInterpolatorNew);
  vtkInstantiator::RegisterInstantiator("vtkTupleInterpolator", vtkInstantiatorvtkTupleInterpolatorNew);
  vtkInstantiator::RegisterInstantiator("vtkViewDependentErrorMetric", vtkInstantiatorvtkViewDependentErrorMetricNew);
  vtkInstantiator::RegisterInstantiator("vtkVolumeCollection", vtkInstantiatorvtkVolumeCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkVolume", vtkInstantiatorvtkVolumeNew);
  vtkInstantiator::RegisterInstantiator("vtkVolumeProperty", vtkInstantiatorvtkVolumePropertyNew);
  vtkInstantiator::RegisterInstantiator("vtkWindowLevelLookupTable", vtkInstantiatorvtkWindowLevelLookupTableNew);
  vtkInstantiator::RegisterInstantiator("vtkWindowToImageFilter", vtkInstantiatorvtkWindowToImageFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkAssemblyNode", vtkInstantiatorvtkAssemblyNodeNew);
  vtkInstantiator::RegisterInstantiator("vtkAssemblyPath", vtkInstantiatorvtkAssemblyPathNew);
  vtkInstantiator::RegisterInstantiator("vtkAssemblyPaths", vtkInstantiatorvtkAssemblyPathsNew);
  vtkInstantiator::RegisterInstantiator("vtkAreaPicker", vtkInstantiatorvtkAreaPickerNew);
  vtkInstantiator::RegisterInstantiator("vtkPicker", vtkInstantiatorvtkPickerNew);
  vtkInstantiator::RegisterInstantiator("vtkPropPicker", vtkInstantiatorvtkPropPickerNew);
  vtkInstantiator::RegisterInstantiator("vtkPickingManager", vtkInstantiatorvtkPickingManagerNew);
  vtkInstantiator::RegisterInstantiator("vtkLODProp3D", vtkInstantiatorvtkLODProp3DNew);
  vtkInstantiator::RegisterInstantiator("vtkWorldPointPicker", vtkInstantiatorvtkWorldPointPickerNew);
  vtkInstantiator::RegisterInstantiator("vtkCellPicker", vtkInstantiatorvtkCellPickerNew);
  vtkInstantiator::RegisterInstantiator("vtkPointPicker", vtkInstantiatorvtkPointPickerNew);
  vtkInstantiator::RegisterInstantiator("vtkRenderedAreaPicker", vtkInstantiatorvtkRenderedAreaPickerNew);
  vtkInstantiator::RegisterInstantiator("vtkScenePicker", vtkInstantiatorvtkScenePickerNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyle", vtkInstantiatorvtkInteractorStyleNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleSwitchBase", vtkInstantiatorvtkInteractorStyleSwitchBaseNew);
  vtkInstantiator::RegisterInstantiator("vtkTDxInteractorStyleCamera", vtkInstantiatorvtkTDxInteractorStyleCameraNew);
  vtkInstantiator::RegisterInstantiator("vtkTDxInteractorStyleSettings", vtkInstantiatorvtkTDxInteractorStyleSettingsNew);
  vtkInstantiator::RegisterInstantiator("vtkTextMapper", vtkInstantiatorvtkTextMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkTextProperty", vtkInstantiatorvtkTextPropertyNew);
  vtkInstantiator::RegisterInstantiator("vtkTextPropertyCollection", vtkInstantiatorvtkTextPropertyCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkPainterDeviceAdapter", vtkInstantiatorvtkPainterDeviceAdapterNew);


}

void vtkRenderingCoreInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkActor2DCollection", vtkInstantiatorvtkActor2DCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkActor2D", vtkInstantiatorvtkActor2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkActorCollection", vtkInstantiatorvtkActorCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkActor", vtkInstantiatorvtkActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAssembly", vtkInstantiatorvtkAssemblyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBackgroundColorMonitor", vtkInstantiatorvtkBackgroundColorMonitorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCameraActor", vtkInstantiatorvtkCameraActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCamera", vtkInstantiatorvtkCameraNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCameraInterpolator", vtkInstantiatorvtkCameraInterpolatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCellCenterDepthSort", vtkInstantiatorvtkCellCenterDepthSortNew);
  vtkInstantiator::UnRegisterInstantiator("vtkColorTransferFunction", vtkInstantiatorvtkColorTransferFunctionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCompositeDataDisplayAttributes", vtkInstantiatorvtkCompositeDataDisplayAttributesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCompositePolyDataMapper", vtkInstantiatorvtkCompositePolyDataMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCoordinate", vtkInstantiatorvtkCoordinateNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCullerCollection", vtkInstantiatorvtkCullerCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataSetMapper", vtkInstantiatorvtkDataSetMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDiscretizableColorTransferFunction", vtkInstantiatorvtkDiscretizableColorTransferFunctionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDistanceToCamera", vtkInstantiatorvtkDistanceToCameraNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFollower", vtkInstantiatorvtkFollowerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFrustumCoverageCuller", vtkInstantiatorvtkFrustumCoverageCullerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGenericRenderWindowInteractor", vtkInstantiatorvtkGenericRenderWindowInteractorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGenericVertexAttributeMapping", vtkInstantiatorvtkGenericVertexAttributeMappingNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGlyph3DMapper", vtkInstantiatorvtkGlyph3DMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGPUInfo", vtkInstantiatorvtkGPUInfoNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGraphicsFactory", vtkInstantiatorvtkGraphicsFactoryNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGraphMapper", vtkInstantiatorvtkGraphMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGraphToGlyphs", vtkInstantiatorvtkGraphToGlyphsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHierarchicalPolyDataMapper", vtkInstantiatorvtkHierarchicalPolyDataMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageActor", vtkInstantiatorvtkImageActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageMapper", vtkInstantiatorvtkImageMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageProperty", vtkInstantiatorvtkImagePropertyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageSlice", vtkInstantiatorvtkImageSliceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageSliceMapper", vtkInstantiatorvtkImageSliceMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorEventRecorder", vtkInstantiatorvtkInteractorEventRecorderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLabeledContourMapper", vtkInstantiatorvtkLabeledContourMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLightActor", vtkInstantiatorvtkLightActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLightCollection", vtkInstantiatorvtkLightCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLight", vtkInstantiatorvtkLightNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLightKit", vtkInstantiatorvtkLightKitNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLogLookupTable", vtkInstantiatorvtkLogLookupTableNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLookupTableWithEnabling", vtkInstantiatorvtkLookupTableWithEnablingNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMapArrayValues", vtkInstantiatorvtkMapArrayValuesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMapperCollection", vtkInstantiatorvtkMapperCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkObserverMediator", vtkInstantiatorvtkObserverMediatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPolyDataMapper2D", vtkInstantiatorvtkPolyDataMapper2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPolyDataMapper", vtkInstantiatorvtkPolyDataMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProp3DCollection", vtkInstantiatorvtkProp3DCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProp3DFollower", vtkInstantiatorvtkProp3DFollowerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPropAssembly", vtkInstantiatorvtkPropAssemblyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPropCollection", vtkInstantiatorvtkPropCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProperty2D", vtkInstantiatorvtkProperty2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProperty", vtkInstantiatorvtkPropertyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRendererCollection", vtkInstantiatorvtkRendererCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRenderer", vtkInstantiatorvtkRendererNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRendererSource", vtkInstantiatorvtkRendererSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRenderWindowCollection", vtkInstantiatorvtkRenderWindowCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRenderWindow", vtkInstantiatorvtkRenderWindowNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRenderWindowInteractor", vtkInstantiatorvtkRenderWindowInteractorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSelectVisiblePoints", vtkInstantiatorvtkSelectVisiblePointsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTextActor", vtkInstantiatorvtkTextActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTextActor3D", vtkInstantiatorvtkTextActor3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTexture", vtkInstantiatorvtkTextureNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTexturedActor2D", vtkInstantiatorvtkTexturedActor2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTransformCoordinateSystems", vtkInstantiatorvtkTransformCoordinateSystemsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTransformInterpolator", vtkInstantiatorvtkTransformInterpolatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTupleInterpolator", vtkInstantiatorvtkTupleInterpolatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkViewDependentErrorMetric", vtkInstantiatorvtkViewDependentErrorMetricNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVolumeCollection", vtkInstantiatorvtkVolumeCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVolume", vtkInstantiatorvtkVolumeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVolumeProperty", vtkInstantiatorvtkVolumePropertyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkWindowLevelLookupTable", vtkInstantiatorvtkWindowLevelLookupTableNew);
  vtkInstantiator::UnRegisterInstantiator("vtkWindowToImageFilter", vtkInstantiatorvtkWindowToImageFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAssemblyNode", vtkInstantiatorvtkAssemblyNodeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAssemblyPath", vtkInstantiatorvtkAssemblyPathNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAssemblyPaths", vtkInstantiatorvtkAssemblyPathsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAreaPicker", vtkInstantiatorvtkAreaPickerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPicker", vtkInstantiatorvtkPickerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPropPicker", vtkInstantiatorvtkPropPickerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPickingManager", vtkInstantiatorvtkPickingManagerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLODProp3D", vtkInstantiatorvtkLODProp3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkWorldPointPicker", vtkInstantiatorvtkWorldPointPickerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCellPicker", vtkInstantiatorvtkCellPickerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPointPicker", vtkInstantiatorvtkPointPickerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRenderedAreaPicker", vtkInstantiatorvtkRenderedAreaPickerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkScenePicker", vtkInstantiatorvtkScenePickerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyle", vtkInstantiatorvtkInteractorStyleNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleSwitchBase", vtkInstantiatorvtkInteractorStyleSwitchBaseNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTDxInteractorStyleCamera", vtkInstantiatorvtkTDxInteractorStyleCameraNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTDxInteractorStyleSettings", vtkInstantiatorvtkTDxInteractorStyleSettingsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTextMapper", vtkInstantiatorvtkTextMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTextProperty", vtkInstantiatorvtkTextPropertyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTextPropertyCollection", vtkInstantiatorvtkTextPropertyCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPainterDeviceAdapter", vtkInstantiatorvtkPainterDeviceAdapterNew);


}

vtkRenderingCoreInstantiator::vtkRenderingCoreInstantiator()
{
  if(++vtkRenderingCoreInstantiator::Count == 1)
    {
    vtkRenderingCoreInstantiator::ClassInitialize();
    }
}

vtkRenderingCoreInstantiator::~vtkRenderingCoreInstantiator()
{
  if(--vtkRenderingCoreInstantiator::Count == 0)
    {
    vtkRenderingCoreInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkRenderingCoreInstantiator::Count;
