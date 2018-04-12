#----------------------------------------------------------------
# Generated CMake target import file for configuration "MinSizeRel".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Poco::Util" for configuration "MinSizeRel"
set_property(TARGET Poco::Util APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(Poco::Util PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/PocoUtil.lib"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/PocoUtil.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS Poco::Util )
list(APPEND _IMPORT_CHECK_FILES_FOR_Poco::Util "${_IMPORT_PREFIX}/lib/PocoUtil.lib" "${_IMPORT_PREFIX}/bin/PocoUtil.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
