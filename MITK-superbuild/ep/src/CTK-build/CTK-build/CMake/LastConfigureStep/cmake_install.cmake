# Install script for directory: E:/D/MITK-superbuild/ep/src/CTK/CMake/LastConfigureStep

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ctk-0.1" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/ctkConfig.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTKPluginUseFile.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake/CTKExports.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake/CTKExports.cmake"
         "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/CMake/LastConfigureStep/CMakeFiles/Export/lib/ctk-0.1/CMake/CTKExports.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake/CTKExports-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake/CTKExports.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/CMake/LastConfigureStep/CMakeFiles/Export/lib/ctk-0.1/CMake/CTKExports.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/CMake/LastConfigureStep/CMakeFiles/Export/lib/ctk-0.1/CMake/CTKExports-debug.cmake")
  endif()
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/CMake/LastConfigureStep/CMakeFiles/Export/lib/ctk-0.1/CMake/CTKExports-minsizerel.cmake")
  endif()
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/CMake/LastConfigureStep/CMakeFiles/Export/lib/ctk-0.1/CMake/CTKExports-relwithdebinfo.cmake")
  endif()
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/CMake/LastConfigureStep/CMakeFiles/Export/lib/ctk-0.1/CMake/CTKExports-release.cmake")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/CMakeFiles/CTKConfig.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1/CMake" TYPE FILE FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTKConfigVersion.cmake")
endif()

