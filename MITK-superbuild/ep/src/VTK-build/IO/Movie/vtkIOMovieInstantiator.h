#ifndef __vtkIOMovieInstantiator_h
#define __vtkIOMovieInstantiator_h

#include "vtkInstantiator.h"

#include "vtkIOMovieModule.h"


class VTKIOMOVIE_EXPORT vtkIOMovieInstantiator
{
  public:
  vtkIOMovieInstantiator();
  ~vtkIOMovieInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkIOMovieInstantiator vtkIOMovieInstantiatorInitializer;

#endif
