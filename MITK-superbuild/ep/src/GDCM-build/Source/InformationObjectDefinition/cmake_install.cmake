# Install script for directory: E:/D/MITK-superbuild/ep/src/GDCM/Source/InformationObjectDefinition

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
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/Debug/gdcmIODd.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/Release/gdcmIOD.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/MinSizeRel/gdcmIOD.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/RelWithDebInfo/gdcmIOD.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Applications")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/Debug/gdcmIODd.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/Release/gdcmIOD.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/MinSizeRel/gdcmIOD.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/RelWithDebInfo/gdcmIOD.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "DebugDevel")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/Debug/gdcmIODd.pdb")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "DebugDevel")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/GDCM-build/bin/RelWithDebInfo/gdcmIOD.pdb")
  endif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/gdcm-2.4" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/InformationObjectDefinition/gdcmDefinedTerms.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/InformationObjectDefinition/gdcmDefs.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/InformationObjectDefinition/gdcmEnumeratedValues.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/InformationObjectDefinition/gdcmIOD.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/InformationObjectDefinition/gdcmIODEntry.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/InformationObjectDefinition/gdcmIODs.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/InformationObjectDefinition/gdcmMacro.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/InformationObjectDefinition/gdcmMacroEntry.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/InformationObjectDefinition/gdcmMacros.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/InformationObjectDefinition/gdcmModule.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/InformationObjectDefinition/gdcmModuleEntry.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/InformationObjectDefinition/gdcmModules.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/InformationObjectDefinition/gdcmNestedModuleEntries.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/InformationObjectDefinition/gdcmPatient.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/InformationObjectDefinition/gdcmSeries.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/InformationObjectDefinition/gdcmStudy.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/InformationObjectDefinition/gdcmTable.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/InformationObjectDefinition/gdcmTableEntry.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/InformationObjectDefinition/gdcmTableReader.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/InformationObjectDefinition/gdcmType.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/InformationObjectDefinition/gdcmUsage.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/InformationObjectDefinition/gdcmXMLDictReader.h"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/InformationObjectDefinition/gdcmXMLPrivateDictReader.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Libraries")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gdcm-2.4/XML" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/InformationObjectDefinition/Part3.xml"
    "E:/D/MITK-superbuild/ep/src/GDCM/Source/InformationObjectDefinition/Part4.xml"
    )
endif()

