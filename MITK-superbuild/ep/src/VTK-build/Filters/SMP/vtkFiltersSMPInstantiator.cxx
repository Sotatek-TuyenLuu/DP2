#include "vtkFiltersSMPInstantiator.h"
#include "vtkSMPContourGrid.h"
#include "vtkSMPContourGridManyPieces.h"
#include "vtkSMPMergePoints.h"
#include "vtkThreadedSynchronizedTemplates3D.h"
#include "vtkSMPTransform.h"
#include "vtkSMPWarpVector.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkSMPContourGrid)
vtkInstantiatorNewMacro(vtkSMPContourGridManyPieces)
vtkInstantiatorNewMacro(vtkSMPMergePoints)
vtkInstantiatorNewMacro(vtkThreadedSynchronizedTemplates3D)
vtkInstantiatorNewMacro(vtkSMPTransform)
vtkInstantiatorNewMacro(vtkSMPWarpVector)



void vtkFiltersSMPInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkSMPContourGrid", vtkInstantiatorvtkSMPContourGridNew);
  vtkInstantiator::RegisterInstantiator("vtkSMPContourGridManyPieces", vtkInstantiatorvtkSMPContourGridManyPiecesNew);
  vtkInstantiator::RegisterInstantiator("vtkSMPMergePoints", vtkInstantiatorvtkSMPMergePointsNew);
  vtkInstantiator::RegisterInstantiator("vtkThreadedSynchronizedTemplates3D", vtkInstantiatorvtkThreadedSynchronizedTemplates3DNew);
  vtkInstantiator::RegisterInstantiator("vtkSMPTransform", vtkInstantiatorvtkSMPTransformNew);
  vtkInstantiator::RegisterInstantiator("vtkSMPWarpVector", vtkInstantiatorvtkSMPWarpVectorNew);


}

void vtkFiltersSMPInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkSMPContourGrid", vtkInstantiatorvtkSMPContourGridNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSMPContourGridManyPieces", vtkInstantiatorvtkSMPContourGridManyPiecesNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSMPMergePoints", vtkInstantiatorvtkSMPMergePointsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkThreadedSynchronizedTemplates3D", vtkInstantiatorvtkThreadedSynchronizedTemplates3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSMPTransform", vtkInstantiatorvtkSMPTransformNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSMPWarpVector", vtkInstantiatorvtkSMPWarpVectorNew);


}

vtkFiltersSMPInstantiator::vtkFiltersSMPInstantiator()
{
  if(++vtkFiltersSMPInstantiator::Count == 1)
    {
    vtkFiltersSMPInstantiator::ClassInitialize();
    }
}

vtkFiltersSMPInstantiator::~vtkFiltersSMPInstantiator()
{
  if(--vtkFiltersSMPInstantiator::Count == 0)
    {
    vtkFiltersSMPInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkFiltersSMPInstantiator::Count;
