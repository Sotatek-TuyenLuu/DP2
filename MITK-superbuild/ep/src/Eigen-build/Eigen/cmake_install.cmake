# Install script for directory: E:/D/MITK-superbuild/ep/src/Eigen/Eigen

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/Eigen" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/Array"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/Cholesky"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/CholmodSupport"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/Core"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/Dense"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/Eigen"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/Eigen2Support"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/Eigenvalues"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/Geometry"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/Householder"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/IterativeLinearSolvers"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/Jacobi"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/LeastSquares"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/LU"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/MetisSupport"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/OrderingMethods"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/PardisoSupport"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/PaStiXSupport"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/QR"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/QtAlignedMalloc"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/Sparse"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/SparseCholesky"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/SparseCore"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/SparseLU"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/SparseQR"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/SPQRSupport"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/StdDeque"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/StdList"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/StdVector"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/SuperLUSupport"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/SVD"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/UmfPackSupport"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("E:/D/MITK-superbuild/ep/src/Eigen-build/Eigen/src/cmake_install.cmake")

endif()

