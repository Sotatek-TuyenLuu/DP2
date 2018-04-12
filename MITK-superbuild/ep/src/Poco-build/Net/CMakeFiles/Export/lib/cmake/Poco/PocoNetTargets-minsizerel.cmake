#----------------------------------------------------------------
# Generated CMake target import file for configuration "MinSizeRel".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Poco::Net" for configuration "MinSizeRel"
set_property(TARGET Poco::Net APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(Poco::Net PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/PocoNet.lib"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/PocoNet.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS Poco::Net )
list(APPEND _IMPORT_CHECK_FILES_FOR_Poco::Net "${_IMPORT_PREFIX}/lib/PocoNet.lib" "${_IMPORT_PREFIX}/bin/PocoNet.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
