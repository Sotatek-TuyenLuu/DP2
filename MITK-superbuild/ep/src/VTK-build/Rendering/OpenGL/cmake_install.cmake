# Install script for directory: E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "E:/D/MITK-superbuild/ep")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Debug/vtkRenderingOpenGL-6.2d.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Release/vtkRenderingOpenGL-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/MinSizeRel/vtkRenderingOpenGL-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/RelWithDebInfo/vtkRenderingOpenGL-6.2.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Debug/vtkRenderingOpenGL-6.2d.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Release/vtkRenderingOpenGL-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/MinSizeRel/vtkRenderingOpenGL-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/RelWithDebInfo/vtkRenderingOpenGL-6.2.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/vtk-6.2/Modules" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/VTK-build/Rendering/OpenGL/CMakeFiles/vtkRenderingOpenGL.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-6.2" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkgluPickMatrix.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGL.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Rendering/OpenGL/vtkTDxConfigure.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Rendering/OpenGL/vtkRenderingOpenGLConfigure.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Rendering/OpenGL/vtkgl.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Rendering/OpenGL/vtkOpenGLError.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkCameraPass.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkChooserPainter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkClearRGBPass.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkClearZPass.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkClipPlanesPainter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkCoincidentTopologyResolutionPainter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkColorMaterialHelper.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkCompositePainter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkCompositePolyDataMapper2.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkDataTransferHelper.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkDefaultPainter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkDefaultPass.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkDepthPeelingPass.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkDisplayListPainter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkFrameBufferObject.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkFrameBufferObject2.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkGLSLShaderDeviceAdapter2.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkGaussianBlurPass.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkGenericOpenGLRenderWindow.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkHardwareSelectionPolyDataPainter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkImageProcessingPass.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkLightingHelper.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkLightingPainter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkLightsPass.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkLinesPainter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpaquePass.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGLActor.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGLCamera.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGLClipPlanesPainter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGLCoincidentTopologyResolutionPainter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGLCompositePainter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGLDisplayListPainter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGLExtensionManager.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGLGL2PSHelper.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGLGlyph3DMapper.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGLHardwareSelector.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGLHardwareSupport.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGLImageMapper.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGLImageSliceMapper.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGLLabeledContourMapper.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGLLight.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGLLightMonitor.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGLLightingPainter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGLModelViewProjectionMonitor.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGLPainterDeviceAdapter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGLPolyDataMapper2D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGLProperty.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGLRenderWindow.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGLRenderer.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGLRepresentationPainter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGLScalarsToColorsPainter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGLState.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOpenGLTexture.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkOverlayPass.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkPainter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkPainterPolyDataMapper.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkPixelBufferObject.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkPointsPainter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkPolyDataPainter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkPolygonsPainter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkPrimitivePainter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkRenderPass.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkRenderPassCollection.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkRenderState.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkRenderbuffer.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkRepresentationPainter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkScalarsToColorsPainter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkSequencePass.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkShader2.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkShader2Collection.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkShaderProgram2.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkShadowMapBakerPass.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkShadowMapPass.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkSobelGradientMagnitudePass.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkStandardPolyDataPainter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkTStripsPainter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkTextureObject.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkTextureUnitManager.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkTranslucentPass.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkUniformVariables.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkValuePainter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkValuePass.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkValuePasses.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkVolumetricPass.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Rendering/OpenGL/vtkRenderingOpenGLObjectFactory.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkWin32RenderWindowInteractor.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkWin32OpenGLRenderWindow.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/OpenGL/vtkDummyGPUInfoList.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Rendering/OpenGL/vtkRenderingOpenGLModule.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Rendering/OpenGL/vtkRenderingOpenGLInstantiator.h"
    )
endif()

