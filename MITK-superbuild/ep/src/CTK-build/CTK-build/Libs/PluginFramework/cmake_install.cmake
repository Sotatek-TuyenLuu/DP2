# Install script for directory: E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework

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
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/Debug/CTKPluginFramework.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/Release/CTKPluginFramework.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/MinSizeRel/CTKPluginFramework.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/RelWithDebInfo/CTKPluginFramework.lib")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/Debug/CTKPluginFramework.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/Release/CTKPluginFramework.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/MinSizeRel/CTKPluginFramework.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE SHARED_LIBRARY FILES "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/bin/RelWithDebInfo/CTKPluginFramework.dll")
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ctk-0.1" TYPE FILE FILES
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkApplicationRunnable.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkBasicLocation_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkDefaultApplicationLauncher_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkDictionary.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkLDAPExpr_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkLDAPSearchFilter.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkLocationManager_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPlugin.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginAbstractTracked_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginActivator.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginArchiveSQL_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginArchive_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginConstants.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginContext.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginContext_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginDatabaseException.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginEvent.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginException.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginFramework.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginFrameworkContext_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginFrameworkDebugOptions_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginFrameworkDebug_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginFrameworkEvent.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginFrameworkFactory.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginFrameworkLauncher.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginFrameworkListeners_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginFrameworkProperties_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginFrameworkUtil_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginFramework_global.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginFramework_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginLocalization.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginManifest_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginStorageSQL_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginStorage_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPlugins_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginTracker.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginTrackerCustomizer.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginTracker_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPlugin_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkRequirePlugin_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkServiceEvent.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkServiceException.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkServiceFactory.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkServiceProperties_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkServiceReference.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkServiceReference_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkServiceRegistration.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkServiceRegistration_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkServiceSlotEntry_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkServices_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkServiceTracker.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkServiceTrackerCustomizer.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkServiceTracker_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkTrackedPluginListener_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkTrackedPlugin_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkTrackedServiceListener_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkTrackedService_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkVersion.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkVersionRange_p.h"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginAbstractTracked.tpp"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginTracker.tpp"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkPluginTracker_p.tpp"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkServiceTracker.tpp"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkServiceTracker_p.tpp"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkTrackedPlugin.tpp"
    "E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework/ctkTrackedService.tpp"
    "E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/PluginFramework/ctkPluginFrameworkExport.h"
    )
endif()

