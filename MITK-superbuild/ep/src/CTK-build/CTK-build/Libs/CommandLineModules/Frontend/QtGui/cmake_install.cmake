# Install script for directory: E:/D/MITK-superbuild/ep/src/CTK/Libs/CommandLineModules/Frontend/QtGui

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
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/Debug/CTKCommandLineModulesFrontendQtGui.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/Release/CTKCommandLineModulesFrontendQtGui.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/MinSizeRel/CTKCommandLineModulesFrontendQtGui.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/RelWithDebInfo/CTKCommandLineModulesFrontendQtGui.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/Debug/CTKCommandLineModulesFrontendQtGui.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/Release/CTKCommandLineModulesFrontendQtGui.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/MinSizeRel/CTKCommandLineModulesFrontendQtGui.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/RelWithDebInfo/CTKCommandLineModulesFrontendQtGui.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ctk-0.1" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/CommandLineModules/Frontend/QtGui/ctkCmdLineModuleFrontendFactoryQtGui.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/CommandLineModules/Frontend/QtGui/ctkCmdLineModuleFrontendQtGui.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/CommandLineModules/Frontend/QtGui/ctkCmdLineModuleObjectTreeWalker_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/CommandLineModules/Frontend/QtGui/ctkCmdLineModuleQtComboBox_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/CommandLineModules/Frontend/QtGui/ctkCmdLineModuleQtUiLoader.h"
    "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/CommandLineModules/Frontend/QtGui/ctkCommandLineModulesFrontendQtGuiExport.h"
    )
endif()

