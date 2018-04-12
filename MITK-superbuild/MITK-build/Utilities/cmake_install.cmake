# Install script for directory: E:/D/MITK/Utilities

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "E:/D/CMakeExternals/Install")
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
  include("E:/D/MITK-superbuild/MITK-build/Utilities/IpPic/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Utilities/IpFunc/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Utilities/IpSegmentation/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Utilities/KWStyle/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Utilities/mbilog/cmake_install.cmake")
  include("E:/D/MITK-superbuild/MITK-build/Utilities/qtsingleapplication/cmake_install.cmake")

endif()

