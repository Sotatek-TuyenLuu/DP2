# Install script for directory: E:/D/MITK-superbuild/ep/src/VTK/IO/XML

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
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Debug/vtkIOXML-6.2d.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Release/vtkIOXML-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/MinSizeRel/vtkIOXML-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/RelWithDebInfo/vtkIOXML-6.2.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Debug/vtkIOXML-6.2d.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Release/vtkIOXML-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/MinSizeRel/vtkIOXML-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/RelWithDebInfo/vtkIOXML-6.2.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/vtk-6.2/Modules" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/VTK-build/IO/XML/CMakeFiles/vtkIOXML.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-6.2" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkRTXMLPolyDataReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLCompositeDataReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLCompositeDataWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLDataReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLDataSetWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLFileReadTester.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLGenericDataObjectReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLHierarchicalBoxDataFileConverter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLHierarchicalBoxDataReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLHierarchicalBoxDataWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLHierarchicalDataReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLHyperOctreeReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLHyperOctreeWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLImageDataReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLImageDataWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLMultiBlockDataReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLMultiBlockDataWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLMultiGroupDataReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLPDataReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLPImageDataReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLPolyDataReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLPolyDataWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLPPolyDataReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLPRectilinearGridReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLPStructuredDataReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLPStructuredGridReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLPUnstructuredDataReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLPUnstructuredGridReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLRectilinearGridReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLRectilinearGridWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLStructuredDataReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLStructuredDataWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLStructuredGridReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLStructuredGridWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLUniformGridAMRReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLUniformGridAMRWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLUnstructuredDataReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLUnstructuredDataWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLUnstructuredGridReader.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLUnstructuredGridWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLWriterC.h"
    "E:/D/MITK-superbuild/ep/src/VTK/IO/XML/vtkXMLWriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/IO/XML/vtkIOXMLModule.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/IO/XML/vtkIOXMLInstantiator.h"
    )
endif()

