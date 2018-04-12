#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "CTKCore" for configuration "Release"
set_property(TARGET CTKCore APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(CTKCore PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKCore.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "Qt5::Core;dbghelp"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKCore.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS CTKCore )
list(APPEND _IMPORT_CHECK_FILES_FOR_CTKCore "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKCore.lib" "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKCore.dll" )

# Import target "CTKPluginFramework" for configuration "Release"
set_property(TARGET CTKPluginFramework APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(CTKPluginFramework PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKPluginFramework.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "CTKCore;Qt5::Sql;Qt5::Concurrent"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKPluginFramework.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS CTKPluginFramework )
list(APPEND _IMPORT_CHECK_FILES_FOR_CTKPluginFramework "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKPluginFramework.lib" "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKPluginFramework.dll" )

# Import target "CTKWidgets" for configuration "Release"
set_property(TARGET CTKWidgets APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(CTKWidgets PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKWidgets.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "CTKCore;Qt5::Widgets;Qt5::Xml;Qt5::OpenGL"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKWidgets.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS CTKWidgets )
list(APPEND _IMPORT_CHECK_FILES_FOR_CTKWidgets "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKWidgets.lib" "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKWidgets.dll" )

# Import target "CTKDICOMCore" for configuration "Release"
set_property(TARGET CTKDICOMCore APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(CTKDICOMCore PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKDICOMCore.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "CTKCore;netapi32;wsock32;Qt5::Sql;Qt5::Gui"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKDICOMCore.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS CTKDICOMCore )
list(APPEND _IMPORT_CHECK_FILES_FOR_CTKDICOMCore "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKDICOMCore.lib" "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKDICOMCore.dll" )

# Import target "CTKDICOMWidgets" for configuration "Release"
set_property(TARGET CTKDICOMWidgets APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(CTKDICOMWidgets PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKDICOMWidgets.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "CTKDICOMCore;CTKWidgets"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKDICOMWidgets.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS CTKDICOMWidgets )
list(APPEND _IMPORT_CHECK_FILES_FOR_CTKDICOMWidgets "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKDICOMWidgets.lib" "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKDICOMWidgets.dll" )

# Import target "CTKCommandLineModulesCore" for configuration "Release"
set_property(TARGET CTKCommandLineModulesCore APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(CTKCommandLineModulesCore PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKCommandLineModulesCore.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "CTKCore;Qt5::XmlPatterns;Qt5::Widgets;Qt5::Concurrent"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKCommandLineModulesCore.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS CTKCommandLineModulesCore )
list(APPEND _IMPORT_CHECK_FILES_FOR_CTKCommandLineModulesCore "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKCommandLineModulesCore.lib" "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKCommandLineModulesCore.dll" )

# Import target "CTKCommandLineModulesFrontendQtGui" for configuration "Release"
set_property(TARGET CTKCommandLineModulesFrontendQtGui APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(CTKCommandLineModulesFrontendQtGui PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKCommandLineModulesFrontendQtGui.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "CTKCommandLineModulesCore;Qt5::UiTools;Qt5::Widgets"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKCommandLineModulesFrontendQtGui.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS CTKCommandLineModulesFrontendQtGui )
list(APPEND _IMPORT_CHECK_FILES_FOR_CTKCommandLineModulesFrontendQtGui "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKCommandLineModulesFrontendQtGui.lib" "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKCommandLineModulesFrontendQtGui.dll" )

# Import target "CTKCommandLineModulesBackendLocalProcess" for configuration "Release"
set_property(TARGET CTKCommandLineModulesBackendLocalProcess APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(CTKCommandLineModulesBackendLocalProcess PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKCommandLineModulesBackendLocalProcess.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "CTKCommandLineModulesCore"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKCommandLineModulesBackendLocalProcess.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS CTKCommandLineModulesBackendLocalProcess )
list(APPEND _IMPORT_CHECK_FILES_FOR_CTKCommandLineModulesBackendLocalProcess "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKCommandLineModulesBackendLocalProcess.lib" "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKCommandLineModulesBackendLocalProcess.dll" )

# Import target "CTKXNATCore" for configuration "Release"
set_property(TARGET CTKXNATCore APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(CTKXNATCore PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKXNATCore.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "CTKCore;qRestAPI"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKXNATCore.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS CTKXNATCore )
list(APPEND _IMPORT_CHECK_FILES_FOR_CTKXNATCore "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKXNATCore.lib" "${_IMPORT_PREFIX}/lib/ctk-0.1/CTKXNATCore.dll" )

# Import target "org_commontk_configadmin" for configuration "Release"
set_property(TARGET org_commontk_configadmin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(org_commontk_configadmin PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/ctk-0.1/plugins/org_commontk_configadmin.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "CTKPluginFramework"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/ctk-0.1/plugins/liborg_commontk_configadmin.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS org_commontk_configadmin )
list(APPEND _IMPORT_CHECK_FILES_FOR_org_commontk_configadmin "${_IMPORT_PREFIX}/lib/ctk-0.1/plugins/org_commontk_configadmin.lib" "${_IMPORT_PREFIX}/lib/ctk-0.1/plugins/liborg_commontk_configadmin.dll" )

# Import target "org_commontk_eventadmin" for configuration "Release"
set_property(TARGET org_commontk_eventadmin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(org_commontk_eventadmin PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/ctk-0.1/plugins/org_commontk_eventadmin.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "CTKPluginFramework"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/ctk-0.1/plugins/liborg_commontk_eventadmin.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS org_commontk_eventadmin )
list(APPEND _IMPORT_CHECK_FILES_FOR_org_commontk_eventadmin "${_IMPORT_PREFIX}/lib/ctk-0.1/plugins/org_commontk_eventadmin.lib" "${_IMPORT_PREFIX}/lib/ctk-0.1/plugins/liborg_commontk_eventadmin.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
