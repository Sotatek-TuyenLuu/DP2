#include "vtkFiltersSourcesInstantiator.h"
#include "vtkArcSource.h"
#include "vtkArrowSource.h"
#include "vtkConeSource.h"
#include "vtkCubeSource.h"
#include "vtkCylinderSource.h"
#include "vtkDiskSource.h"
#include "vtkEllipticalButtonSource.h"
#include "vtkFrustumSource.h"
#include "vtkGlyphSource2D.h"
#include "vtkHyperOctreeFractalSource.h"
#include "vtkHyperTreeGridSource.h"
#include "vtkLineSource.h"
#include "vtkOutlineCornerFilter.h"
#include "vtkOutlineCornerSource.h"
#include "vtkOutlineSource.h"
#include "vtkParametricFunctionSource.h"
#include "vtkPlaneSource.h"
#include "vtkPlatonicSolidSource.h"
#include "vtkPointSource.h"
#include "vtkProgrammableDataObjectSource.h"
#include "vtkProgrammableSource.h"
#include "vtkRectangularButtonSource.h"
#include "vtkRegularPolygonSource.h"
#include "vtkSelectionSource.h"
#include "vtkSphereSource.h"
#include "vtkSuperquadricSource.h"
#include "vtkTessellatedBoxSource.h"
#include "vtkTextSource.h"
#include "vtkTexturedSphereSource.h"
#include "vtkGraphToPolyData.h"
#include "vtkDiagonalMatrixSource.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkArcSource)
vtkInstantiatorNewMacro(vtkArrowSource)
vtkInstantiatorNewMacro(vtkConeSource)
vtkInstantiatorNewMacro(vtkCubeSource)
vtkInstantiatorNewMacro(vtkCylinderSource)
vtkInstantiatorNewMacro(vtkDiskSource)
vtkInstantiatorNewMacro(vtkEllipticalButtonSource)
vtkInstantiatorNewMacro(vtkFrustumSource)
vtkInstantiatorNewMacro(vtkGlyphSource2D)
vtkInstantiatorNewMacro(vtkHyperOctreeFractalSource)
vtkInstantiatorNewMacro(vtkHyperTreeGridSource)
vtkInstantiatorNewMacro(vtkLineSource)
vtkInstantiatorNewMacro(vtkOutlineCornerFilter)
vtkInstantiatorNewMacro(vtkOutlineCornerSource)
vtkInstantiatorNewMacro(vtkOutlineSource)
vtkInstantiatorNewMacro(vtkParametricFunctionSource)
vtkInstantiatorNewMacro(vtkPlaneSource)
vtkInstantiatorNewMacro(vtkPlatonicSolidSource)
vtkInstantiatorNewMacro(vtkPointSource)
vtkInstantiatorNewMacro(vtkProgrammableDataObjectSource)
vtkInstantiatorNewMacro(vtkProgrammableSource)
vtkInstantiatorNewMacro(vtkRectangularButtonSource)
vtkInstantiatorNewMacro(vtkRegularPolygonSource)
vtkInstantiatorNewMacro(vtkSelectionSource)
vtkInstantiatorNewMacro(vtkSphereSource)
vtkInstantiatorNewMacro(vtkSuperquadricSource)
vtkInstantiatorNewMacro(vtkTessellatedBoxSource)
vtkInstantiatorNewMacro(vtkTextSource)
vtkInstantiatorNewMacro(vtkTexturedSphereSource)
vtkInstantiatorNewMacro(vtkGraphToPolyData)
vtkInstantiatorNewMacro(vtkDiagonalMatrixSource)



void vtkFiltersSourcesInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkArcSource", vtkInstantiatorvtkArcSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkArrowSource", vtkInstantiatorvtkArrowSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkConeSource", vtkInstantiatorvtkConeSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkCubeSource", vtkInstantiatorvtkCubeSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkCylinderSource", vtkInstantiatorvtkCylinderSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkDiskSource", vtkInstantiatorvtkDiskSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkEllipticalButtonSource", vtkInstantiatorvtkEllipticalButtonSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkFrustumSource", vtkInstantiatorvtkFrustumSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkGlyphSource2D", vtkInstantiatorvtkGlyphSource2DNew);
  vtkInstantiator::RegisterInstantiator("vtkHyperOctreeFractalSource", vtkInstantiatorvtkHyperOctreeFractalSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkHyperTreeGridSource", vtkInstantiatorvtkHyperTreeGridSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkLineSource", vtkInstantiatorvtkLineSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkOutlineCornerFilter", vtkInstantiatorvtkOutlineCornerFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkOutlineCornerSource", vtkInstantiatorvtkOutlineCornerSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkOutlineSource", vtkInstantiatorvtkOutlineSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkParametricFunctionSource", vtkInstantiatorvtkParametricFunctionSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkPlaneSource", vtkInstantiatorvtkPlaneSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkPlatonicSolidSource", vtkInstantiatorvtkPlatonicSolidSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkPointSource", vtkInstantiatorvtkPointSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkProgrammableDataObjectSource", vtkInstantiatorvtkProgrammableDataObjectSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkProgrammableSource", vtkInstantiatorvtkProgrammableSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkRectangularButtonSource", vtkInstantiatorvtkRectangularButtonSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkRegularPolygonSource", vtkInstantiatorvtkRegularPolygonSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkSelectionSource", vtkInstantiatorvtkSelectionSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkSphereSource", vtkInstantiatorvtkSphereSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkSuperquadricSource", vtkInstantiatorvtkSuperquadricSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkTessellatedBoxSource", vtkInstantiatorvtkTessellatedBoxSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkTextSource", vtkInstantiatorvtkTextSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkTexturedSphereSource", vtkInstantiatorvtkTexturedSphereSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkGraphToPolyData", vtkInstantiatorvtkGraphToPolyDataNew);
  vtkInstantiator::RegisterInstantiator("vtkDiagonalMatrixSource", vtkInstantiatorvtkDiagonalMatrixSourceNew);


}

void vtkFiltersSourcesInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkArcSource", vtkInstantiatorvtkArcSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkArrowSource", vtkInstantiatorvtkArrowSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkConeSource", vtkInstantiatorvtkConeSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCubeSource", vtkInstantiatorvtkCubeSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCylinderSource", vtkInstantiatorvtkCylinderSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDiskSource", vtkInstantiatorvtkDiskSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkEllipticalButtonSource", vtkInstantiatorvtkEllipticalButtonSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFrustumSource", vtkInstantiatorvtkFrustumSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGlyphSource2D", vtkInstantiatorvtkGlyphSource2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHyperOctreeFractalSource", vtkInstantiatorvtkHyperOctreeFractalSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHyperTreeGridSource", vtkInstantiatorvtkHyperTreeGridSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLineSource", vtkInstantiatorvtkLineSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOutlineCornerFilter", vtkInstantiatorvtkOutlineCornerFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOutlineCornerSource", vtkInstantiatorvtkOutlineCornerSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOutlineSource", vtkInstantiatorvtkOutlineSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParametricFunctionSource", vtkInstantiatorvtkParametricFunctionSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPlaneSource", vtkInstantiatorvtkPlaneSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPlatonicSolidSource", vtkInstantiatorvtkPlatonicSolidSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPointSource", vtkInstantiatorvtkPointSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProgrammableDataObjectSource", vtkInstantiatorvtkProgrammableDataObjectSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProgrammableSource", vtkInstantiatorvtkProgrammableSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRectangularButtonSource", vtkInstantiatorvtkRectangularButtonSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRegularPolygonSource", vtkInstantiatorvtkRegularPolygonSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSelectionSource", vtkInstantiatorvtkSelectionSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSphereSource", vtkInstantiatorvtkSphereSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSuperquadricSource", vtkInstantiatorvtkSuperquadricSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTessellatedBoxSource", vtkInstantiatorvtkTessellatedBoxSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTextSource", vtkInstantiatorvtkTextSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTexturedSphereSource", vtkInstantiatorvtkTexturedSphereSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGraphToPolyData", vtkInstantiatorvtkGraphToPolyDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDiagonalMatrixSource", vtkInstantiatorvtkDiagonalMatrixSourceNew);


}

vtkFiltersSourcesInstantiator::vtkFiltersSourcesInstantiator()
{
  if(++vtkFiltersSourcesInstantiator::Count == 1)
    {
    vtkFiltersSourcesInstantiator::ClassInitialize();
    }
}

vtkFiltersSourcesInstantiator::~vtkFiltersSourcesInstantiator()
{
  if(--vtkFiltersSourcesInstantiator::Count == 0)
    {
    vtkFiltersSourcesInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkFiltersSourcesInstantiator::Count;
