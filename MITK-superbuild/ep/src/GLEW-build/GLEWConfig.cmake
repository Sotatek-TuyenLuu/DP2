
set(GLEW_LIBRARIES glew)

if(NOT TARGET glew)
  include("${CMAKE_CURRENT_LIST_DIR}/GLEWTargets.cmake")
endif()
