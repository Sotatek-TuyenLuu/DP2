if(EXISTS "E:/D/MITK-superbuild/ep/src/glew-1.10.0.tgz")
  file("MD5" "E:/D/MITK-superbuild/ep/src/glew-1.10.0.tgz" hash_value)
  if("x${hash_value}" STREQUAL "x2f09e5e6cb1b9f3611bcac79bc9c2d5d")
    return()
  endif()
endif()
message(STATUS "downloading...
     src='http://mitk.org/download/thirdparty/glew-1.10.0.tgz'
     dst='E:/D/MITK-superbuild/ep/src/glew-1.10.0.tgz'
     timeout='none'")




file(DOWNLOAD
  "http://mitk.org/download/thirdparty/glew-1.10.0.tgz"
  "E:/D/MITK-superbuild/ep/src/glew-1.10.0.tgz"
  SHOW_PROGRESS
  # no TIMEOUT
  STATUS status
  LOG log)

list(GET status 0 status_code)
list(GET status 1 status_string)

if(NOT status_code EQUAL 0)
  message(FATAL_ERROR "error: downloading 'http://mitk.org/download/thirdparty/glew-1.10.0.tgz' failed
  status_code: ${status_code}
  status_string: ${status_string}
  log: ${log}
")
endif()

message(STATUS "downloading... done")
