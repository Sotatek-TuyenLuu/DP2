#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "qwt" for configuration "Release"
set_property(TARGET qwt APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(qwt PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/qwt.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/qwt.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS qwt )
list(APPEND _IMPORT_CHECK_FILES_FOR_qwt "${_IMPORT_PREFIX}/lib/qwt.lib" "${_IMPORT_PREFIX}/bin/qwt.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
