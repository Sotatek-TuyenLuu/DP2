#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "gdcmCommon" for configuration "Debug"
set_property(TARGET gdcmCommon APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(gdcmCommon PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/gdcmCommond.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG ""
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/gdcmCommond.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmCommon )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmCommon "${_IMPORT_PREFIX}/lib/gdcmCommond.lib" "${_IMPORT_PREFIX}/bin/gdcmCommond.dll" )

# Import target "gdcmDICT" for configuration "Debug"
set_property(TARGET gdcmDICT APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(gdcmDICT PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/gdcmDICTd.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "gdcmDSED;gdcmIOD"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG ""
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/gdcmDICTd.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmDICT )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmDICT "${_IMPORT_PREFIX}/lib/gdcmDICTd.lib" "${_IMPORT_PREFIX}/bin/gdcmDICTd.dll" )

# Import target "gdcmDSED" for configuration "Debug"
set_property(TARGET gdcmDSED APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(gdcmDSED PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/gdcmDSEDd.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "gdcmzlib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "gdcmCommon"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/gdcmDSEDd.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmDSED )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmDSED "${_IMPORT_PREFIX}/lib/gdcmDSEDd.lib" "${_IMPORT_PREFIX}/bin/gdcmDSEDd.dll" )

# Import target "gdcmIOD" for configuration "Debug"
set_property(TARGET gdcmIOD APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(gdcmIOD PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/gdcmIODd.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "gdcmexpat"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "gdcmDSED;gdcmCommon"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/gdcmIODd.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmIOD )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmIOD "${_IMPORT_PREFIX}/lib/gdcmIODd.lib" "${_IMPORT_PREFIX}/bin/gdcmIODd.dll" )

# Import target "gdcmMSFF" for configuration "Debug"
set_property(TARGET gdcmMSFF APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(gdcmMSFF PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/gdcmMSFFd.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "gdcmjpeg8;gdcmjpeg12;gdcmjpeg16;gdcmopenjpeg;gdcmcharls"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "gdcmDSED;gdcmDICT;gdcmIOD"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/gdcmMSFFd.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmMSFF )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmMSFF "${_IMPORT_PREFIX}/lib/gdcmMSFFd.lib" "${_IMPORT_PREFIX}/bin/gdcmMSFFd.dll" )

# Import target "gdcmMEXD" for configuration "Debug"
set_property(TARGET gdcmMEXD APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(gdcmMEXD PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/gdcmMEXDd.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "gdcmMSFF;gdcmDICT;gdcmDSED;gdcmIOD;socketxx"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG ""
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/gdcmMEXDd.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmMEXD )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmMEXD "${_IMPORT_PREFIX}/lib/gdcmMEXDd.lib" "${_IMPORT_PREFIX}/bin/gdcmMEXDd.dll" )

# Import target "gdcmjpeg8" for configuration "Debug"
set_property(TARGET gdcmjpeg8 APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(gdcmjpeg8 PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/gdcmjpeg8d.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/gdcmjpeg8d.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmjpeg8 )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmjpeg8 "${_IMPORT_PREFIX}/lib/gdcmjpeg8d.lib" "${_IMPORT_PREFIX}/bin/gdcmjpeg8d.dll" )

# Import target "gdcmjpeg12" for configuration "Debug"
set_property(TARGET gdcmjpeg12 APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(gdcmjpeg12 PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/gdcmjpeg12d.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/gdcmjpeg12d.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmjpeg12 )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmjpeg12 "${_IMPORT_PREFIX}/lib/gdcmjpeg12d.lib" "${_IMPORT_PREFIX}/bin/gdcmjpeg12d.dll" )

# Import target "gdcmjpeg16" for configuration "Debug"
set_property(TARGET gdcmjpeg16 APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(gdcmjpeg16 PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/gdcmjpeg16d.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/gdcmjpeg16d.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmjpeg16 )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmjpeg16 "${_IMPORT_PREFIX}/lib/gdcmjpeg16d.lib" "${_IMPORT_PREFIX}/bin/gdcmjpeg16d.dll" )

# Import target "gdcmexpat" for configuration "Debug"
set_property(TARGET gdcmexpat APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(gdcmexpat PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/gdcmexpatd.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/gdcmexpatd.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmexpat )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmexpat "${_IMPORT_PREFIX}/lib/gdcmexpatd.lib" "${_IMPORT_PREFIX}/bin/gdcmexpatd.dll" )

# Import target "gdcmopenjpeg" for configuration "Debug"
set_property(TARGET gdcmopenjpeg APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(gdcmopenjpeg PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/gdcmopenjpegd.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG ""
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/gdcmopenjpegd.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmopenjpeg )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmopenjpeg "${_IMPORT_PREFIX}/lib/gdcmopenjpegd.lib" "${_IMPORT_PREFIX}/bin/gdcmopenjpegd.dll" )

# Import target "gdcmcharls" for configuration "Debug"
set_property(TARGET gdcmcharls APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(gdcmcharls PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/gdcmcharlsd.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG ""
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/gdcmcharlsd.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmcharls )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmcharls "${_IMPORT_PREFIX}/lib/gdcmcharlsd.lib" "${_IMPORT_PREFIX}/bin/gdcmcharlsd.dll" )

# Import target "gdcmzlib" for configuration "Debug"
set_property(TARGET gdcmzlib APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(gdcmzlib PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/gdcmzlibd.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/gdcmzlibd.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmzlib )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmzlib "${_IMPORT_PREFIX}/lib/gdcmzlibd.lib" "${_IMPORT_PREFIX}/bin/gdcmzlibd.dll" )

# Import target "gdcmgetopt" for configuration "Debug"
set_property(TARGET gdcmgetopt APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(gdcmgetopt PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/gdcmgetoptd.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/gdcmgetoptd.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdcmgetopt )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdcmgetopt "${_IMPORT_PREFIX}/lib/gdcmgetoptd.lib" "${_IMPORT_PREFIX}/bin/gdcmgetoptd.dll" )

# Import target "socketxx" for configuration "Debug"
set_property(TARGET socketxx APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(socketxx PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/socketxxd.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG ""
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/socketxxd.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS socketxx )
list(APPEND _IMPORT_CHECK_FILES_FOR_socketxx "${_IMPORT_PREFIX}/lib/socketxxd.lib" "${_IMPORT_PREFIX}/bin/socketxxd.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
