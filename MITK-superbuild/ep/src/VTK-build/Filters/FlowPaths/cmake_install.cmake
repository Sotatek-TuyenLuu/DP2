# Install script for directory: E:/D/MITK-superbuild/ep/src/VTK/Filters/FlowPaths

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
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Debug/vtkFiltersFlowPaths-6.2d.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Release/vtkFiltersFlowPaths-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/MinSizeRel/vtkFiltersFlowPaths-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/RelWithDebInfo/vtkFiltersFlowPaths-6.2.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Debug/vtkFiltersFlowPaths-6.2d.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Release/vtkFiltersFlowPaths-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/MinSizeRel/vtkFiltersFlowPaths-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/RelWithDebInfo/vtkFiltersFlowPaths-6.2.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/vtk-6.2/Modules" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/VTK-build/Filters/FlowPaths/CMakeFiles/vtkFiltersFlowPaths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-6.2" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/FlowPaths/vtkAbstractInterpolatedVelocityField.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/FlowPaths/vtkAMRInterpolatedVelocityField.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/FlowPaths/vtkCompositeInterpolatedVelocityField.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/FlowPaths/vtkDashedStreamLine.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/FlowPaths/vtkInterpolatedVelocityField.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/FlowPaths/vtkStreamer.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/FlowPaths/vtkStreamLine.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/FlowPaths/vtkStreamPoints.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/FlowPaths/vtkStreamTracer.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/FlowPaths/vtkModifiedBSPTree.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/FlowPaths/vtkCellLocatorInterpolatedVelocityField.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/FlowPaths/vtkTemporalStreamTracer.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/FlowPaths/vtkParticleTracerBase.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/FlowPaths/vtkParticleTracer.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/FlowPaths/vtkStreaklineFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/FlowPaths/vtkParticlePathFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/FlowPaths/vtkTemporalInterpolatedVelocityField.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/FlowPaths/vtkCachingInterpolatedVelocityField.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Filters/FlowPaths/vtkFiltersFlowPathsModule.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Filters/FlowPaths/vtkFiltersFlowPathsInstantiator.h"
    )
endif()

