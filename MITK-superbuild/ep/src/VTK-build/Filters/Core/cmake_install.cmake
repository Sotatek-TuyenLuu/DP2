# Install script for directory: E:/D/MITK-superbuild/ep/src/VTK/Filters/Core

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
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Debug/vtkFiltersCore-6.2d.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Release/vtkFiltersCore-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/MinSizeRel/vtkFiltersCore-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/RelWithDebInfo/vtkFiltersCore-6.2.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Debug/vtkFiltersCore-6.2d.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Release/vtkFiltersCore-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/MinSizeRel/vtkFiltersCore-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/RelWithDebInfo/vtkFiltersCore-6.2.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/vtk-6.2/Modules" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/VTK-build/Filters/Core/CMakeFiles/vtkFiltersCore.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-6.2" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkAppendFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkAppendPolyData.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkAppendSelection.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkArrayCalculator.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkAssignAttribute.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkAttributeDataToFieldDataFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkCellDataToPointData.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkCleanPolyData.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkClipPolyData.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkCompositeDataProbeFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkConnectivityFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkContourFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkContourGrid.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkContourHelper.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkDataObjectGenerator.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkDataObjectToDataSetFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkDataSetEdgeSubdivisionCriterion.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkDataSetToDataObjectFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkDecimatePolylineFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkDecimatePro.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkDelaunay2D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkDelaunay3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkElevationFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkExecutionTimer.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkFeatureEdges.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkFieldDataToAttributeDataFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkGlyph2D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkGlyph3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkHedgeHog.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkHull.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkIdFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkMarchingCubes.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkMarchingSquares.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkMaskFields.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkMaskPoints.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkMaskPolyData.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkMassProperties.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkMergeDataObjectFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkMergeFields.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkMergeFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkPointDataToCellData.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkPolyDataConnectivityFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkPolyDataNormals.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkProbeFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkQuadricClustering.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkQuadricDecimation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkRearrangeFields.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkReverseSense.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkSimpleElevationFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkSmoothPolyDataFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkStripper.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkStructuredGridOutlineFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkSynchronizedTemplates2D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkSynchronizedTemplates3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkSynchronizedTemplatesCutter3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkTensorGlyph.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkThreshold.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkThresholdPoints.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkTransposeTable.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkTriangleFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkTubeFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkVectorDot.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkVectorNorm.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkWindowedSincPolyDataFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkCutter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkCompositeCutter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkGridSynchronizedTemplates3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkRectilinearSynchronizedTemplates.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkEdgeSubdivisionCriterion.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkStreamingTessellator.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkImplicitPolyDataDistance.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkStreamerBase.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkCenterOfMass.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkGhostArray.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkImageAppend.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkStructuredGridAppend.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/Core/vtkAppendCompositeDataLeaves.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Filters/Core/vtkFiltersCoreModule.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Filters/Core/vtkFiltersCoreInstantiator.h"
    )
endif()

