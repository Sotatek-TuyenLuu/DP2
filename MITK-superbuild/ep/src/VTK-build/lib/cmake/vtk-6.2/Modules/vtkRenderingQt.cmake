set(vtkRenderingQt_LOADED 1)
set(vtkRenderingQt_DEPENDS "vtkFiltersSources;vtkFiltersTexture;vtkGUISupportQt;vtkRenderingLabel")
set(vtkRenderingQt_LIBRARIES "vtkRenderingQt")
set(vtkRenderingQt_INCLUDE_DIRS "E:/D/MITK-superbuild/ep/src/VTK-build/Rendering/Qt;E:/D/MITK-superbuild/ep/src/VTK/Rendering/Qt")
set(vtkRenderingQt_LIBRARY_DIRS "")
set(vtkRenderingQt_RUNTIME_LIBRARY_DIRS "E:/D/MITK-superbuild/ep/src/VTK-build/bin")
set(vtkRenderingQt_WRAP_HIERARCHY_FILE "")

if(NOT Qt5Widgets_DIR)
  set(Qt5Widgets_DIR "C:/Qt/5.4/msvc2013_opengl/lib/cmake/Qt5Widgets")
endif()
find_package(Qt5Widgets REQUIRED QUIET)

