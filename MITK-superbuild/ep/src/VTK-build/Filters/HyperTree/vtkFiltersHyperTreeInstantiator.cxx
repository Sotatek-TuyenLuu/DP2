#include "vtkFiltersHyperTreeInstantiator.h"
#include "vtkClipHyperOctree.h"
#include "vtkHyperTreeGridAxisCut.h"
#include "vtkHyperTreeGridGeometry.h"
#include "vtkHyperTreeGridToUnstructuredGrid.h"
#include "vtkHyperOctreeClipCutPointsGrabber.h"
#include "vtkHyperOctreeContourFilter.h"
#include "vtkHyperOctreeCutter.h"
#include "vtkHyperOctreeDepth.h"
#include "vtkHyperOctreeDualGridContourFilter.h"
#include "vtkHyperOctreeLimiter.h"
#include "vtkHyperOctreeSampleFunction.h"
#include "vtkHyperOctreeSurfaceFilter.h"
#include "vtkHyperOctreeToUniformGridFilter.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkClipHyperOctree)
vtkInstantiatorNewMacro(vtkHyperTreeGridAxisCut)
vtkInstantiatorNewMacro(vtkHyperTreeGridGeometry)
vtkInstantiatorNewMacro(vtkHyperTreeGridToUnstructuredGrid)
vtkInstantiatorNewMacro(vtkHyperOctreeClipCutPointsGrabber)
vtkInstantiatorNewMacro(vtkHyperOctreeContourFilter)
vtkInstantiatorNewMacro(vtkHyperOctreeCutter)
vtkInstantiatorNewMacro(vtkHyperOctreeDepth)
vtkInstantiatorNewMacro(vtkHyperOctreeDualGridContourFilter)
vtkInstantiatorNewMacro(vtkHyperOctreeLimiter)
vtkInstantiatorNewMacro(vtkHyperOctreeSampleFunction)
vtkInstantiatorNewMacro(vtkHyperOctreeSurfaceFilter)
vtkInstantiatorNewMacro(vtkHyperOctreeToUniformGridFilter)



void vtkFiltersHyperTreeInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkClipHyperOctree", vtkInstantiatorvtkClipHyperOctreeNew);
  vtkInstantiator::RegisterInstantiator("vtkHyperTreeGridAxisCut", vtkInstantiatorvtkHyperTreeGridAxisCutNew);
  vtkInstantiator::RegisterInstantiator("vtkHyperTreeGridGeometry", vtkInstantiatorvtkHyperTreeGridGeometryNew);
  vtkInstantiator::RegisterInstantiator("vtkHyperTreeGridToUnstructuredGrid", vtkInstantiatorvtkHyperTreeGridToUnstructuredGridNew);
  vtkInstantiator::RegisterInstantiator("vtkHyperOctreeClipCutPointsGrabber", vtkInstantiatorvtkHyperOctreeClipCutPointsGrabberNew);
  vtkInstantiator::RegisterInstantiator("vtkHyperOctreeContourFilter", vtkInstantiatorvtkHyperOctreeContourFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkHyperOctreeCutter", vtkInstantiatorvtkHyperOctreeCutterNew);
  vtkInstantiator::RegisterInstantiator("vtkHyperOctreeDepth", vtkInstantiatorvtkHyperOctreeDepthNew);
  vtkInstantiator::RegisterInstantiator("vtkHyperOctreeDualGridContourFilter", vtkInstantiatorvtkHyperOctreeDualGridContourFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkHyperOctreeLimiter", vtkInstantiatorvtkHyperOctreeLimiterNew);
  vtkInstantiator::RegisterInstantiator("vtkHyperOctreeSampleFunction", vtkInstantiatorvtkHyperOctreeSampleFunctionNew);
  vtkInstantiator::RegisterInstantiator("vtkHyperOctreeSurfaceFilter", vtkInstantiatorvtkHyperOctreeSurfaceFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkHyperOctreeToUniformGridFilter", vtkInstantiatorvtkHyperOctreeToUniformGridFilterNew);


}

void vtkFiltersHyperTreeInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkClipHyperOctree", vtkInstantiatorvtkClipHyperOctreeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHyperTreeGridAxisCut", vtkInstantiatorvtkHyperTreeGridAxisCutNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHyperTreeGridGeometry", vtkInstantiatorvtkHyperTreeGridGeometryNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHyperTreeGridToUnstructuredGrid", vtkInstantiatorvtkHyperTreeGridToUnstructuredGridNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHyperOctreeClipCutPointsGrabber", vtkInstantiatorvtkHyperOctreeClipCutPointsGrabberNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHyperOctreeContourFilter", vtkInstantiatorvtkHyperOctreeContourFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHyperOctreeCutter", vtkInstantiatorvtkHyperOctreeCutterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHyperOctreeDepth", vtkInstantiatorvtkHyperOctreeDepthNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHyperOctreeDualGridContourFilter", vtkInstantiatorvtkHyperOctreeDualGridContourFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHyperOctreeLimiter", vtkInstantiatorvtkHyperOctreeLimiterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHyperOctreeSampleFunction", vtkInstantiatorvtkHyperOctreeSampleFunctionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHyperOctreeSurfaceFilter", vtkInstantiatorvtkHyperOctreeSurfaceFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHyperOctreeToUniformGridFilter", vtkInstantiatorvtkHyperOctreeToUniformGridFilterNew);


}

vtkFiltersHyperTreeInstantiator::vtkFiltersHyperTreeInstantiator()
{
  if(++vtkFiltersHyperTreeInstantiator::Count == 1)
    {
    vtkFiltersHyperTreeInstantiator::ClassInitialize();
    }
}

vtkFiltersHyperTreeInstantiator::~vtkFiltersHyperTreeInstantiator()
{
  if(--vtkFiltersHyperTreeInstantiator::Count == 0)
    {
    vtkFiltersHyperTreeInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkFiltersHyperTreeInstantiator::Count;
