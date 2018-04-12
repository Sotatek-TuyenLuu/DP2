set(vtkViewsQt_LOADED 1)
set(vtkViewsQt_DEPENDS "vtkGUISupportQt;vtkViewsInfovis")
set(vtkViewsQt_LIBRARIES "vtkViewsQt")
set(vtkViewsQt_INCLUDE_DIRS "E:/D/MITK-superbuild/ep/src/VTK-build/Views/Qt;E:/D/MITK-superbuild/ep/src/VTK/Views/Qt")
set(vtkViewsQt_LIBRARY_DIRS "")
set(vtkViewsQt_RUNTIME_LIBRARY_DIRS "E:/D/MITK-superbuild/ep/src/VTK-build/bin")
set(vtkViewsQt_WRAP_HIERARCHY_FILE "")
set(vtkViewsQt_EXCLUDE_FROM_WRAPPING 1)

if(NOT Qt5Widgets_DIR)
  set(Qt5Widgets_DIR "C:/Qt/5.4/msvc2013_opengl/lib/cmake/Qt5Widgets")
endif()
find_package(Qt5Widgets REQUIRED QUIET)

