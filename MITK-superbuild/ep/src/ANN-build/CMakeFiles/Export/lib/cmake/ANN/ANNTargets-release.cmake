#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ann" for configuration "Release"
set_property(TARGET ann APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(ann PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/ann.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/ann.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS ann )
list(APPEND _IMPORT_CHECK_FILES_FOR_ann "${_IMPORT_PREFIX}/lib/ann.lib" "${_IMPORT_PREFIX}/bin/ann.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
