# Install script for directory: E:/D/MITK-superbuild/ep/src/VTK/ThirdParty/hdf5/vtkhdf5

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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-6.2/vtkhdf5" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/hdf5/vtkhdf5/H5pubconf.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "libraries")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake/hdf5" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/hdf5/vtkhdf5/libhdf5.settings")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/hdf5/vtkhdf5/src/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/VTK-build/ThirdParty/hdf5/vtkhdf5/hl/cmake_install.cmake")

endif()

