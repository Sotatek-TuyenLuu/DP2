# Install script for directory: E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src

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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "cppheaders")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ITK-4.7/itkhdf5/cpp" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5AbstractDs.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5Alltypes.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5ArrayType.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5AtomType.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5Attribute.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5Classes.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5CommonFG.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5CompType.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5Cpp.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5CppDoc.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5DataSet.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5DataSpace.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5DataType.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5DcreatProp.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5DxferProp.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5EnumType.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5Exception.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5FaccProp.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5FcreatProp.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5File.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5FloatType.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5Group.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5IdComponent.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5Include.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5IntType.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5Library.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5Object.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5PredType.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5PropList.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5StrType.h"
    "E:/D/MITK-superbuild/ep/src/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src/H5VarLenType.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libraries")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/ITK-build/lib/Debug/itkhdf5_cpp-4.7d.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/ITK-build/lib/Release/itkhdf5_cpp-4.7.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/ITK-build/lib/MinSizeRel/itkhdf5_cpp-4.7.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/ITK-build/lib/RelWithDebInfo/itkhdf5_cpp-4.7.lib")
  endif()
endif()

