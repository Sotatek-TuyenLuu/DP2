# Install script for directory: E:/D/MITK-superbuild/ep/src/Eigen/unsupported/Eigen/src

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("E:/D/MITK-superbuild/ep/src/Eigen-build/unsupported/Eigen/src/AutoDiff/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/Eigen-build/unsupported/Eigen/src/BVH/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/Eigen-build/unsupported/Eigen/src/FFT/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/Eigen-build/unsupported/Eigen/src/IterativeSolvers/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/Eigen-build/unsupported/Eigen/src/MatrixFunctions/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/Eigen-build/unsupported/Eigen/src/MoreVectorization/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/Eigen-build/unsupported/Eigen/src/NonLinearOptimization/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/Eigen-build/unsupported/Eigen/src/NumericalDiff/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/Eigen-build/unsupported/Eigen/src/Polynomials/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/Eigen-build/unsupported/Eigen/src/Skyline/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/Eigen-build/unsupported/Eigen/src/SparseExtra/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/Eigen-build/unsupported/Eigen/src/KroneckerProduct/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/Eigen-build/unsupported/Eigen/src/Splines/cmake_install.cmake")

endif()

