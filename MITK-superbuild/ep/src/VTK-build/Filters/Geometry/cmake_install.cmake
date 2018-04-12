# Install script for directory: E:/D/MITK-superbuild/ep/src/VTK/Filters/Geometry

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
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Debug/vtkFiltersGeometry-6.2d.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Release/vtkFiltersGeometry-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/MinSizeRel/vtkFiltersGeometry-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/RelWithDebInfo/vtkFiltersGeometry-6.2.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Debug/vtkFiltersGeometry-6.2d.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Release/vtkFiltersGeometry-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/MinSizeRel/vtkFiltersGeometry-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/RelWithDebInfo/vtkFiltersGeometry-6.2.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/vtk-6.2/Modules" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/VTK-build/Filters/Geometry/CMakeFiles/vtkFiltersGeometry.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-6.2" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Geometry/vtkCompositeDataGeometryFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Geometry/vtkGeometryFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Geometry/vtkHierarchicalDataSetGeometryFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Geometry/vtkImageDataGeometryFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Geometry/vtkImageDataToUniformGrid.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Geometry/vtkProjectSphereFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Geometry/vtkRectilinearGridGeometryFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Geometry/vtkStructuredGridGeometryFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Geometry/vtkStructuredPointsGeometryFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Geometry/vtkUnstructuredGridGeometryFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Geometry/vtkDataSetSurfaceFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Geometry/vtkAbstractGridConnectivity.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Geometry/vtkDataSetGhostGenerator.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Geometry/vtkRectilinearGridPartitioner.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Geometry/vtkStructuredAMRNeighbor.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Geometry/vtkStructuredAMRGridConnectivity.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Geometry/vtkStructuredGridConnectivity.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Geometry/vtkStructuredGridGhostDataGenerator.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Geometry/vtkStructuredGridPartitioner.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Geometry/vtkStructuredNeighbor.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Geometry/vtkUniformGridGhostDataGenerator.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Filters/Geometry/vtkFiltersGeometryModule.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Filters/Geometry/vtkFiltersGeometryInstantiator.h"
    )
endif()

