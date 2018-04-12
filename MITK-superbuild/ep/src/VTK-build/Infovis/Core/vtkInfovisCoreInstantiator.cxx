#include "vtkInfovisCoreInstantiator.h"
#include "vtkAddMembershipArray.h"
#include "vtkAdjacencyMatrixToEdgeTable.h"
#include "vtkArrayNorm.h"
#include "vtkArrayToTable.h"
#include "vtkCollapseGraph.h"
#include "vtkCollapseVerticesByArray.h"
#include "vtkDataObjectToTable.h"
#include "vtkDotProductSimilarity.h"
#include "vtkExtractSelectedTree.h"
#include "vtkEdgeCenters.h"
#include "vtkExpandSelectedGraph.h"
#include "vtkExtractSelectedGraph.h"
#include "vtkGenerateIndexArray.h"
#include "vtkGraphHierarchicalBundleEdges.h"
#include "vtkGroupLeafVertices.h"
#include "vtkMergeColumns.h"
#include "vtkMergeGraphs.h"
#include "vtkMergeTables.h"
#include "vtkMutableGraphHelper.h"
#include "vtkNetworkHierarchy.h"
#include "vtkPipelineGraphSource.h"
#include "vtkPruneTreeFilter.h"
#include "vtkRandomGraphSource.h"
#include "vtkReduceTable.h"
#include "vtkRemoveIsolatedVertices.h"
#include "vtkSparseArrayToTable.h"
#include "vtkStreamGraph.h"
#include "vtkStringToCategory.h"
#include "vtkStringToNumeric.h"
#include "vtkTableToArray.h"
#include "vtkTableToGraph.h"
#include "vtkTableToSparseArray.h"
#include "vtkTableToTreeFilter.h"
#include "vtkThresholdGraph.h"
#include "vtkThresholdTable.h"
#include "vtkTransferAttributes.h"
#include "vtkTransposeMatrix.h"
#include "vtkTreeFieldAggregator.h"
#include "vtkTreeDifferenceFilter.h"
#include "vtkTreeLevelsFilter.h"
#include "vtkVertexDegree.h"
#include "vtkRemoveHiddenData.h"
#include "vtkKCoreDecomposition.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkAddMembershipArray)
vtkInstantiatorNewMacro(vtkAdjacencyMatrixToEdgeTable)
vtkInstantiatorNewMacro(vtkArrayNorm)
vtkInstantiatorNewMacro(vtkArrayToTable)
vtkInstantiatorNewMacro(vtkCollapseGraph)
vtkInstantiatorNewMacro(vtkCollapseVerticesByArray)
vtkInstantiatorNewMacro(vtkDataObjectToTable)
vtkInstantiatorNewMacro(vtkDotProductSimilarity)
vtkInstantiatorNewMacro(vtkExtractSelectedTree)
vtkInstantiatorNewMacro(vtkEdgeCenters)
vtkInstantiatorNewMacro(vtkExpandSelectedGraph)
vtkInstantiatorNewMacro(vtkExtractSelectedGraph)
vtkInstantiatorNewMacro(vtkGenerateIndexArray)
vtkInstantiatorNewMacro(vtkGraphHierarchicalBundleEdges)
vtkInstantiatorNewMacro(vtkGroupLeafVertices)
vtkInstantiatorNewMacro(vtkMergeColumns)
vtkInstantiatorNewMacro(vtkMergeGraphs)
vtkInstantiatorNewMacro(vtkMergeTables)
vtkInstantiatorNewMacro(vtkMutableGraphHelper)
vtkInstantiatorNewMacro(vtkNetworkHierarchy)
vtkInstantiatorNewMacro(vtkPipelineGraphSource)
vtkInstantiatorNewMacro(vtkPruneTreeFilter)
vtkInstantiatorNewMacro(vtkRandomGraphSource)
vtkInstantiatorNewMacro(vtkReduceTable)
vtkInstantiatorNewMacro(vtkRemoveIsolatedVertices)
vtkInstantiatorNewMacro(vtkSparseArrayToTable)
vtkInstantiatorNewMacro(vtkStreamGraph)
vtkInstantiatorNewMacro(vtkStringToCategory)
vtkInstantiatorNewMacro(vtkStringToNumeric)
vtkInstantiatorNewMacro(vtkTableToArray)
vtkInstantiatorNewMacro(vtkTableToGraph)
vtkInstantiatorNewMacro(vtkTableToSparseArray)
vtkInstantiatorNewMacro(vtkTableToTreeFilter)
vtkInstantiatorNewMacro(vtkThresholdGraph)
vtkInstantiatorNewMacro(vtkThresholdTable)
vtkInstantiatorNewMacro(vtkTransferAttributes)
vtkInstantiatorNewMacro(vtkTransposeMatrix)
vtkInstantiatorNewMacro(vtkTreeFieldAggregator)
vtkInstantiatorNewMacro(vtkTreeDifferenceFilter)
vtkInstantiatorNewMacro(vtkTreeLevelsFilter)
vtkInstantiatorNewMacro(vtkVertexDegree)
vtkInstantiatorNewMacro(vtkRemoveHiddenData)
vtkInstantiatorNewMacro(vtkKCoreDecomposition)



void vtkInfovisCoreInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkAddMembershipArray", vtkInstantiatorvtkAddMembershipArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkAdjacencyMatrixToEdgeTable", vtkInstantiatorvtkAdjacencyMatrixToEdgeTableNew);
  vtkInstantiator::RegisterInstantiator("vtkArrayNorm", vtkInstantiatorvtkArrayNormNew);
  vtkInstantiator::RegisterInstantiator("vtkArrayToTable", vtkInstantiatorvtkArrayToTableNew);
  vtkInstantiator::RegisterInstantiator("vtkCollapseGraph", vtkInstantiatorvtkCollapseGraphNew);
  vtkInstantiator::RegisterInstantiator("vtkCollapseVerticesByArray", vtkInstantiatorvtkCollapseVerticesByArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkDataObjectToTable", vtkInstantiatorvtkDataObjectToTableNew);
  vtkInstantiator::RegisterInstantiator("vtkDotProductSimilarity", vtkInstantiatorvtkDotProductSimilarityNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractSelectedTree", vtkInstantiatorvtkExtractSelectedTreeNew);
  vtkInstantiator::RegisterInstantiator("vtkEdgeCenters", vtkInstantiatorvtkEdgeCentersNew);
  vtkInstantiator::RegisterInstantiator("vtkExpandSelectedGraph", vtkInstantiatorvtkExpandSelectedGraphNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractSelectedGraph", vtkInstantiatorvtkExtractSelectedGraphNew);
  vtkInstantiator::RegisterInstantiator("vtkGenerateIndexArray", vtkInstantiatorvtkGenerateIndexArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkGraphHierarchicalBundleEdges", vtkInstantiatorvtkGraphHierarchicalBundleEdgesNew);
  vtkInstantiator::RegisterInstantiator("vtkGroupLeafVertices", vtkInstantiatorvtkGroupLeafVerticesNew);
  vtkInstantiator::RegisterInstantiator("vtkMergeColumns", vtkInstantiatorvtkMergeColumnsNew);
  vtkInstantiator::RegisterInstantiator("vtkMergeGraphs", vtkInstantiatorvtkMergeGraphsNew);
  vtkInstantiator::RegisterInstantiator("vtkMergeTables", vtkInstantiatorvtkMergeTablesNew);
  vtkInstantiator::RegisterInstantiator("vtkMutableGraphHelper", vtkInstantiatorvtkMutableGraphHelperNew);
  vtkInstantiator::RegisterInstantiator("vtkNetworkHierarchy", vtkInstantiatorvtkNetworkHierarchyNew);
  vtkInstantiator::RegisterInstantiator("vtkPipelineGraphSource", vtkInstantiatorvtkPipelineGraphSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkPruneTreeFilter", vtkInstantiatorvtkPruneTreeFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkRandomGraphSource", vtkInstantiatorvtkRandomGraphSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkReduceTable", vtkInstantiatorvtkReduceTableNew);
  vtkInstantiator::RegisterInstantiator("vtkRemoveIsolatedVertices", vtkInstantiatorvtkRemoveIsolatedVerticesNew);
  vtkInstantiator::RegisterInstantiator("vtkSparseArrayToTable", vtkInstantiatorvtkSparseArrayToTableNew);
  vtkInstantiator::RegisterInstantiator("vtkStreamGraph", vtkInstantiatorvtkStreamGraphNew);
  vtkInstantiator::RegisterInstantiator("vtkStringToCategory", vtkInstantiatorvtkStringToCategoryNew);
  vtkInstantiator::RegisterInstantiator("vtkStringToNumeric", vtkInstantiatorvtkStringToNumericNew);
  vtkInstantiator::RegisterInstantiator("vtkTableToArray", vtkInstantiatorvtkTableToArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkTableToGraph", vtkInstantiatorvtkTableToGraphNew);
  vtkInstantiator::RegisterInstantiator("vtkTableToSparseArray", vtkInstantiatorvtkTableToSparseArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkTableToTreeFilter", vtkInstantiatorvtkTableToTreeFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkThresholdGraph", vtkInstantiatorvtkThresholdGraphNew);
  vtkInstantiator::RegisterInstantiator("vtkThresholdTable", vtkInstantiatorvtkThresholdTableNew);
  vtkInstantiator::RegisterInstantiator("vtkTransferAttributes", vtkInstantiatorvtkTransferAttributesNew);
  vtkInstantiator::RegisterInstantiator("vtkTransposeMatrix", vtkInstantiatorvtkTransposeMatrixNew);
  vtkInstantiator::RegisterInstantiator("vtkTreeFieldAggregator", vtkInstantiatorvtkTreeFieldAggregatorNew);
  vtkInstantiator::RegisterInstantiator("vtkTreeDifferenceFilter", vtkInstantiatorvtkTreeDifferenceFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkTreeLevelsFilter", vtkInstantiatorvtkTreeLevelsFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkVertexDegree", vtkInstantiatorvtkVertexDegreeNew);
  vtkInstantiator::RegisterInstantiator("vtkRemoveHiddenData", vtkInstantiatorvtkRemoveHiddenDataNew);
  vtkInstantiator::RegisterInstantiator("vtkKCoreDecomposition", vtkInstantiatorvtkKCoreDecompositionNew);


}

void vtkInfovisCoreInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkAddMembershipArray", vtkInstantiatorvtkAddMembershipArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAdjacencyMatrixToEdgeTable", vtkInstantiatorvtkAdjacencyMatrixToEdgeTableNew);
  vtkInstantiator::UnRegisterInstantiator("vtkArrayNorm", vtkInstantiatorvtkArrayNormNew);
  vtkInstantiator::UnRegisterInstantiator("vtkArrayToTable", vtkInstantiatorvtkArrayToTableNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCollapseGraph", vtkInstantiatorvtkCollapseGraphNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCollapseVerticesByArray", vtkInstantiatorvtkCollapseVerticesByArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataObjectToTable", vtkInstantiatorvtkDataObjectToTableNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDotProductSimilarity", vtkInstantiatorvtkDotProductSimilarityNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractSelectedTree", vtkInstantiatorvtkExtractSelectedTreeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkEdgeCenters", vtkInstantiatorvtkEdgeCentersNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExpandSelectedGraph", vtkInstantiatorvtkExpandSelectedGraphNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractSelectedGraph", vtkInstantiatorvtkExtractSelectedGraphNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGenerateIndexArray", vtkInstantiatorvtkGenerateIndexArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGraphHierarchicalBundleEdges", vtkInstantiatorvtkGraphHierarchicalBundleEdgesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGroupLeafVertices", vtkInstantiatorvtkGroupLeafVerticesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMergeColumns", vtkInstantiatorvtkMergeColumnsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMergeGraphs", vtkInstantiatorvtkMergeGraphsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMergeTables", vtkInstantiatorvtkMergeTablesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMutableGraphHelper", vtkInstantiatorvtkMutableGraphHelperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkNetworkHierarchy", vtkInstantiatorvtkNetworkHierarchyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPipelineGraphSource", vtkInstantiatorvtkPipelineGraphSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPruneTreeFilter", vtkInstantiatorvtkPruneTreeFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRandomGraphSource", vtkInstantiatorvtkRandomGraphSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkReduceTable", vtkInstantiatorvtkReduceTableNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRemoveIsolatedVertices", vtkInstantiatorvtkRemoveIsolatedVerticesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSparseArrayToTable", vtkInstantiatorvtkSparseArrayToTableNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStreamGraph", vtkInstantiatorvtkStreamGraphNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStringToCategory", vtkInstantiatorvtkStringToCategoryNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStringToNumeric", vtkInstantiatorvtkStringToNumericNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTableToArray", vtkInstantiatorvtkTableToArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTableToGraph", vtkInstantiatorvtkTableToGraphNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTableToSparseArray", vtkInstantiatorvtkTableToSparseArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTableToTreeFilter", vtkInstantiatorvtkTableToTreeFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkThresholdGraph", vtkInstantiatorvtkThresholdGraphNew);
  vtkInstantiator::UnRegisterInstantiator("vtkThresholdTable", vtkInstantiatorvtkThresholdTableNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTransferAttributes", vtkInstantiatorvtkTransferAttributesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTransposeMatrix", vtkInstantiatorvtkTransposeMatrixNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTreeFieldAggregator", vtkInstantiatorvtkTreeFieldAggregatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTreeDifferenceFilter", vtkInstantiatorvtkTreeDifferenceFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTreeLevelsFilter", vtkInstantiatorvtkTreeLevelsFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVertexDegree", vtkInstantiatorvtkVertexDegreeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRemoveHiddenData", vtkInstantiatorvtkRemoveHiddenDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkKCoreDecomposition", vtkInstantiatorvtkKCoreDecompositionNew);


}

vtkInfovisCoreInstantiator::vtkInfovisCoreInstantiator()
{
  if(++vtkInfovisCoreInstantiator::Count == 1)
    {
    vtkInfovisCoreInstantiator::ClassInitialize();
    }
}

vtkInfovisCoreInstantiator::~vtkInfovisCoreInstantiator()
{
  if(--vtkInfovisCoreInstantiator::Count == 0)
    {
    vtkInfovisCoreInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkInfovisCoreInstantiator::Count;
