# Install script for directory: E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets

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
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Debug/vtkInteractionWidgets-6.2d.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Release/vtkInteractionWidgets-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/MinSizeRel/vtkInteractionWidgets-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/RelWithDebInfo/vtkInteractionWidgets-6.2.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Debug/vtkInteractionWidgets-6.2d.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Release/vtkInteractionWidgets-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/MinSizeRel/vtkInteractionWidgets-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/RelWithDebInfo/vtkInteractionWidgets-6.2.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/vtk-6.2/Modules" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/VTK-build/Interaction/Widgets/CMakeFiles/vtkInteractionWidgets.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-6.2" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtk3DWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkAbstractPolygonalHandleRepresentation3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkAbstractWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkAffineRepresentation2D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkAffineRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkAffineWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkAngleRepresentation2D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkAngleRepresentation3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkAngleRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkAngleWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkAxesTransformRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkAxesTransformWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkBalloonRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkBalloonWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkBezierContourLineInterpolator.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkBiDimensionalRepresentation2D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkBiDimensionalRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkBiDimensionalWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkBorderRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkBorderWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkBoundedPlanePointPlacer.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkBoxRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkBoxWidget2.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkBoxWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkBrokenLineWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkButtonRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkButtonWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkCameraRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkCameraWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkCaptionRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkCaptionWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkCellCentersPointPlacer.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkCenteredSliderRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkCenteredSliderWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkCheckerboardRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkCheckerboardWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkClosedSurfacePointPlacer.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkConstrainedPointHandleRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkContinuousValueWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkContinuousValueWidgetRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkContourLineInterpolator.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkContourRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkContourWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkDijkstraImageContourLineInterpolator.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkDistanceRepresentation2D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkDistanceRepresentation3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkDistanceRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkDistanceWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkEllipsoidTensorProbeRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkEvent.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkFixedSizeHandleRepresentation3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkFocalPlaneContourRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkFocalPlanePointPlacer.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkHandleRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkHandleWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkHoverWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkImageActorPointPlacer.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkImageCroppingRegionsWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkImageOrthoPlanes.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkImagePlaneWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkImageTracerWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkImplicitPlaneRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkImplicitPlaneWidget2.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkImplicitPlaneWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkLinearContourLineInterpolator.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkLineRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkLineWidget2.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkLineWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkLogoRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkLogoWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkOrientationMarkerWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkOrientedGlyphContourRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkOrientedGlyphFocalPlaneContourRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkOrientedPolygonalHandleRepresentation3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkParallelopipedRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkParallelopipedWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkPlaneWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkPlaybackRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkPlaybackWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkPointHandleRepresentation2D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkPointHandleRepresentation3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkPointPlacer.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkPointWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkPolyDataContourLineInterpolator.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkPolyDataPointPlacer.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkPolyDataSourceWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkPolygonalHandleRepresentation3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkPolygonalSurfaceContourLineInterpolator.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkPolygonalSurfacePointPlacer.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkProp3DButtonRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkRectilinearWipeRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkRectilinearWipeWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkScalarBarRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkScalarBarWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkSeedRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkSeedWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkSliderRepresentation2D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkSliderRepresentation3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkSliderRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkSliderWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkSphereHandleRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkSphereRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkSphereWidget2.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkSphereWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkSplineRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkSplineWidget2.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkSplineWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkTensorProbeRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkTensorProbeWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkTerrainContourLineInterpolator.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkTerrainDataPointPlacer.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkTextRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkTexturedButtonRepresentation2D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkTexturedButtonRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkTextWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkWidgetCallbackMapper.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkWidgetEvent.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkWidgetEventTranslator.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkWidgetRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkWidgetSet.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkXYPlotWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkResliceCursorLineRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkResliceCursorRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkResliceCursorThickLineRepresentation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkResliceCursorWidget.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkResliceCursorActor.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkResliceCursorPicker.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkResliceCursor.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Interaction/Widgets/vtkResliceCursorPolyDataAlgorithm.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Interaction/Widgets/vtkInteractionWidgetsModule.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Interaction/Widgets/vtkInteractionWidgetsInstantiator.h"
    )
endif()

