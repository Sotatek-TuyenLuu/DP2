#include "vtkFiltersModelingInstantiator.h"
#include "vtkBandedPolyDataContourFilter.h"
#include "vtkButterflySubdivisionFilter.h"
#include "vtkDijkstraGraphGeodesicPath.h"
#include "vtkDijkstraImageGeodesicPath.h"
#include "vtkFillHolesFilter.h"
#include "vtkLinearExtrusionFilter.h"
#include "vtkLinearSubdivisionFilter.h"
#include "vtkLoopSubdivisionFilter.h"
#include "vtkPolyDataPointSampler.h"
#include "vtkProjectedTexture.h"
#include "vtkQuadRotationalExtrusionFilter.h"
#include "vtkRibbonFilter.h"
#include "vtkRotationalExtrusionFilter.h"
#include "vtkRuledSurfaceFilter.h"
#include "vtkSelectEnclosedPoints.h"
#include "vtkSelectPolyData.h"
#include "vtkSpherePuzzleArrows.h"
#include "vtkSpherePuzzle.h"
#include "vtkSubdivideTetra.h"
#include "vtkOutlineFilter.h"
#include "vtkSectorSource.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkBandedPolyDataContourFilter)
vtkInstantiatorNewMacro(vtkButterflySubdivisionFilter)
vtkInstantiatorNewMacro(vtkDijkstraGraphGeodesicPath)
vtkInstantiatorNewMacro(vtkDijkstraImageGeodesicPath)
vtkInstantiatorNewMacro(vtkFillHolesFilter)
vtkInstantiatorNewMacro(vtkLinearExtrusionFilter)
vtkInstantiatorNewMacro(vtkLinearSubdivisionFilter)
vtkInstantiatorNewMacro(vtkLoopSubdivisionFilter)
vtkInstantiatorNewMacro(vtkPolyDataPointSampler)
vtkInstantiatorNewMacro(vtkProjectedTexture)
vtkInstantiatorNewMacro(vtkQuadRotationalExtrusionFilter)
vtkInstantiatorNewMacro(vtkRibbonFilter)
vtkInstantiatorNewMacro(vtkRotationalExtrusionFilter)
vtkInstantiatorNewMacro(vtkRuledSurfaceFilter)
vtkInstantiatorNewMacro(vtkSelectEnclosedPoints)
vtkInstantiatorNewMacro(vtkSelectPolyData)
vtkInstantiatorNewMacro(vtkSpherePuzzleArrows)
vtkInstantiatorNewMacro(vtkSpherePuzzle)
vtkInstantiatorNewMacro(vtkSubdivideTetra)
vtkInstantiatorNewMacro(vtkOutlineFilter)
vtkInstantiatorNewMacro(vtkSectorSource)



void vtkFiltersModelingInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkBandedPolyDataContourFilter", vtkInstantiatorvtkBandedPolyDataContourFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkButterflySubdivisionFilter", vtkInstantiatorvtkButterflySubdivisionFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkDijkstraGraphGeodesicPath", vtkInstantiatorvtkDijkstraGraphGeodesicPathNew);
  vtkInstantiator::RegisterInstantiator("vtkDijkstraImageGeodesicPath", vtkInstantiatorvtkDijkstraImageGeodesicPathNew);
  vtkInstantiator::RegisterInstantiator("vtkFillHolesFilter", vtkInstantiatorvtkFillHolesFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkLinearExtrusionFilter", vtkInstantiatorvtkLinearExtrusionFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkLinearSubdivisionFilter", vtkInstantiatorvtkLinearSubdivisionFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkLoopSubdivisionFilter", vtkInstantiatorvtkLoopSubdivisionFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkPolyDataPointSampler", vtkInstantiatorvtkPolyDataPointSamplerNew);
  vtkInstantiator::RegisterInstantiator("vtkProjectedTexture", vtkInstantiatorvtkProjectedTextureNew);
  vtkInstantiator::RegisterInstantiator("vtkQuadRotationalExtrusionFilter", vtkInstantiatorvtkQuadRotationalExtrusionFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkRibbonFilter", vtkInstantiatorvtkRibbonFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkRotationalExtrusionFilter", vtkInstantiatorvtkRotationalExtrusionFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkRuledSurfaceFilter", vtkInstantiatorvtkRuledSurfaceFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkSelectEnclosedPoints", vtkInstantiatorvtkSelectEnclosedPointsNew);
  vtkInstantiator::RegisterInstantiator("vtkSelectPolyData", vtkInstantiatorvtkSelectPolyDataNew);
  vtkInstantiator::RegisterInstantiator("vtkSpherePuzzleArrows", vtkInstantiatorvtkSpherePuzzleArrowsNew);
  vtkInstantiator::RegisterInstantiator("vtkSpherePuzzle", vtkInstantiatorvtkSpherePuzzleNew);
  vtkInstantiator::RegisterInstantiator("vtkSubdivideTetra", vtkInstantiatorvtkSubdivideTetraNew);
  vtkInstantiator::RegisterInstantiator("vtkOutlineFilter", vtkInstantiatorvtkOutlineFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkSectorSource", vtkInstantiatorvtkSectorSourceNew);


}

void vtkFiltersModelingInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkBandedPolyDataContourFilter", vtkInstantiatorvtkBandedPolyDataContourFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkButterflySubdivisionFilter", vtkInstantiatorvtkButterflySubdivisionFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDijkstraGraphGeodesicPath", vtkInstantiatorvtkDijkstraGraphGeodesicPathNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDijkstraImageGeodesicPath", vtkInstantiatorvtkDijkstraImageGeodesicPathNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFillHolesFilter", vtkInstantiatorvtkFillHolesFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLinearExtrusionFilter", vtkInstantiatorvtkLinearExtrusionFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLinearSubdivisionFilter", vtkInstantiatorvtkLinearSubdivisionFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLoopSubdivisionFilter", vtkInstantiatorvtkLoopSubdivisionFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPolyDataPointSampler", vtkInstantiatorvtkPolyDataPointSamplerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProjectedTexture", vtkInstantiatorvtkProjectedTextureNew);
  vtkInstantiator::UnRegisterInstantiator("vtkQuadRotationalExtrusionFilter", vtkInstantiatorvtkQuadRotationalExtrusionFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRibbonFilter", vtkInstantiatorvtkRibbonFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRotationalExtrusionFilter", vtkInstantiatorvtkRotationalExtrusionFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRuledSurfaceFilter", vtkInstantiatorvtkRuledSurfaceFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSelectEnclosedPoints", vtkInstantiatorvtkSelectEnclosedPointsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSelectPolyData", vtkInstantiatorvtkSelectPolyDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSpherePuzzleArrows", vtkInstantiatorvtkSpherePuzzleArrowsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSpherePuzzle", vtkInstantiatorvtkSpherePuzzleNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSubdivideTetra", vtkInstantiatorvtkSubdivideTetraNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOutlineFilter", vtkInstantiatorvtkOutlineFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSectorSource", vtkInstantiatorvtkSectorSourceNew);


}

vtkFiltersModelingInstantiator::vtkFiltersModelingInstantiator()
{
  if(++vtkFiltersModelingInstantiator::Count == 1)
    {
    vtkFiltersModelingInstantiator::ClassInitialize();
    }
}

vtkFiltersModelingInstantiator::~vtkFiltersModelingInstantiator()
{
  if(--vtkFiltersModelingInstantiator::Count == 0)
    {
    vtkFiltersModelingInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkFiltersModelingInstantiator::Count;
