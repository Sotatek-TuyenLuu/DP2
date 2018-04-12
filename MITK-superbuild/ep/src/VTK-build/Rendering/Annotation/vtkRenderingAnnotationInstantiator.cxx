#include "vtkRenderingAnnotationInstantiator.h"
#include "vtkAnnotatedCubeActor.h"
#include "vtkArcPlotter.h"
#include "vtkAxesActor.h"
#include "vtkAxisActor2D.h"
#include "vtkAxisActor.h"
#include "vtkAxisFollower.h"
#include "vtkBarChartActor.h"
#include "vtkCaptionActor2D.h"
#include "vtkConvexHull2D.h"
#include "vtkCornerAnnotation.h"
#include "vtkCubeAxesActor2D.h"
#include "vtkCubeAxesActor.h"
#include "vtkGraphAnnotationLayersFilter.h"
#include "vtkLeaderActor2D.h"
#include "vtkLegendBoxActor.h"
#include "vtkLegendScaleActor.h"
#include "vtkPieChartActor.h"
#include "vtkPolarAxesActor.h"
#include "vtkProp3DAxisFollower.h"
#include "vtkScalarBarActor.h"
#include "vtkSpiderPlotActor.h"
#include "vtkXYPlotActor.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkAnnotatedCubeActor)
vtkInstantiatorNewMacro(vtkArcPlotter)
vtkInstantiatorNewMacro(vtkAxesActor)
vtkInstantiatorNewMacro(vtkAxisActor2D)
vtkInstantiatorNewMacro(vtkAxisActor)
vtkInstantiatorNewMacro(vtkAxisFollower)
vtkInstantiatorNewMacro(vtkBarChartActor)
vtkInstantiatorNewMacro(vtkCaptionActor2D)
vtkInstantiatorNewMacro(vtkConvexHull2D)
vtkInstantiatorNewMacro(vtkCornerAnnotation)
vtkInstantiatorNewMacro(vtkCubeAxesActor2D)
vtkInstantiatorNewMacro(vtkCubeAxesActor)
vtkInstantiatorNewMacro(vtkGraphAnnotationLayersFilter)
vtkInstantiatorNewMacro(vtkLeaderActor2D)
vtkInstantiatorNewMacro(vtkLegendBoxActor)
vtkInstantiatorNewMacro(vtkLegendScaleActor)
vtkInstantiatorNewMacro(vtkPieChartActor)
vtkInstantiatorNewMacro(vtkPolarAxesActor)
vtkInstantiatorNewMacro(vtkProp3DAxisFollower)
vtkInstantiatorNewMacro(vtkScalarBarActor)
vtkInstantiatorNewMacro(vtkSpiderPlotActor)
vtkInstantiatorNewMacro(vtkXYPlotActor)



void vtkRenderingAnnotationInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkAnnotatedCubeActor", vtkInstantiatorvtkAnnotatedCubeActorNew);
  vtkInstantiator::RegisterInstantiator("vtkArcPlotter", vtkInstantiatorvtkArcPlotterNew);
  vtkInstantiator::RegisterInstantiator("vtkAxesActor", vtkInstantiatorvtkAxesActorNew);
  vtkInstantiator::RegisterInstantiator("vtkAxisActor2D", vtkInstantiatorvtkAxisActor2DNew);
  vtkInstantiator::RegisterInstantiator("vtkAxisActor", vtkInstantiatorvtkAxisActorNew);
  vtkInstantiator::RegisterInstantiator("vtkAxisFollower", vtkInstantiatorvtkAxisFollowerNew);
  vtkInstantiator::RegisterInstantiator("vtkBarChartActor", vtkInstantiatorvtkBarChartActorNew);
  vtkInstantiator::RegisterInstantiator("vtkCaptionActor2D", vtkInstantiatorvtkCaptionActor2DNew);
  vtkInstantiator::RegisterInstantiator("vtkConvexHull2D", vtkInstantiatorvtkConvexHull2DNew);
  vtkInstantiator::RegisterInstantiator("vtkCornerAnnotation", vtkInstantiatorvtkCornerAnnotationNew);
  vtkInstantiator::RegisterInstantiator("vtkCubeAxesActor2D", vtkInstantiatorvtkCubeAxesActor2DNew);
  vtkInstantiator::RegisterInstantiator("vtkCubeAxesActor", vtkInstantiatorvtkCubeAxesActorNew);
  vtkInstantiator::RegisterInstantiator("vtkGraphAnnotationLayersFilter", vtkInstantiatorvtkGraphAnnotationLayersFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkLeaderActor2D", vtkInstantiatorvtkLeaderActor2DNew);
  vtkInstantiator::RegisterInstantiator("vtkLegendBoxActor", vtkInstantiatorvtkLegendBoxActorNew);
  vtkInstantiator::RegisterInstantiator("vtkLegendScaleActor", vtkInstantiatorvtkLegendScaleActorNew);
  vtkInstantiator::RegisterInstantiator("vtkPieChartActor", vtkInstantiatorvtkPieChartActorNew);
  vtkInstantiator::RegisterInstantiator("vtkPolarAxesActor", vtkInstantiatorvtkPolarAxesActorNew);
  vtkInstantiator::RegisterInstantiator("vtkProp3DAxisFollower", vtkInstantiatorvtkProp3DAxisFollowerNew);
  vtkInstantiator::RegisterInstantiator("vtkScalarBarActor", vtkInstantiatorvtkScalarBarActorNew);
  vtkInstantiator::RegisterInstantiator("vtkSpiderPlotActor", vtkInstantiatorvtkSpiderPlotActorNew);
  vtkInstantiator::RegisterInstantiator("vtkXYPlotActor", vtkInstantiatorvtkXYPlotActorNew);


}

void vtkRenderingAnnotationInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkAnnotatedCubeActor", vtkInstantiatorvtkAnnotatedCubeActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkArcPlotter", vtkInstantiatorvtkArcPlotterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAxesActor", vtkInstantiatorvtkAxesActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAxisActor2D", vtkInstantiatorvtkAxisActor2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAxisActor", vtkInstantiatorvtkAxisActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAxisFollower", vtkInstantiatorvtkAxisFollowerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBarChartActor", vtkInstantiatorvtkBarChartActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCaptionActor2D", vtkInstantiatorvtkCaptionActor2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkConvexHull2D", vtkInstantiatorvtkConvexHull2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCornerAnnotation", vtkInstantiatorvtkCornerAnnotationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCubeAxesActor2D", vtkInstantiatorvtkCubeAxesActor2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCubeAxesActor", vtkInstantiatorvtkCubeAxesActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGraphAnnotationLayersFilter", vtkInstantiatorvtkGraphAnnotationLayersFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLeaderActor2D", vtkInstantiatorvtkLeaderActor2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLegendBoxActor", vtkInstantiatorvtkLegendBoxActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLegendScaleActor", vtkInstantiatorvtkLegendScaleActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPieChartActor", vtkInstantiatorvtkPieChartActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPolarAxesActor", vtkInstantiatorvtkPolarAxesActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProp3DAxisFollower", vtkInstantiatorvtkProp3DAxisFollowerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkScalarBarActor", vtkInstantiatorvtkScalarBarActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSpiderPlotActor", vtkInstantiatorvtkSpiderPlotActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXYPlotActor", vtkInstantiatorvtkXYPlotActorNew);


}

vtkRenderingAnnotationInstantiator::vtkRenderingAnnotationInstantiator()
{
  if(++vtkRenderingAnnotationInstantiator::Count == 1)
    {
    vtkRenderingAnnotationInstantiator::ClassInitialize();
    }
}

vtkRenderingAnnotationInstantiator::~vtkRenderingAnnotationInstantiator()
{
  if(--vtkRenderingAnnotationInstantiator::Count == 0)
    {
    vtkRenderingAnnotationInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkRenderingAnnotationInstantiator::Count;
