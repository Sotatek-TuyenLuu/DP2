# Install script for directory: E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support/Geometry

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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/Eigen/src/Eigen2Support/Geometry" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support/Geometry/AlignedBox.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support/Geometry/All.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support/Geometry/AngleAxis.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support/Geometry/Hyperplane.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support/Geometry/ParametrizedLine.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support/Geometry/Quaternion.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support/Geometry/Rotation2D.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support/Geometry/RotationBase.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support/Geometry/Scaling.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support/Geometry/Transform.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support/Geometry/Translation.h"
    )
endif()

