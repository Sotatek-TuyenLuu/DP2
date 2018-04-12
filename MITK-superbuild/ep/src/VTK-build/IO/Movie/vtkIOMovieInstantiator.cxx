#include "vtkIOMovieInstantiator.h"
#include "vtkOggTheoraWriter.h"
#include "vtkAVIWriter.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkOggTheoraWriter)
vtkInstantiatorNewMacro(vtkAVIWriter)



void vtkIOMovieInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkOggTheoraWriter", vtkInstantiatorvtkOggTheoraWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkAVIWriter", vtkInstantiatorvtkAVIWriterNew);


}

void vtkIOMovieInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkOggTheoraWriter", vtkInstantiatorvtkOggTheoraWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAVIWriter", vtkInstantiatorvtkAVIWriterNew);


}

vtkIOMovieInstantiator::vtkIOMovieInstantiator()
{
  if(++vtkIOMovieInstantiator::Count == 1)
    {
    vtkIOMovieInstantiator::ClassInitialize();
    }
}

vtkIOMovieInstantiator::~vtkIOMovieInstantiator()
{
  if(--vtkIOMovieInstantiator::Count == 0)
    {
    vtkIOMovieInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkIOMovieInstantiator::Count;
