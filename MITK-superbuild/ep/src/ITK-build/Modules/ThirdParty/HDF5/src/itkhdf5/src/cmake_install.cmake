# Install script for directory: E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src

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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ITK-4.7/itkhdf5" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/hdf5.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5api_adpt.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5public.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5version.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5overflow.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Apkg.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Apublic.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5ACpkg.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5ACpublic.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5B2pkg.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5B2public.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Bpkg.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Bpublic.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Dpkg.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Dpublic.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Edefin.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Einit.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Epkg.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Epubgen.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Epublic.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Eterm.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Fpkg.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Fpublic.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5FDcore.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5FDdirect.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5FDfamily.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5FDlog.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5FDmpi.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5FDmpio.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5FDmpiposix.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5FDmulti.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5FDpkg.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5FDpublic.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5FDsec2.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5FDstdio.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5FSpkg.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5FSpublic.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Gpkg.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Gpublic.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5HFpkg.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5HFpublic.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5HGpkg.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5HGpublic.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5HLpkg.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5HLpublic.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5MPpkg.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Opkg.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Opublic.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Oshared.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Ppkg.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Ppublic.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Spkg.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Spublic.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5SMpkg.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Tpkg.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Tpublic.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Zpkg.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Zpublic.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Cpkg.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Cpublic.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Ipkg.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Ipublic.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Lpkg.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Lpublic.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5MMpublic.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Rpkg.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Rpublic.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5FDwindows.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5private.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Aprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5ACprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5B2private.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Bprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5CSprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Dprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Eprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5FDprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Fprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5FLprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5FOprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5MFprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5MMprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Cprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5FSprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Gprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5HFprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5HGprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5HLprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5HPprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Iprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Lprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5MPprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Oprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Pprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5RCprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Rprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5RSprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5SLprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5SMprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Sprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5STprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Tprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5TSprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Vprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5WBprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5Zprivate.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src/H5win32defs.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libraries")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/ITK-build/lib/Debug/itkhdf5-4.7d.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/ITK-build/lib/Release/itkhdf5-4.7.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/ITK-build/lib/MinSizeRel/itkhdf5-4.7.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/ITK-build/lib/RelWithDebInfo/itkhdf5-4.7.lib")
  endif()
endif()

