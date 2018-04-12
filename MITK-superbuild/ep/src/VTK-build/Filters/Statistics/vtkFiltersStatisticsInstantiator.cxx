#include "vtkFiltersStatisticsInstantiator.h"
#include "vtkAutoCorrelativeStatistics.h"
#include "vtkBivariateLinearTableThreshold.h"
#include "vtkComputeQuartiles.h"
#include "vtkContingencyStatistics.h"
#include "vtkCorrelativeStatistics.h"
#include "vtkDescriptiveStatistics.h"
#include "vtkHighestDensityRegionsStatistics.h"
#include "vtkExtractFunctionalBagPlot.h"
#include "vtkKMeansDistanceFunctorCalculator.h"
#include "vtkKMeansDistanceFunctor.h"
#include "vtkKMeansStatistics.h"
#include "vtkMultiCorrelativeStatistics.h"
#include "vtkOrderStatistics.h"
#include "vtkPCAStatistics.h"
#include "vtkStrahlerMetric.h"
#include "vtkStreamingStatistics.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkAutoCorrelativeStatistics)
vtkInstantiatorNewMacro(vtkBivariateLinearTableThreshold)
vtkInstantiatorNewMacro(vtkComputeQuartiles)
vtkInstantiatorNewMacro(vtkContingencyStatistics)
vtkInstantiatorNewMacro(vtkCorrelativeStatistics)
vtkInstantiatorNewMacro(vtkDescriptiveStatistics)
vtkInstantiatorNewMacro(vtkHighestDensityRegionsStatistics)
vtkInstantiatorNewMacro(vtkExtractFunctionalBagPlot)
vtkInstantiatorNewMacro(vtkKMeansDistanceFunctorCalculator)
vtkInstantiatorNewMacro(vtkKMeansDistanceFunctor)
vtkInstantiatorNewMacro(vtkKMeansStatistics)
vtkInstantiatorNewMacro(vtkMultiCorrelativeStatistics)
vtkInstantiatorNewMacro(vtkOrderStatistics)
vtkInstantiatorNewMacro(vtkPCAStatistics)
vtkInstantiatorNewMacro(vtkStrahlerMetric)
vtkInstantiatorNewMacro(vtkStreamingStatistics)



void vtkFiltersStatisticsInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkAutoCorrelativeStatistics", vtkInstantiatorvtkAutoCorrelativeStatisticsNew);
  vtkInstantiator::RegisterInstantiator("vtkBivariateLinearTableThreshold", vtkInstantiatorvtkBivariateLinearTableThresholdNew);
  vtkInstantiator::RegisterInstantiator("vtkComputeQuartiles", vtkInstantiatorvtkComputeQuartilesNew);
  vtkInstantiator::RegisterInstantiator("vtkContingencyStatistics", vtkInstantiatorvtkContingencyStatisticsNew);
  vtkInstantiator::RegisterInstantiator("vtkCorrelativeStatistics", vtkInstantiatorvtkCorrelativeStatisticsNew);
  vtkInstantiator::RegisterInstantiator("vtkDescriptiveStatistics", vtkInstantiatorvtkDescriptiveStatisticsNew);
  vtkInstantiator::RegisterInstantiator("vtkHighestDensityRegionsStatistics", vtkInstantiatorvtkHighestDensityRegionsStatisticsNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractFunctionalBagPlot", vtkInstantiatorvtkExtractFunctionalBagPlotNew);
  vtkInstantiator::RegisterInstantiator("vtkKMeansDistanceFunctorCalculator", vtkInstantiatorvtkKMeansDistanceFunctorCalculatorNew);
  vtkInstantiator::RegisterInstantiator("vtkKMeansDistanceFunctor", vtkInstantiatorvtkKMeansDistanceFunctorNew);
  vtkInstantiator::RegisterInstantiator("vtkKMeansStatistics", vtkInstantiatorvtkKMeansStatisticsNew);
  vtkInstantiator::RegisterInstantiator("vtkMultiCorrelativeStatistics", vtkInstantiatorvtkMultiCorrelativeStatisticsNew);
  vtkInstantiator::RegisterInstantiator("vtkOrderStatistics", vtkInstantiatorvtkOrderStatisticsNew);
  vtkInstantiator::RegisterInstantiator("vtkPCAStatistics", vtkInstantiatorvtkPCAStatisticsNew);
  vtkInstantiator::RegisterInstantiator("vtkStrahlerMetric", vtkInstantiatorvtkStrahlerMetricNew);
  vtkInstantiator::RegisterInstantiator("vtkStreamingStatistics", vtkInstantiatorvtkStreamingStatisticsNew);


}

void vtkFiltersStatisticsInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkAutoCorrelativeStatistics", vtkInstantiatorvtkAutoCorrelativeStatisticsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBivariateLinearTableThreshold", vtkInstantiatorvtkBivariateLinearTableThresholdNew);
  vtkInstantiator::UnRegisterInstantiator("vtkComputeQuartiles", vtkInstantiatorvtkComputeQuartilesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkContingencyStatistics", vtkInstantiatorvtkContingencyStatisticsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCorrelativeStatistics", vtkInstantiatorvtkCorrelativeStatisticsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDescriptiveStatistics", vtkInstantiatorvtkDescriptiveStatisticsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHighestDensityRegionsStatistics", vtkInstantiatorvtkHighestDensityRegionsStatisticsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractFunctionalBagPlot", vtkInstantiatorvtkExtractFunctionalBagPlotNew);
  vtkInstantiator::UnRegisterInstantiator("vtkKMeansDistanceFunctorCalculator", vtkInstantiatorvtkKMeansDistanceFunctorCalculatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkKMeansDistanceFunctor", vtkInstantiatorvtkKMeansDistanceFunctorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkKMeansStatistics", vtkInstantiatorvtkKMeansStatisticsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMultiCorrelativeStatistics", vtkInstantiatorvtkMultiCorrelativeStatisticsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOrderStatistics", vtkInstantiatorvtkOrderStatisticsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPCAStatistics", vtkInstantiatorvtkPCAStatisticsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStrahlerMetric", vtkInstantiatorvtkStrahlerMetricNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStreamingStatistics", vtkInstantiatorvtkStreamingStatisticsNew);


}

vtkFiltersStatisticsInstantiator::vtkFiltersStatisticsInstantiator()
{
  if(++vtkFiltersStatisticsInstantiator::Count == 1)
    {
    vtkFiltersStatisticsInstantiator::ClassInitialize();
    }
}

vtkFiltersStatisticsInstantiator::~vtkFiltersStatisticsInstantiator()
{
  if(--vtkFiltersStatisticsInstantiator::Count == 0)
    {
    vtkFiltersStatisticsInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkFiltersStatisticsInstantiator::Count;
