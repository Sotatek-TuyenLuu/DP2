if(EXISTS "E:/D/MITK-superbuild/ep/src/eigen-eigen-36fd1ba04c12.tar.gz")
  file("MD5" "E:/D/MITK-superbuild/ep/src/eigen-eigen-36fd1ba04c12.tar.gz" hash_value)
  if("x${hash_value}" STREQUAL "x237c5ed98d51b3f043bc9d370a09af84")
    return()
  endif()
endif()
message(STATUS "downloading...
     src='http://mitk.org/download/thirdparty/eigen-eigen-36fd1ba04c12.tar.gz'
     dst='E:/D/MITK-superbuild/ep/src/eigen-eigen-36fd1ba04c12.tar.gz'
     timeout='none'")




file(DOWNLOAD
  "http://mitk.org/download/thirdparty/eigen-eigen-36fd1ba04c12.tar.gz"
  "E:/D/MITK-superbuild/ep/src/eigen-eigen-36fd1ba04c12.tar.gz"
  SHOW_PROGRESS
  # no TIMEOUT
  STATUS status
  LOG log)

list(GET status 0 status_code)
list(GET status 1 status_string)

if(NOT status_code EQUAL 0)
  message(FATAL_ERROR "error: downloading 'http://mitk.org/download/thirdparty/eigen-eigen-36fd1ba04c12.tar.gz' failed
  status_code: ${status_code}
  status_string: ${status_string}
  log: ${log}
")
endif()

message(STATUS "downloading... done")
