# Install script for directory: E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/util

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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/Eigen/src/Core/util" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/util/BlasUtil.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/util/Constants.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/util/DisableStupidWarnings.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/util/ForwardDeclarations.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/util/Macros.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/util/Memory.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/util/Meta.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/util/MKL_support.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/util/NonMPL2.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/util/ReenableStupidWarnings.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/util/StaticAssert.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/util/XprHelper.h"
    )
endif()

