# Install script for directory: E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout

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
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Debug/vtkInfovisLayout-6.2d.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Release/vtkInfovisLayout-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/MinSizeRel/vtkInfovisLayout-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/RelWithDebInfo/vtkInfovisLayout-6.2.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Debug/vtkInfovisLayout-6.2d.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Release/vtkInfovisLayout-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/MinSizeRel/vtkInfovisLayout-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/RelWithDebInfo/vtkInfovisLayout-6.2.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/vtk-6.2/Modules" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/VTK-build/Infovis/Layout/CMakeFiles/vtkInfovisLayout.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-6.2" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkArcParallelEdgeStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkAreaLayout.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkAreaLayoutStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkAssignCoordinates.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkAssignCoordinatesLayoutStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkAttributeClustering2DLayoutStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkBoxLayoutStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkCirclePackFrontChainLayoutStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkCirclePackLayout.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkCirclePackLayoutStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkCirclePackToPolyData.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkCircularLayoutStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkClustering2DLayoutStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkCommunity2DLayoutStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkConeLayoutStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkConstrained2DLayoutStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkCosmicTreeLayoutStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkEdgeLayout.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkEdgeLayoutStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkFast2DLayoutStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkForceDirectedLayoutStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkGeoEdgeStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkGeoMath.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkGraphLayout.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkGraphLayoutStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkIncrementalForceLayout.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkPassThroughEdgeStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkPassThroughLayoutStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkPerturbCoincidentVertices.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkRandomLayoutStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkSimple2DLayoutStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkSimple3DCirclesStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkSliceAndDiceLayoutStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkSpanTreeLayoutStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkSplineGraphEdges.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkSquarifyLayoutStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkStackedTreeLayoutStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkTreeLayoutStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkTreeMapLayout.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkTreeMapLayoutStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkTreeMapToPolyData.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkTreeOrbitLayoutStrategy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkTreeRingToPolyData.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Layout/vtkKCoreLayout.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Infovis/Layout/vtkInfovisLayoutModule.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Infovis/Layout/vtkInfovisLayoutInstantiator.h"
    )
endif()

