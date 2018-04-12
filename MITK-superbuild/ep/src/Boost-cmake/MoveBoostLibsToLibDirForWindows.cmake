file(GLOB libFiles "E:/D/MITK-superbuild/ep/bin/boost_*.lib")

foreach(libFile ${libFiles})
  message(STATUS "Moving lib file from bin to lib directory: ${libFile}")
  execute_process(COMMAND ${CMAKE_COMMAND} -E copy "${libFile}" "E:/D/MITK-superbuild/ep/lib")
  execute_process(COMMAND ${CMAKE_COMMAND} -E remove "${libFile}")
endforeach()
