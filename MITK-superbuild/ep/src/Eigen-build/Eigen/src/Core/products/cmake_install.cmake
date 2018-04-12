# Install script for directory: E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/products

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/Eigen/src/Core/products" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/products/CoeffBasedProduct.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/products/GeneralBlockPanelKernel.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/products/GeneralMatrixMatrix.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/products/GeneralMatrixMatrixTriangular.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/products/GeneralMatrixMatrixTriangular_MKL.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/products/GeneralMatrixMatrix_MKL.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/products/GeneralMatrixVector.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/products/GeneralMatrixVector_MKL.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/products/Parallelizer.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/products/SelfadjointMatrixMatrix.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/products/SelfadjointMatrixMatrix_MKL.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/products/SelfadjointMatrixVector.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/products/SelfadjointMatrixVector_MKL.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/products/SelfadjointProduct.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/products/SelfadjointRank2Update.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/products/TriangularMatrixMatrix.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/products/TriangularMatrixMatrix_MKL.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/products/TriangularMatrixVector.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/products/TriangularMatrixVector_MKL.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/products/TriangularSolverMatrix.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/products/TriangularSolverMatrix_MKL.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/products/TriangularSolverVector.h"
    )
endif()

