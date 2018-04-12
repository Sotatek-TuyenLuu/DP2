# Install script for directory: E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry

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
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Debug/vtkIOGeometry-6.2d.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Release/vtkIOGeometry-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/MinSizeRel/vtkIOGeometry-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/RelWithDebInfo/vtkIOGeometry-6.2.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Debug/vtkIOGeometry-6.2d.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Release/vtkIOGeometry-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/MinSizeRel/vtkIOGeometry-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/RelWithDebInfo/vtkIOGeometry-6.2.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/vtk-6.2/Modules" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/VTK-build/IO/Geometry/CMakeFiles/vtkIOGeometry.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-6.2" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry/vtkAVSucdReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry/vtkBYUReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry/vtkBYUWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry/vtkChacoReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry/vtkFacetWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry/vtkFLUENTReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry/vtkGAMBITReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry/vtkGaussianCubeReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry/vtkIVWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry/vtkMCubesReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry/vtkMCubesWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry/vtkMFIXReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry/vtkMoleculeReaderBase.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry/vtkMultiBlockPLOT3DReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry/vtkMultiBlockPLOT3DReaderInternals.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry/vtkOBJReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry/vtkOpenFOAMReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry/vtkParticleReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry/vtkPDBReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry/vtkPlot3DMetaReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry/vtkProStarReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry/vtkSTLReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry/vtkSTLWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry/vtkTecplotReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry/vtkUGFacetReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry/vtkWindBladeReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/Geometry/vtkXYZMolReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/IO/Geometry/vtkIOGeometryModule.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/IO/Geometry/vtkIOGeometryInstantiator.h"
    )
endif()

