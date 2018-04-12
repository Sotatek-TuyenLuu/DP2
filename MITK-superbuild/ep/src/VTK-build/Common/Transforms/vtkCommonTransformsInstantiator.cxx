#include "vtkCommonTransformsInstantiator.h"
#include "vtkCylindricalTransform.h"
#include "vtkGeneralTransform.h"
#include "vtkIdentityTransform.h"
#include "vtkMatrixToHomogeneousTransform.h"
#include "vtkMatrixToLinearTransform.h"
#include "vtkPerspectiveTransform.h"
#include "vtkSphericalTransform.h"
#include "vtkThinPlateSplineTransform.h"
#include "vtkTransform2D.h"
#include "vtkTransformCollection.h"
#include "vtkTransform.h"
#include "vtkLandmarkTransform.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkCylindricalTransform)
vtkInstantiatorNewMacro(vtkGeneralTransform)
vtkInstantiatorNewMacro(vtkIdentityTransform)
vtkInstantiatorNewMacro(vtkMatrixToHomogeneousTransform)
vtkInstantiatorNewMacro(vtkMatrixToLinearTransform)
vtkInstantiatorNewMacro(vtkPerspectiveTransform)
vtkInstantiatorNewMacro(vtkSphericalTransform)
vtkInstantiatorNewMacro(vtkThinPlateSplineTransform)
vtkInstantiatorNewMacro(vtkTransform2D)
vtkInstantiatorNewMacro(vtkTransformCollection)
vtkInstantiatorNewMacro(vtkTransform)
vtkInstantiatorNewMacro(vtkLandmarkTransform)



void vtkCommonTransformsInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkCylindricalTransform", vtkInstantiatorvtkCylindricalTransformNew);
  vtkInstantiator::RegisterInstantiator("vtkGeneralTransform", vtkInstantiatorvtkGeneralTransformNew);
  vtkInstantiator::RegisterInstantiator("vtkIdentityTransform", vtkInstantiatorvtkIdentityTransformNew);
  vtkInstantiator::RegisterInstantiator("vtkMatrixToHomogeneousTransform", vtkInstantiatorvtkMatrixToHomogeneousTransformNew);
  vtkInstantiator::RegisterInstantiator("vtkMatrixToLinearTransform", vtkInstantiatorvtkMatrixToLinearTransformNew);
  vtkInstantiator::RegisterInstantiator("vtkPerspectiveTransform", vtkInstantiatorvtkPerspectiveTransformNew);
  vtkInstantiator::RegisterInstantiator("vtkSphericalTransform", vtkInstantiatorvtkSphericalTransformNew);
  vtkInstantiator::RegisterInstantiator("vtkThinPlateSplineTransform", vtkInstantiatorvtkThinPlateSplineTransformNew);
  vtkInstantiator::RegisterInstantiator("vtkTransform2D", vtkInstantiatorvtkTransform2DNew);
  vtkInstantiator::RegisterInstantiator("vtkTransformCollection", vtkInstantiatorvtkTransformCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkTransform", vtkInstantiatorvtkTransformNew);
  vtkInstantiator::RegisterInstantiator("vtkLandmarkTransform", vtkInstantiatorvtkLandmarkTransformNew);


}

void vtkCommonTransformsInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkCylindricalTransform", vtkInstantiatorvtkCylindricalTransformNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeneralTransform", vtkInstantiatorvtkGeneralTransformNew);
  vtkInstantiator::UnRegisterInstantiator("vtkIdentityTransform", vtkInstantiatorvtkIdentityTransformNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMatrixToHomogeneousTransform", vtkInstantiatorvtkMatrixToHomogeneousTransformNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMatrixToLinearTransform", vtkInstantiatorvtkMatrixToLinearTransformNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPerspectiveTransform", vtkInstantiatorvtkPerspectiveTransformNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSphericalTransform", vtkInstantiatorvtkSphericalTransformNew);
  vtkInstantiator::UnRegisterInstantiator("vtkThinPlateSplineTransform", vtkInstantiatorvtkThinPlateSplineTransformNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTransform2D", vtkInstantiatorvtkTransform2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTransformCollection", vtkInstantiatorvtkTransformCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTransform", vtkInstantiatorvtkTransformNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLandmarkTransform", vtkInstantiatorvtkLandmarkTransformNew);


}

vtkCommonTransformsInstantiator::vtkCommonTransformsInstantiator()
{
  if(++vtkCommonTransformsInstantiator::Count == 1)
    {
    vtkCommonTransformsInstantiator::ClassInitialize();
    }
}

vtkCommonTransformsInstantiator::~vtkCommonTransformsInstantiator()
{
  if(--vtkCommonTransformsInstantiator::Count == 0)
    {
    vtkCommonTransformsInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkCommonTransformsInstantiator::Count;
