if(EXISTS "E:/D/MITK-superbuild/ep/src/qwt-6.1.0.tar.bz2")
  file("MD5" "E:/D/MITK-superbuild/ep/src/qwt-6.1.0.tar.bz2" hash_value)
  if("x${hash_value}" STREQUAL "xaef0437b37f191067a6a9dc01c30ba64")
    return()
  endif()
endif()
message(STATUS "downloading...
     src='http://mitk.org/download/thirdparty/qwt-6.1.0.tar.bz2'
     dst='E:/D/MITK-superbuild/ep/src/qwt-6.1.0.tar.bz2'
     timeout='none'")




file(DOWNLOAD
  "http://mitk.org/download/thirdparty/qwt-6.1.0.tar.bz2"
  "E:/D/MITK-superbuild/ep/src/qwt-6.1.0.tar.bz2"
  SHOW_PROGRESS
  # no TIMEOUT
  STATUS status
  LOG log)

list(GET status 0 status_code)
list(GET status 1 status_string)

if(NOT status_code EQUAL 0)
  message(FATAL_ERROR "error: downloading 'http://mitk.org/download/thirdparty/qwt-6.1.0.tar.bz2' failed
  status_code: ${status_code}
  status_string: ${status_string}
  log: ${log}
")
endif()

message(STATUS "downloading... done")
