if(EXISTS "E:/D/MITK-superbuild/ep/src/ann_1.1.2.tar.gz")
  file("MD5" "E:/D/MITK-superbuild/ep/src/ann_1.1.2.tar.gz" hash_value)
  if("x${hash_value}" STREQUAL "x7ffaacc7ea79ca39d4958a6378071365")
    return()
  endif()
endif()
message(STATUS "downloading...
     src='http://mitk.org/download/thirdparty/ann_1.1.2.tar.gz'
     dst='E:/D/MITK-superbuild/ep/src/ann_1.1.2.tar.gz'
     timeout='none'")




file(DOWNLOAD
  "http://mitk.org/download/thirdparty/ann_1.1.2.tar.gz"
  "E:/D/MITK-superbuild/ep/src/ann_1.1.2.tar.gz"
  SHOW_PROGRESS
  # no TIMEOUT
  STATUS status
  LOG log)

list(GET status 0 status_code)
list(GET status 1 status_string)

if(NOT status_code EQUAL 0)
  message(FATAL_ERROR "error: downloading 'http://mitk.org/download/thirdparty/ann_1.1.2.tar.gz' failed
  status_code: ${status_code}
  status_string: ${status_string}
  log: ${log}
")
endif()

message(STATUS "downloading... done")
