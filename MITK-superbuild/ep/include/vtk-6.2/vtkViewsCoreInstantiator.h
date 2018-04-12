#ifndef __vtkViewsCoreInstantiator_h
#define __vtkViewsCoreInstantiator_h

#include "vtkInstantiator.h"

#include "vtkViewsCoreModule.h"


class VTKVIEWSCORE_EXPORT vtkViewsCoreInstantiator
{
  public:
  vtkViewsCoreInstantiator();
  ~vtkViewsCoreInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkViewsCoreInstantiator vtkViewsCoreInstantiatorInitializer;

#endif
