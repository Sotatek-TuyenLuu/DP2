#ifndef __vtkFiltersTextureInstantiator_h
#define __vtkFiltersTextureInstantiator_h

#include "vtkInstantiator.h"

#include "vtkFiltersTextureModule.h"


class VTKFILTERSTEXTURE_EXPORT vtkFiltersTextureInstantiator
{
  public:
  vtkFiltersTextureInstantiator();
  ~vtkFiltersTextureInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkFiltersTextureInstantiator vtkFiltersTextureInstantiatorInitializer;

#endif
