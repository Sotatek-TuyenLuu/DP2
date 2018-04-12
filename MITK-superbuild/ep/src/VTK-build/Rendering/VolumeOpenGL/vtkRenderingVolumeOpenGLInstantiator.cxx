#include "vtkRenderingVolumeOpenGLInstantiator.h"
#include "vtkOpenGLHAVSVolumeMapper.h"
#include "vtkOpenGLProjectedAAHexahedraMapper.h"
#include "vtkOpenGLProjectedTetrahedraMapper.h"
#include "vtkOpenGLRayCastImageDisplayHelper.h"
#include "vtkOpenGLVolumeTextureMapper2D.h"
#include "vtkOpenGLVolumeTextureMapper3D.h"
#include "vtkSmartVolumeMapper.h"
#include "vtkOpenGLGPUVolumeRayCastMapper.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkOpenGLHAVSVolumeMapper)
vtkInstantiatorNewMacro(vtkOpenGLProjectedAAHexahedraMapper)
vtkInstantiatorNewMacro(vtkOpenGLProjectedTetrahedraMapper)
vtkInstantiatorNewMacro(vtkOpenGLRayCastImageDisplayHelper)
vtkInstantiatorNewMacro(vtkOpenGLVolumeTextureMapper2D)
vtkInstantiatorNewMacro(vtkOpenGLVolumeTextureMapper3D)
vtkInstantiatorNewMacro(vtkSmartVolumeMapper)
vtkInstantiatorNewMacro(vtkOpenGLGPUVolumeRayCastMapper)



void vtkRenderingVolumeOpenGLInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkOpenGLHAVSVolumeMapper", vtkInstantiatorvtkOpenGLHAVSVolumeMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLProjectedAAHexahedraMapper", vtkInstantiatorvtkOpenGLProjectedAAHexahedraMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLProjectedTetrahedraMapper", vtkInstantiatorvtkOpenGLProjectedTetrahedraMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLRayCastImageDisplayHelper", vtkInstantiatorvtkOpenGLRayCastImageDisplayHelperNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLVolumeTextureMapper2D", vtkInstantiatorvtkOpenGLVolumeTextureMapper2DNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLVolumeTextureMapper3D", vtkInstantiatorvtkOpenGLVolumeTextureMapper3DNew);
  vtkInstantiator::RegisterInstantiator("vtkSmartVolumeMapper", vtkInstantiatorvtkSmartVolumeMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLGPUVolumeRayCastMapper", vtkInstantiatorvtkOpenGLGPUVolumeRayCastMapperNew);


}

void vtkRenderingVolumeOpenGLInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLHAVSVolumeMapper", vtkInstantiatorvtkOpenGLHAVSVolumeMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLProjectedAAHexahedraMapper", vtkInstantiatorvtkOpenGLProjectedAAHexahedraMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLProjectedTetrahedraMapper", vtkInstantiatorvtkOpenGLProjectedTetrahedraMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLRayCastImageDisplayHelper", vtkInstantiatorvtkOpenGLRayCastImageDisplayHelperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLVolumeTextureMapper2D", vtkInstantiatorvtkOpenGLVolumeTextureMapper2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLVolumeTextureMapper3D", vtkInstantiatorvtkOpenGLVolumeTextureMapper3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSmartVolumeMapper", vtkInstantiatorvtkSmartVolumeMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLGPUVolumeRayCastMapper", vtkInstantiatorvtkOpenGLGPUVolumeRayCastMapperNew);


}

vtkRenderingVolumeOpenGLInstantiator::vtkRenderingVolumeOpenGLInstantiator()
{
  if(++vtkRenderingVolumeOpenGLInstantiator::Count == 1)
    {
    vtkRenderingVolumeOpenGLInstantiator::ClassInitialize();
    }
}

vtkRenderingVolumeOpenGLInstantiator::~vtkRenderingVolumeOpenGLInstantiator()
{
  if(--vtkRenderingVolumeOpenGLInstantiator::Count == 0)
    {
    vtkRenderingVolumeOpenGLInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkRenderingVolumeOpenGLInstantiator::Count;
