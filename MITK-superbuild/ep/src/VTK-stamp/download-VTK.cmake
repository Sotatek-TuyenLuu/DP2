if(EXISTS "E:/D/MITK-superbuild/ep/src/VTK-6.2.0.tar.gz")
  file("MD5" "E:/D/MITK-superbuild/ep/src/VTK-6.2.0.tar.gz" hash_value)
  if("x${hash_value}" STREQUAL "x4790f8b3acdbc376997fbdc9d203f0b7")
    return()
  endif()
endif()
message(STATUS "downloading...
     src='http://mitk.org/download/thirdparty/VTK-6.2.0.tar.gz'
     dst='E:/D/MITK-superbuild/ep/src/VTK-6.2.0.tar.gz'
     timeout='none'")




file(DOWNLOAD
  "http://mitk.org/download/thirdparty/VTK-6.2.0.tar.gz"
  "E:/D/MITK-superbuild/ep/src/VTK-6.2.0.tar.gz"
  SHOW_PROGRESS
  # no TIMEOUT
  STATUS status
  LOG log)

list(GET status 0 status_code)
list(GET status 1 status_string)

if(NOT status_code EQUAL 0)
  message(FATAL_ERROR "error: downloading 'http://mitk.org/download/thirdparty/VTK-6.2.0.tar.gz' failed
  status_code: ${status_code}
  status_string: ${status_string}
  log: ${log}
")
endif()

message(STATUS "downloading... done")
