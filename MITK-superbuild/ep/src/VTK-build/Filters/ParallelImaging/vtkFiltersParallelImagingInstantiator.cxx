#include "vtkFiltersParallelImagingInstantiator.h"
#include "vtkPComputeHistogram2DOutliers.h"
#include "vtkPExtractHistogram2D.h"
#include "vtkPPairwiseExtractHistogram2D.h"
#include "vtkExtractPiece.h"
#include "vtkMemoryLimitImageDataStreamer.h"
#include "vtkTransmitImageDataPiece.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkPComputeHistogram2DOutliers)
vtkInstantiatorNewMacro(vtkPExtractHistogram2D)
vtkInstantiatorNewMacro(vtkPPairwiseExtractHistogram2D)
vtkInstantiatorNewMacro(vtkExtractPiece)
vtkInstantiatorNewMacro(vtkMemoryLimitImageDataStreamer)
vtkInstantiatorNewMacro(vtkTransmitImageDataPiece)



void vtkFiltersParallelImagingInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkPComputeHistogram2DOutliers", vtkInstantiatorvtkPComputeHistogram2DOutliersNew);
  vtkInstantiator::RegisterInstantiator("vtkPExtractHistogram2D", vtkInstantiatorvtkPExtractHistogram2DNew);
  vtkInstantiator::RegisterInstantiator("vtkPPairwiseExtractHistogram2D", vtkInstantiatorvtkPPairwiseExtractHistogram2DNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractPiece", vtkInstantiatorvtkExtractPieceNew);
  vtkInstantiator::RegisterInstantiator("vtkMemoryLimitImageDataStreamer", vtkInstantiatorvtkMemoryLimitImageDataStreamerNew);
  vtkInstantiator::RegisterInstantiator("vtkTransmitImageDataPiece", vtkInstantiatorvtkTransmitImageDataPieceNew);


}

void vtkFiltersParallelImagingInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkPComputeHistogram2DOutliers", vtkInstantiatorvtkPComputeHistogram2DOutliersNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPExtractHistogram2D", vtkInstantiatorvtkPExtractHistogram2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPPairwiseExtractHistogram2D", vtkInstantiatorvtkPPairwiseExtractHistogram2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractPiece", vtkInstantiatorvtkExtractPieceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMemoryLimitImageDataStreamer", vtkInstantiatorvtkMemoryLimitImageDataStreamerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTransmitImageDataPiece", vtkInstantiatorvtkTransmitImageDataPieceNew);


}

vtkFiltersParallelImagingInstantiator::vtkFiltersParallelImagingInstantiator()
{
  if(++vtkFiltersParallelImagingInstantiator::Count == 1)
    {
    vtkFiltersParallelImagingInstantiator::ClassInitialize();
    }
}

vtkFiltersParallelImagingInstantiator::~vtkFiltersParallelImagingInstantiator()
{
  if(--vtkFiltersParallelImagingInstantiator::Count == 0)
    {
    vtkFiltersParallelImagingInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkFiltersParallelImagingInstantiator::Count;
