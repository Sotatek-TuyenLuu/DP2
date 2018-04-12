#include "vtkImagingHybridInstantiator.h"
#include "vtkBooleanTexture.h"
#include "vtkShepardMethod.h"
#include "vtkVoxelModeller.h"
#include "vtkSurfaceReconstructionFilter.h"
#include "vtkFastSplatter.h"
#include "vtkGaussianSplatter.h"
#include "vtkSampleFunction.h"
#include "vtkPointLoad.h"
#include "vtkImageCursor3D.h"
#include "vtkImageRectilinearWipe.h"
#include "vtkTriangularTexture.h"
#include "vtkSliceCubes.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkBooleanTexture)
vtkInstantiatorNewMacro(vtkShepardMethod)
vtkInstantiatorNewMacro(vtkVoxelModeller)
vtkInstantiatorNewMacro(vtkSurfaceReconstructionFilter)
vtkInstantiatorNewMacro(vtkFastSplatter)
vtkInstantiatorNewMacro(vtkGaussianSplatter)
vtkInstantiatorNewMacro(vtkSampleFunction)
vtkInstantiatorNewMacro(vtkPointLoad)
vtkInstantiatorNewMacro(vtkImageCursor3D)
vtkInstantiatorNewMacro(vtkImageRectilinearWipe)
vtkInstantiatorNewMacro(vtkTriangularTexture)
vtkInstantiatorNewMacro(vtkSliceCubes)



void vtkImagingHybridInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkBooleanTexture", vtkInstantiatorvtkBooleanTextureNew);
  vtkInstantiator::RegisterInstantiator("vtkShepardMethod", vtkInstantiatorvtkShepardMethodNew);
  vtkInstantiator::RegisterInstantiator("vtkVoxelModeller", vtkInstantiatorvtkVoxelModellerNew);
  vtkInstantiator::RegisterInstantiator("vtkSurfaceReconstructionFilter", vtkInstantiatorvtkSurfaceReconstructionFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkFastSplatter", vtkInstantiatorvtkFastSplatterNew);
  vtkInstantiator::RegisterInstantiator("vtkGaussianSplatter", vtkInstantiatorvtkGaussianSplatterNew);
  vtkInstantiator::RegisterInstantiator("vtkSampleFunction", vtkInstantiatorvtkSampleFunctionNew);
  vtkInstantiator::RegisterInstantiator("vtkPointLoad", vtkInstantiatorvtkPointLoadNew);
  vtkInstantiator::RegisterInstantiator("vtkImageCursor3D", vtkInstantiatorvtkImageCursor3DNew);
  vtkInstantiator::RegisterInstantiator("vtkImageRectilinearWipe", vtkInstantiatorvtkImageRectilinearWipeNew);
  vtkInstantiator::RegisterInstantiator("vtkTriangularTexture", vtkInstantiatorvtkTriangularTextureNew);
  vtkInstantiator::RegisterInstantiator("vtkSliceCubes", vtkInstantiatorvtkSliceCubesNew);


}

void vtkImagingHybridInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkBooleanTexture", vtkInstantiatorvtkBooleanTextureNew);
  vtkInstantiator::UnRegisterInstantiator("vtkShepardMethod", vtkInstantiatorvtkShepardMethodNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVoxelModeller", vtkInstantiatorvtkVoxelModellerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSurfaceReconstructionFilter", vtkInstantiatorvtkSurfaceReconstructionFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFastSplatter", vtkInstantiatorvtkFastSplatterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGaussianSplatter", vtkInstantiatorvtkGaussianSplatterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSampleFunction", vtkInstantiatorvtkSampleFunctionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPointLoad", vtkInstantiatorvtkPointLoadNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageCursor3D", vtkInstantiatorvtkImageCursor3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageRectilinearWipe", vtkInstantiatorvtkImageRectilinearWipeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTriangularTexture", vtkInstantiatorvtkTriangularTextureNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSliceCubes", vtkInstantiatorvtkSliceCubesNew);


}

vtkImagingHybridInstantiator::vtkImagingHybridInstantiator()
{
  if(++vtkImagingHybridInstantiator::Count == 1)
    {
    vtkImagingHybridInstantiator::ClassInitialize();
    }
}

vtkImagingHybridInstantiator::~vtkImagingHybridInstantiator()
{
  if(--vtkImagingHybridInstantiator::Count == 0)
    {
    vtkImagingHybridInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkImagingHybridInstantiator::Count;
