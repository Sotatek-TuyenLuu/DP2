#include "vtkFiltersParallelInstantiator.h"
#include "vtkCollectGraph.h"
#include "vtkCollectPolyData.h"
#include "vtkCollectTable.h"
#include "vtkCutMaterial.h"
#include "vtkDuplicatePolyData.h"
#include "vtkExtractCTHPart.h"
#include "vtkExtractPolyDataPiece.h"
#include "vtkExtractUnstructuredGridPiece.h"
#include "vtkExtractUserDefinedPiece.h"
#include "vtkPCellDataToPointData.h"
#include "vtkPExtractArraysOverTime.h"
#include "vtkPKdTree.h"
#include "vtkPLinearExtrusionFilter.h"
#include "vtkPMaskPoints.h"
#include "vtkPOutlineCornerFilter.h"
#include "vtkPOutlineFilter.h"
#include "vtkPPolyDataNormals.h"
#include "vtkPProbeFilter.h"
#include "vtkPProjectSphereFilter.h"
#include "vtkPReflectionFilter.h"
#include "vtkPResampleFilter.h"
#include "vtkPSphereSource.h"
#include "vtkPYoungsMaterialInterface.h"
#include "vtkPassThroughFilter.h"
#include "vtkPieceRequestFilter.h"
#include "vtkPieceScalars.h"
#include "vtkPipelineSize.h"
#include "vtkProcessIdScalars.h"
#include "vtkRectilinearGridOutlineFilter.h"
#include "vtkTransmitPolyDataPiece.h"
#include "vtkTransmitStructuredDataPiece.h"
#include "vtkTransmitRectilinearGridPiece.h"
#include "vtkTransmitStructuredGridPiece.h"
#include "vtkTransmitUnstructuredGridPiece.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkCollectGraph)
vtkInstantiatorNewMacro(vtkCollectPolyData)
vtkInstantiatorNewMacro(vtkCollectTable)
vtkInstantiatorNewMacro(vtkCutMaterial)
vtkInstantiatorNewMacro(vtkDuplicatePolyData)
vtkInstantiatorNewMacro(vtkExtractCTHPart)
vtkInstantiatorNewMacro(vtkExtractPolyDataPiece)
vtkInstantiatorNewMacro(vtkExtractUnstructuredGridPiece)
vtkInstantiatorNewMacro(vtkExtractUserDefinedPiece)
vtkInstantiatorNewMacro(vtkPCellDataToPointData)
vtkInstantiatorNewMacro(vtkPExtractArraysOverTime)
vtkInstantiatorNewMacro(vtkPKdTree)
vtkInstantiatorNewMacro(vtkPLinearExtrusionFilter)
vtkInstantiatorNewMacro(vtkPMaskPoints)
vtkInstantiatorNewMacro(vtkPOutlineCornerFilter)
vtkInstantiatorNewMacro(vtkPOutlineFilter)
vtkInstantiatorNewMacro(vtkPPolyDataNormals)
vtkInstantiatorNewMacro(vtkPProbeFilter)
vtkInstantiatorNewMacro(vtkPProjectSphereFilter)
vtkInstantiatorNewMacro(vtkPReflectionFilter)
vtkInstantiatorNewMacro(vtkPResampleFilter)
vtkInstantiatorNewMacro(vtkPSphereSource)
vtkInstantiatorNewMacro(vtkPYoungsMaterialInterface)
vtkInstantiatorNewMacro(vtkPassThroughFilter)
vtkInstantiatorNewMacro(vtkPieceRequestFilter)
vtkInstantiatorNewMacro(vtkPieceScalars)
vtkInstantiatorNewMacro(vtkPipelineSize)
vtkInstantiatorNewMacro(vtkProcessIdScalars)
vtkInstantiatorNewMacro(vtkRectilinearGridOutlineFilter)
vtkInstantiatorNewMacro(vtkTransmitPolyDataPiece)
vtkInstantiatorNewMacro(vtkTransmitStructuredDataPiece)
vtkInstantiatorNewMacro(vtkTransmitRectilinearGridPiece)
vtkInstantiatorNewMacro(vtkTransmitStructuredGridPiece)
vtkInstantiatorNewMacro(vtkTransmitUnstructuredGridPiece)



void vtkFiltersParallelInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkCollectGraph", vtkInstantiatorvtkCollectGraphNew);
  vtkInstantiator::RegisterInstantiator("vtkCollectPolyData", vtkInstantiatorvtkCollectPolyDataNew);
  vtkInstantiator::RegisterInstantiator("vtkCollectTable", vtkInstantiatorvtkCollectTableNew);
  vtkInstantiator::RegisterInstantiator("vtkCutMaterial", vtkInstantiatorvtkCutMaterialNew);
  vtkInstantiator::RegisterInstantiator("vtkDuplicatePolyData", vtkInstantiatorvtkDuplicatePolyDataNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractCTHPart", vtkInstantiatorvtkExtractCTHPartNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractPolyDataPiece", vtkInstantiatorvtkExtractPolyDataPieceNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractUnstructuredGridPiece", vtkInstantiatorvtkExtractUnstructuredGridPieceNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractUserDefinedPiece", vtkInstantiatorvtkExtractUserDefinedPieceNew);
  vtkInstantiator::RegisterInstantiator("vtkPCellDataToPointData", vtkInstantiatorvtkPCellDataToPointDataNew);
  vtkInstantiator::RegisterInstantiator("vtkPExtractArraysOverTime", vtkInstantiatorvtkPExtractArraysOverTimeNew);
  vtkInstantiator::RegisterInstantiator("vtkPKdTree", vtkInstantiatorvtkPKdTreeNew);
  vtkInstantiator::RegisterInstantiator("vtkPLinearExtrusionFilter", vtkInstantiatorvtkPLinearExtrusionFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkPMaskPoints", vtkInstantiatorvtkPMaskPointsNew);
  vtkInstantiator::RegisterInstantiator("vtkPOutlineCornerFilter", vtkInstantiatorvtkPOutlineCornerFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkPOutlineFilter", vtkInstantiatorvtkPOutlineFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkPPolyDataNormals", vtkInstantiatorvtkPPolyDataNormalsNew);
  vtkInstantiator::RegisterInstantiator("vtkPProbeFilter", vtkInstantiatorvtkPProbeFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkPProjectSphereFilter", vtkInstantiatorvtkPProjectSphereFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkPReflectionFilter", vtkInstantiatorvtkPReflectionFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkPResampleFilter", vtkInstantiatorvtkPResampleFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkPSphereSource", vtkInstantiatorvtkPSphereSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkPYoungsMaterialInterface", vtkInstantiatorvtkPYoungsMaterialInterfaceNew);
  vtkInstantiator::RegisterInstantiator("vtkPassThroughFilter", vtkInstantiatorvtkPassThroughFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkPieceRequestFilter", vtkInstantiatorvtkPieceRequestFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkPieceScalars", vtkInstantiatorvtkPieceScalarsNew);
  vtkInstantiator::RegisterInstantiator("vtkPipelineSize", vtkInstantiatorvtkPipelineSizeNew);
  vtkInstantiator::RegisterInstantiator("vtkProcessIdScalars", vtkInstantiatorvtkProcessIdScalarsNew);
  vtkInstantiator::RegisterInstantiator("vtkRectilinearGridOutlineFilter", vtkInstantiatorvtkRectilinearGridOutlineFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkTransmitPolyDataPiece", vtkInstantiatorvtkTransmitPolyDataPieceNew);
  vtkInstantiator::RegisterInstantiator("vtkTransmitStructuredDataPiece", vtkInstantiatorvtkTransmitStructuredDataPieceNew);
  vtkInstantiator::RegisterInstantiator("vtkTransmitRectilinearGridPiece", vtkInstantiatorvtkTransmitRectilinearGridPieceNew);
  vtkInstantiator::RegisterInstantiator("vtkTransmitStructuredGridPiece", vtkInstantiatorvtkTransmitStructuredGridPieceNew);
  vtkInstantiator::RegisterInstantiator("vtkTransmitUnstructuredGridPiece", vtkInstantiatorvtkTransmitUnstructuredGridPieceNew);


}

void vtkFiltersParallelInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkCollectGraph", vtkInstantiatorvtkCollectGraphNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCollectPolyData", vtkInstantiatorvtkCollectPolyDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCollectTable", vtkInstantiatorvtkCollectTableNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCutMaterial", vtkInstantiatorvtkCutMaterialNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDuplicatePolyData", vtkInstantiatorvtkDuplicatePolyDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractCTHPart", vtkInstantiatorvtkExtractCTHPartNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractPolyDataPiece", vtkInstantiatorvtkExtractPolyDataPieceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractUnstructuredGridPiece", vtkInstantiatorvtkExtractUnstructuredGridPieceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractUserDefinedPiece", vtkInstantiatorvtkExtractUserDefinedPieceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPCellDataToPointData", vtkInstantiatorvtkPCellDataToPointDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPExtractArraysOverTime", vtkInstantiatorvtkPExtractArraysOverTimeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPKdTree", vtkInstantiatorvtkPKdTreeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPLinearExtrusionFilter", vtkInstantiatorvtkPLinearExtrusionFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPMaskPoints", vtkInstantiatorvtkPMaskPointsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPOutlineCornerFilter", vtkInstantiatorvtkPOutlineCornerFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPOutlineFilter", vtkInstantiatorvtkPOutlineFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPPolyDataNormals", vtkInstantiatorvtkPPolyDataNormalsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPProbeFilter", vtkInstantiatorvtkPProbeFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPProjectSphereFilter", vtkInstantiatorvtkPProjectSphereFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPReflectionFilter", vtkInstantiatorvtkPReflectionFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPResampleFilter", vtkInstantiatorvtkPResampleFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPSphereSource", vtkInstantiatorvtkPSphereSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPYoungsMaterialInterface", vtkInstantiatorvtkPYoungsMaterialInterfaceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPassThroughFilter", vtkInstantiatorvtkPassThroughFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPieceRequestFilter", vtkInstantiatorvtkPieceRequestFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPieceScalars", vtkInstantiatorvtkPieceScalarsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPipelineSize", vtkInstantiatorvtkPipelineSizeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProcessIdScalars", vtkInstantiatorvtkProcessIdScalarsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRectilinearGridOutlineFilter", vtkInstantiatorvtkRectilinearGridOutlineFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTransmitPolyDataPiece", vtkInstantiatorvtkTransmitPolyDataPieceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTransmitStructuredDataPiece", vtkInstantiatorvtkTransmitStructuredDataPieceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTransmitRectilinearGridPiece", vtkInstantiatorvtkTransmitRectilinearGridPieceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTransmitStructuredGridPiece", vtkInstantiatorvtkTransmitStructuredGridPieceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTransmitUnstructuredGridPiece", vtkInstantiatorvtkTransmitUnstructuredGridPieceNew);


}

vtkFiltersParallelInstantiator::vtkFiltersParallelInstantiator()
{
  if(++vtkFiltersParallelInstantiator::Count == 1)
    {
    vtkFiltersParallelInstantiator::ClassInitialize();
    }
}

vtkFiltersParallelInstantiator::~vtkFiltersParallelInstantiator()
{
  if(--vtkFiltersParallelInstantiator::Count == 0)
    {
    vtkFiltersParallelInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkFiltersParallelInstantiator::Count;
