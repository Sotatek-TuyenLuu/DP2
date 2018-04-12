#ifndef __vtkDomainsChemistryInstantiator_h
#define __vtkDomainsChemistryInstantiator_h

#include "vtkInstantiator.h"

#include "vtkDomainsChemistryModule.h"


class VTKDOMAINSCHEMISTRY_EXPORT vtkDomainsChemistryInstantiator
{
  public:
  vtkDomainsChemistryInstantiator();
  ~vtkDomainsChemistryInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkDomainsChemistryInstantiator vtkDomainsChemistryInstantiatorInitializer;

#endif
