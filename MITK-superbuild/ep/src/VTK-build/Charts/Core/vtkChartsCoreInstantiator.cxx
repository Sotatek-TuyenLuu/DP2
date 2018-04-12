#include "vtkChartsCoreInstantiator.h"
#include "vtkAxis.h"
#include "vtkAxisExtended.h"
#include "vtkCategoryLegend.h"
#include "vtkChartBox.h"
#include "vtkChartHistogram2D.h"
#include "vtkChartLegend.h"
#include "vtkChartMatrix.h"
#include "vtkChartParallelCoordinates.h"
#include "vtkChartPie.h"
#include "vtkChartXY.h"
#include "vtkChartXYZ.h"
#include "vtkColorLegend.h"
#include "vtkColorTransferControlPointsItem.h"
#include "vtkColorTransferFunctionItem.h"
#include "vtkCompositeControlPointsItem.h"
#include "vtkCompositeTransferFunctionItem.h"
#include "vtkLookupTableItem.h"
#include "vtkPiecewiseControlPointsItem.h"
#include "vtkPiecewiseFunctionItem.h"
#include "vtkPiecewisePointHandleItem.h"
#include "vtkPlotBag.h"
#include "vtkPlotBar.h"
#include "vtkPlotBox.h"
#include "vtkPlotFunctionalBag.h"
#include "vtkPlotGrid.h"
#include "vtkPlotHistogram2D.h"
#include "vtkPlotLine.h"
#include "vtkPlotLine3D.h"
#include "vtkPlotParallelCoordinates.h"
#include "vtkPlotPie.h"
#include "vtkPlotPoints.h"
#include "vtkPlotPoints3D.h"
#include "vtkPlotStacked.h"
#include "vtkPlotSurface.h"
#include "vtkScatterPlotMatrix.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkAxis)
vtkInstantiatorNewMacro(vtkAxisExtended)
vtkInstantiatorNewMacro(vtkCategoryLegend)
vtkInstantiatorNewMacro(vtkChartBox)
vtkInstantiatorNewMacro(vtkChartHistogram2D)
vtkInstantiatorNewMacro(vtkChartLegend)
vtkInstantiatorNewMacro(vtkChartMatrix)
vtkInstantiatorNewMacro(vtkChartParallelCoordinates)
vtkInstantiatorNewMacro(vtkChartPie)
vtkInstantiatorNewMacro(vtkChartXY)
vtkInstantiatorNewMacro(vtkChartXYZ)
vtkInstantiatorNewMacro(vtkColorLegend)
vtkInstantiatorNewMacro(vtkColorTransferControlPointsItem)
vtkInstantiatorNewMacro(vtkColorTransferFunctionItem)
vtkInstantiatorNewMacro(vtkCompositeControlPointsItem)
vtkInstantiatorNewMacro(vtkCompositeTransferFunctionItem)
vtkInstantiatorNewMacro(vtkLookupTableItem)
vtkInstantiatorNewMacro(vtkPiecewiseControlPointsItem)
vtkInstantiatorNewMacro(vtkPiecewiseFunctionItem)
vtkInstantiatorNewMacro(vtkPiecewisePointHandleItem)
vtkInstantiatorNewMacro(vtkPlotBag)
vtkInstantiatorNewMacro(vtkPlotBar)
vtkInstantiatorNewMacro(vtkPlotBox)
vtkInstantiatorNewMacro(vtkPlotFunctionalBag)
vtkInstantiatorNewMacro(vtkPlotGrid)
vtkInstantiatorNewMacro(vtkPlotHistogram2D)
vtkInstantiatorNewMacro(vtkPlotLine)
vtkInstantiatorNewMacro(vtkPlotLine3D)
vtkInstantiatorNewMacro(vtkPlotParallelCoordinates)
vtkInstantiatorNewMacro(vtkPlotPie)
vtkInstantiatorNewMacro(vtkPlotPoints)
vtkInstantiatorNewMacro(vtkPlotPoints3D)
vtkInstantiatorNewMacro(vtkPlotStacked)
vtkInstantiatorNewMacro(vtkPlotSurface)
vtkInstantiatorNewMacro(vtkScatterPlotMatrix)



void vtkChartsCoreInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkAxis", vtkInstantiatorvtkAxisNew);
  vtkInstantiator::RegisterInstantiator("vtkAxisExtended", vtkInstantiatorvtkAxisExtendedNew);
  vtkInstantiator::RegisterInstantiator("vtkCategoryLegend", vtkInstantiatorvtkCategoryLegendNew);
  vtkInstantiator::RegisterInstantiator("vtkChartBox", vtkInstantiatorvtkChartBoxNew);
  vtkInstantiator::RegisterInstantiator("vtkChartHistogram2D", vtkInstantiatorvtkChartHistogram2DNew);
  vtkInstantiator::RegisterInstantiator("vtkChartLegend", vtkInstantiatorvtkChartLegendNew);
  vtkInstantiator::RegisterInstantiator("vtkChartMatrix", vtkInstantiatorvtkChartMatrixNew);
  vtkInstantiator::RegisterInstantiator("vtkChartParallelCoordinates", vtkInstantiatorvtkChartParallelCoordinatesNew);
  vtkInstantiator::RegisterInstantiator("vtkChartPie", vtkInstantiatorvtkChartPieNew);
  vtkInstantiator::RegisterInstantiator("vtkChartXY", vtkInstantiatorvtkChartXYNew);
  vtkInstantiator::RegisterInstantiator("vtkChartXYZ", vtkInstantiatorvtkChartXYZNew);
  vtkInstantiator::RegisterInstantiator("vtkColorLegend", vtkInstantiatorvtkColorLegendNew);
  vtkInstantiator::RegisterInstantiator("vtkColorTransferControlPointsItem", vtkInstantiatorvtkColorTransferControlPointsItemNew);
  vtkInstantiator::RegisterInstantiator("vtkColorTransferFunctionItem", vtkInstantiatorvtkColorTransferFunctionItemNew);
  vtkInstantiator::RegisterInstantiator("vtkCompositeControlPointsItem", vtkInstantiatorvtkCompositeControlPointsItemNew);
  vtkInstantiator::RegisterInstantiator("vtkCompositeTransferFunctionItem", vtkInstantiatorvtkCompositeTransferFunctionItemNew);
  vtkInstantiator::RegisterInstantiator("vtkLookupTableItem", vtkInstantiatorvtkLookupTableItemNew);
  vtkInstantiator::RegisterInstantiator("vtkPiecewiseControlPointsItem", vtkInstantiatorvtkPiecewiseControlPointsItemNew);
  vtkInstantiator::RegisterInstantiator("vtkPiecewiseFunctionItem", vtkInstantiatorvtkPiecewiseFunctionItemNew);
  vtkInstantiator::RegisterInstantiator("vtkPiecewisePointHandleItem", vtkInstantiatorvtkPiecewisePointHandleItemNew);
  vtkInstantiator::RegisterInstantiator("vtkPlotBag", vtkInstantiatorvtkPlotBagNew);
  vtkInstantiator::RegisterInstantiator("vtkPlotBar", vtkInstantiatorvtkPlotBarNew);
  vtkInstantiator::RegisterInstantiator("vtkPlotBox", vtkInstantiatorvtkPlotBoxNew);
  vtkInstantiator::RegisterInstantiator("vtkPlotFunctionalBag", vtkInstantiatorvtkPlotFunctionalBagNew);
  vtkInstantiator::RegisterInstantiator("vtkPlotGrid", vtkInstantiatorvtkPlotGridNew);
  vtkInstantiator::RegisterInstantiator("vtkPlotHistogram2D", vtkInstantiatorvtkPlotHistogram2DNew);
  vtkInstantiator::RegisterInstantiator("vtkPlotLine", vtkInstantiatorvtkPlotLineNew);
  vtkInstantiator::RegisterInstantiator("vtkPlotLine3D", vtkInstantiatorvtkPlotLine3DNew);
  vtkInstantiator::RegisterInstantiator("vtkPlotParallelCoordinates", vtkInstantiatorvtkPlotParallelCoordinatesNew);
  vtkInstantiator::RegisterInstantiator("vtkPlotPie", vtkInstantiatorvtkPlotPieNew);
  vtkInstantiator::RegisterInstantiator("vtkPlotPoints", vtkInstantiatorvtkPlotPointsNew);
  vtkInstantiator::RegisterInstantiator("vtkPlotPoints3D", vtkInstantiatorvtkPlotPoints3DNew);
  vtkInstantiator::RegisterInstantiator("vtkPlotStacked", vtkInstantiatorvtkPlotStackedNew);
  vtkInstantiator::RegisterInstantiator("vtkPlotSurface", vtkInstantiatorvtkPlotSurfaceNew);
  vtkInstantiator::RegisterInstantiator("vtkScatterPlotMatrix", vtkInstantiatorvtkScatterPlotMatrixNew);


}

void vtkChartsCoreInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkAxis", vtkInstantiatorvtkAxisNew);
  vtkInstantiator::UnRegisterInstantiator("vtkAxisExtended", vtkInstantiatorvtkAxisExtendedNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCategoryLegend", vtkInstantiatorvtkCategoryLegendNew);
  vtkInstantiator::UnRegisterInstantiator("vtkChartBox", vtkInstantiatorvtkChartBoxNew);
  vtkInstantiator::UnRegisterInstantiator("vtkChartHistogram2D", vtkInstantiatorvtkChartHistogram2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkChartLegend", vtkInstantiatorvtkChartLegendNew);
  vtkInstantiator::UnRegisterInstantiator("vtkChartMatrix", vtkInstantiatorvtkChartMatrixNew);
  vtkInstantiator::UnRegisterInstantiator("vtkChartParallelCoordinates", vtkInstantiatorvtkChartParallelCoordinatesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkChartPie", vtkInstantiatorvtkChartPieNew);
  vtkInstantiator::UnRegisterInstantiator("vtkChartXY", vtkInstantiatorvtkChartXYNew);
  vtkInstantiator::UnRegisterInstantiator("vtkChartXYZ", vtkInstantiatorvtkChartXYZNew);
  vtkInstantiator::UnRegisterInstantiator("vtkColorLegend", vtkInstantiatorvtkColorLegendNew);
  vtkInstantiator::UnRegisterInstantiator("vtkColorTransferControlPointsItem", vtkInstantiatorvtkColorTransferControlPointsItemNew);
  vtkInstantiator::UnRegisterInstantiator("vtkColorTransferFunctionItem", vtkInstantiatorvtkColorTransferFunctionItemNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCompositeControlPointsItem", vtkInstantiatorvtkCompositeControlPointsItemNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCompositeTransferFunctionItem", vtkInstantiatorvtkCompositeTransferFunctionItemNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLookupTableItem", vtkInstantiatorvtkLookupTableItemNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPiecewiseControlPointsItem", vtkInstantiatorvtkPiecewiseControlPointsItemNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPiecewiseFunctionItem", vtkInstantiatorvtkPiecewiseFunctionItemNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPiecewisePointHandleItem", vtkInstantiatorvtkPiecewisePointHandleItemNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPlotBag", vtkInstantiatorvtkPlotBagNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPlotBar", vtkInstantiatorvtkPlotBarNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPlotBox", vtkInstantiatorvtkPlotBoxNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPlotFunctionalBag", vtkInstantiatorvtkPlotFunctionalBagNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPlotGrid", vtkInstantiatorvtkPlotGridNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPlotHistogram2D", vtkInstantiatorvtkPlotHistogram2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPlotLine", vtkInstantiatorvtkPlotLineNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPlotLine3D", vtkInstantiatorvtkPlotLine3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPlotParallelCoordinates", vtkInstantiatorvtkPlotParallelCoordinatesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPlotPie", vtkInstantiatorvtkPlotPieNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPlotPoints", vtkInstantiatorvtkPlotPointsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPlotPoints3D", vtkInstantiatorvtkPlotPoints3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPlotStacked", vtkInstantiatorvtkPlotStackedNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPlotSurface", vtkInstantiatorvtkPlotSurfaceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkScatterPlotMatrix", vtkInstantiatorvtkScatterPlotMatrixNew);


}

vtkChartsCoreInstantiator::vtkChartsCoreInstantiator()
{
  if(++vtkChartsCoreInstantiator::Count == 1)
    {
    vtkChartsCoreInstantiator::ClassInitialize();
    }
}

vtkChartsCoreInstantiator::~vtkChartsCoreInstantiator()
{
  if(--vtkChartsCoreInstantiator::Count == 0)
    {
    vtkChartsCoreInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkChartsCoreInstantiator::Count;
