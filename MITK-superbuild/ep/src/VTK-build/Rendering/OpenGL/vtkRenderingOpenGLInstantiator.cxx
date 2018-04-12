#include "vtkRenderingOpenGLInstantiator.h"
#include "vtkCameraPass.h"
#include "vtkChooserPainter.h"
#include "vtkClearRGBPass.h"
#include "vtkClearZPass.h"
#include "vtkClipPlanesPainter.h"
#include "vtkCoincidentTopologyResolutionPainter.h"
#include "vtkColorMaterialHelper.h"
#include "vtkCompositePainter.h"
#include "vtkCompositePolyDataMapper2.h"
#include "vtkDataTransferHelper.h"
#include "vtkDefaultPainter.h"
#include "vtkDefaultPass.h"
#include "vtkDepthPeelingPass.h"
#include "vtkDisplayListPainter.h"
#include "vtkFrameBufferObject.h"
#include "vtkFrameBufferObject2.h"
#include "vtkGLSLShaderDeviceAdapter2.h"
#include "vtkGaussianBlurPass.h"
#include "vtkGenericOpenGLRenderWindow.h"
#include "vtkHardwareSelectionPolyDataPainter.h"
#include "vtkLightingPainter.h"
#include "vtkLightsPass.h"
#include "vtkLinesPainter.h"
#include "vtkOpaquePass.h"
#include "vtkOpenGLActor.h"
#include "vtkOpenGLCamera.h"
#include "vtkOpenGLClipPlanesPainter.h"
#include "vtkOpenGLCoincidentTopologyResolutionPainter.h"
#include "vtkOpenGLCompositePainter.h"
#include "vtkOpenGLDisplayListPainter.h"
#include "vtkOpenGLExtensionManager.h"
#include "vtkOpenGLGlyph3DMapper.h"
#include "vtkOpenGLHardwareSelector.h"
#include "vtkOpenGLHardwareSupport.h"
#include "vtkOpenGLImageMapper.h"
#include "vtkOpenGLImageSliceMapper.h"
#include "vtkOpenGLLabeledContourMapper.h"
#include "vtkOpenGLLight.h"
#include "vtkOpenGLLightMonitor.h"
#include "vtkOpenGLLightingPainter.h"
#include "vtkOpenGLModelViewProjectionMonitor.h"
#include "vtkOpenGLPainterDeviceAdapter.h"
#include "vtkOpenGLPolyDataMapper2D.h"
#include "vtkOpenGLProperty.h"
#include "vtkOpenGLRenderer.h"
#include "vtkOpenGLRepresentationPainter.h"
#include "vtkOpenGLScalarsToColorsPainter.h"
#include "vtkOpenGLTexture.h"
#include "vtkOverlayPass.h"
#include "vtkPainterPolyDataMapper.h"
#include "vtkPixelBufferObject.h"
#include "vtkPointsPainter.h"
#include "vtkPolygonsPainter.h"
#include "vtkRenderPassCollection.h"
#include "vtkRenderbuffer.h"
#include "vtkRepresentationPainter.h"
#include "vtkScalarsToColorsPainter.h"
#include "vtkSequencePass.h"
#include "vtkShadowMapBakerPass.h"
#include "vtkShadowMapPass.h"
#include "vtkSobelGradientMagnitudePass.h"
#include "vtkStandardPolyDataPainter.h"
#include "vtkTStripsPainter.h"
#include "vtkTextureObject.h"
#include "vtkTranslucentPass.h"
#include "vtkUniformVariables.h"
#include "vtkValuePainter.h"
#include "vtkValuePass.h"
#include "vtkValuePasses.h"
#include "vtkVolumetricPass.h"
#include "vtkWin32RenderWindowInteractor.h"
#include "vtkWin32OpenGLRenderWindow.h"
#include "vtkDummyGPUInfoList.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkCameraPass)
vtkInstantiatorNewMacro(vtkChooserPainter)
vtkInstantiatorNewMacro(vtkClearRGBPass)
vtkInstantiatorNewMacro(vtkClearZPass)
vtkInstantiatorNewMacro(vtkClipPlanesPainter)
vtkInstantiatorNewMacro(vtkCoincidentTopologyResolutionPainter)
vtkInstantiatorNewMacro(vtkColorMaterialHelper)
vtkInstantiatorNewMacro(vtkCompositePainter)
vtkInstantiatorNewMacro(vtkCompositePolyDataMapper2)
vtkInstantiatorNewMacro(vtkDataTransferHelper)
vtkInstantiatorNewMacro(vtkDefaultPainter)
vtkInstantiatorNewMacro(vtkDefaultPass)
vtkInstantiatorNewMacro(vtkDepthPeelingPass)
vtkInstantiatorNewMacro(vtkDisplayListPainter)
vtkInstantiatorNewMacro(vtkFrameBufferObject)
vtkInstantiatorNewMacro(vtkFrameBufferObject2)
vtkInstantiatorNewMacro(vtkGLSLShaderDeviceAdapter2)
vtkInstantiatorNewMacro(vtkGaussianBlurPass)
vtkInstantiatorNewMacro(vtkGenericOpenGLRenderWindow)
vtkInstantiatorNewMacro(vtkHardwareSelectionPolyDataPainter)
vtkInstantiatorNewMacro(vtkLightingPainter)
vtkInstantiatorNewMacro(vtkLightsPass)
vtkInstantiatorNewMacro(vtkLinesPainter)
vtkInstantiatorNewMacro(vtkOpaquePass)
vtkInstantiatorNewMacro(vtkOpenGLActor)
vtkInstantiatorNewMacro(vtkOpenGLCamera)
vtkInstantiatorNewMacro(vtkOpenGLClipPlanesPainter)
vtkInstantiatorNewMacro(vtkOpenGLCoincidentTopologyResolutionPainter)
vtkInstantiatorNewMacro(vtkOpenGLCompositePainter)
vtkInstantiatorNewMacro(vtkOpenGLDisplayListPainter)
vtkInstantiatorNewMacro(vtkOpenGLExtensionManager)
vtkInstantiatorNewMacro(vtkOpenGLGlyph3DMapper)
vtkInstantiatorNewMacro(vtkOpenGLHardwareSelector)
vtkInstantiatorNewMacro(vtkOpenGLHardwareSupport)
vtkInstantiatorNewMacro(vtkOpenGLImageMapper)
vtkInstantiatorNewMacro(vtkOpenGLImageSliceMapper)
vtkInstantiatorNewMacro(vtkOpenGLLabeledContourMapper)
vtkInstantiatorNewMacro(vtkOpenGLLight)
vtkInstantiatorNewMacro(vtkOpenGLLightMonitor)
vtkInstantiatorNewMacro(vtkOpenGLLightingPainter)
vtkInstantiatorNewMacro(vtkOpenGLModelViewProjectionMonitor)
vtkInstantiatorNewMacro(vtkOpenGLPainterDeviceAdapter)
vtkInstantiatorNewMacro(vtkOpenGLPolyDataMapper2D)
vtkInstantiatorNewMacro(vtkOpenGLProperty)
vtkInstantiatorNewMacro(vtkOpenGLRenderer)
vtkInstantiatorNewMacro(vtkOpenGLRepresentationPainter)
vtkInstantiatorNewMacro(vtkOpenGLScalarsToColorsPainter)
vtkInstantiatorNewMacro(vtkOpenGLTexture)
vtkInstantiatorNewMacro(vtkOverlayPass)
vtkInstantiatorNewMacro(vtkPainterPolyDataMapper)
vtkInstantiatorNewMacro(vtkPixelBufferObject)
vtkInstantiatorNewMacro(vtkPointsPainter)
vtkInstantiatorNewMacro(vtkPolygonsPainter)
vtkInstantiatorNewMacro(vtkRenderPassCollection)
vtkInstantiatorNewMacro(vtkRenderbuffer)
vtkInstantiatorNewMacro(vtkRepresentationPainter)
vtkInstantiatorNewMacro(vtkScalarsToColorsPainter)
vtkInstantiatorNewMacro(vtkSequencePass)
vtkInstantiatorNewMacro(vtkShadowMapBakerPass)
vtkInstantiatorNewMacro(vtkShadowMapPass)
vtkInstantiatorNewMacro(vtkSobelGradientMagnitudePass)
vtkInstantiatorNewMacro(vtkStandardPolyDataPainter)
vtkInstantiatorNewMacro(vtkTStripsPainter)
vtkInstantiatorNewMacro(vtkTextureObject)
vtkInstantiatorNewMacro(vtkTranslucentPass)
vtkInstantiatorNewMacro(vtkUniformVariables)
vtkInstantiatorNewMacro(vtkValuePainter)
vtkInstantiatorNewMacro(vtkValuePass)
vtkInstantiatorNewMacro(vtkValuePasses)
vtkInstantiatorNewMacro(vtkVolumetricPass)
vtkInstantiatorNewMacro(vtkWin32RenderWindowInteractor)
vtkInstantiatorNewMacro(vtkWin32OpenGLRenderWindow)
vtkInstantiatorNewMacro(vtkDummyGPUInfoList)



void vtkRenderingOpenGLInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkCameraPass", vtkInstantiatorvtkCameraPassNew);
  vtkInstantiator::RegisterInstantiator("vtkChooserPainter", vtkInstantiatorvtkChooserPainterNew);
  vtkInstantiator::RegisterInstantiator("vtkClearRGBPass", vtkInstantiatorvtkClearRGBPassNew);
  vtkInstantiator::RegisterInstantiator("vtkClearZPass", vtkInstantiatorvtkClearZPassNew);
  vtkInstantiator::RegisterInstantiator("vtkClipPlanesPainter", vtkInstantiatorvtkClipPlanesPainterNew);
  vtkInstantiator::RegisterInstantiator("vtkCoincidentTopologyResolutionPainter", vtkInstantiatorvtkCoincidentTopologyResolutionPainterNew);
  vtkInstantiator::RegisterInstantiator("vtkColorMaterialHelper", vtkInstantiatorvtkColorMaterialHelperNew);
  vtkInstantiator::RegisterInstantiator("vtkCompositePainter", vtkInstantiatorvtkCompositePainterNew);
  vtkInstantiator::RegisterInstantiator("vtkCompositePolyDataMapper2", vtkInstantiatorvtkCompositePolyDataMapper2New);
  vtkInstantiator::RegisterInstantiator("vtkDataTransferHelper", vtkInstantiatorvtkDataTransferHelperNew);
  vtkInstantiator::RegisterInstantiator("vtkDefaultPainter", vtkInstantiatorvtkDefaultPainterNew);
  vtkInstantiator::RegisterInstantiator("vtkDefaultPass", vtkInstantiatorvtkDefaultPassNew);
  vtkInstantiator::RegisterInstantiator("vtkDepthPeelingPass", vtkInstantiatorvtkDepthPeelingPassNew);
  vtkInstantiator::RegisterInstantiator("vtkDisplayListPainter", vtkInstantiatorvtkDisplayListPainterNew);
  vtkInstantiator::RegisterInstantiator("vtkFrameBufferObject", vtkInstantiatorvtkFrameBufferObjectNew);
  vtkInstantiator::RegisterInstantiator("vtkFrameBufferObject2", vtkInstantiatorvtkFrameBufferObject2New);
  vtkInstantiator::RegisterInstantiator("vtkGLSLShaderDeviceAdapter2", vtkInstantiatorvtkGLSLShaderDeviceAdapter2New);
  vtkInstantiator::RegisterInstantiator("vtkGaussianBlurPass", vtkInstantiatorvtkGaussianBlurPassNew);
  vtkInstantiator::RegisterInstantiator("vtkGenericOpenGLRenderWindow", vtkInstantiatorvtkGenericOpenGLRenderWindowNew);
  vtkInstantiator::RegisterInstantiator("vtkHardwareSelectionPolyDataPainter", vtkInstantiatorvtkHardwareSelectionPolyDataPainterNew);
  vtkInstantiator::RegisterInstantiator("vtkLightingPainter", vtkInstantiatorvtkLightingPainterNew);
  vtkInstantiator::RegisterInstantiator("vtkLightsPass", vtkInstantiatorvtkLightsPassNew);
  vtkInstantiator::RegisterInstantiator("vtkLinesPainter", vtkInstantiatorvtkLinesPainterNew);
  vtkInstantiator::RegisterInstantiator("vtkOpaquePass", vtkInstantiatorvtkOpaquePassNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLActor", vtkInstantiatorvtkOpenGLActorNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLCamera", vtkInstantiatorvtkOpenGLCameraNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLClipPlanesPainter", vtkInstantiatorvtkOpenGLClipPlanesPainterNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLCoincidentTopologyResolutionPainter", vtkInstantiatorvtkOpenGLCoincidentTopologyResolutionPainterNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLCompositePainter", vtkInstantiatorvtkOpenGLCompositePainterNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLDisplayListPainter", vtkInstantiatorvtkOpenGLDisplayListPainterNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLExtensionManager", vtkInstantiatorvtkOpenGLExtensionManagerNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLGlyph3DMapper", vtkInstantiatorvtkOpenGLGlyph3DMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLHardwareSelector", vtkInstantiatorvtkOpenGLHardwareSelectorNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLHardwareSupport", vtkInstantiatorvtkOpenGLHardwareSupportNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLImageMapper", vtkInstantiatorvtkOpenGLImageMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLImageSliceMapper", vtkInstantiatorvtkOpenGLImageSliceMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLLabeledContourMapper", vtkInstantiatorvtkOpenGLLabeledContourMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLLight", vtkInstantiatorvtkOpenGLLightNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLLightMonitor", vtkInstantiatorvtkOpenGLLightMonitorNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLLightingPainter", vtkInstantiatorvtkOpenGLLightingPainterNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLModelViewProjectionMonitor", vtkInstantiatorvtkOpenGLModelViewProjectionMonitorNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLPainterDeviceAdapter", vtkInstantiatorvtkOpenGLPainterDeviceAdapterNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLPolyDataMapper2D", vtkInstantiatorvtkOpenGLPolyDataMapper2DNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLProperty", vtkInstantiatorvtkOpenGLPropertyNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLRenderer", vtkInstantiatorvtkOpenGLRendererNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLRepresentationPainter", vtkInstantiatorvtkOpenGLRepresentationPainterNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLScalarsToColorsPainter", vtkInstantiatorvtkOpenGLScalarsToColorsPainterNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLTexture", vtkInstantiatorvtkOpenGLTextureNew);
  vtkInstantiator::RegisterInstantiator("vtkOverlayPass", vtkInstantiatorvtkOverlayPassNew);
  vtkInstantiator::RegisterInstantiator("vtkPainterPolyDataMapper", vtkInstantiatorvtkPainterPolyDataMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkPixelBufferObject", vtkInstantiatorvtkPixelBufferObjectNew);
  vtkInstantiator::RegisterInstantiator("vtkPointsPainter", vtkInstantiatorvtkPointsPainterNew);
  vtkInstantiator::RegisterInstantiator("vtkPolygonsPainter", vtkInstantiatorvtkPolygonsPainterNew);
  vtkInstantiator::RegisterInstantiator("vtkRenderPassCollection", vtkInstantiatorvtkRenderPassCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkRenderbuffer", vtkInstantiatorvtkRenderbufferNew);
  vtkInstantiator::RegisterInstantiator("vtkRepresentationPainter", vtkInstantiatorvtkRepresentationPainterNew);
  vtkInstantiator::RegisterInstantiator("vtkScalarsToColorsPainter", vtkInstantiatorvtkScalarsToColorsPainterNew);
  vtkInstantiator::RegisterInstantiator("vtkSequencePass", vtkInstantiatorvtkSequencePassNew);
  vtkInstantiator::RegisterInstantiator("vtkShadowMapBakerPass", vtkInstantiatorvtkShadowMapBakerPassNew);
  vtkInstantiator::RegisterInstantiator("vtkShadowMapPass", vtkInstantiatorvtkShadowMapPassNew);
  vtkInstantiator::RegisterInstantiator("vtkSobelGradientMagnitudePass", vtkInstantiatorvtkSobelGradientMagnitudePassNew);
  vtkInstantiator::RegisterInstantiator("vtkStandardPolyDataPainter", vtkInstantiatorvtkStandardPolyDataPainterNew);
  vtkInstantiator::RegisterInstantiator("vtkTStripsPainter", vtkInstantiatorvtkTStripsPainterNew);
  vtkInstantiator::RegisterInstantiator("vtkTextureObject", vtkInstantiatorvtkTextureObjectNew);
  vtkInstantiator::RegisterInstantiator("vtkTranslucentPass", vtkInstantiatorvtkTranslucentPassNew);
  vtkInstantiator::RegisterInstantiator("vtkUniformVariables", vtkInstantiatorvtkUniformVariablesNew);
  vtkInstantiator::RegisterInstantiator("vtkValuePainter", vtkInstantiatorvtkValuePainterNew);
  vtkInstantiator::RegisterInstantiator("vtkValuePass", vtkInstantiatorvtkValuePassNew);
  vtkInstantiator::RegisterInstantiator("vtkValuePasses", vtkInstantiatorvtkValuePassesNew);
  vtkInstantiator::RegisterInstantiator("vtkVolumetricPass", vtkInstantiatorvtkVolumetricPassNew);
  vtkInstantiator::RegisterInstantiator("vtkWin32RenderWindowInteractor", vtkInstantiatorvtkWin32RenderWindowInteractorNew);
  vtkInstantiator::RegisterInstantiator("vtkWin32OpenGLRenderWindow", vtkInstantiatorvtkWin32OpenGLRenderWindowNew);
  vtkInstantiator::RegisterInstantiator("vtkDummyGPUInfoList", vtkInstantiatorvtkDummyGPUInfoListNew);


}

void vtkRenderingOpenGLInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkCameraPass", vtkInstantiatorvtkCameraPassNew);
  vtkInstantiator::UnRegisterInstantiator("vtkChooserPainter", vtkInstantiatorvtkChooserPainterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkClearRGBPass", vtkInstantiatorvtkClearRGBPassNew);
  vtkInstantiator::UnRegisterInstantiator("vtkClearZPass", vtkInstantiatorvtkClearZPassNew);
  vtkInstantiator::UnRegisterInstantiator("vtkClipPlanesPainter", vtkInstantiatorvtkClipPlanesPainterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCoincidentTopologyResolutionPainter", vtkInstantiatorvtkCoincidentTopologyResolutionPainterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkColorMaterialHelper", vtkInstantiatorvtkColorMaterialHelperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCompositePainter", vtkInstantiatorvtkCompositePainterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCompositePolyDataMapper2", vtkInstantiatorvtkCompositePolyDataMapper2New);
  vtkInstantiator::UnRegisterInstantiator("vtkDataTransferHelper", vtkInstantiatorvtkDataTransferHelperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDefaultPainter", vtkInstantiatorvtkDefaultPainterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDefaultPass", vtkInstantiatorvtkDefaultPassNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDepthPeelingPass", vtkInstantiatorvtkDepthPeelingPassNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDisplayListPainter", vtkInstantiatorvtkDisplayListPainterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFrameBufferObject", vtkInstantiatorvtkFrameBufferObjectNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFrameBufferObject2", vtkInstantiatorvtkFrameBufferObject2New);
  vtkInstantiator::UnRegisterInstantiator("vtkGLSLShaderDeviceAdapter2", vtkInstantiatorvtkGLSLShaderDeviceAdapter2New);
  vtkInstantiator::UnRegisterInstantiator("vtkGaussianBlurPass", vtkInstantiatorvtkGaussianBlurPassNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGenericOpenGLRenderWindow", vtkInstantiatorvtkGenericOpenGLRenderWindowNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHardwareSelectionPolyDataPainter", vtkInstantiatorvtkHardwareSelectionPolyDataPainterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLightingPainter", vtkInstantiatorvtkLightingPainterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLightsPass", vtkInstantiatorvtkLightsPassNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLinesPainter", vtkInstantiatorvtkLinesPainterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpaquePass", vtkInstantiatorvtkOpaquePassNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLActor", vtkInstantiatorvtkOpenGLActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLCamera", vtkInstantiatorvtkOpenGLCameraNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLClipPlanesPainter", vtkInstantiatorvtkOpenGLClipPlanesPainterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLCoincidentTopologyResolutionPainter", vtkInstantiatorvtkOpenGLCoincidentTopologyResolutionPainterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLCompositePainter", vtkInstantiatorvtkOpenGLCompositePainterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLDisplayListPainter", vtkInstantiatorvtkOpenGLDisplayListPainterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLExtensionManager", vtkInstantiatorvtkOpenGLExtensionManagerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLGlyph3DMapper", vtkInstantiatorvtkOpenGLGlyph3DMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLHardwareSelector", vtkInstantiatorvtkOpenGLHardwareSelectorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLHardwareSupport", vtkInstantiatorvtkOpenGLHardwareSupportNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLImageMapper", vtkInstantiatorvtkOpenGLImageMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLImageSliceMapper", vtkInstantiatorvtkOpenGLImageSliceMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLLabeledContourMapper", vtkInstantiatorvtkOpenGLLabeledContourMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLLight", vtkInstantiatorvtkOpenGLLightNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLLightMonitor", vtkInstantiatorvtkOpenGLLightMonitorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLLightingPainter", vtkInstantiatorvtkOpenGLLightingPainterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLModelViewProjectionMonitor", vtkInstantiatorvtkOpenGLModelViewProjectionMonitorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLPainterDeviceAdapter", vtkInstantiatorvtkOpenGLPainterDeviceAdapterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLPolyDataMapper2D", vtkInstantiatorvtkOpenGLPolyDataMapper2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLProperty", vtkInstantiatorvtkOpenGLPropertyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLRenderer", vtkInstantiatorvtkOpenGLRendererNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLRepresentationPainter", vtkInstantiatorvtkOpenGLRepresentationPainterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLScalarsToColorsPainter", vtkInstantiatorvtkOpenGLScalarsToColorsPainterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLTexture", vtkInstantiatorvtkOpenGLTextureNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOverlayPass", vtkInstantiatorvtkOverlayPassNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPainterPolyDataMapper", vtkInstantiatorvtkPainterPolyDataMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPixelBufferObject", vtkInstantiatorvtkPixelBufferObjectNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPointsPainter", vtkInstantiatorvtkPointsPainterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPolygonsPainter", vtkInstantiatorvtkPolygonsPainterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRenderPassCollection", vtkInstantiatorvtkRenderPassCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRenderbuffer", vtkInstantiatorvtkRenderbufferNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRepresentationPainter", vtkInstantiatorvtkRepresentationPainterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkScalarsToColorsPainter", vtkInstantiatorvtkScalarsToColorsPainterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSequencePass", vtkInstantiatorvtkSequencePassNew);
  vtkInstantiator::UnRegisterInstantiator("vtkShadowMapBakerPass", vtkInstantiatorvtkShadowMapBakerPassNew);
  vtkInstantiator::UnRegisterInstantiator("vtkShadowMapPass", vtkInstantiatorvtkShadowMapPassNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSobelGradientMagnitudePass", vtkInstantiatorvtkSobelGradientMagnitudePassNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStandardPolyDataPainter", vtkInstantiatorvtkStandardPolyDataPainterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTStripsPainter", vtkInstantiatorvtkTStripsPainterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTextureObject", vtkInstantiatorvtkTextureObjectNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTranslucentPass", vtkInstantiatorvtkTranslucentPassNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUniformVariables", vtkInstantiatorvtkUniformVariablesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkValuePainter", vtkInstantiatorvtkValuePainterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkValuePass", vtkInstantiatorvtkValuePassNew);
  vtkInstantiator::UnRegisterInstantiator("vtkValuePasses", vtkInstantiatorvtkValuePassesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVolumetricPass", vtkInstantiatorvtkVolumetricPassNew);
  vtkInstantiator::UnRegisterInstantiator("vtkWin32RenderWindowInteractor", vtkInstantiatorvtkWin32RenderWindowInteractorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkWin32OpenGLRenderWindow", vtkInstantiatorvtkWin32OpenGLRenderWindowNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDummyGPUInfoList", vtkInstantiatorvtkDummyGPUInfoListNew);


}

vtkRenderingOpenGLInstantiator::vtkRenderingOpenGLInstantiator()
{
  if(++vtkRenderingOpenGLInstantiator::Count == 1)
    {
    vtkRenderingOpenGLInstantiator::ClassInitialize();
    }
}

vtkRenderingOpenGLInstantiator::~vtkRenderingOpenGLInstantiator()
{
  if(--vtkRenderingOpenGLInstantiator::Count == 0)
    {
    vtkRenderingOpenGLInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkRenderingOpenGLInstantiator::Count;
