# Install script for directory: E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core

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
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Debug/vtkRenderingCore-6.2d.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Release/vtkRenderingCore-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/MinSizeRel/vtkRenderingCore-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/RelWithDebInfo/vtkRenderingCore-6.2.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Debug/vtkRenderingCore-6.2d.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Release/vtkRenderingCore-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/MinSizeRel/vtkRenderingCore-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/RelWithDebInfo/vtkRenderingCore-6.2.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/vtk-6.2/Modules" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/VTK-build/Rendering/Core/CMakeFiles/vtkRenderingCore.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-6.2" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkGPUInfoListArray.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkNoise200x200.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkPythagoreanQuadruples.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkRayCastStructures.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkRenderingCoreEnums.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkTDxMotionEventInfo.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkAbstractMapper3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkAbstractMapper.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkAbstractPicker.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkAbstractVolumeMapper.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkActor2DCollection.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkActor2D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkActorCollection.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkActor.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkAssembly.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkBackgroundColorMonitor.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkCameraActor.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkCamera.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkCameraInterpolator.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkCellCenterDepthSort.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkColorTransferFunction.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkCompositeDataDisplayAttributes.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkCompositePolyDataMapper.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkCoordinate.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkCullerCollection.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkCuller.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkDataSetMapper.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkDiscretizableColorTransferFunction.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkDistanceToCamera.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkFollower.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkFrustumCoverageCuller.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkGenericRenderWindowInteractor.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkGenericVertexAttributeMapping.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkGlyph3DMapper.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkGPUInfo.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkGPUInfoList.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkGraphicsFactory.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkGraphMapper.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkGraphToGlyphs.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkHardwareSelector.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkHierarchicalPolyDataMapper.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkImageActor.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkImageMapper3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkImageMapper.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkImageProperty.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkImageSlice.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkImageSliceMapper.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkInteractorEventRecorder.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkInteractorObserver.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkLabeledContourMapper.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkLightActor.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkLightCollection.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkLight.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkLightKit.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkLogLookupTable.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkLookupTableWithEnabling.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkMapArrayValues.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkMapper2D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkMapperCollection.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkMapper.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkObserverMediator.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkPolyDataMapper2D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkPolyDataMapper.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkProp3DCollection.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkProp3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkProp3DFollower.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkPropAssembly.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkPropCollection.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkProp.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkProperty2D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkProperty.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkRendererCollection.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkRenderer.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkRendererDelegate.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkRendererSource.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkRenderWindowCollection.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkRenderWindow.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkRenderWindowInteractor.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkSelectVisiblePoints.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkShaderDeviceAdapter2.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkTextActor.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkTextActor3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkTexture.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkTexturedActor2D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkTransformCoordinateSystems.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkTransformInterpolator.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkTupleInterpolator.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkViewDependentErrorMetric.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkViewport.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkVisibilitySort.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkVolumeCollection.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkVolume.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkVolumeProperty.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkWindowLevelLookupTable.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkWindowToImageFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkAssemblyNode.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkAssemblyPath.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkAssemblyPaths.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkAreaPicker.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkPicker.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkAbstractPropPicker.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkPropPicker.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkPickingManager.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkLODProp3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkWorldPointPicker.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkCellPicker.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkPointPicker.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkRenderedAreaPicker.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkScenePicker.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkInteractorStyle.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkInteractorStyleSwitchBase.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkTDxInteractorStyle.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkTDxInteractorStyleCamera.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkTDxInteractorStyleSettings.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkStringToImage.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkTextMapper.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkTextProperty.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkTextPropertyCollection.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkTextRenderer.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkAbstractInteractionDevice.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkAbstractRenderDevice.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkRenderWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Core/vtkPainterDeviceAdapter.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Rendering/Core/vtkRenderingCoreModule.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Rendering/Core/vtkRenderingCoreInstantiator.h"
    )
endif()

