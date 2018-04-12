#ifndef __vtkImagingStatisticsInstantiator_h
#define __vtkImagingStatisticsInstantiator_h

#include "vtkInstantiator.h"

#include "vtkImagingStatisticsModule.h"


class VTKIMAGINGSTATISTICS_EXPORT vtkImagingStatisticsInstantiator
{
  public:
  vtkImagingStatisticsInstantiator();
  ~vtkImagingStatisticsInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
};

static vtkImagingStatisticsInstantiator vtkImagingStatisticsInstantiatorInitializer;

#endif
