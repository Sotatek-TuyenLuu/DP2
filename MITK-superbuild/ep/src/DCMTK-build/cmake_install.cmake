# Install script for directory: E:/D/MITK-superbuild/ep/src/DCMTK

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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "include")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/dcmtk/config" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/DCMTK-build/config/include/dcmtk/config/osconfig.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "doc")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/dcmtk" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/DCMTK/ANNOUNCE.361"
    "E:/D/MITK-superbuild/ep/src/DCMTK/CHANGES.361"
    "E:/D/MITK-superbuild/ep/src/DCMTK/COPYRIGHT"
    "E:/D/MITK-superbuild/ep/src/DCMTK/FAQ"
    "E:/D/MITK-superbuild/ep/src/DCMTK/HISTORY"
    "E:/D/MITK-superbuild/ep/src/DCMTK/VERSION"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "data")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dcmtk" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/DCMTK-build/DCMTKConfig.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("E:/D/MITK-superbuild/ep/src/DCMTK-build/config/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/DCMTK-build/ofstd/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/DCMTK-build/oflog/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/DCMTK-build/dcmdata/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/DCMTK-build/dcmimgle/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/DCMTK-build/dcmimage/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/DCMTK-build/dcmjpeg/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/DCMTK-build/dcmjpls/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/DCMTK-build/dcmtls/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/DCMTK-build/dcmnet/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/DCMTK-build/dcmsr/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/DCMTK-build/dcmsign/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/DCMTK-build/dcmwlm/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/DCMTK-build/dcmqrdb/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/DCMTK-build/dcmpstat/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/DCMTK-build/dcmrt/cmake_install.cmake")
  include("E:/D/MITK-superbuild/ep/src/DCMTK-build/doxygen/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "E:/D/MITK-superbuild/ep/src/DCMTK-build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
