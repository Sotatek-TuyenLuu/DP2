if(EXISTS "E:/D/MITK-superbuild/ep/src/gdcm-2.4.1.tar.bz2")
  file("MD5" "E:/D/MITK-superbuild/ep/src/gdcm-2.4.1.tar.bz2" hash_value)
  if("x${hash_value}" STREQUAL "x1120f9a5ebcef7df6933ca83545f514d")
    return()
  endif()
endif()
message(STATUS "downloading...
     src='http://mitk.org/download/thirdparty/gdcm-2.4.1.tar.bz2'
     dst='E:/D/MITK-superbuild/ep/src/gdcm-2.4.1.tar.bz2'
     timeout='none'")




file(DOWNLOAD
  "http://mitk.org/download/thirdparty/gdcm-2.4.1.tar.bz2"
  "E:/D/MITK-superbuild/ep/src/gdcm-2.4.1.tar.bz2"
  SHOW_PROGRESS
  # no TIMEOUT
  STATUS status
  LOG log)

list(GET status 0 status_code)
list(GET status 1 status_string)

if(NOT status_code EQUAL 0)
  message(FATAL_ERROR "error: downloading 'http://mitk.org/download/thirdparty/gdcm-2.4.1.tar.bz2' failed
  status_code: ${status_code}
  status_string: ${status_string}
  log: ${log}
")
endif()

message(STATUS "downloading... done")
