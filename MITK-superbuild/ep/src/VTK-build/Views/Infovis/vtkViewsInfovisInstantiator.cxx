#include "vtkViewsInfovisInstantiator.h"
#include "vtkApplyColors.h"
#include "vtkApplyIcons.h"
#include "vtkDendrogramItem.h"
#include "vtkGraphItem.h"
#include "vtkGraphLayoutView.h"
#include "vtkHeatmapItem.h"
#include "vtkHierarchicalGraphPipeline.h"
#include "vtkHierarchicalGraphView.h"
#include "vtkIcicleView.h"
#include "vtkInteractorStyleAreaSelectHover.h"
#include "vtkInteractorStyleTreeMapHover.h"
#include "vtkParallelCoordinatesHistogramRepresentation.h"
#include "vtkParallelCoordinatesRepresentation.h"
#include "vtkParallelCoordinatesView.h"
#include "vtkRenderedGraphRepresentation.h"
#include "vtkRenderedHierarchyRepresentation.h"
#include "vtkRenderedRepresentation.h"
#include "vtkRenderedSurfaceRepresentation.h"
#include "vtkRenderedTreeAreaRepresentation.h"
#include "vtkRenderView.h"
#include "vtkSCurveSpline.h"
#include "vtkTanglegramItem.h"
#include "vtkTreeAreaView.h"
#include "vtkTreeHeatmapItem.h"
#include "vtkTreeMapView.h"
#include "vtkTreeRingView.h"
#include "vtkViewUpdater.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkApplyColors)
vtkInstantiatorNewMacro(vtkApplyIcons)
vtkInstantiatorNewMacro(vtkDendrogramItem)
vtkInstantiatorNewMacro(vtkGraphItem)
vtkInstantiatorNewMacro(vtkGraphLayoutView)
vtkInstantiatorNewMacro(vtkHeatmapItem)
vtkInstantiatorNewMacro(vtkHierarchicalGraphPipeline)
vtkInstantiatorNewMacro(vtkHierarchicalGraphView)
vtkInstantiatorNewMacro(vtkIcicleView)
vtkInstantiatorNewMacro(vtkInteractorStyleAreaSelectHover)
vtkInstantiatorNewMacro(vtkInteractorStyleTreeMapHover)
vtkInstantiatorNewMacro(vtkParallelCoordinatesHistogramRepresentation)
vtkInstantiatorNewMacro(vtkParallelCoordinatesRepresentation)
vtkInstantiatorNewMacro(vtkParallelCoordinatesView)
vtkInstantiatorNewMacro(vtkRenderedGraphRepresentation)
vtkInstantiatorNewMacro(vtkRenderedHierarchyRepresentation)
vtkInstantiatorNewMacro(vtkRenderedRepresentation)
vtkInstantiatorNewMacro(vtkRenderedSurfaceRepresentation)
vtkInstantiatorNewMacro(vtkRenderedTreeAreaRepresentation)
vtkInstantiatorNewMacro(vtkRenderView)
vtkInstantiatorNewMacro(vtkSCurveSpline)
vtkInstantiatorNewMacro(vtkTanglegramItem)
vtkInstantiatorNewMacro(vtkTreeAreaView)
vtkInstantiatorNewMacro(vtkTreeHeatmapItem)
vtkInstantiatorNewMacro(vtkTreeMapView)
vtkInstantiatorNewMacro(vtkTreeRingView)
vtkInstantiatorNewMacro(vtkViewUpdater)



void vtkViewsInfovisInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkApplyColors", vtkInstantiatorvtkApplyColorsNew);
  vtkInstantiator::RegisterInstantiator("vtkApplyIcons", vtkInstantiatorvtkApplyIconsNew);
  vtkInstantiator::RegisterInstantiator("vtkDendrogramItem", vtkInstantiatorvtkDendrogramItemNew);
  vtkInstantiator::RegisterInstantiator("vtkGraphItem", vtkInstantiatorvtkGraphItemNew);
  vtkInstantiator::RegisterInstantiator("vtkGraphLayoutView", vtkInstantiatorvtkGraphLayoutViewNew);
  vtkInstantiator::RegisterInstantiator("vtkHeatmapItem", vtkInstantiatorvtkHeatmapItemNew);
  vtkInstantiator::RegisterInstantiator("vtkHierarchicalGraphPipeline", vtkInstantiatorvtkHierarchicalGraphPipelineNew);
  vtkInstantiator::RegisterInstantiator("vtkHierarchicalGraphView", vtkInstantiatorvtkHierarchicalGraphViewNew);
  vtkInstantiator::RegisterInstantiator("vtkIcicleView", vtkInstantiatorvtkIcicleViewNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleAreaSelectHover", vtkInstantiatorvtkInteractorStyleAreaSelectHoverNew);
  vtkInstantiator::RegisterInstantiator("vtkInteractorStyleTreeMapHover", vtkInstantiatorvtkInteractorStyleTreeMapHoverNew);
  vtkInstantiator::RegisterInstantiator("vtkParallelCoordinatesHistogramRepresentation", vtkInstantiatorvtkParallelCoordinatesHistogramRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkParallelCoordinatesRepresentation", vtkInstantiatorvtkParallelCoordinatesRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkParallelCoordinatesView", vtkInstantiatorvtkParallelCoordinatesViewNew);
  vtkInstantiator::RegisterInstantiator("vtkRenderedGraphRepresentation", vtkInstantiatorvtkRenderedGraphRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkRenderedHierarchyRepresentation", vtkInstantiatorvtkRenderedHierarchyRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkRenderedRepresentation", vtkInstantiatorvtkRenderedRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkRenderedSurfaceRepresentation", vtkInstantiatorvtkRenderedSurfaceRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkRenderedTreeAreaRepresentation", vtkInstantiatorvtkRenderedTreeAreaRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkRenderView", vtkInstantiatorvtkRenderViewNew);
  vtkInstantiator::RegisterInstantiator("vtkSCurveSpline", vtkInstantiatorvtkSCurveSplineNew);
  vtkInstantiator::RegisterInstantiator("vtkTanglegramItem", vtkInstantiatorvtkTanglegramItemNew);
  vtkInstantiator::RegisterInstantiator("vtkTreeAreaView", vtkInstantiatorvtkTreeAreaViewNew);
  vtkInstantiator::RegisterInstantiator("vtkTreeHeatmapItem", vtkInstantiatorvtkTreeHeatmapItemNew);
  vtkInstantiator::RegisterInstantiator("vtkTreeMapView", vtkInstantiatorvtkTreeMapViewNew);
  vtkInstantiator::RegisterInstantiator("vtkTreeRingView", vtkInstantiatorvtkTreeRingViewNew);
  vtkInstantiator::RegisterInstantiator("vtkViewUpdater", vtkInstantiatorvtkViewUpdaterNew);


}

void vtkViewsInfovisInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkApplyColors", vtkInstantiatorvtkApplyColorsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkApplyIcons", vtkInstantiatorvtkApplyIconsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDendrogramItem", vtkInstantiatorvtkDendrogramItemNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGraphItem", vtkInstantiatorvtkGraphItemNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGraphLayoutView", vtkInstantiatorvtkGraphLayoutViewNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHeatmapItem", vtkInstantiatorvtkHeatmapItemNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHierarchicalGraphPipeline", vtkInstantiatorvtkHierarchicalGraphPipelineNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHierarchicalGraphView", vtkInstantiatorvtkHierarchicalGraphViewNew);
  vtkInstantiator::UnRegisterInstantiator("vtkIcicleView", vtkInstantiatorvtkIcicleViewNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleAreaSelectHover", vtkInstantiatorvtkInteractorStyleAreaSelectHoverNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInteractorStyleTreeMapHover", vtkInstantiatorvtkInteractorStyleTreeMapHoverNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParallelCoordinatesHistogramRepresentation", vtkInstantiatorvtkParallelCoordinatesHistogramRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParallelCoordinatesRepresentation", vtkInstantiatorvtkParallelCoordinatesRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParallelCoordinatesView", vtkInstantiatorvtkParallelCoordinatesViewNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRenderedGraphRepresentation", vtkInstantiatorvtkRenderedGraphRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRenderedHierarchyRepresentation", vtkInstantiatorvtkRenderedHierarchyRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRenderedRepresentation", vtkInstantiatorvtkRenderedRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRenderedSurfaceRepresentation", vtkInstantiatorvtkRenderedSurfaceRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRenderedTreeAreaRepresentation", vtkInstantiatorvtkRenderedTreeAreaRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRenderView", vtkInstantiatorvtkRenderViewNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSCurveSpline", vtkInstantiatorvtkSCurveSplineNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTanglegramItem", vtkInstantiatorvtkTanglegramItemNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTreeAreaView", vtkInstantiatorvtkTreeAreaViewNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTreeHeatmapItem", vtkInstantiatorvtkTreeHeatmapItemNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTreeMapView", vtkInstantiatorvtkTreeMapViewNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTreeRingView", vtkInstantiatorvtkTreeRingViewNew);
  vtkInstantiator::UnRegisterInstantiator("vtkViewUpdater", vtkInstantiatorvtkViewUpdaterNew);


}

vtkViewsInfovisInstantiator::vtkViewsInfovisInstantiator()
{
  if(++vtkViewsInfovisInstantiator::Count == 1)
    {
    vtkViewsInfovisInstantiator::ClassInitialize();
    }
}

vtkViewsInfovisInstantiator::~vtkViewsInfovisInstantiator()
{
  if(--vtkViewsInfovisInstantiator::Count == 0)
    {
    vtkViewsInfovisInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkViewsInfovisInstantiator::Count;
