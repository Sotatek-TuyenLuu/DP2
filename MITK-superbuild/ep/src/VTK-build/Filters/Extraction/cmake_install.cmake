# Install script for directory: E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction

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
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Debug/vtkFiltersExtraction-6.2d.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Release/vtkFiltersExtraction-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/MinSizeRel/vtkFiltersExtraction-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/RelWithDebInfo/vtkFiltersExtraction-6.2.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Debug/vtkFiltersExtraction-6.2d.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Release/vtkFiltersExtraction-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/MinSizeRel/vtkFiltersExtraction-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/RelWithDebInfo/vtkFiltersExtraction-6.2.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/vtk-6.2/Modules" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/VTK-build/Filters/Extraction/CMakeFiles/vtkFiltersExtraction.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-6.2" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkConvertSelection.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkExtractArraysOverTime.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkExtractBlock.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkExtractCells.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkExtractDataOverTime.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkExtractDataSets.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkExtractEdges.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkExtractGeometry.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkExtractGrid.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkExtractLevel.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkExtractPolyDataGeometry.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkExtractRectilinearGrid.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkExtractSelectedBlock.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkExtractSelectedFrustum.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkExtractSelectedIds.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkExtractSelectedLocations.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkExtractSelectedPolyDataIds.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkExtractSelectedRows.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkExtractSelectedThresholds.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkExtractSelection.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkExtractSelectionBase.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkExtractTemporalFieldData.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkExtractTensorComponents.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkExtractUnstructuredGrid.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkExtractVectorComponents.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkProbeSelectedLocations.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkHierarchicalDataExtractDataSets.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Extraction/vtkHierarchicalDataExtractLevel.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Filters/Extraction/vtkFiltersExtractionModule.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Filters/Extraction/vtkFiltersExtractionInstantiator.h"
    )
endif()

