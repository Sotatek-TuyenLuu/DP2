if("releases/2016-03" STREQUAL "")
  message(FATAL_ERROR "Tag for git checkout should not be empty.")
endif()

set(run 0)

if("E:/D/MITK-cmake/src/MITK-stamp/MITK-gitinfo.txt" IS_NEWER_THAN "E:/D/MITK-cmake/src/MITK-stamp/MITK-gitclone-lastrun.txt")
  set(run 1)
endif()

if(NOT run)
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: 'E:/D/MITK-cmake/src/MITK-stamp/MITK-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E remove_directory "E:/D/MITK"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: 'E:/D/MITK'")
endif()

# try the clone 3 times incase there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "C:/Program Files/Git/cmd/git.exe" clone --origin "origin" "http://git.mitk.org/MITK.git" "MITK"
    WORKING_DIRECTORY "E:/D"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'http://git.mitk.org/MITK.git'")
endif()

execute_process(
  COMMAND "C:/Program Files/Git/cmd/git.exe" checkout releases/2016-03
  WORKING_DIRECTORY "E:/D/MITK"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: 'releases/2016-03'")
endif()

execute_process(
  COMMAND "C:/Program Files/Git/cmd/git.exe" submodule init 
  WORKING_DIRECTORY "E:/D/MITK"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to init submodules in: 'E:/D/MITK'")
endif()

execute_process(
  COMMAND "C:/Program Files/Git/cmd/git.exe" submodule update --recursive 
  WORKING_DIRECTORY "E:/D/MITK"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: 'E:/D/MITK'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "E:/D/MITK-cmake/src/MITK-stamp/MITK-gitinfo.txt"
    "E:/D/MITK-cmake/src/MITK-stamp/MITK-gitclone-lastrun.txt"
  WORKING_DIRECTORY "E:/D/MITK"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: 'E:/D/MITK-cmake/src/MITK-stamp/MITK-gitclone-lastrun.txt'")
endif()

