#include "vtkFiltersFlowPathsInstantiator.h"
#include "vtkAMRInterpolatedVelocityField.h"
#include "vtkDashedStreamLine.h"
#include "vtkInterpolatedVelocityField.h"
#include "vtkStreamLine.h"
#include "vtkStreamPoints.h"
#include "vtkStreamTracer.h"
#include "vtkModifiedBSPTree.h"
#include "vtkCellLocatorInterpolatedVelocityField.h"
#include "vtkTemporalStreamTracer.h"
#include "vtkParticleTracer.h"
#include "vtkStreaklineFilter.h"
#include "vtkParticlePathFilter.h"
#include "vtkTemporalInterpolatedVelocityField.h"
#include "vtkCachingInterpolatedVelocityField.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkAMRInterpolatedVelocityField)
vtkInstantiatorNewMacro(vtkDashedStreamLine)
vtkInstantiatorNewMacro(vtkInterpolatedVelocityField)
vtkInstantiatorNewMacro(vtkStreamLine)
vtkInstantiatorNewMacro(vtkStreamPoints)
vtkInstantiatorNewMacro(vtkStreamTracer)
vtkInstantiatorNewMacro(vtkModifiedBSPTree)
vtkInstantiatorNewMacro(vtkCellLocatorInterpolatedVelocityField)
vtkInstantiatorNewMacro(vtkTemporalStreamTracer)
vtkInstantiatorNewMacro(vtkParticleTracer)
vtkInstantiatorNewMacro(vtkStreaklineFilter)
vtkInstantiatorNewMacro(vtkParticlePathFilter)
vtkInstantiatorNewMacro(vtkTemporalInterpolatedVelocityField)
vtkInstantiatorNewMacro(vtkCachingInterpolatedVelocityField)



void vtkFiltersFlowPathsInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkAMRInterpolatedVelocityField", vtkInstantiatorvtkAMRInterpolatedVelocityFieldNew);
  vtkInstantiator::RegisterInstantiator("vtkDashedStreamLine", vtkInstantiatorvtkDashedStreamLineNew);
  vtkInstantiator::RegisterInstantiator("vtkInterpolatedVelocityField", vtkInstantiatorvtkInterpolatedVelocityFieldNew);
  vtkInstantiator::RegisterInstantiator("vtkStreamLine", vtkInstantiatorvtkStreamLineNew);
  vtkInstantiator::RegisterInstantiator("vtkStreamPoints", vtkInstantiatorvtkStreamPointsNew);
  vtkInstantiator::RegisterInstantiator("vtkStreamTracer", vtkInstantiatorvtkStreamTracerNew);
  vtkInstantiator::RegisterInstantiator("vtkModifiedBSPTree", vtkInstantiatorvtkModifiedBSPTreeNew);
  vtkInstantiator::RegisterInstantiator("vtkCellLocatorInterpolatedVelocityField", vtkInstantiatorvtkCellLocatorInterpolatedVelocityFieldNew);
  vtkInstantiator::RegisterInstantiator("vtkTemporalStreamTracer", vtkInstantiatorvtkTemporalStreamTracerNew);
  vtkInstantiator::RegisterInstantiator("vtkParticleTracer", vtkInstantiatorvtkParticleTracerNew);
  vtkInstantiator::RegisterInstantiator("vtkStreaklineFilter", vtkInstantiatorvtkStreaklineFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkParticlePathFilter", vtkInstantiatorvtkParticlePathFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkTemporalInterpolatedVelocityField", vtkInstantiatorvtkTemporalInterpolatedVelocityFieldNew);
  vtkInstantiator::RegisterInstantiator("vtkCachingInterpolatedVelocityField", vtkInstantiatorvtkCachingInterpolatedVelocityFieldNew);


}

void vtkFiltersFlowPathsInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkAMRInterpolatedVelocityField", vtkInstantiatorvtkAMRInterpolatedVelocityFieldNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDashedStreamLine", vtkInstantiatorvtkDashedStreamLineNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInterpolatedVelocityField", vtkInstantiatorvtkInterpolatedVelocityFieldNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStreamLine", vtkInstantiatorvtkStreamLineNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStreamPoints", vtkInstantiatorvtkStreamPointsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStreamTracer", vtkInstantiatorvtkStreamTracerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkModifiedBSPTree", vtkInstantiatorvtkModifiedBSPTreeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCellLocatorInterpolatedVelocityField", vtkInstantiatorvtkCellLocatorInterpolatedVelocityFieldNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTemporalStreamTracer", vtkInstantiatorvtkTemporalStreamTracerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParticleTracer", vtkInstantiatorvtkParticleTracerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStreaklineFilter", vtkInstantiatorvtkStreaklineFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParticlePathFilter", vtkInstantiatorvtkParticlePathFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTemporalInterpolatedVelocityField", vtkInstantiatorvtkTemporalInterpolatedVelocityFieldNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCachingInterpolatedVelocityField", vtkInstantiatorvtkCachingInterpolatedVelocityFieldNew);


}

vtkFiltersFlowPathsInstantiator::vtkFiltersFlowPathsInstantiator()
{
  if(++vtkFiltersFlowPathsInstantiator::Count == 1)
    {
    vtkFiltersFlowPathsInstantiator::ClassInitialize();
    }
}

vtkFiltersFlowPathsInstantiator::~vtkFiltersFlowPathsInstantiator()
{
  if(--vtkFiltersFlowPathsInstantiator::Count == 0)
    {
    vtkFiltersFlowPathsInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkFiltersFlowPathsInstantiator::Count;
