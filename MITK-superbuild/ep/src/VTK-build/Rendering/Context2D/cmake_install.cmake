# Install script for directory: E:/D/MITK-superbuild/ep/src/VTK/Rendering/Context2D

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
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Debug/vtkRenderingContext2D-6.2d.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Release/vtkRenderingContext2D-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/MinSizeRel/vtkRenderingContext2D-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/RelWithDebInfo/vtkRenderingContext2D-6.2.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Debug/vtkRenderingContext2D-6.2d.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Release/vtkRenderingContext2D-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/MinSizeRel/vtkRenderingContext2D-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/RelWithDebInfo/vtkRenderingContext2D-6.2.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/vtk-6.2/Modules" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/VTK-build/Rendering/Context2D/CMakeFiles/vtkRenderingContext2D.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-6.2" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Context2D/vtkAbstractContextBufferId.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Context2D/vtkAbstractContextItem.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Context2D/vtkBlockItem.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Context2D/vtkBrush.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Context2D/vtkContext2D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Context2D/vtkContext3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Context2D/vtkContextActor.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Context2D/vtkContextClip.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Context2D/vtkContextDevice2D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Context2D/vtkContextDevice3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Context2D/vtkContextItem.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Context2D/vtkContextKeyEvent.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Context2D/vtkContextMapper2D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Context2D/vtkContextMouseEvent.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Context2D/vtkContextScene.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Context2D/vtkContextTransform.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Context2D/vtkImageItem.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Context2D/vtkMarkerUtilities.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Context2D/vtkPen.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Rendering/Context2D/vtkTooltipItem.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Rendering/Context2D/vtkRenderingContext2DModule.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Rendering/Context2D/vtkRenderingContext2DInstantiator.h"
    )
endif()

