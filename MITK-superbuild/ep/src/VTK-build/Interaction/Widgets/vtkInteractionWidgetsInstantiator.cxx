#include "vtkInteractionWidgetsInstantiator.h"
#include "vtkAffineRepresentation2D.h"
#include "vtkAffineWidget.h"
#include "vtkAngleRepresentation2D.h"
#include "vtkAngleRepresentation3D.h"
#include "vtkAngleWidget.h"
#include "vtkAxesTransformRepresentation.h"
#include "vtkAxesTransformWidget.h"
#include "vtkBalloonRepresentation.h"
#include "vtkBalloonWidget.h"
#include "vtkBezierContourLineInterpolator.h"
#include "vtkBiDimensionalRepresentation2D.h"
#include "vtkBiDimensionalWidget.h"
#include "vtkBorderRepresentation.h"
#include "vtkBorderWidget.h"
#include "vtkBoundedPlanePointPlacer.h"
#include "vtkBoxRepresentation.h"
#include "vtkBoxWidget2.h"
#include "vtkBoxWidget.h"
#include "vtkBrokenLineWidget.h"
#include "vtkButtonWidget.h"
#include "vtkCameraRepresentation.h"
#include "vtkCameraWidget.h"
#include "vtkCaptionRepresentation.h"
#include "vtkCaptionWidget.h"
#include "vtkCellCentersPointPlacer.h"
#include "vtkCenteredSliderRepresentation.h"
#include "vtkCenteredSliderWidget.h"
#include "vtkCheckerboardRepresentation.h"
#include "vtkCheckerboardWidget.h"
#include "vtkClosedSurfacePointPlacer.h"
#include "vtkConstrainedPointHandleRepresentation.h"
#include "vtkContourWidget.h"
#include "vtkDijkstraImageContourLineInterpolator.h"
#include "vtkDistanceRepresentation2D.h"
#include "vtkDistanceRepresentation3D.h"
#include "vtkDistanceWidget.h"
#include "vtkEllipsoidTensorProbeRepresentation.h"
#include "vtkEvent.h"
#include "vtkFixedSizeHandleRepresentation3D.h"
#include "vtkFocalPlanePointPlacer.h"
#include "vtkHandleWidget.h"
#include "vtkHoverWidget.h"
#include "vtkImageActorPointPlacer.h"
#include "vtkImageCroppingRegionsWidget.h"
#include "vtkImageOrthoPlanes.h"
#include "vtkImagePlaneWidget.h"
#include "vtkImageTracerWidget.h"
#include "vtkImplicitPlaneRepresentation.h"
#include "vtkImplicitPlaneWidget2.h"
#include "vtkImplicitPlaneWidget.h"
#include "vtkLinearContourLineInterpolator.h"
#include "vtkLineRepresentation.h"
#include "vtkLineWidget2.h"
#include "vtkLineWidget.h"
#include "vtkLogoRepresentation.h"
#include "vtkLogoWidget.h"
#include "vtkOrientationMarkerWidget.h"
#include "vtkOrientedGlyphContourRepresentation.h"
#include "vtkOrientedGlyphFocalPlaneContourRepresentation.h"
#include "vtkOrientedPolygonalHandleRepresentation3D.h"
#include "vtkParallelopipedRepresentation.h"
#include "vtkParallelopipedWidget.h"
#include "vtkPlaneWidget.h"
#include "vtkPlaybackRepresentation.h"
#include "vtkPlaybackWidget.h"
#include "vtkPointHandleRepresentation2D.h"
#include "vtkPointHandleRepresentation3D.h"
#include "vtkPointPlacer.h"
#include "vtkPointWidget.h"
#include "vtkPolyDataPointPlacer.h"
#include "vtkPolygonalHandleRepresentation3D.h"
#include "vtkPolygonalSurfaceContourLineInterpolator.h"
#include "vtkPolygonalSurfacePointPlacer.h"
#include "vtkProp3DButtonRepresentation.h"
#include "vtkRectilinearWipeRepresentation.h"
#include "vtkRectilinearWipeWidget.h"
#include "vtkScalarBarRepresentation.h"
#include "vtkScalarBarWidget.h"
#include "vtkSeedRepresentation.h"
#include "vtkSeedWidget.h"
#include "vtkSliderRepresentation2D.h"
#include "vtkSliderRepresentation3D.h"
#include "vtkSliderWidget.h"
#include "vtkSphereHandleRepresentation.h"
#include "vtkSphereRepresentation.h"
#include "vtkSphereWidget2.h"
#include "vtkSphereWidget.h"
#include "vtkSplineRepresentation.h"
#include "vtkSplineWidget2.h"
#include "vtkSplineWidget.h"
#include "vtkTensorProbeWidget.h"
#include "vtkTerrainContourLineInterpolator.h"
#include "vtkTerrainDataPointPlacer.h"
#include "vtkTextRepresentation.h"
#include "vtkTexturedButtonRepresentation2D.h"
#include "vtkTexturedButtonRepresentation.h"
#include "vtkTextWidget.h"
#include "vtkWidgetCallbackMapper.h"
#include "vtkWidgetEvent.h"
#include "vtkWidgetEventTranslator.h"
#include "vtkWidgetSet.h"
#include "vtkXYPlotWidget.h"
#include "vtkResliceCursorLineRepresentation.h"
#include "vtkResliceCursorThickLineRepresentation.h"
#include "vtkResliceCursorWidget.h"
#include "vtkResliceCursorActor.h"
#include "vtkResliceCursorPicker.h"
#include "vtkResliceCursor.h"
#include "vtkResliceCursorPolyDataAlgorithm.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkAffineRepresentation2D)
vtkInstantiatorNewMacro(vtkAffineWidget)
vtkInstantiatorNewMacro(vtkAngleRepresentation2D)
vtkInstantiatorNewMacro(vtkAngleRepresentation3D)
vtkInstantiatorNewMacro(vtkAngleWidget)
vtkInstantiatorNewMacro(vtkAxesTransformRepresentation)
vtkInstantiatorNewMacro(vtkAxesTransformWidget)
vtkInstantiatorNewMacro(vtkBalloonRepresentation)
vtkInstantiatorNewMacro(vtkBalloonWidget)
vtkInstantiatorNewMacro(vtkBezierContourLineInterpolator)
vtkInstantiatorNewMacro(vtkBiDimensionalRepresentation2D)
vtkInstantiatorNewMacro(vtkBiDimensionalWidget)
vtkInstantiatorNewMacro(vtkBorderRepresentation)
vtkInstantiatorNewMacro(vtkBorderWidget)
vtkInstantiatorNewMacro(vtkBoundedPlanePointPlacer)
vtkInstantiatorNewMacro(vtkBoxRepresentation)
vtkInstantiatorNewMacro(vtkBoxWidget2)
vtkInstantiatorNewMacro(vtkBoxWidget)
vtkInstantiatorNewMacro(vtkBrokenLineWidget)
vtkInstantiatorNewMacro(vtkButtonWidget)
vtkInstantiatorNewMacro(vtkCameraRepresentation)
vtkInstantiatorNewMacro(vtkCameraWidget)
vtkInstantiatorNewMacro(vtkCaptionRepresentation)
vtkInstantiatorNewMacro(vtkCaptionWidget)
vtkInstantiatorNewMacro(vtkCellCentersPointPlacer)
vtkInstantiatorNewMacro(vtkCenteredSliderRepresentation)
vtkInstantiatorNewMacro(vtkCenteredSliderWidget)
vtkInstantiatorNewMacro(vtkCheckerboardRepresentation)
vtkInstantiatorNewMacro(vtkCheckerboardWidget)
vtkInstantiatorNewMacro(vtkClosedSurfacePointPlacer)
vtkInstantiatorNewMacro(vtkConstrainedPointHandleRepresentation)
vtkInstantiatorNewMacro(vtkContourWidget)
vtkInstantiatorNewMacro(vtkDijkstraImageContourLineInterpolator)
vtkInstantiatorNewMacro(vtkDistanceRepresentation2D)
vtkInstantiatorNewMacro(vtkDistanceRepresentation3D)
vtkInstantiatorNewMacro(vtkDistanceWidget)
vtkInstantiatorNewMacro(vtkEllipsoidTensorProbeRepresentation)
vtkInstantiatorNewMacro(vtkEvent)
vtkInstantiatorNewMacro(vtkFixedSizeHandleRepresentation3D)
vtkInstantiatorNewMacro(vtkFocalPlanePointPlacer)
vtkInstantiatorNewMacro(vtkHandleWidget)
vtkInstantiatorNewMacro(vtkHoverWidget)
vtkInstantiatorNewMacro(vtkImageActorPointPlacer)
vtkInstantiatorNewMacro(vtkImageCroppingRegionsWidget)
vtkInstantiatorNewMacro(vtkImageOrthoPlanes)
vtkInstantiatorNewMacro(vtkImagePlaneWidget)
vtkInstantiatorNewMacro(vtkImageTracerWidget)
vtkInstantiatorNewMacro(vtkImplicitPlaneRepresentation)
vtkInstantiatorNewMacro(vtkImplicitPlaneWidget2)
vtkInstantiatorNewMacro(vtkImplicitPlaneWidget)
vtkInstantiatorNewMacro(vtkLinearContourLineInterpolator)
vtkInstantiatorNewMacro(vtkLineRepresentation)
vtkInstantiatorNewMacro(vtkLineWidget2)
vtkInstantiatorNewMacro(vtkLineWidget)
vtkInstantiatorNewMacro(vtkLogoRepresentation)
vtkInstantiatorNewMacro(vtkLogoWidget)
vtkInstantiatorNewMacro(vtkOrientationMarkerWidget)
vtkInstantiatorNewMacro(vtkOrientedGlyphContourRepresentation)
vtkInstantiatorNewMacro(vtkOrientedGlyphFocalPlaneContourRepresentation)
vtkInstantiatorNewMacro(vtkOrientedPolygonalHandleRepresentation3D)
vtkInstantiatorNewMacro(vtkParallelopipedRepresentation)
vtkInstantiatorNewMacro(vtkParallelopipedWidget)
vtkInstantiatorNewMacro(vtkPlaneWidget)
vtkInstantiatorNewMacro(vtkPlaybackRepresentation)
vtkInstantiatorNewMacro(vtkPlaybackWidget)
vtkInstantiatorNewMacro(vtkPointHandleRepresentation2D)
vtkInstantiatorNewMacro(vtkPointHandleRepresentation3D)
vtkInstantiatorNewMacro(vtkPointPlacer)
vtkInstantiatorNewMacro(vtkPointWidget)
vtkInstantiatorNewMacro(vtkPolyDataPointPlacer)
vtkInstantiatorNewMacro(vtkPolygonalHandleRepresentation3D)
vtkInstantiatorNewMacro(vtkPolygonalSurfaceContourLineInterpolator)
vtkInstantiatorNewMacro(vtkPolygonalSurfacePointPlacer)
vtkInstantiatorNewMacro(vtkProp3DButtonRepresentation)
vtkInstantiatorNewMacro(vtkRectilinearWipeRepresentation)
vtkInstantiatorNewMacro(vtkRectilinearWipeWidget)
vtkInstantiatorNewMacro(vtkScalarBarRepresentation)
vtkInstantiatorNewMacro(vtkScalarBarWidget)
vtkInstantiatorNewMacro(vtkSeedRepresentation)
vtkInstantiatorNewMacro(vtkSeedWidget)
vtkInstantiatorNewMacro(vtkSliderRepresentation2D)
vtkInstantiatorNewMacro(vtkSliderRepresentation3D)
vtkInstantiatorNewMacro(vtkSliderWidget)
vtkInstantiatorNewMacro(vtkSphereHandleRepresentation)
vtkInstantiatorNewMacro(vtkSphereRepresentation)
vtkInstantiatorNewMacro(vtkSphereWidget2)
vtkInstantiatorNewMacro(vtkSphereWidget)
vtkInstantiatorNewMacro(vtkSplineRepresentation)
vtkInstantiatorNewMacro(vtkSplineWidget2)
vtkInstantiatorNewMacro(vtkSplineWidget)
vtkInstantiatorNewMacro(vtkTensorProbeWidget)
vtkInstantiatorNewMacro(vtkTerrainContourLineInterpolator)
vtkInstantiatorNewMacro(vtkTerrainDataPointPlacer)
vtkInstantiatorNewMacro(vtkTextRepresentation)
vtkInstantiatorNewMacro(vtkTexturedButtonRepresentation2D)
vtkInstantiatorNewMacro(vtkTexturedButtonRepresentation)
vtkInstantiatorNewMacro(vtkTextWidget)
vtkInstantiatorNewMacro(vtkWidgetCallbackMapper)
vtkInstantiatorNewMacro(vtkWidgetEvent)
vtkInstantiatorNewMacro(vtkWidgetEventTranslator)
vtkInstantiatorNewMacro(vtkWidgetSet)
vtkInstantiatorNewMacro(vtkXYPlotWidget)
vtkInstantiatorNewMacro(vtkResliceCursorLineRepresentation)
vtkInstantiatorNewMacro(vtkResliceCursorThickLineRepresentation)
vtkInstantiatorNewMacro(vtkResliceCursorWidget)
vtkInstantiatorNewMacro(vtkResliceCursorActor)
vtkInstantiatorNewMacro(vtkResliceCursorPicker)
vtkInstantiatorNewMacro(vtkResliceCursor)
vtkInstantiatorNewMacro(vtkResliceCursorPolyDataAlgorithm)



void vtkInteractionWidgetsInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkAffineRepresentation2D", vtkInstantiatorvtkAffineRepresentation2DNew);
  vtkInstantiator::RegisterInstantiator("vtkAffineWidget", vtkInstantiatorvtkAffineWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkAngleRepresentation2D", vtkInstantiatorvtkAngleRepresentation2DNew);
  vtkInstantiator::RegisterInstantiator("vtkAngleRepresentation3D", vtkInstantiatorvtkAngleRepresentation3DNew);
  vtkInstantiator::RegisterInstantiator("vtkAngleWidget", vtkInstantiatorvtkAngleWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkAxesTransformRepresentation", vtkInstantiatorvtkAxesTransformRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkAxesTransformWidget", vtkInstantiatorvtkAxesTransformWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkBalloonRepresentation", vtkInstantiatorvtkBalloonRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkBalloonWidget", vtkInstantiatorvtkBalloonWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkBezierContourLineInterpolator", vtkInstantiatorvtkBezierContourLineInterpolatorNew);
  vtkInstantiator::RegisterInstantiator("vtkBiDimensionalRepresentation2D", vtkInstantiatorvtkBiDimensionalRepresentation2DNew);
  vtkInstantiator::RegisterInstantiator("vtkBiDimensionalWidget", vtkInstantiatorvtkBiDimensionalWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkBorderRepresentation", vtkInstantiatorvtkBorderRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkBorderWidget", vtkInstantiatorvtkBorderWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkBoundedPlanePointPlacer", vtkInstantiatorvtkBoundedPlanePointPlacerNew);
  vtkInstantiator::RegisterInstantiator("vtkBoxRepresentation", vtkInstantiatorvtkBoxRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkBoxWidget2", vtkInstantiatorvtkBoxWidget2New);
  vtkInstantiator::RegisterInstantiator("vtkBoxWidget", vtkInstantiatorvtkBoxWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkBrokenLineWidget", vtkInstantiatorvtkBrokenLineWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkButtonWidget", vtkInstantiatorvtkButtonWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkCameraRepresentation", vtkInstantiatorvtkCameraRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkCameraWidget", vtkInstantiatorvtkCameraWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkCaptionRepresentation", vtkInstantiatorvtkCaptionRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkCaptionWidget", vtkInstantiatorvtkCaptionWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkCellCentersPointPlacer", vtkInstantiatorvtkCellCentersPointPlacerNew);
  vtkInstantiator::RegisterInstantiator("vtkCenteredSliderRepresentation", vtkInstantiatorvtkCenteredSliderRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkCenteredSliderWidget", vtkInstantiatorvtkCenteredSliderWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkCheckerboardRepresentation", vtkInstantiatorvtkCheckerboardRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkCheckerboardWidget", vtkInstantiatorvtkCheckerboardWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkClosedSurfacePointPlacer", vtkInstantiatorvtkClosedSurfacePointPlacerNew);
  vtkInstantiator::RegisterInstantiator("vtkConstrainedPointHandleRepresentation", vtkInstantiatorvtkConstrainedPointHandleRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkContourWidget", vtkInstantiatorvtkContourWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkDijkstraImageContourLineInterpolator", vtkInstantiatorvtkDijkstraImageContourLineInterpolatorNew);
  vtkInstantiator::RegisterInstantiator("vtkDistanceRepresentation2D", vtkInstantiatorvtkDistanceRepresentation2DNew);
  vtkInstantiator::RegisterInstantiator("vtkDistanceRepresentation3D", vtkInstantiatorvtkDistanceRepresentation3DNew);
  vtkInstantiator::RegisterInstantiator("vtkDistanceWidget", vtkInstantiatorvtkDistanceWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkEllipsoidTensorProbeRepresentation", vtkInstantiatorvtkEllipsoidTensorProbeRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkEvent", vtkInstantiatorvtkEventNew);
  vtkInstantiator::RegisterInstantiator("vtkFixedSizeHandleRepresentation3D", vtkInstantiatorvtkFixedSizeHandleRepresentation3DNew);
  vtkInstantiator::RegisterInstantiator("vtkFocalPlanePointPlacer", vtkInstantiatorvtkFocalPlanePointPlacerNew);
  vtkInstantiator::RegisterInstantiator("vtkHandleWidget", vtkInstantiatorvtkHandleWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkHoverWidget", vtkInstantiatorvtkHoverWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkImageActorPointPlacer", vtkInstantiatorvtkImageActorPointPlacerNew);
  vtkInstantiator::RegisterInstantiator("vtkImageCroppingRegionsWidget", vtkInstantiatorvtkImageCroppingRegionsWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkImageOrthoPlanes", vtkInstantiatorvtkImageOrthoPlanesNew);
  vtkInstantiator::RegisterInstantiator("vtkImagePlaneWidget", vtkInstantiatorvtkImagePlaneWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkImageTracerWidget", vtkInstantiatorvtkImageTracerWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkImplicitPlaneRepresentation", vtkInstantiatorvtkImplicitPlaneRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkImplicitPlaneWidget2", vtkInstantiatorvtkImplicitPlaneWidget2New);
  vtkInstantiator::RegisterInstantiator("vtkImplicitPlaneWidget", vtkInstantiatorvtkImplicitPlaneWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkLinearContourLineInterpolator", vtkInstantiatorvtkLinearContourLineInterpolatorNew);
  vtkInstantiator::RegisterInstantiator("vtkLineRepresentation", vtkInstantiatorvtkLineRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkLineWidget2", vtkInstantiatorvtkLineWidget2New);
  vtkInstantiator::RegisterInstantiator("vtkLineWidget", vtkInstantiatorvtkLineWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkLogoRepresentation", vtkInstantiatorvtkLogoRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkLogoWidget", vtkInstantiatorvtkLogoWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkOrientationMarkerWidget", vtkInstantiatorvtkOrientationMarkerWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkOrientedGlyphContourRepresentation", vtkInstantiatorvtkOrientedGlyphContourRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkOrientedGlyphFocalPlaneContourRepresentation", vtkInstantiatorvtkOrientedGlyphFocalPlaneContourRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkOrientedPolygonalHandleRepresentation3D", vtkInstantiatorvtkOrientedPolygonalHandleRepresentation3DNew);
  vtkInstantiator::RegisterInstantiator("vtkParallelopipedRepresentation", vtkInstantiatorvtkParallelopipedRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkParallelopipedWidget", vtkInstantiatorvtkParallelopipedWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkPlaneWidget", vtkInstantiatorvtkPlaneWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkPlaybackRepresentation", vtkInstantiatorvtkPlaybackRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkPlaybackWidget", vtkInstantiatorvtkPlaybackWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkPointHandleRepresentation2D", vtkInstantiatorvtkPointHandleRepresentation2DNew);
  vtkInstantiator::RegisterInstantiator("vtkPointHandleRepresentation3D", vtkInstantiatorvtkPointHandleRepresentation3DNew);
  vtkInstantiator::RegisterInstantiator("vtkPointPlacer", vtkInstantiatorvtkPointPlacerNew);
  vtkInstantiator::RegisterInstantiator("vtkPointWidget", vtkInstantiatorvtkPointWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkPolyDataPointPlacer", vtkInstantiatorvtkPolyDataPointPlacerNew);
  vtkInstantiator::RegisterInstantiator("vtkPolygonalHandleRepresentation3D", vtkInstantiatorvtkPolygonalHandleRepresentation3DNew);
  vtkInstantiator::RegisterInstantiator("vtkPolygonalSurfaceContourLineInterpolator", vtkInstantiatorvtkPolygonalSurfaceContourLineInterpolatorNew);
  vtkInstantiator::RegisterInstantiator("vtkPolygonalSurfacePointPlacer", vtkInstantiatorvtkPolygonalSurfacePointPlacerNew);
  vtkInstantiator::RegisterInstantiator("vtkProp3DButtonRepresentation", vtkInstantiatorvtkProp3DButtonRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkRectilinearWipeRepresentation", vtkInstantiatorvtkRectilinearWipeRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkRectilinearWipeWidget", vtkInstantiatorvtkRectilinearWipeWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkScalarBarRepresentation", vtkInstantiatorvtkScalarBarRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkScalarBarWidget", vtkInstantiatorvtkScalarBarWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkSeedRepresentation", vtkInstantiatorvtkSeedRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkSeedWidget", vtkInstantiatorvtkSeedWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkSliderRepresentation2D", vtkInstantiatorvtkSliderRepresentation2DNew);
  vtkInstantiator::RegisterInstantiator("vtkSliderRepresentation3D", vtkInstantiatorvtkSliderRepresentation3DNew);
  vtkInstantiator::RegisterInstantiator("vtkSliderWidget", vtkInstantiatorvtkSliderWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkSphereHandleRepresentation", vtkInstantiatorvtkSphereHandleRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkSphereRepresentation", vtkInstantiatorvtkSphereRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkSphereWidget2", vtkInstantiatorvtkSphereWidget2New);
  vtkInstantiator::RegisterInstantiator("vtkSphereWidget", vtkInstantiatorvtkSphereWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkSplineRepresentation", vtkInstantiatorvtkSplineRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkSplineWidget2", vtkInstantiatorvtkSplineWidget2New);
  vtkInstantiator::RegisterInstantiator("vtkSplineWidget", vtkInstantiatorvtkSplineWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkTensorProbeWidget", vtkInstantiatorvtkTensorProbeWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkTerrainContourLineInterpolator", vtkInstantiatorvtkTerrainContourLineInterpolatorNew);
  vtkInstantiator::RegisterInstantiator("vtkTerrainDataPointPlacer", vtkInstantiatorvtkTerrainDataPointPlacerNew);
  vtkInstantiator::RegisterInstantiator("vtkTextRepresentation", vtkInstantiatorvtkTextRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkTexturedButtonRepresentation2D", vtkInstantiatorvtkTexturedButtonRepresentation2DNew);
  vtkInstantiator::RegisterInstantiator("vtkTexturedButtonRepresentation", vtkInstantiatorvtkTexturedButtonRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkTextWidget", vtkInstantiatorvtkTextWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkWidgetCallbackMapper", vtkInstantiatorvtkWidgetCallbackMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkWidgetEvent", vtkInstantiatorvtkWidgetEventNew);
  vtkInstantiator::RegisterInstantiator("vtkWidgetEventTranslator", vtkInstantiatorvtkWidgetEventTranslatorNew);
  vtkInstantiator::RegisterInstantiator("vtkWidgetSet", vtkInstantiatorvtkWidgetSetNew);
  vtkInstantiator::RegisterInstantiator("vtkXYPlotWidget", vtkInstantiatorvtkXYPlotWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkResliceCursorLineRepresentation", vtkInstantiatorvtkResliceCursorLineRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkResliceCursorThickLineRepresentation", vtkInstantiatorvtkResliceCursorThickLineRepresentationNew);
  vtkInstantiator::RegisterInstantiator("vtkResliceCursorWidget", vtkInstantiatorvtkResliceCursorWidgetNew);
  vtkInstantiator::RegisterInstantiator("vtkResliceCursorActor", vtkInstantiatorvtkResliceCursorActorNew);
  vtkInstantiator::RegisterInstantiator("vtkResliceCursorPicker", vtkInstantiatorvtkResliceCursorPickerNew);
  vtkInstantiator::RegisterInstantiator("vtkResliceCursor", vtkInstantiatorvtkResliceCursorNew);
  vtkInstantiator::RegisterInstantiator("vtkResliceCursorPolyDataAlgorithm", vtkInstantiatorvtkResliceCursorPolyDataAlgorithmNew);


}

void vtkInteractionWidgetsInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkAffineRepresentation2D", vtkInstantiatorvtkAffineRepresentation2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAffineWidget", vtkInstantiatorvtkAffineWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAngleRepresentation2D", vtkInstantiatorvtkAngleRepresentation2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAngleRepresentation3D", vtkInstantiatorvtkAngleRepresentation3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAngleWidget", vtkInstantiatorvtkAngleWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAxesTransformRepresentation", vtkInstantiatorvtkAxesTransformRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAxesTransformWidget", vtkInstantiatorvtkAxesTransformWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBalloonRepresentation", vtkInstantiatorvtkBalloonRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBalloonWidget", vtkInstantiatorvtkBalloonWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBezierContourLineInterpolator", vtkInstantiatorvtkBezierContourLineInterpolatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBiDimensionalRepresentation2D", vtkInstantiatorvtkBiDimensionalRepresentation2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBiDimensionalWidget", vtkInstantiatorvtkBiDimensionalWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBorderRepresentation", vtkInstantiatorvtkBorderRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBorderWidget", vtkInstantiatorvtkBorderWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBoundedPlanePointPlacer", vtkInstantiatorvtkBoundedPlanePointPlacerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBoxRepresentation", vtkInstantiatorvtkBoxRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBoxWidget2", vtkInstantiatorvtkBoxWidget2New);
  vtkInstantiator::UnRegisterInstantiator("vtkBoxWidget", vtkInstantiatorvtkBoxWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBrokenLineWidget", vtkInstantiatorvtkBrokenLineWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkButtonWidget", vtkInstantiatorvtkButtonWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCameraRepresentation", vtkInstantiatorvtkCameraRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCameraWidget", vtkInstantiatorvtkCameraWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCaptionRepresentation", vtkInstantiatorvtkCaptionRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCaptionWidget", vtkInstantiatorvtkCaptionWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCellCentersPointPlacer", vtkInstantiatorvtkCellCentersPointPlacerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCenteredSliderRepresentation", vtkInstantiatorvtkCenteredSliderRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCenteredSliderWidget", vtkInstantiatorvtkCenteredSliderWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCheckerboardRepresentation", vtkInstantiatorvtkCheckerboardRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCheckerboardWidget", vtkInstantiatorvtkCheckerboardWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkClosedSurfacePointPlacer", vtkInstantiatorvtkClosedSurfacePointPlacerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkConstrainedPointHandleRepresentation", vtkInstantiatorvtkConstrainedPointHandleRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkContourWidget", vtkInstantiatorvtkContourWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDijkstraImageContourLineInterpolator", vtkInstantiatorvtkDijkstraImageContourLineInterpolatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDistanceRepresentation2D", vtkInstantiatorvtkDistanceRepresentation2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDistanceRepresentation3D", vtkInstantiatorvtkDistanceRepresentation3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDistanceWidget", vtkInstantiatorvtkDistanceWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkEllipsoidTensorProbeRepresentation", vtkInstantiatorvtkEllipsoidTensorProbeRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkEvent", vtkInstantiatorvtkEventNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFixedSizeHandleRepresentation3D", vtkInstantiatorvtkFixedSizeHandleRepresentation3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFocalPlanePointPlacer", vtkInstantiatorvtkFocalPlanePointPlacerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHandleWidget", vtkInstantiatorvtkHandleWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHoverWidget", vtkInstantiatorvtkHoverWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageActorPointPlacer", vtkInstantiatorvtkImageActorPointPlacerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageCroppingRegionsWidget", vtkInstantiatorvtkImageCroppingRegionsWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageOrthoPlanes", vtkInstantiatorvtkImageOrthoPlanesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImagePlaneWidget", vtkInstantiatorvtkImagePlaneWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageTracerWidget", vtkInstantiatorvtkImageTracerWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImplicitPlaneRepresentation", vtkInstantiatorvtkImplicitPlaneRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImplicitPlaneWidget2", vtkInstantiatorvtkImplicitPlaneWidget2New);
  vtkInstantiator::UnRegisterInstantiator("vtkImplicitPlaneWidget", vtkInstantiatorvtkImplicitPlaneWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLinearContourLineInterpolator", vtkInstantiatorvtkLinearContourLineInterpolatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLineRepresentation", vtkInstantiatorvtkLineRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLineWidget2", vtkInstantiatorvtkLineWidget2New);
  vtkInstantiator::UnRegisterInstantiator("vtkLineWidget", vtkInstantiatorvtkLineWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLogoRepresentation", vtkInstantiatorvtkLogoRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLogoWidget", vtkInstantiatorvtkLogoWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOrientationMarkerWidget", vtkInstantiatorvtkOrientationMarkerWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOrientedGlyphContourRepresentation", vtkInstantiatorvtkOrientedGlyphContourRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOrientedGlyphFocalPlaneContourRepresentation", vtkInstantiatorvtkOrientedGlyphFocalPlaneContourRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOrientedPolygonalHandleRepresentation3D", vtkInstantiatorvtkOrientedPolygonalHandleRepresentation3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParallelopipedRepresentation", vtkInstantiatorvtkParallelopipedRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParallelopipedWidget", vtkInstantiatorvtkParallelopipedWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPlaneWidget", vtkInstantiatorvtkPlaneWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPlaybackRepresentation", vtkInstantiatorvtkPlaybackRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPlaybackWidget", vtkInstantiatorvtkPlaybackWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPointHandleRepresentation2D", vtkInstantiatorvtkPointHandleRepresentation2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPointHandleRepresentation3D", vtkInstantiatorvtkPointHandleRepresentation3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPointPlacer", vtkInstantiatorvtkPointPlacerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPointWidget", vtkInstantiatorvtkPointWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPolyDataPointPlacer", vtkInstantiatorvtkPolyDataPointPlacerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPolygonalHandleRepresentation3D", vtkInstantiatorvtkPolygonalHandleRepresentation3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPolygonalSurfaceContourLineInterpolator", vtkInstantiatorvtkPolygonalSurfaceContourLineInterpolatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPolygonalSurfacePointPlacer", vtkInstantiatorvtkPolygonalSurfacePointPlacerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProp3DButtonRepresentation", vtkInstantiatorvtkProp3DButtonRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRectilinearWipeRepresentation", vtkInstantiatorvtkRectilinearWipeRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRectilinearWipeWidget", vtkInstantiatorvtkRectilinearWipeWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkScalarBarRepresentation", vtkInstantiatorvtkScalarBarRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkScalarBarWidget", vtkInstantiatorvtkScalarBarWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSeedRepresentation", vtkInstantiatorvtkSeedRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSeedWidget", vtkInstantiatorvtkSeedWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSliderRepresentation2D", vtkInstantiatorvtkSliderRepresentation2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSliderRepresentation3D", vtkInstantiatorvtkSliderRepresentation3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSliderWidget", vtkInstantiatorvtkSliderWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSphereHandleRepresentation", vtkInstantiatorvtkSphereHandleRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSphereRepresentation", vtkInstantiatorvtkSphereRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSphereWidget2", vtkInstantiatorvtkSphereWidget2New);
  vtkInstantiator::UnRegisterInstantiator("vtkSphereWidget", vtkInstantiatorvtkSphereWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSplineRepresentation", vtkInstantiatorvtkSplineRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSplineWidget2", vtkInstantiatorvtkSplineWidget2New);
  vtkInstantiator::UnRegisterInstantiator("vtkSplineWidget", vtkInstantiatorvtkSplineWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTensorProbeWidget", vtkInstantiatorvtkTensorProbeWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTerrainContourLineInterpolator", vtkInstantiatorvtkTerrainContourLineInterpolatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTerrainDataPointPlacer", vtkInstantiatorvtkTerrainDataPointPlacerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTextRepresentation", vtkInstantiatorvtkTextRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTexturedButtonRepresentation2D", vtkInstantiatorvtkTexturedButtonRepresentation2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTexturedButtonRepresentation", vtkInstantiatorvtkTexturedButtonRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTextWidget", vtkInstantiatorvtkTextWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkWidgetCallbackMapper", vtkInstantiatorvtkWidgetCallbackMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkWidgetEvent", vtkInstantiatorvtkWidgetEventNew);
  vtkInstantiator::UnRegisterInstantiator("vtkWidgetEventTranslator", vtkInstantiatorvtkWidgetEventTranslatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkWidgetSet", vtkInstantiatorvtkWidgetSetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXYPlotWidget", vtkInstantiatorvtkXYPlotWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkResliceCursorLineRepresentation", vtkInstantiatorvtkResliceCursorLineRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkResliceCursorThickLineRepresentation", vtkInstantiatorvtkResliceCursorThickLineRepresentationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkResliceCursorWidget", vtkInstantiatorvtkResliceCursorWidgetNew);
  vtkInstantiator::UnRegisterInstantiator("vtkResliceCursorActor", vtkInstantiatorvtkResliceCursorActorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkResliceCursorPicker", vtkInstantiatorvtkResliceCursorPickerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkResliceCursor", vtkInstantiatorvtkResliceCursorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkResliceCursorPolyDataAlgorithm", vtkInstantiatorvtkResliceCursorPolyDataAlgorithmNew);


}

vtkInteractionWidgetsInstantiator::vtkInteractionWidgetsInstantiator()
{
  if(++vtkInteractionWidgetsInstantiator::Count == 1)
    {
    vtkInteractionWidgetsInstantiator::ClassInitialize();
    }
}

vtkInteractionWidgetsInstantiator::~vtkInteractionWidgetsInstantiator()
{
  if(--vtkInteractionWidgetsInstantiator::Count == 0)
    {
    vtkInteractionWidgetsInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkInteractionWidgetsInstantiator::Count;
