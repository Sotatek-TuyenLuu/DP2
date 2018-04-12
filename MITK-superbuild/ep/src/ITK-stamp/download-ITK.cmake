if(EXISTS "E:/D/MITK-superbuild/ep/src/InsightToolkit-4.7.1-20c0592.tar.gz")
  file("MD5" "E:/D/MITK-superbuild/ep/src/InsightToolkit-4.7.1-20c0592.tar.gz" hash_value)
  if("x${hash_value}" STREQUAL "xf778a5f0e297c06dc629c33ec45733dc")
    return()
  endif()
endif()
message(STATUS "downloading...
     src='http://mitk.org/download/thirdparty/InsightToolkit-4.7.1-20c0592.tar.gz'
     dst='E:/D/MITK-superbuild/ep/src/InsightToolkit-4.7.1-20c0592.tar.gz'
     timeout='none'")




file(DOWNLOAD
  "http://mitk.org/download/thirdparty/InsightToolkit-4.7.1-20c0592.tar.gz"
  "E:/D/MITK-superbuild/ep/src/InsightToolkit-4.7.1-20c0592.tar.gz"
  SHOW_PROGRESS
  # no TIMEOUT
  STATUS status
  LOG log)

list(GET status 0 status_code)
list(GET status 1 status_string)

if(NOT status_code EQUAL 0)
  message(FATAL_ERROR "error: downloading 'http://mitk.org/download/thirdparty/InsightToolkit-4.7.1-20c0592.tar.gz' failed
  status_code: ${status_code}
  status_string: ${status_string}
  log: ${log}
")
endif()

message(STATUS "downloading... done")
