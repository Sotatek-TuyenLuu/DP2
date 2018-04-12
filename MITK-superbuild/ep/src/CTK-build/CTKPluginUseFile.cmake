# List all plugins
set(CTK_PLUGIN_LIBRARIES org_commontk_configadmin;org_commontk_eventadmin)

if(NOT CTK_PLUGIN_LIBRARIES_set)
  set_property(GLOBAL APPEND PROPERTY CTK_PLUGIN_LIBRARIES_VARS CTK_PLUGIN_LIBRARIES)
  set(CTK_PLUGIN_LIBRARIES_set 1)
endif()

# Plugin specific include directories

set(org_commontk_configadmin_INCLUDE_DIRS "E:/D/MITK-superbuild/ep/src/CTK/Plugins/org.commontk.configadmin;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Plugins/org.commontk.configadmin;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build;E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/PluginFramework;E:/D/MITK-superbuild/ep/src/CTK/Libs/Core;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/Core")
set(org_commontk_eventadmin_INCLUDE_DIRS "E:/D/MITK-superbuild/ep/src/CTK/Plugins/org.commontk.eventadmin;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Plugins/org.commontk.eventadmin;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build;E:/D/MITK-superbuild/ep/src/CTK/Libs/PluginFramework;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/PluginFramework;E:/D/MITK-superbuild/ep/src/CTK/Libs/Core;E:/D/MITK-superbuild/ep/src/CTK-build/CTK-build/Libs/Core")

# Plugin specific library directories

set(org_commontk_configadmin_LIBRARY_DIRS "")
set(org_commontk_eventadmin_LIBRARY_DIRS "")
