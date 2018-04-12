#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tinyxml" for configuration "Debug"
set_property(TARGET tinyxml APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(tinyxml PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/tinyxmld.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS tinyxml )
list(APPEND _IMPORT_CHECK_FILES_FOR_tinyxml "${_IMPORT_PREFIX}/lib/tinyxmld.lib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
