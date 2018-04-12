# Install script for directory: E:/D/MITK-superbuild/ep/src/Eigen/unsupported/Eigen

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/unsupported/Eigen" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/Eigen/unsupported/Eigen/AdolcForward"
    "E:/D/MITK-superbuild/ep/src/Eigen/unsupported/Eigen/BVH"
    "E:/D/MITK-superbuild/ep/src/Eigen/unsupported/Eigen/IterativeSolvers"
    "E:/D/MITK-superbuild/ep/src/Eigen/unsupported/Eigen/MatrixFunctions"
    "E:/D/MITK-superbuild/ep/src/Eigen/unsupported/Eigen/MoreVectorization"
    "E:/D/MITK-superbuild/ep/src/Eigen/unsupported/Eigen/AutoDiff"
    "E:/D/MITK-superbuild/ep/src/Eigen/unsupported/Eigen/AlignedVector3"
    "E:/D/MITK-superbuild/ep/src/Eigen/unsupported/Eigen/Polynomials"
    "E:/D/MITK-superbuild/ep/src/Eigen/unsupported/Eigen/FFT"
    "E:/D/MITK-superbuild/ep/src/Eigen/unsupported/Eigen/NonLinearOptimization"
    "E:/D/MITK-superbuild/ep/src/Eigen/unsupported/Eigen/SparseExtra"
    "E:/D/MITK-superbuild/ep/src/Eigen/unsupported/Eigen/IterativeSolvers"
    "E:/D/MITK-superbuild/ep/src/Eigen/unsupported/Eigen/NumericalDiff"
    "E:/D/MITK-superbuild/ep/src/Eigen/unsupported/Eigen/Skyline"
    "E:/D/MITK-superbuild/ep/src/Eigen/unsupported/Eigen/MPRealSupport"
    "E:/D/MITK-superbuild/ep/src/Eigen/unsupported/Eigen/OpenGLSupport"
    "E:/D/MITK-superbuild/ep/src/Eigen/unsupported/Eigen/KroneckerProduct"
    "E:/D/MITK-superbuild/ep/src/Eigen/unsupported/Eigen/Splines"
    "E:/D/MITK-superbuild/ep/src/Eigen/unsupported/Eigen/LevenbergMarquardt"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("E:/D/MITK-superbuild/ep/src/Eigen-build/unsupported/Eigen/src/cmake_install.cmake")

endif()

