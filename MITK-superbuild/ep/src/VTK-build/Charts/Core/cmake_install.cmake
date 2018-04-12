# Install script for directory: E:/D/MITK-superbuild/ep/src/VTK/Charts/Core

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
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Debug/vtkChartsCore-6.2d.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Release/vtkChartsCore-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/MinSizeRel/vtkChartsCore-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/RelWithDebInfo/vtkChartsCore-6.2.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Debug/vtkChartsCore-6.2d.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Release/vtkChartsCore-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/MinSizeRel/vtkChartsCore-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/RelWithDebInfo/vtkChartsCore-6.2.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/vtk-6.2/Modules" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/VTK-build/Charts/Core/CMakeFiles/vtkChartsCore.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-6.2" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkAxis.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkAxisExtended.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkCategoryLegend.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkChart.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkChartBox.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkChartHistogram2D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkChartLegend.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkChartMatrix.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkChartParallelCoordinates.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkChartPie.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkChartXY.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkChartXYZ.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkColorLegend.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkColorTransferControlPointsItem.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkColorTransferFunctionItem.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkCompositeControlPointsItem.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkCompositeTransferFunctionItem.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkContextPolygon.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkControlPointsItem.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkLookupTableItem.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkPiecewiseControlPointsItem.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkPiecewiseFunctionItem.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkPiecewisePointHandleItem.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkPlot.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkPlot3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkPlotBag.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkPlotBar.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkPlotBox.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkPlotFunctionalBag.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkPlotGrid.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkPlotHistogram2D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkPlotLine.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkPlotLine3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkPlotParallelCoordinates.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkPlotPie.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkPlotPoints.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkPlotPoints3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkPlotStacked.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkPlotSurface.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkScalarsToColorsItem.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Charts/Core/vtkScatterPlotMatrix.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Charts/Core/vtkChartsCoreModule.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Charts/Core/vtkChartsCoreInstantiator.h"
    )
endif()

