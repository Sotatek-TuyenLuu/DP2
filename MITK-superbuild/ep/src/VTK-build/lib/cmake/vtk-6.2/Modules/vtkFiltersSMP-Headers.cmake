set(vtkFiltersSMP_HEADERS_LOADED 1)
set(vtkFiltersSMP_HEADERS "vtkSMPContourGrid;vtkSMPContourGridManyPieces;vtkSMPMergePoints;vtkThreadedSynchronizedTemplates3D;vtkSMPTransform;vtkSMPWarpVector")

foreach(header ${vtkFiltersSMP_HEADERS})
  set(vtkFiltersSMP_HEADER_${header}_EXISTS 1)
endforeach()




