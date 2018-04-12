# Install script for directory: E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/Eigen/src/Eigen2Support" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support/Block.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support/Cwise.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support/CwiseOperators.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support/Lazy.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support/LeastSquares.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support/LU.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support/Macros.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support/MathFunctions.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support/Memory.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support/Meta.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support/Minor.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support/QR.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support/SVD.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support/TriangularSolver.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Eigen2Support/VectorBlock.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("E:/D/MITK-superbuild/ep/src/Eigen-build/Eigen/src/Eigen2Support/Geometry/cmake_install.cmake")

endif()

