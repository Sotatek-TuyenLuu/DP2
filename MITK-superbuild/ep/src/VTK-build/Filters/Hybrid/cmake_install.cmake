# Install script for directory: E:/D/MITK-superbuild/ep/src/VTK/Filters/Hybrid

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
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Debug/vtkFiltersHybrid-6.2d.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Release/vtkFiltersHybrid-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/MinSizeRel/vtkFiltersHybrid-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/RelWithDebInfo/vtkFiltersHybrid-6.2.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Debug/vtkFiltersHybrid-6.2d.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Release/vtkFiltersHybrid-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/MinSizeRel/vtkFiltersHybrid-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/RelWithDebInfo/vtkFiltersHybrid-6.2.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/vtk-6.2/Modules" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/VTK-build/Filters/Hybrid/CMakeFiles/vtkFiltersHybrid.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-6.2" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Hybrid/vtkBSplineTransform.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Hybrid/vtkDepthSortPolyData.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Hybrid/vtkDSPFilterDefinition.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Hybrid/vtkDSPFilterGroup.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Hybrid/vtkEarthSource.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Hybrid/vtkFacetReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Hybrid/vtkGreedyTerrainDecimation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Hybrid/vtkGridTransform.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Hybrid/vtkImageToPolyDataFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Hybrid/vtkImplicitModeller.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Hybrid/vtkPCAAnalysisFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Hybrid/vtkPolyDataSilhouette.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Hybrid/vtkProcrustesAlignmentFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Hybrid/vtkProjectedTerrainPath.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Hybrid/vtkRenderLargeImage.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Hybrid/vtkTemporalDataSetCache.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Hybrid/vtkTemporalFractal.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Hybrid/vtkTemporalInterpolator.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Hybrid/vtkTemporalShiftScale.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Hybrid/vtkTemporalSnapToTimeStep.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Hybrid/vtkTransformToGrid.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Hybrid/vtkWeightedTransformFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Filters/Hybrid/vtkFiltersHybridModule.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Filters/Hybrid/vtkFiltersHybridInstantiator.h"
    )
endif()

