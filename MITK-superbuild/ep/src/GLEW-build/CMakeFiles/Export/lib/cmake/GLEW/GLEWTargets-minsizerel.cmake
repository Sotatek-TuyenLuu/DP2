#----------------------------------------------------------------
# Generated CMake target import file for configuration "MinSizeRel".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "glew" for configuration "MinSizeRel"
set_property(TARGET glew APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(glew PROPERTIES
  IMPORTED_IMPLIB_MINSIZEREL "${_IMPORT_PREFIX}/lib/glew.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_MINSIZEREL "opengl32"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/bin/glew.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS glew )
list(APPEND _IMPORT_CHECK_FILES_FOR_glew "${_IMPORT_PREFIX}/lib/glew.lib" "${_IMPORT_PREFIX}/bin/glew.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
