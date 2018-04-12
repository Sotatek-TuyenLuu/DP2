#include "vtkFiltersTextureInstantiator.h"
#include "vtkTextureMapToCylinder.h"
#include "vtkTextureMapToPlane.h"
#include "vtkTextureMapToSphere.h"
#include "vtkImplicitTextureCoords.h"
#include "vtkThresholdTextureCoords.h"
#include "vtkTransformTextureCoords.h"
#include "vtkTriangularTCoords.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkTextureMapToCylinder)
vtkInstantiatorNewMacro(vtkTextureMapToPlane)
vtkInstantiatorNewMacro(vtkTextureMapToSphere)
vtkInstantiatorNewMacro(vtkImplicitTextureCoords)
vtkInstantiatorNewMacro(vtkThresholdTextureCoords)
vtkInstantiatorNewMacro(vtkTransformTextureCoords)
vtkInstantiatorNewMacro(vtkTriangularTCoords)



void vtkFiltersTextureInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkTextureMapToCylinder", vtkInstantiatorvtkTextureMapToCylinderNew);
  vtkInstantiator::RegisterInstantiator("vtkTextureMapToPlane", vtkInstantiatorvtkTextureMapToPlaneNew);
  vtkInstantiator::RegisterInstantiator("vtkTextureMapToSphere", vtkInstantiatorvtkTextureMapToSphereNew);
  vtkInstantiator::RegisterInstantiator("vtkImplicitTextureCoords", vtkInstantiatorvtkImplicitTextureCoordsNew);
  vtkInstantiator::RegisterInstantiator("vtkThresholdTextureCoords", vtkInstantiatorvtkThresholdTextureCoordsNew);
  vtkInstantiator::RegisterInstantiator("vtkTransformTextureCoords", vtkInstantiatorvtkTransformTextureCoordsNew);
  vtkInstantiator::RegisterInstantiator("vtkTriangularTCoords", vtkInstantiatorvtkTriangularTCoordsNew);


}

void vtkFiltersTextureInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkTextureMapToCylinder", vtkInstantiatorvtkTextureMapToCylinderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTextureMapToPlane", vtkInstantiatorvtkTextureMapToPlaneNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTextureMapToSphere", vtkInstantiatorvtkTextureMapToSphereNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImplicitTextureCoords", vtkInstantiatorvtkImplicitTextureCoordsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkThresholdTextureCoords", vtkInstantiatorvtkThresholdTextureCoordsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTransformTextureCoords", vtkInstantiatorvtkTransformTextureCoordsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTriangularTCoords", vtkInstantiatorvtkTriangularTCoordsNew);


}

vtkFiltersTextureInstantiator::vtkFiltersTextureInstantiator()
{
  if(++vtkFiltersTextureInstantiator::Count == 1)
    {
    vtkFiltersTextureInstantiator::ClassInitialize();
    }
}

vtkFiltersTextureInstantiator::~vtkFiltersTextureInstantiator()
{
  if(--vtkFiltersTextureInstantiator::Count == 0)
    {
    vtkFiltersTextureInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkFiltersTextureInstantiator::Count;
