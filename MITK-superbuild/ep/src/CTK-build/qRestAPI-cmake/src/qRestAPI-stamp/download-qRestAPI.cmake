message(STATUS "downloading...
     src='http://mitk.org/download/thirdparty/qRestAPI_c5e4c2a7.tar.gz'
     dst='E:/D/MITK-superbuild/ep/src/CTK-build/qRestAPI-cmake/src/qRestAPI_c5e4c2a7.tar.gz'
     timeout='none'")




file(DOWNLOAD
  "http://mitk.org/download/thirdparty/qRestAPI_c5e4c2a7.tar.gz"
  "E:/D/MITK-superbuild/ep/src/CTK-build/qRestAPI-cmake/src/qRestAPI_c5e4c2a7.tar.gz"
  SHOW_PROGRESS
  # no TIMEOUT
  STATUS status
  LOG log)

list(GET status 0 status_code)
list(GET status 1 status_string)

if(NOT status_code EQUAL 0)
  message(FATAL_ERROR "error: downloading 'http://mitk.org/download/thirdparty/qRestAPI_c5e4c2a7.tar.gz' failed
  status_code: ${status_code}
  status_string: ${status_string}
  log: ${log}
")
endif()

message(STATUS "downloading... done")
