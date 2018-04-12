#include "vtkCommonComputationalGeometryInstantiator.h"
#include "vtkCardinalSpline.h"
#include "vtkKochanekSpline.h"
#include "vtkParametricBoy.h"
#include "vtkParametricConicSpiral.h"
#include "vtkParametricCrossCap.h"
#include "vtkParametricDini.h"
#include "vtkParametricEllipsoid.h"
#include "vtkParametricEnneper.h"
#include "vtkParametricFigure8Klein.h"
#include "vtkParametricKlein.h"
#include "vtkParametricMobius.h"
#include "vtkParametricRandomHills.h"
#include "vtkParametricRoman.h"
#include "vtkParametricSpline.h"
#include "vtkParametricSuperEllipsoid.h"
#include "vtkParametricSuperToroid.h"
#include "vtkParametricTorus.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkCardinalSpline)
vtkInstantiatorNewMacro(vtkKochanekSpline)
vtkInstantiatorNewMacro(vtkParametricBoy)
vtkInstantiatorNewMacro(vtkParametricConicSpiral)
vtkInstantiatorNewMacro(vtkParametricCrossCap)
vtkInstantiatorNewMacro(vtkParametricDini)
vtkInstantiatorNewMacro(vtkParametricEllipsoid)
vtkInstantiatorNewMacro(vtkParametricEnneper)
vtkInstantiatorNewMacro(vtkParametricFigure8Klein)
vtkInstantiatorNewMacro(vtkParametricKlein)
vtkInstantiatorNewMacro(vtkParametricMobius)
vtkInstantiatorNewMacro(vtkParametricRandomHills)
vtkInstantiatorNewMacro(vtkParametricRoman)
vtkInstantiatorNewMacro(vtkParametricSpline)
vtkInstantiatorNewMacro(vtkParametricSuperEllipsoid)
vtkInstantiatorNewMacro(vtkParametricSuperToroid)
vtkInstantiatorNewMacro(vtkParametricTorus)



void vtkCommonComputationalGeometryInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkCardinalSpline", vtkInstantiatorvtkCardinalSplineNew);
  vtkInstantiator::RegisterInstantiator("vtkKochanekSpline", vtkInstantiatorvtkKochanekSplineNew);
  vtkInstantiator::RegisterInstantiator("vtkParametricBoy", vtkInstantiatorvtkParametricBoyNew);
  vtkInstantiator::RegisterInstantiator("vtkParametricConicSpiral", vtkInstantiatorvtkParametricConicSpiralNew);
  vtkInstantiator::RegisterInstantiator("vtkParametricCrossCap", vtkInstantiatorvtkParametricCrossCapNew);
  vtkInstantiator::RegisterInstantiator("vtkParametricDini", vtkInstantiatorvtkParametricDiniNew);
  vtkInstantiator::RegisterInstantiator("vtkParametricEllipsoid", vtkInstantiatorvtkParametricEllipsoidNew);
  vtkInstantiator::RegisterInstantiator("vtkParametricEnneper", vtkInstantiatorvtkParametricEnneperNew);
  vtkInstantiator::RegisterInstantiator("vtkParametricFigure8Klein", vtkInstantiatorvtkParametricFigure8KleinNew);
  vtkInstantiator::RegisterInstantiator("vtkParametricKlein", vtkInstantiatorvtkParametricKleinNew);
  vtkInstantiator::RegisterInstantiator("vtkParametricMobius", vtkInstantiatorvtkParametricMobiusNew);
  vtkInstantiator::RegisterInstantiator("vtkParametricRandomHills", vtkInstantiatorvtkParametricRandomHillsNew);
  vtkInstantiator::RegisterInstantiator("vtkParametricRoman", vtkInstantiatorvtkParametricRomanNew);
  vtkInstantiator::RegisterInstantiator("vtkParametricSpline", vtkInstantiatorvtkParametricSplineNew);
  vtkInstantiator::RegisterInstantiator("vtkParametricSuperEllipsoid", vtkInstantiatorvtkParametricSuperEllipsoidNew);
  vtkInstantiator::RegisterInstantiator("vtkParametricSuperToroid", vtkInstantiatorvtkParametricSuperToroidNew);
  vtkInstantiator::RegisterInstantiator("vtkParametricTorus", vtkInstantiatorvtkParametricTorusNew);


}

void vtkCommonComputationalGeometryInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkCardinalSpline", vtkInstantiatorvtkCardinalSplineNew);
  vtkInstantiator::UnRegisterInstantiator("vtkKochanekSpline", vtkInstantiatorvtkKochanekSplineNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParametricBoy", vtkInstantiatorvtkParametricBoyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParametricConicSpiral", vtkInstantiatorvtkParametricConicSpiralNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParametricCrossCap", vtkInstantiatorvtkParametricCrossCapNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParametricDini", vtkInstantiatorvtkParametricDiniNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParametricEllipsoid", vtkInstantiatorvtkParametricEllipsoidNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParametricEnneper", vtkInstantiatorvtkParametricEnneperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParametricFigure8Klein", vtkInstantiatorvtkParametricFigure8KleinNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParametricKlein", vtkInstantiatorvtkParametricKleinNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParametricMobius", vtkInstantiatorvtkParametricMobiusNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParametricRandomHills", vtkInstantiatorvtkParametricRandomHillsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParametricRoman", vtkInstantiatorvtkParametricRomanNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParametricSpline", vtkInstantiatorvtkParametricSplineNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParametricSuperEllipsoid", vtkInstantiatorvtkParametricSuperEllipsoidNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParametricSuperToroid", vtkInstantiatorvtkParametricSuperToroidNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParametricTorus", vtkInstantiatorvtkParametricTorusNew);


}

vtkCommonComputationalGeometryInstantiator::vtkCommonComputationalGeometryInstantiator()
{
  if(++vtkCommonComputationalGeometryInstantiator::Count == 1)
    {
    vtkCommonComputationalGeometryInstantiator::ClassInitialize();
    }
}

vtkCommonComputationalGeometryInstantiator::~vtkCommonComputationalGeometryInstantiator()
{
  if(--vtkCommonComputationalGeometryInstantiator::Count == 0)
    {
    vtkCommonComputationalGeometryInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkCommonComputationalGeometryInstantiator::Count;
