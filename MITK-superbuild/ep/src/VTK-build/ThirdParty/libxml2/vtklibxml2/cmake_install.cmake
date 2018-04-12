# Install script for directory: E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/libxml2/vtklibxml2

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
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Debug/vtklibxml2-6.2d.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Release/vtklibxml2-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/MinSizeRel/vtklibxml2-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/RelWithDebInfo/vtklibxml2-6.2.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Debug/vtklibxml2-6.2d.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Release/vtklibxml2-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/MinSizeRel/vtklibxml2-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/RelWithDebInfo/vtklibxml2-6.2.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-6.2/vtklibxml2/libxml" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/xmlversion.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/c14n.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/catalog.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/chvalid.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/debugXML.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/dict.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/DOCBparser.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/encoding.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/entities.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/globals.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/hash.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/HTMLparser.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/HTMLtree.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/list.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/nanoftp.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/nanohttp.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/parser.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/parserInternals.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/pattern.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/relaxng.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/SAX.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/SAX2.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/schemasInternals.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/schematron.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/threads.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/tree.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/uri.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/valid.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/vtk_libxml2_mangle.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/xinclude.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/xlink.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/xmlautomata.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/xmlerror.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/xmlexports.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/xmlIO.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/xmlmemory.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/xmlmodule.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/xmlreader.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/xmlregexp.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/xmlsave.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/xmlschemas.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/xmlschemastypes.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/xmlstring.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/xmlunicode.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/xmlwriter.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/xpath.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/xpathInternals.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/libxml2/vtklibxml2/libxml/xpointer.h"
    )
endif()

