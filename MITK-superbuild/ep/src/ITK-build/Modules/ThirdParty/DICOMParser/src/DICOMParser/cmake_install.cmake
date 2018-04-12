# Install script for directory: E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/DICOMParser/src/DICOMParser

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
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/ITK-build/lib/Debug/ITKDICOMParser-4.7d.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/ITK-build/lib/Release/ITKDICOMParser-4.7.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/ITK-build/lib/MinSizeRel/ITKDICOMParser-4.7.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/ITK-build/lib/RelWithDebInfo/ITKDICOMParser-4.7.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ITK-4.7" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/DICOMParser/src/DICOMParser/DICOMAppHelper.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/DICOMParser/src/DICOMParser/DICOMBuffer.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/DICOMParser/src/DICOMParser/DICOMCallback.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/DICOMParser/src/DICOMParser/DICOMConfig.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/DICOMParser/src/DICOMParser/DICOMFile.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/DICOMParser/src/DICOMParser/DICOMParser.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/DICOMParser/src/DICOMParser/DICOMParserMap.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/DICOMParser/src/DICOMParser/DICOMSource.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/DICOMParser/src/DICOMParser/DICOMTypes.h"
    "E:/D/MITK-superbuild/ep/src/ITK-build/Modules/ThirdParty/DICOMParser/src/DICOMParser/DICOMCMakeConfig.h"
    )
endif()

