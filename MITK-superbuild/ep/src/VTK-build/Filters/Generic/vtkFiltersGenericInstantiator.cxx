#include "vtkFiltersGenericInstantiator.h"
#include "vtkGenericClip.h"
#include "vtkGenericContourFilter.h"
#include "vtkGenericCutter.h"
#include "vtkGenericDataSetTessellator.h"
#include "vtkGenericGeometryFilter.h"
#include "vtkGenericGlyph3DFilter.h"
#include "vtkGenericOutlineFilter.h"
#include "vtkGenericProbeFilter.h"
#include "vtkGenericStreamTracer.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkGenericClip)
vtkInstantiatorNewMacro(vtkGenericContourFilter)
vtkInstantiatorNewMacro(vtkGenericCutter)
vtkInstantiatorNewMacro(vtkGenericDataSetTessellator)
vtkInstantiatorNewMacro(vtkGenericGeometryFilter)
vtkInstantiatorNewMacro(vtkGenericGlyph3DFilter)
vtkInstantiatorNewMacro(vtkGenericOutlineFilter)
vtkInstantiatorNewMacro(vtkGenericProbeFilter)
vtkInstantiatorNewMacro(vtkGenericStreamTracer)



void vtkFiltersGenericInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkGenericClip", vtkInstantiatorvtkGenericClipNew);
  vtkInstantiator::RegisterInstantiator("vtkGenericContourFilter", vtkInstantiatorvtkGenericContourFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkGenericCutter", vtkInstantiatorvtkGenericCutterNew);
  vtkInstantiator::RegisterInstantiator("vtkGenericDataSetTessellator", vtkInstantiatorvtkGenericDataSetTessellatorNew);
  vtkInstantiator::RegisterInstantiator("vtkGenericGeometryFilter", vtkInstantiatorvtkGenericGeometryFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkGenericGlyph3DFilter", vtkInstantiatorvtkGenericGlyph3DFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkGenericOutlineFilter", vtkInstantiatorvtkGenericOutlineFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkGenericProbeFilter", vtkInstantiatorvtkGenericProbeFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkGenericStreamTracer", vtkInstantiatorvtkGenericStreamTracerNew);


}

void vtkFiltersGenericInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkGenericClip", vtkInstantiatorvtkGenericClipNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGenericContourFilter", vtkInstantiatorvtkGenericContourFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGenericCutter", vtkInstantiatorvtkGenericCutterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGenericDataSetTessellator", vtkInstantiatorvtkGenericDataSetTessellatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGenericGeometryFilter", vtkInstantiatorvtkGenericGeometryFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGenericGlyph3DFilter", vtkInstantiatorvtkGenericGlyph3DFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGenericOutlineFilter", vtkInstantiatorvtkGenericOutlineFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGenericProbeFilter", vtkInstantiatorvtkGenericProbeFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGenericStreamTracer", vtkInstantiatorvtkGenericStreamTracerNew);


}

vtkFiltersGenericInstantiator::vtkFiltersGenericInstantiator()
{
  if(++vtkFiltersGenericInstantiator::Count == 1)
    {
    vtkFiltersGenericInstantiator::ClassInitialize();
    }
}

vtkFiltersGenericInstantiator::~vtkFiltersGenericInstantiator()
{
  if(--vtkFiltersGenericInstantiator::Count == 0)
    {
    vtkFiltersGenericInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkFiltersGenericInstantiator::Count;
