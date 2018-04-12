#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ann" for configuration "Debug"
set_property(TARGET ann APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(ann PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/annd.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/annd.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS ann )
list(APPEND _IMPORT_CHECK_FILES_FOR_ann "${_IMPORT_PREFIX}/lib/annd.lib" "${_IMPORT_PREFIX}/bin/annd.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
