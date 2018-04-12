# Install script for directory: E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO

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
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/ITK-build/lib/Debug/ITKMetaIO-4.7d.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/ITK-build/lib/Release/ITKMetaIO-4.7.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/ITK-build/lib/MinSizeRel/ITKMetaIO-4.7.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/ITK-build/lib/RelWithDebInfo/ITKMetaIO-4.7.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ITK-4.7" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/localMetaConfiguration.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaArray.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaArrow.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaBlob.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaCommand.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaContour.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaDTITube.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaEllipse.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaEvent.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaFEMObject.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaForm.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaGaussian.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaGroup.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaImage.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaImageTypes.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaImageUtils.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaITKUtils.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaLandmark.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaLine.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaMesh.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaObject.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaOutput.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaScene.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaSurface.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaTransform.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaTube.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaTubeGraph.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaTypes.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaUtils.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/metaVesselTube.h"
    "E:/D/MITK-superbuild/ep/src/ITK-build/Modules/ThirdParty/MetaIO/src/MetaIO/metaIOConfig.h"
    )
endif()

