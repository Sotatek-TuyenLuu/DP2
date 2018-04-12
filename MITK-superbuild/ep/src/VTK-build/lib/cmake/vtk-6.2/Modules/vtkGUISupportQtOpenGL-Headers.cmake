set(vtkGUISupportQtOpenGL_HEADERS_LOADED 1)
set(vtkGUISupportQtOpenGL_HEADERS "QVTKGraphicsItem;QVTKWidget2")

foreach(header ${vtkGUISupportQtOpenGL_HEADERS})
  set(vtkGUISupportQtOpenGL_HEADER_${header}_EXISTS 1)
endforeach()




