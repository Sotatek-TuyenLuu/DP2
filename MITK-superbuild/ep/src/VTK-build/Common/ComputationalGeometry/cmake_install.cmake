# Install script for directory: E:/D/MITK-superbuild/ep/src/VTK/Common/ComputationalGeometry

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
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Debug/vtkCommonComputationalGeometry-6.2d.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Release/vtkCommonComputationalGeometry-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/MinSizeRel/vtkCommonComputationalGeometry-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/RelWithDebInfo/vtkCommonComputationalGeometry-6.2.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Debug/vtkCommonComputationalGeometry-6.2d.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Release/vtkCommonComputationalGeometry-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/MinSizeRel/vtkCommonComputationalGeometry-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/RelWithDebInfo/vtkCommonComputationalGeometry-6.2.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/vtk-6.2/Modules" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/VTK-build/Common/ComputationalGeometry/CMakeFiles/vtkCommonComputationalGeometry.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-6.2" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/VTK/Common/ComputationalGeometry/vtkCardinalSpline.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Common/ComputationalGeometry/vtkKochanekSpline.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Common/ComputationalGeometry/vtkParametricBoy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Common/ComputationalGeometry/vtkParametricConicSpiral.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Common/ComputationalGeometry/vtkParametricCrossCap.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Common/ComputationalGeometry/vtkParametricDini.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Common/ComputationalGeometry/vtkParametricEllipsoid.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Common/ComputationalGeometry/vtkParametricEnneper.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Common/ComputationalGeometry/vtkParametricFigure8Klein.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Common/ComputationalGeometry/vtkParametricFunction.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Common/ComputationalGeometry/vtkParametricKlein.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Common/ComputationalGeometry/vtkParametricMobius.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Common/ComputationalGeometry/vtkParametricRandomHills.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Common/ComputationalGeometry/vtkParametricRoman.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Common/ComputationalGeometry/vtkParametricSpline.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Common/ComputationalGeometry/vtkParametricSuperEllipsoid.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Common/ComputationalGeometry/vtkParametricSuperToroid.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Common/ComputationalGeometry/vtkParametricTorus.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Common/ComputationalGeometry/vtkCommonComputationalGeometryModule.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Common/ComputationalGeometry/vtkCommonComputationalGeometryInstantiator.h"
    )
endif()

