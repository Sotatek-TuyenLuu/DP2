# Install script for directory: E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy

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
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Debug/vtkIOLegacy-6.2d.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Release/vtkIOLegacy-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/MinSizeRel/vtkIOLegacy-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/RelWithDebInfo/vtkIOLegacy-6.2.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Debug/vtkIOLegacy-6.2d.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Release/vtkIOLegacy-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/MinSizeRel/vtkIOLegacy-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/RelWithDebInfo/vtkIOLegacy-6.2.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/vtk-6.2/Modules" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/VTK-build/IO/Legacy/CMakeFiles/vtkIOLegacy.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-6.2" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkCompositeDataReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkCompositeDataWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkDataObjectReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkDataObjectWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkDataReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkDataSetReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkDataSetWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkDataWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkGenericDataObjectReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkGenericDataObjectWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkGraphReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkGraphWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkPixelExtentIO.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkPolyDataReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkPolyDataWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkRectilinearGridReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkRectilinearGridWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkSimplePointsReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkSimplePointsWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkStructuredGridReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkStructuredGridWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkStructuredPointsReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkStructuredPointsWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkTableReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkTableWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkTreeReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkTreeWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkUnstructuredGridReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Legacy/vtkUnstructuredGridWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/IO/Legacy/vtkIOLegacyModule.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/IO/Legacy/vtkIOLegacyInstantiator.h"
    )
endif()

