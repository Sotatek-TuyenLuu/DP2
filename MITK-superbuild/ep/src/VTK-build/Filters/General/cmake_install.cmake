# Install script for directory: E:/D/MITK-superbuild/ep/src/VTK/Filters/General

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
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Debug/vtkFiltersGeneral-6.2d.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Release/vtkFiltersGeneral-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/MinSizeRel/vtkFiltersGeneral-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/RelWithDebInfo/vtkFiltersGeneral-6.2.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Debug/vtkFiltersGeneral-6.2d.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Release/vtkFiltersGeneral-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/MinSizeRel/vtkFiltersGeneral-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/RelWithDebInfo/vtkFiltersGeneral-6.2.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/vtk-6.2/Modules" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/VTK-build/Filters/General/CMakeFiles/vtkFiltersGeneral.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-6.2" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkAnnotationLink.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkAppendPoints.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkApproximatingSubdivisionFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkAreaContourSpectrumFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkAxes.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkBlankStructuredGrid.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkBlankStructuredGridWithImage.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkBlockIdScalars.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkBoxClipDataSet.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkBrownianPoints.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkCellCenters.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkCellDerivatives.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkClipClosedSurface.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkClipConvexPolyData.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkClipDataSet.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkClipVolume.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkCoincidentPoints.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkContourTriangulator.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkCursor2D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkCursor3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkCurvatures.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkDataSetGradient.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkDataSetGradientPrecompute.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkDataSetTriangleFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkDeformPointSet.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkDensifyPolyData.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkDicer.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkDiscreteMarchingCubes.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkEdgePoints.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkGradientFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkGraphLayoutFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkGraphToPoints.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkHierarchicalDataLevelFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkHyperStreamline.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkIconGlyphFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkImageMarchingCubes.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkInterpolateDataSetAttributes.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkInterpolatingSubdivisionFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkLevelIdScalars.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkLinkEdgels.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkMergeCells.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkMultiBlockDataGroupFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkMultiBlockMergeFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkMultiThreshold.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkOBBDicer.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkOBBTree.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkPassThrough.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkPolyDataStreamer.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkPolyDataToReebGraphFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkProbePolyhedron.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkQuadraturePointInterpolator.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkQuadraturePointsGenerator.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkQuadratureSchemeDictionaryGenerator.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkQuantizePolyDataPoints.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkRandomAttributeGenerator.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkRectilinearGridClip.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkRectilinearGridToTetrahedra.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkRecursiveDividingCubes.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkReflectionFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkRotationFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkShrinkFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkShrinkPolyData.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkSpatialRepresentationFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkSplineFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkSplitField.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkStructuredGridClip.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkSubPixelPositionEdgels.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkTableBasedClipDataSet.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkTableToPolyData.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkTableToStructuredGrid.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkTemporalPathLineFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkTemporalStatistics.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkTessellatorFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkTimeSourceExample.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkTransformFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkTransformPolyDataFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkUncertaintyTubeFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkVertexGlyphFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkVolumeContourSpectrumFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkVoxelContoursToSurfaceFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkWarpLens.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkWarpScalar.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkWarpTo.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkWarpVector.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkYoungsMaterialInterface.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkMarchingContourFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkRectilinearGridToPointSet.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkGraphWeightEuclideanDistanceFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkGraphWeightFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkImageDataToPointSet.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkIntersectionPolyDataFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkBooleanOperationPolyDataFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkDistancePolyDataFilter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkOverlappingAMRLevelIdScalars.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkExtractArray.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkMatricizeArray.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkNormalizeMatrixVectors.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkPassArrays.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkSplitColumnComponents.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Filters/General/vtkCellTreeLocator.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Filters/General/vtkFiltersGeneralModule.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Filters/General/vtkFiltersGeneralInstantiator.h"
    )
endif()

