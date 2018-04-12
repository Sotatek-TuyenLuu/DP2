#include "vtkCommonExecutionModelInstantiator.h"
#include "vtkAlgorithm.h"
#include "vtkAlgorithmOutput.h"
#include "vtkAnnotationLayersAlgorithm.h"
#include "vtkArrayDataAlgorithm.h"
#include "vtkCachedStreamingDemandDrivenPipeline.h"
#include "vtkCastToConcrete.h"
#include "vtkCompositeDataPipeline.h"
#include "vtkCompositeDataSetAlgorithm.h"
#include "vtkDataObjectAlgorithm.h"
#include "vtkDataSetAlgorithm.h"
#include "vtkDemandDrivenPipeline.h"
#include "vtkDirectedGraphAlgorithm.h"
#include "vtkEnsembleSource.h"
#include "vtkExtentSplitter.h"
#include "vtkExtentTranslator.h"
#include "vtkGraphAlgorithm.h"
#include "vtkHierarchicalBoxDataSetAlgorithm.h"
#include "vtkImageToStructuredGrid.h"
#include "vtkImageToStructuredPoints.h"
#include "vtkMultiBlockDataSetAlgorithm.h"
#include "vtkMultiTimeStepAlgorithm.h"
#include "vtkPassInputTypeAlgorithm.h"
#include "vtkPiecewiseFunctionAlgorithm.h"
#include "vtkPiecewiseFunctionShiftScale.h"
#include "vtkPointSetAlgorithm.h"
#include "vtkPolyDataAlgorithm.h"
#include "vtkRectilinearGridAlgorithm.h"
#include "vtkSimpleScalarTree.h"
#include "vtkStreamingDemandDrivenPipeline.h"
#include "vtkStructuredGridAlgorithm.h"
#include "vtkTableAlgorithm.h"
#include "vtkThreadedCompositeDataPipeline.h"
#include "vtkTreeAlgorithm.h"
#include "vtkTrivialProducer.h"
#include "vtkUndirectedGraphAlgorithm.h"
#include "vtkUnstructuredGridAlgorithm.h"
#include "vtkUnstructuredGridBaseAlgorithm.h"
#include "vtkProgressObserver.h"
#include "vtkSelectionAlgorithm.h"
#include "vtkExtentRCBPartitioner.h"
#include "vtkUniformGridPartitioner.h"
#include "vtkUniformGridAMRAlgorithm.h"
#include "vtkOverlappingAMRAlgorithm.h"
#include "vtkNonOverlappingAMRAlgorithm.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkAlgorithm)
vtkInstantiatorNewMacro(vtkAlgorithmOutput)
vtkInstantiatorNewMacro(vtkAnnotationLayersAlgorithm)
vtkInstantiatorNewMacro(vtkArrayDataAlgorithm)
vtkInstantiatorNewMacro(vtkCachedStreamingDemandDrivenPipeline)
vtkInstantiatorNewMacro(vtkCastToConcrete)
vtkInstantiatorNewMacro(vtkCompositeDataPipeline)
vtkInstantiatorNewMacro(vtkCompositeDataSetAlgorithm)
vtkInstantiatorNewMacro(vtkDataObjectAlgorithm)
vtkInstantiatorNewMacro(vtkDataSetAlgorithm)
vtkInstantiatorNewMacro(vtkDemandDrivenPipeline)
vtkInstantiatorNewMacro(vtkDirectedGraphAlgorithm)
vtkInstantiatorNewMacro(vtkEnsembleSource)
vtkInstantiatorNewMacro(vtkExtentSplitter)
vtkInstantiatorNewMacro(vtkExtentTranslator)
vtkInstantiatorNewMacro(vtkGraphAlgorithm)
vtkInstantiatorNewMacro(vtkHierarchicalBoxDataSetAlgorithm)
vtkInstantiatorNewMacro(vtkImageToStructuredGrid)
vtkInstantiatorNewMacro(vtkImageToStructuredPoints)
vtkInstantiatorNewMacro(vtkMultiBlockDataSetAlgorithm)
vtkInstantiatorNewMacro(vtkMultiTimeStepAlgorithm)
vtkInstantiatorNewMacro(vtkPassInputTypeAlgorithm)
vtkInstantiatorNewMacro(vtkPiecewiseFunctionAlgorithm)
vtkInstantiatorNewMacro(vtkPiecewiseFunctionShiftScale)
vtkInstantiatorNewMacro(vtkPointSetAlgorithm)
vtkInstantiatorNewMacro(vtkPolyDataAlgorithm)
vtkInstantiatorNewMacro(vtkRectilinearGridAlgorithm)
vtkInstantiatorNewMacro(vtkSimpleScalarTree)
vtkInstantiatorNewMacro(vtkStreamingDemandDrivenPipeline)
vtkInstantiatorNewMacro(vtkStructuredGridAlgorithm)
vtkInstantiatorNewMacro(vtkTableAlgorithm)
vtkInstantiatorNewMacro(vtkThreadedCompositeDataPipeline)
vtkInstantiatorNewMacro(vtkTreeAlgorithm)
vtkInstantiatorNewMacro(vtkTrivialProducer)
vtkInstantiatorNewMacro(vtkUndirectedGraphAlgorithm)
vtkInstantiatorNewMacro(vtkUnstructuredGridAlgorithm)
vtkInstantiatorNewMacro(vtkUnstructuredGridBaseAlgorithm)
vtkInstantiatorNewMacro(vtkProgressObserver)
vtkInstantiatorNewMacro(vtkSelectionAlgorithm)
vtkInstantiatorNewMacro(vtkExtentRCBPartitioner)
vtkInstantiatorNewMacro(vtkUniformGridPartitioner)
vtkInstantiatorNewMacro(vtkUniformGridAMRAlgorithm)
vtkInstantiatorNewMacro(vtkOverlappingAMRAlgorithm)
vtkInstantiatorNewMacro(vtkNonOverlappingAMRAlgorithm)



void vtkCommonExecutionModelInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkAlgorithm", vtkInstantiatorvtkAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkAlgorithmOutput", vtkInstantiatorvtkAlgorithmOutputNew);
  vtkInstantiator::RegisterInstantiator("vtkAnnotationLayersAlgorithm", vtkInstantiatorvtkAnnotationLayersAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkArrayDataAlgorithm", vtkInstantiatorvtkArrayDataAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkCachedStreamingDemandDrivenPipeline", vtkInstantiatorvtkCachedStreamingDemandDrivenPipelineNew);
  vtkInstantiator::RegisterInstantiator("vtkCastToConcrete", vtkInstantiatorvtkCastToConcreteNew);
  vtkInstantiator::RegisterInstantiator("vtkCompositeDataPipeline", vtkInstantiatorvtkCompositeDataPipelineNew);
  vtkInstantiator::RegisterInstantiator("vtkCompositeDataSetAlgorithm", vtkInstantiatorvtkCompositeDataSetAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkDataObjectAlgorithm", vtkInstantiatorvtkDataObjectAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkDataSetAlgorithm", vtkInstantiatorvtkDataSetAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkDemandDrivenPipeline", vtkInstantiatorvtkDemandDrivenPipelineNew);
  vtkInstantiator::RegisterInstantiator("vtkDirectedGraphAlgorithm", vtkInstantiatorvtkDirectedGraphAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkEnsembleSource", vtkInstantiatorvtkEnsembleSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkExtentSplitter", vtkInstantiatorvtkExtentSplitterNew);
  vtkInstantiator::RegisterInstantiator("vtkExtentTranslator", vtkInstantiatorvtkExtentTranslatorNew);
  vtkInstantiator::RegisterInstantiator("vtkGraphAlgorithm", vtkInstantiatorvtkGraphAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkHierarchicalBoxDataSetAlgorithm", vtkInstantiatorvtkHierarchicalBoxDataSetAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkImageToStructuredGrid", vtkInstantiatorvtkImageToStructuredGridNew);
  vtkInstantiator::RegisterInstantiator("vtkImageToStructuredPoints", vtkInstantiatorvtkImageToStructuredPointsNew);
  vtkInstantiator::RegisterInstantiator("vtkMultiBlockDataSetAlgorithm", vtkInstantiatorvtkMultiBlockDataSetAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkMultiTimeStepAlgorithm", vtkInstantiatorvtkMultiTimeStepAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkPassInputTypeAlgorithm", vtkInstantiatorvtkPassInputTypeAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkPiecewiseFunctionAlgorithm", vtkInstantiatorvtkPiecewiseFunctionAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkPiecewiseFunctionShiftScale", vtkInstantiatorvtkPiecewiseFunctionShiftScaleNew);
  vtkInstantiator::RegisterInstantiator("vtkPointSetAlgorithm", vtkInstantiatorvtkPointSetAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkPolyDataAlgorithm", vtkInstantiatorvtkPolyDataAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkRectilinearGridAlgorithm", vtkInstantiatorvtkRectilinearGridAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkSimpleScalarTree", vtkInstantiatorvtkSimpleScalarTreeNew);
  vtkInstantiator::RegisterInstantiator("vtkStreamingDemandDrivenPipeline", vtkInstantiatorvtkStreamingDemandDrivenPipelineNew);
  vtkInstantiator::RegisterInstantiator("vtkStructuredGridAlgorithm", vtkInstantiatorvtkStructuredGridAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkTableAlgorithm", vtkInstantiatorvtkTableAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkThreadedCompositeDataPipeline", vtkInstantiatorvtkThreadedCompositeDataPipelineNew);
  vtkInstantiator::RegisterInstantiator("vtkTreeAlgorithm", vtkInstantiatorvtkTreeAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkTrivialProducer", vtkInstantiatorvtkTrivialProducerNew);
  vtkInstantiator::RegisterInstantiator("vtkUndirectedGraphAlgorithm", vtkInstantiatorvtkUndirectedGraphAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkUnstructuredGridAlgorithm", vtkInstantiatorvtkUnstructuredGridAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkUnstructuredGridBaseAlgorithm", vtkInstantiatorvtkUnstructuredGridBaseAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkProgressObserver", vtkInstantiatorvtkProgressObserverNew);
  vtkInstantiator::RegisterInstantiator("vtkSelectionAlgorithm", vtkInstantiatorvtkSelectionAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkExtentRCBPartitioner", vtkInstantiatorvtkExtentRCBPartitionerNew);
  vtkInstantiator::RegisterInstantiator("vtkUniformGridPartitioner", vtkInstantiatorvtkUniformGridPartitionerNew);
  vtkInstantiator::RegisterInstantiator("vtkUniformGridAMRAlgorithm", vtkInstantiatorvtkUniformGridAMRAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkOverlappingAMRAlgorithm", vtkInstantiatorvtkOverlappingAMRAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkNonOverlappingAMRAlgorithm", vtkInstantiatorvtkNonOverlappingAMRAlgorithmNew);


}

void vtkCommonExecutionModelInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkAlgorithm", vtkInstantiatorvtkAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAlgorithmOutput", vtkInstantiatorvtkAlgorithmOutputNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAnnotationLayersAlgorithm", vtkInstantiatorvtkAnnotationLayersAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkArrayDataAlgorithm", vtkInstantiatorvtkArrayDataAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCachedStreamingDemandDrivenPipeline", vtkInstantiatorvtkCachedStreamingDemandDrivenPipelineNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCastToConcrete", vtkInstantiatorvtkCastToConcreteNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCompositeDataPipeline", vtkInstantiatorvtkCompositeDataPipelineNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCompositeDataSetAlgorithm", vtkInstantiatorvtkCompositeDataSetAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataObjectAlgorithm", vtkInstantiatorvtkDataObjectAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataSetAlgorithm", vtkInstantiatorvtkDataSetAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDemandDrivenPipeline", vtkInstantiatorvtkDemandDrivenPipelineNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDirectedGraphAlgorithm", vtkInstantiatorvtkDirectedGraphAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkEnsembleSource", vtkInstantiatorvtkEnsembleSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtentSplitter", vtkInstantiatorvtkExtentSplitterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtentTranslator", vtkInstantiatorvtkExtentTranslatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGraphAlgorithm", vtkInstantiatorvtkGraphAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHierarchicalBoxDataSetAlgorithm", vtkInstantiatorvtkHierarchicalBoxDataSetAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageToStructuredGrid", vtkInstantiatorvtkImageToStructuredGridNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageToStructuredPoints", vtkInstantiatorvtkImageToStructuredPointsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMultiBlockDataSetAlgorithm", vtkInstantiatorvtkMultiBlockDataSetAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMultiTimeStepAlgorithm", vtkInstantiatorvtkMultiTimeStepAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPassInputTypeAlgorithm", vtkInstantiatorvtkPassInputTypeAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPiecewiseFunctionAlgorithm", vtkInstantiatorvtkPiecewiseFunctionAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPiecewiseFunctionShiftScale", vtkInstantiatorvtkPiecewiseFunctionShiftScaleNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPointSetAlgorithm", vtkInstantiatorvtkPointSetAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPolyDataAlgorithm", vtkInstantiatorvtkPolyDataAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRectilinearGridAlgorithm", vtkInstantiatorvtkRectilinearGridAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSimpleScalarTree", vtkInstantiatorvtkSimpleScalarTreeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStreamingDemandDrivenPipeline", vtkInstantiatorvtkStreamingDemandDrivenPipelineNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStructuredGridAlgorithm", vtkInstantiatorvtkStructuredGridAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTableAlgorithm", vtkInstantiatorvtkTableAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkThreadedCompositeDataPipeline", vtkInstantiatorvtkThreadedCompositeDataPipelineNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTreeAlgorithm", vtkInstantiatorvtkTreeAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTrivialProducer", vtkInstantiatorvtkTrivialProducerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUndirectedGraphAlgorithm", vtkInstantiatorvtkUndirectedGraphAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUnstructuredGridAlgorithm", vtkInstantiatorvtkUnstructuredGridAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUnstructuredGridBaseAlgorithm", vtkInstantiatorvtkUnstructuredGridBaseAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProgressObserver", vtkInstantiatorvtkProgressObserverNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSelectionAlgorithm", vtkInstantiatorvtkSelectionAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtentRCBPartitioner", vtkInstantiatorvtkExtentRCBPartitionerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUniformGridPartitioner", vtkInstantiatorvtkUniformGridPartitionerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUniformGridAMRAlgorithm", vtkInstantiatorvtkUniformGridAMRAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOverlappingAMRAlgorithm", vtkInstantiatorvtkOverlappingAMRAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkNonOverlappingAMRAlgorithm", vtkInstantiatorvtkNonOverlappingAMRAlgorithmNew);


}

vtkCommonExecutionModelInstantiator::vtkCommonExecutionModelInstantiator()
{
  if(++vtkCommonExecutionModelInstantiator::Count == 1)
    {
    vtkCommonExecutionModelInstantiator::ClassInitialize();
    }
}

vtkCommonExecutionModelInstantiator::~vtkCommonExecutionModelInstantiator()
{
  if(--vtkCommonExecutionModelInstantiator::Count == 0)
    {
    vtkCommonExecutionModelInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkCommonExecutionModelInstantiator::Count;
