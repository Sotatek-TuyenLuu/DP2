# Install script for directory: E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core

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
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Debug/vtkInfovisCore-6.2d.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Release/vtkInfovisCore-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/MinSizeRel/vtkInfovisCore-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/RelWithDebInfo/vtkInfovisCore-6.2.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Debug/vtkInfovisCore-6.2d.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Release/vtkInfovisCore-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/MinSizeRel/vtkInfovisCore-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/RelWithDebInfo/vtkInfovisCore-6.2.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/vtk-6.2/Modules" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/VTK-build/Infovis/Core/CMakeFiles/vtkInfovisCore.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-6.2" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkAddMembershipArray.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkAdjacencyMatrixToEdgeTable.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkArrayNorm.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkArrayToTable.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkCollapseGraph.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkCollapseVerticesByArray.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkDataObjectToTable.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkDotProductSimilarity.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkExtractSelectedTree.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkEdgeCenters.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkExpandSelectedGraph.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkExtractSelectedGraph.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkGenerateIndexArray.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkGraphHierarchicalBundleEdges.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkGroupLeafVertices.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkMergeColumns.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkMergeGraphs.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkMergeTables.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkMutableGraphHelper.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkNetworkHierarchy.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkPipelineGraphSource.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkPruneTreeFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkRandomGraphSource.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkReduceTable.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkRemoveIsolatedVertices.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkSparseArrayToTable.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkStreamGraph.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkStringToCategory.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkStringToNumeric.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkTableToArray.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkTableToGraph.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkTableToSparseArray.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkTableToTreeFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkThresholdGraph.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkThresholdTable.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkTransferAttributes.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkTransposeMatrix.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkTreeFieldAggregator.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkTreeDifferenceFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkTreeLevelsFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkVertexDegree.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkRemoveHiddenData.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Infovis/Core/vtkKCoreDecomposition.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Infovis/Core/vtkInfovisCoreModule.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Infovis/Core/vtkInfovisCoreInstantiator.h"
    )
endif()

