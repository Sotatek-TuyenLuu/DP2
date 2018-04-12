# Install script for directory: E:/D/MITK-superbuild/ep/src/VTK/Imaging/General

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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Debug/vtkImagingGeneral-6.2d.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/Release/vtkImagingGeneral-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/MinSizeRel/vtkImagingGeneral-6.2.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/VTK-build/lib/RelWithDebInfo/vtkImagingGeneral-6.2.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Debug/vtkImagingGeneral-6.2d.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/Release/vtkImagingGeneral-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/MinSizeRel/vtkImagingGeneral-6.2.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/VTK-build/bin/RelWithDebInfo/vtkImagingGeneral-6.2.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/vtk-6.2/Modules" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/VTK-build/Imaging/General/CMakeFiles/vtkImagingGeneral.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-6.2" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/VTK/Imaging/General/vtkImageAnisotropicDiffusion2D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Imaging/General/vtkImageAnisotropicDiffusion3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Imaging/General/vtkImageCheckerboard.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Imaging/General/vtkImageCityBlockDistance.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Imaging/General/vtkImageConvolve.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Imaging/General/vtkImageCorrelation.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Imaging/General/vtkImageEuclideanDistance.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Imaging/General/vtkImageEuclideanToPolar.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Imaging/General/vtkImageGaussianSmooth.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Imaging/General/vtkImageGradient.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Imaging/General/vtkImageGradientMagnitude.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Imaging/General/vtkImageHybridMedian2D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Imaging/General/vtkImageLaplacian.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Imaging/General/vtkImageMedian3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Imaging/General/vtkImageNormalize.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Imaging/General/vtkImageRange3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Imaging/General/vtkImageSeparableConvolution.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Imaging/General/vtkImageSobel2D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Imaging/General/vtkImageSobel3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Imaging/General/vtkImageSpatialAlgorithm.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Imaging/General/vtkImageVariance3D.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Imaging/General/vtkSimpleImageFilterExample.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Imaging/General/vtkImageSlab.h"
    "E:/D/MITK-superbuild/ep/src/VTK/Imaging/General/vtkImageSlabReslice.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Imaging/General/vtkImagingGeneralModule.h"
    "E:/D/MITK-superbuild/ep/src/VTK-build/Imaging/General/vtkImagingGeneralInstantiator.h"
    )
endif()

