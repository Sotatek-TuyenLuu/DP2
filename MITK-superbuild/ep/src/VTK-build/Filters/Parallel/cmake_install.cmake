# Install script for directory: E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel

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
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Debug/vtkFiltersParallel-6.2d.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Release/vtkFiltersParallel-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/MinSizeRel/vtkFiltersParallel-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/RelWithDebInfo/vtkFiltersParallel-6.2.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Debug/vtkFiltersParallel-6.2d.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Release/vtkFiltersParallel-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/MinSizeRel/vtkFiltersParallel-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/RelWithDebInfo/vtkFiltersParallel-6.2.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/vtk-6.2/Modules" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/VTK-build/Filters/Parallel/CMakeFiles/vtkFiltersParallel.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-6.2" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkCollectGraph.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkCollectPolyData.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkCollectTable.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkCutMaterial.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkDuplicatePolyData.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkExtractCTHPart.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkExtractPolyDataPiece.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkExtractUnstructuredGridPiece.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkExtractUserDefinedPiece.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkPCellDataToPointData.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkPExtractArraysOverTime.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkPKdTree.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkPLinearExtrusionFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkPMaskPoints.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkPOutlineCornerFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkPOutlineFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkPOutlineFilterInternals.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkPPolyDataNormals.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkPProbeFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkPProjectSphereFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkPReflectionFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkPResampleFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkPSphereSource.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkPYoungsMaterialInterface.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkPassThroughFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkPieceRequestFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkPieceScalars.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkPipelineSize.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkProcessIdScalars.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkRectilinearGridOutlineFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkTransmitPolyDataPiece.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkTransmitStructuredDataPiece.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkTransmitRectilinearGridPiece.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkTransmitStructuredGridPiece.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Parallel/vtkTransmitUnstructuredGridPiece.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Filters/Parallel/vtkFiltersParallelModule.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Filters/Parallel/vtkFiltersParallelInstantiator.h"
    )
endif()

