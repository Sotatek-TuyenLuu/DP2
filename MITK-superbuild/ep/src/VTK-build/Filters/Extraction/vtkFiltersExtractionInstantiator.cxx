#include "vtkFiltersExtractionInstantiator.h"
#include "vtkConvertSelection.h"
#include "vtkExtractArraysOverTime.h"
#include "vtkExtractBlock.h"
#include "vtkExtractCells.h"
#include "vtkExtractDataOverTime.h"
#include "vtkExtractDataSets.h"
#include "vtkExtractEdges.h"
#include "vtkExtractGeometry.h"
#include "vtkExtractGrid.h"
#include "vtkExtractLevel.h"
#include "vtkExtractPolyDataGeometry.h"
#include "vtkExtractRectilinearGrid.h"
#include "vtkExtractSelectedBlock.h"
#include "vtkExtractSelectedFrustum.h"
#include "vtkExtractSelectedIds.h"
#include "vtkExtractSelectedLocations.h"
#include "vtkExtractSelectedPolyDataIds.h"
#include "vtkExtractSelectedRows.h"
#include "vtkExtractSelectedThresholds.h"
#include "vtkExtractSelection.h"
#include "vtkExtractTemporalFieldData.h"
#include "vtkExtractTensorComponents.h"
#include "vtkExtractUnstructuredGrid.h"
#include "vtkExtractVectorComponents.h"
#include "vtkProbeSelectedLocations.h"
#include "vtkHierarchicalDataExtractDataSets.h"
#include "vtkHierarchicalDataExtractLevel.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkConvertSelection)
vtkInstantiatorNewMacro(vtkExtractArraysOverTime)
vtkInstantiatorNewMacro(vtkExtractBlock)
vtkInstantiatorNewMacro(vtkExtractCells)
vtkInstantiatorNewMacro(vtkExtractDataOverTime)
vtkInstantiatorNewMacro(vtkExtractDataSets)
vtkInstantiatorNewMacro(vtkExtractEdges)
vtkInstantiatorNewMacro(vtkExtractGeometry)
vtkInstantiatorNewMacro(vtkExtractGrid)
vtkInstantiatorNewMacro(vtkExtractLevel)
vtkInstantiatorNewMacro(vtkExtractPolyDataGeometry)
vtkInstantiatorNewMacro(vtkExtractRectilinearGrid)
vtkInstantiatorNewMacro(vtkExtractSelectedBlock)
vtkInstantiatorNewMacro(vtkExtractSelectedFrustum)
vtkInstantiatorNewMacro(vtkExtractSelectedIds)
vtkInstantiatorNewMacro(vtkExtractSelectedLocations)
vtkInstantiatorNewMacro(vtkExtractSelectedPolyDataIds)
vtkInstantiatorNewMacro(vtkExtractSelectedRows)
vtkInstantiatorNewMacro(vtkExtractSelectedThresholds)
vtkInstantiatorNewMacro(vtkExtractSelection)
vtkInstantiatorNewMacro(vtkExtractTemporalFieldData)
vtkInstantiatorNewMacro(vtkExtractTensorComponents)
vtkInstantiatorNewMacro(vtkExtractUnstructuredGrid)
vtkInstantiatorNewMacro(vtkExtractVectorComponents)
vtkInstantiatorNewMacro(vtkProbeSelectedLocations)
vtkInstantiatorNewMacro(vtkHierarchicalDataExtractDataSets)
vtkInstantiatorNewMacro(vtkHierarchicalDataExtractLevel)



void vtkFiltersExtractionInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkConvertSelection", vtkInstantiatorvtkConvertSelectionNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractArraysOverTime", vtkInstantiatorvtkExtractArraysOverTimeNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractBlock", vtkInstantiatorvtkExtractBlockNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractCells", vtkInstantiatorvtkExtractCellsNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractDataOverTime", vtkInstantiatorvtkExtractDataOverTimeNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractDataSets", vtkInstantiatorvtkExtractDataSetsNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractEdges", vtkInstantiatorvtkExtractEdgesNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractGeometry", vtkInstantiatorvtkExtractGeometryNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractGrid", vtkInstantiatorvtkExtractGridNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractLevel", vtkInstantiatorvtkExtractLevelNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractPolyDataGeometry", vtkInstantiatorvtkExtractPolyDataGeometryNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractRectilinearGrid", vtkInstantiatorvtkExtractRectilinearGridNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractSelectedBlock", vtkInstantiatorvtkExtractSelectedBlockNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractSelectedFrustum", vtkInstantiatorvtkExtractSelectedFrustumNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractSelectedIds", vtkInstantiatorvtkExtractSelectedIdsNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractSelectedLocations", vtkInstantiatorvtkExtractSelectedLocationsNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractSelectedPolyDataIds", vtkInstantiatorvtkExtractSelectedPolyDataIdsNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractSelectedRows", vtkInstantiatorvtkExtractSelectedRowsNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractSelectedThresholds", vtkInstantiatorvtkExtractSelectedThresholdsNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractSelection", vtkInstantiatorvtkExtractSelectionNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractTemporalFieldData", vtkInstantiatorvtkExtractTemporalFieldDataNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractTensorComponents", vtkInstantiatorvtkExtractTensorComponentsNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractUnstructuredGrid", vtkInstantiatorvtkExtractUnstructuredGridNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractVectorComponents", vtkInstantiatorvtkExtractVectorComponentsNew);
  vtkInstantiator::RegisterInstantiator("vtkProbeSelectedLocations", vtkInstantiatorvtkProbeSelectedLocationsNew);
  vtkInstantiator::RegisterInstantiator("vtkHierarchicalDataExtractDataSets", vtkInstantiatorvtkHierarchicalDataExtractDataSetsNew);
  vtkInstantiator::RegisterInstantiator("vtkHierarchicalDataExtractLevel", vtkInstantiatorvtkHierarchicalDataExtractLevelNew);


}

void vtkFiltersExtractionInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkConvertSelection", vtkInstantiatorvtkConvertSelectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractArraysOverTime", vtkInstantiatorvtkExtractArraysOverTimeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractBlock", vtkInstantiatorvtkExtractBlockNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractCells", vtkInstantiatorvtkExtractCellsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractDataOverTime", vtkInstantiatorvtkExtractDataOverTimeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractDataSets", vtkInstantiatorvtkExtractDataSetsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractEdges", vtkInstantiatorvtkExtractEdgesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractGeometry", vtkInstantiatorvtkExtractGeometryNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractGrid", vtkInstantiatorvtkExtractGridNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractLevel", vtkInstantiatorvtkExtractLevelNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractPolyDataGeometry", vtkInstantiatorvtkExtractPolyDataGeometryNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractRectilinearGrid", vtkInstantiatorvtkExtractRectilinearGridNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractSelectedBlock", vtkInstantiatorvtkExtractSelectedBlockNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractSelectedFrustum", vtkInstantiatorvtkExtractSelectedFrustumNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractSelectedIds", vtkInstantiatorvtkExtractSelectedIdsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractSelectedLocations", vtkInstantiatorvtkExtractSelectedLocationsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractSelectedPolyDataIds", vtkInstantiatorvtkExtractSelectedPolyDataIdsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractSelectedRows", vtkInstantiatorvtkExtractSelectedRowsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractSelectedThresholds", vtkInstantiatorvtkExtractSelectedThresholdsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractSelection", vtkInstantiatorvtkExtractSelectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractTemporalFieldData", vtkInstantiatorvtkExtractTemporalFieldDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractTensorComponents", vtkInstantiatorvtkExtractTensorComponentsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractUnstructuredGrid", vtkInstantiatorvtkExtractUnstructuredGridNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractVectorComponents", vtkInstantiatorvtkExtractVectorComponentsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProbeSelectedLocations", vtkInstantiatorvtkProbeSelectedLocationsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHierarchicalDataExtractDataSets", vtkInstantiatorvtkHierarchicalDataExtractDataSetsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHierarchicalDataExtractLevel", vtkInstantiatorvtkHierarchicalDataExtractLevelNew);


}

vtkFiltersExtractionInstantiator::vtkFiltersExtractionInstantiator()
{
  if(++vtkFiltersExtractionInstantiator::Count == 1)
    {
    vtkFiltersExtractionInstantiator::ClassInitialize();
    }
}

vtkFiltersExtractionInstantiator::~vtkFiltersExtractionInstantiator()
{
  if(--vtkFiltersExtractionInstantiator::Count == 0)
    {
    vtkFiltersExtractionInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkFiltersExtractionInstantiator::Count;
