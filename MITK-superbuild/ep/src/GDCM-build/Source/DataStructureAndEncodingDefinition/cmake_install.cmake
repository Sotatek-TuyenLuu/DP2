# Install script for directory: E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition

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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "DebugDevel")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/Debug/gdcmDSEDd.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/Release/gdcmDSED.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/MinSizeRel/gdcmDSED.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/RelWithDebInfo/gdcmDSED.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Applications")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/Debug/gdcmDSEDd.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/Release/gdcmDSED.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/MinSizeRel/gdcmDSED.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/RelWithDebInfo/gdcmDSED.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "DebugDevel")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/Debug/gdcmDSEDd.pdb")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "DebugDevel")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/RelWithDebInfo/gdcmDSED.pdb")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gdcm-2.4" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmAttribute.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmBasicOffsetTable.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmByteBuffer.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmByteSwapFilter.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmByteValue.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmCodeString.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmCP246ExplicitDataElement.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmCSAElement.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmCSAHeader.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmDataElement.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmDataSet.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmDataSetEvent.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmElement.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmExplicitDataElement.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmExplicitImplicitDataElement.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmFile.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmFileMetaInformation.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmFileSet.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmFragment.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmImplicitDataElement.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmItem.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmLO.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmMediaStorage.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmParseException.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmParser.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmPDBElement.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmPDBHeader.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmPreamble.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmPrivateTag.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmReader.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmSequenceOfFragments.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmSequenceOfItems.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmTag.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmTagToVR.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmTransferSyntax.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmUNExplicitDataElement.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmUNExplicitImplicitDataElement.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmValue.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmValueIO.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmVL.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmVM.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmVR.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmVR16ExplicitDataElement.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmWriter.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmCP246ExplicitDataElement.txx"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmCSAHeader.txx"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmDataSet.txx"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmExplicitDataElement.txx"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmExplicitImplicitDataElement.txx"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmFragment.txx"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmImplicitDataElement.txx"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmItem.txx"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmSequenceOfFragments.txx"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmSequenceOfItems.txx"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmUNExplicitDataElement.txx"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmUNExplicitImplicitDataElement.txx"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmValue.txx"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmValueIO.txx"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/DataStructureAndEncodingDefinition/gdcmVR16ExplicitDataElement.txx"
    )
endif()

