# Install script for directory: E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/Eigen/src/Core" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/Array.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/ArrayBase.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/ArrayWrapper.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/Assign.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/Assign_MKL.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/BandMatrix.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/Block.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/BooleanRedux.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/CommaInitializer.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/CoreIterators.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/CwiseBinaryOp.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/CwiseNullaryOp.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/CwiseUnaryOp.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/CwiseUnaryView.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/DenseBase.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/DenseCoeffsBase.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/DenseStorage.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/Diagonal.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/DiagonalMatrix.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/DiagonalProduct.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/Dot.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/EigenBase.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/Flagged.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/ForceAlignedAccess.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/Functors.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/Fuzzy.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/GeneralProduct.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/GenericPacketMath.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/GlobalFunctions.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/IO.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/Map.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/MapBase.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/MathFunctions.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/Matrix.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/MatrixBase.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/NestByValue.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/NoAlias.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/NumTraits.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/PermutationMatrix.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/PlainObjectBase.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/ProductBase.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/Random.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/Redux.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/Ref.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/Replicate.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/ReturnByValue.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/Reverse.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/Select.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/SelfAdjointView.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/SelfCwiseBinaryOp.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/SolveTriangular.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/StableNorm.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/Stride.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/Swap.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/Transpose.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/Transpositions.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/TriangularMatrix.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/VectorBlock.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/VectorwiseOp.h"
    "E:/D/MITK-superbuild/ep/src/Eigen/Eigen/src/Core/Visitor.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("E:/D/MITK-superbuild/ep/src/Eigen-build/Eigen/src/Core/products/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/Eigen-build/Eigen/src/Core/util/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/Eigen-build/Eigen/src/Core/arch/cmake_install.cmake")

endif()

