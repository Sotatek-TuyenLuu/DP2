#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "cppunit" for configuration "RelWithDebInfo"
set_property(TARGET cppunit APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(cppunit PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/cppunit.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/cppunit.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS cppunit )
list(APPEND _IMPORT_CHECK_FILES_FOR_cppunit "${_IMPORT_PREFIX}/lib/cppunit.lib" "${_IMPORT_PREFIX}/bin/cppunit.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
