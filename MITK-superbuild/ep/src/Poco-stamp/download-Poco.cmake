if(EXISTS "E:/D/MITK-superbuild/ep/src/poco-1.6.1-all.tar.gz")
  file("MD5" "E:/D/MITK-superbuild/ep/src/poco-1.6.1-all.tar.gz" hash_value)
  if("x${hash_value}" STREQUAL "x05961d10195d0f760b707752e88938e9")
    return()
  endif()
endif()
message(STATUS "downloading...
     src='http://mitk.org/download/thirdparty/poco-1.6.1-all.tar.gz'
     dst='E:/D/MITK-superbuild/ep/src/poco-1.6.1-all.tar.gz'
     timeout='none'")




file(DOWNLOAD
  "http://mitk.org/download/thirdparty/poco-1.6.1-all.tar.gz"
  "E:/D/MITK-superbuild/ep/src/poco-1.6.1-all.tar.gz"
  SHOW_PROGRESS
  # no TIMEOUT
  STATUS status
  LOG log)

list(GET status 0 status_code)
list(GET status 1 status_string)

if(NOT status_code EQUAL 0)
  message(FATAL_ERROR "error: downloading 'http://mitk.org/download/thirdparty/poco-1.6.1-all.tar.gz' failed
  status_code: ${status_code}
  status_string: ${status_string}
  log: ${log}
")
endif()

message(STATUS "downloading... done")
