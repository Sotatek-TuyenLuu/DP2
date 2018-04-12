# Install script for directory: E:/D/MITK-superbuild/ep/src/VTK/Filters/Modeling

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
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Debug/vtkFiltersModeling-6.2d.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Release/vtkFiltersModeling-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/MinSizeRel/vtkFiltersModeling-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/RelWithDebInfo/vtkFiltersModeling-6.2.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Debug/vtkFiltersModeling-6.2d.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Release/vtkFiltersModeling-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/MinSizeRel/vtkFiltersModeling-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/RelWithDebInfo/vtkFiltersModeling-6.2.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/vtk-6.2/Modules" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/VTK-build/Filters/Modeling/CMakeFiles/vtkFiltersModeling.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-6.2" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Modeling/vtkBandedPolyDataContourFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Modeling/vtkButterflySubdivisionFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Modeling/vtkDijkstraGraphGeodesicPath.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Modeling/vtkDijkstraImageGeodesicPath.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Modeling/vtkFillHolesFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Modeling/vtkGeodesicPath.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Modeling/vtkGraphGeodesicPath.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Modeling/vtkLinearExtrusionFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Modeling/vtkLinearSubdivisionFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Modeling/vtkLoopSubdivisionFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Modeling/vtkPolyDataPointSampler.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Modeling/vtkProjectedTexture.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Modeling/vtkQuadRotationalExtrusionFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Modeling/vtkRibbonFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Modeling/vtkRotationalExtrusionFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Modeling/vtkRuledSurfaceFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Modeling/vtkSelectEnclosedPoints.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Modeling/vtkSelectPolyData.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Modeling/vtkSpherePuzzleArrows.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Modeling/vtkSpherePuzzle.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Modeling/vtkSubdivideTetra.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Modeling/vtkOutlineFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Modeling/vtkSectorSource.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Filters/Modeling/vtkFiltersModelingModule.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Filters/Modeling/vtkFiltersModelingInstantiator.h"
    )
endif()
