#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "qwt" for configuration "Debug"
set_property(TARGET qwt APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(qwt PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/qwtd.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/qwtd.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS qwt )
list(APPEND _IMPORT_CHECK_FILES_FOR_qwt "${_IMPORT_PREFIX}/lib/qwtd.lib" "${_IMPORT_PREFIX}/bin/qwtd.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
