#include "vtkInfovisLayoutInstantiator.h"
#include "vtkArcParallelEdgeStrategy.h"
#include "vtkAreaLayout.h"
#include "vtkAssignCoordinates.h"
#include "vtkAssignCoordinatesLayoutStrategy.h"
#include "vtkAttributeClustering2DLayoutStrategy.h"
#include "vtkBoxLayoutStrategy.h"
#include "vtkCirclePackFrontChainLayoutStrategy.h"
#include "vtkCirclePackLayout.h"
#include "vtkCirclePackToPolyData.h"
#include "vtkCircularLayoutStrategy.h"
#include "vtkClustering2DLayoutStrategy.h"
#include "vtkCommunity2DLayoutStrategy.h"
#include "vtkConeLayoutStrategy.h"
#include "vtkConstrained2DLayoutStrategy.h"
#include "vtkCosmicTreeLayoutStrategy.h"
#include "vtkEdgeLayout.h"
#include "vtkFast2DLayoutStrategy.h"
#include "vtkForceDirectedLayoutStrategy.h"
#include "vtkGeoEdgeStrategy.h"
#include "vtkGeoMath.h"
#include "vtkGraphLayout.h"
#include "vtkIncrementalForceLayout.h"
#include "vtkPassThroughEdgeStrategy.h"
#include "vtkPassThroughLayoutStrategy.h"
#include "vtkPerturbCoincidentVertices.h"
#include "vtkRandomLayoutStrategy.h"
#include "vtkSimple2DLayoutStrategy.h"
#include "vtkSimple3DCirclesStrategy.h"
#include "vtkSliceAndDiceLayoutStrategy.h"
#include "vtkSpanTreeLayoutStrategy.h"
#include "vtkSplineGraphEdges.h"
#include "vtkSquarifyLayoutStrategy.h"
#include "vtkStackedTreeLayoutStrategy.h"
#include "vtkTreeLayoutStrategy.h"
#include "vtkTreeMapLayout.h"
#include "vtkTreeMapToPolyData.h"
#include "vtkTreeOrbitLayoutStrategy.h"
#include "vtkTreeRingToPolyData.h"
#include "vtkKCoreLayout.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkArcParallelEdgeStrategy)
vtkInstantiatorNewMacro(vtkAreaLayout)
vtkInstantiatorNewMacro(vtkAssignCoordinates)
vtkInstantiatorNewMacro(vtkAssignCoordinatesLayoutStrategy)
vtkInstantiatorNewMacro(vtkAttributeClustering2DLayoutStrategy)
vtkInstantiatorNewMacro(vtkBoxLayoutStrategy)
vtkInstantiatorNewMacro(vtkCirclePackFrontChainLayoutStrategy)
vtkInstantiatorNewMacro(vtkCirclePackLayout)
vtkInstantiatorNewMacro(vtkCirclePackToPolyData)
vtkInstantiatorNewMacro(vtkCircularLayoutStrategy)
vtkInstantiatorNewMacro(vtkClustering2DLayoutStrategy)
vtkInstantiatorNewMacro(vtkCommunity2DLayoutStrategy)
vtkInstantiatorNewMacro(vtkConeLayoutStrategy)
vtkInstantiatorNewMacro(vtkConstrained2DLayoutStrategy)
vtkInstantiatorNewMacro(vtkCosmicTreeLayoutStrategy)
vtkInstantiatorNewMacro(vtkEdgeLayout)
vtkInstantiatorNewMacro(vtkFast2DLayoutStrategy)
vtkInstantiatorNewMacro(vtkForceDirectedLayoutStrategy)
vtkInstantiatorNewMacro(vtkGeoEdgeStrategy)
vtkInstantiatorNewMacro(vtkGeoMath)
vtkInstantiatorNewMacro(vtkGraphLayout)
vtkInstantiatorNewMacro(vtkIncrementalForceLayout)
vtkInstantiatorNewMacro(vtkPassThroughEdgeStrategy)
vtkInstantiatorNewMacro(vtkPassThroughLayoutStrategy)
vtkInstantiatorNewMacro(vtkPerturbCoincidentVertices)
vtkInstantiatorNewMacro(vtkRandomLayoutStrategy)
vtkInstantiatorNewMacro(vtkSimple2DLayoutStrategy)
vtkInstantiatorNewMacro(vtkSimple3DCirclesStrategy)
vtkInstantiatorNewMacro(vtkSliceAndDiceLayoutStrategy)
vtkInstantiatorNewMacro(vtkSpanTreeLayoutStrategy)
vtkInstantiatorNewMacro(vtkSplineGraphEdges)
vtkInstantiatorNewMacro(vtkSquarifyLayoutStrategy)
vtkInstantiatorNewMacro(vtkStackedTreeLayoutStrategy)
vtkInstantiatorNewMacro(vtkTreeLayoutStrategy)
vtkInstantiatorNewMacro(vtkTreeMapLayout)
vtkInstantiatorNewMacro(vtkTreeMapToPolyData)
vtkInstantiatorNewMacro(vtkTreeOrbitLayoutStrategy)
vtkInstantiatorNewMacro(vtkTreeRingToPolyData)
vtkInstantiatorNewMacro(vtkKCoreLayout)



void vtkInfovisLayoutInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkArcParallelEdgeStrategy", vtkInstantiatorvtkArcParallelEdgeStrategyNew);
  vtkInstantiator::RegisterInstantiator("vtkAreaLayout", vtkInstantiatorvtkAreaLayoutNew);
  vtkInstantiator::RegisterInstantiator("vtkAssignCoordinates", vtkInstantiatorvtkAssignCoordinatesNew);
  vtkInstantiator::RegisterInstantiator("vtkAssignCoordinatesLayoutStrategy", vtkInstantiatorvtkAssignCoordinatesLayoutStrategyNew);
  vtkInstantiator::RegisterInstantiator("vtkAttributeClustering2DLayoutStrategy", vtkInstantiatorvtkAttributeClustering2DLayoutStrategyNew);
  vtkInstantiator::RegisterInstantiator("vtkBoxLayoutStrategy", vtkInstantiatorvtkBoxLayoutStrategyNew);
  vtkInstantiator::RegisterInstantiator("vtkCirclePackFrontChainLayoutStrategy", vtkInstantiatorvtkCirclePackFrontChainLayoutStrategyNew);
  vtkInstantiator::RegisterInstantiator("vtkCirclePackLayout", vtkInstantiatorvtkCirclePackLayoutNew);
  vtkInstantiator::RegisterInstantiator("vtkCirclePackToPolyData", vtkInstantiatorvtkCirclePackToPolyDataNew);
  vtkInstantiator::RegisterInstantiator("vtkCircularLayoutStrategy", vtkInstantiatorvtkCircularLayoutStrategyNew);
  vtkInstantiator::RegisterInstantiator("vtkClustering2DLayoutStrategy", vtkInstantiatorvtkClustering2DLayoutStrategyNew);
  vtkInstantiator::RegisterInstantiator("vtkCommunity2DLayoutStrategy", vtkInstantiatorvtkCommunity2DLayoutStrategyNew);
  vtkInstantiator::RegisterInstantiator("vtkConeLayoutStrategy", vtkInstantiatorvtkConeLayoutStrategyNew);
  vtkInstantiator::RegisterInstantiator("vtkConstrained2DLayoutStrategy", vtkInstantiatorvtkConstrained2DLayoutStrategyNew);
  vtkInstantiator::RegisterInstantiator("vtkCosmicTreeLayoutStrategy", vtkInstantiatorvtkCosmicTreeLayoutStrategyNew);
  vtkInstantiator::RegisterInstantiator("vtkEdgeLayout", vtkInstantiatorvtkEdgeLayoutNew);
  vtkInstantiator::RegisterInstantiator("vtkFast2DLayoutStrategy", vtkInstantiatorvtkFast2DLayoutStrategyNew);
  vtkInstantiator::RegisterInstantiator("vtkForceDirectedLayoutStrategy", vtkInstantiatorvtkForceDirectedLayoutStrategyNew);
  vtkInstantiator::RegisterInstantiator("vtkGeoEdgeStrategy", vtkInstantiatorvtkGeoEdgeStrategyNew);
  vtkInstantiator::RegisterInstantiator("vtkGeoMath", vtkInstantiatorvtkGeoMathNew);
  vtkInstantiator::RegisterInstantiator("vtkGraphLayout", vtkInstantiatorvtkGraphLayoutNew);
  vtkInstantiator::RegisterInstantiator("vtkIncrementalForceLayout", vtkInstantiatorvtkIncrementalForceLayoutNew);
  vtkInstantiator::RegisterInstantiator("vtkPassThroughEdgeStrategy", vtkInstantiatorvtkPassThroughEdgeStrategyNew);
  vtkInstantiator::RegisterInstantiator("vtkPassThroughLayoutStrategy", vtkInstantiatorvtkPassThroughLayoutStrategyNew);
  vtkInstantiator::RegisterInstantiator("vtkPerturbCoincidentVertices", vtkInstantiatorvtkPerturbCoincidentVerticesNew);
  vtkInstantiator::RegisterInstantiator("vtkRandomLayoutStrategy", vtkInstantiatorvtkRandomLayoutStrategyNew);
  vtkInstantiator::RegisterInstantiator("vtkSimple2DLayoutStrategy", vtkInstantiatorvtkSimple2DLayoutStrategyNew);
  vtkInstantiator::RegisterInstantiator("vtkSimple3DCirclesStrategy", vtkInstantiatorvtkSimple3DCirclesStrategyNew);
  vtkInstantiator::RegisterInstantiator("vtkSliceAndDiceLayoutStrategy", vtkInstantiatorvtkSliceAndDiceLayoutStrategyNew);
  vtkInstantiator::RegisterInstantiator("vtkSpanTreeLayoutStrategy", vtkInstantiatorvtkSpanTreeLayoutStrategyNew);
  vtkInstantiator::RegisterInstantiator("vtkSplineGraphEdges", vtkInstantiatorvtkSplineGraphEdgesNew);
  vtkInstantiator::RegisterInstantiator("vtkSquarifyLayoutStrategy", vtkInstantiatorvtkSquarifyLayoutStrategyNew);
  vtkInstantiator::RegisterInstantiator("vtkStackedTreeLayoutStrategy", vtkInstantiatorvtkStackedTreeLayoutStrategyNew);
  vtkInstantiator::RegisterInstantiator("vtkTreeLayoutStrategy", vtkInstantiatorvtkTreeLayoutStrategyNew);
  vtkInstantiator::RegisterInstantiator("vtkTreeMapLayout", vtkInstantiatorvtkTreeMapLayoutNew);
  vtkInstantiator::RegisterInstantiator("vtkTreeMapToPolyData", vtkInstantiatorvtkTreeMapToPolyDataNew);
  vtkInstantiator::RegisterInstantiator("vtkTreeOrbitLayoutStrategy", vtkInstantiatorvtkTreeOrbitLayoutStrategyNew);
  vtkInstantiator::RegisterInstantiator("vtkTreeRingToPolyData", vtkInstantiatorvtkTreeRingToPolyDataNew);
  vtkInstantiator::RegisterInstantiator("vtkKCoreLayout", vtkInstantiatorvtkKCoreLayoutNew);


}

void vtkInfovisLayoutInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkArcParallelEdgeStrategy", vtkInstantiatorvtkArcParallelEdgeStrategyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAreaLayout", vtkInstantiatorvtkAreaLayoutNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAssignCoordinates", vtkInstantiatorvtkAssignCoordinatesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAssignCoordinatesLayoutStrategy", vtkInstantiatorvtkAssignCoordinatesLayoutStrategyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAttributeClustering2DLayoutStrategy", vtkInstantiatorvtkAttributeClustering2DLayoutStrategyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBoxLayoutStrategy", vtkInstantiatorvtkBoxLayoutStrategyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCirclePackFrontChainLayoutStrategy", vtkInstantiatorvtkCirclePackFrontChainLayoutStrategyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCirclePackLayout", vtkInstantiatorvtkCirclePackLayoutNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCirclePackToPolyData", vtkInstantiatorvtkCirclePackToPolyDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCircularLayoutStrategy", vtkInstantiatorvtkCircularLayoutStrategyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkClustering2DLayoutStrategy", vtkInstantiatorvtkClustering2DLayoutStrategyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCommunity2DLayoutStrategy", vtkInstantiatorvtkCommunity2DLayoutStrategyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkConeLayoutStrategy", vtkInstantiatorvtkConeLayoutStrategyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkConstrained2DLayoutStrategy", vtkInstantiatorvtkConstrained2DLayoutStrategyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCosmicTreeLayoutStrategy", vtkInstantiatorvtkCosmicTreeLayoutStrategyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkEdgeLayout", vtkInstantiatorvtkEdgeLayoutNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFast2DLayoutStrategy", vtkInstantiatorvtkFast2DLayoutStrategyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkForceDirectedLayoutStrategy", vtkInstantiatorvtkForceDirectedLayoutStrategyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeoEdgeStrategy", vtkInstantiatorvtkGeoEdgeStrategyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeoMath", vtkInstantiatorvtkGeoMathNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGraphLayout", vtkInstantiatorvtkGraphLayoutNew);
  vtkInstantiator::UnRegisterInstantiator("vtkIncrementalForceLayout", vtkInstantiatorvtkIncrementalForceLayoutNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPassThroughEdgeStrategy", vtkInstantiatorvtkPassThroughEdgeStrategyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPassThroughLayoutStrategy", vtkInstantiatorvtkPassThroughLayoutStrategyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPerturbCoincidentVertices", vtkInstantiatorvtkPerturbCoincidentVerticesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRandomLayoutStrategy", vtkInstantiatorvtkRandomLayoutStrategyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSimple2DLayoutStrategy", vtkInstantiatorvtkSimple2DLayoutStrategyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSimple3DCirclesStrategy", vtkInstantiatorvtkSimple3DCirclesStrategyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSliceAndDiceLayoutStrategy", vtkInstantiatorvtkSliceAndDiceLayoutStrategyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSpanTreeLayoutStrategy", vtkInstantiatorvtkSpanTreeLayoutStrategyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSplineGraphEdges", vtkInstantiatorvtkSplineGraphEdgesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSquarifyLayoutStrategy", vtkInstantiatorvtkSquarifyLayoutStrategyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStackedTreeLayoutStrategy", vtkInstantiatorvtkStackedTreeLayoutStrategyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTreeLayoutStrategy", vtkInstantiatorvtkTreeLayoutStrategyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTreeMapLayout", vtkInstantiatorvtkTreeMapLayoutNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTreeMapToPolyData", vtkInstantiatorvtkTreeMapToPolyDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTreeOrbitLayoutStrategy", vtkInstantiatorvtkTreeOrbitLayoutStrategyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTreeRingToPolyData", vtkInstantiatorvtkTreeRingToPolyDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkKCoreLayout", vtkInstantiatorvtkKCoreLayoutNew);


}

vtkInfovisLayoutInstantiator::vtkInfovisLayoutInstantiator()
{
  if(++vtkInfovisLayoutInstantiator::Count == 1)
    {
    vtkInfovisLayoutInstantiator::ClassInitialize();
    }
}

vtkInfovisLayoutInstantiator::~vtkInfovisLayoutInstantiator()
{
  if(--vtkInfovisLayoutInstantiator::Count == 0)
    {
    vtkInfovisLayoutInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkInfovisLayoutInstantiator::Count;
