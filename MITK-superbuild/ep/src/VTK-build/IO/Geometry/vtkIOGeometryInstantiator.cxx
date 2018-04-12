#include "vtkIOGeometryInstantiator.h"
#include "vtkAVSucdReader.h"
#include "vtkBYUReader.h"
#include "vtkBYUWriter.h"
#include "vtkChacoReader.h"
#include "vtkFacetWriter.h"
#include "vtkFLUENTReader.h"
#include "vtkGAMBITReader.h"
#include "vtkGaussianCubeReader.h"
#include "vtkIVWriter.h"
#include "vtkMCubesReader.h"
#include "vtkMCubesWriter.h"
#include "vtkMFIXReader.h"
#include "vtkMultiBlockPLOT3DReader.h"
#include "vtkOBJReader.h"
#include "vtkOpenFOAMReader.h"
#include "vtkParticleReader.h"
#include "vtkPDBReader.h"
#include "vtkPlot3DMetaReader.h"
#include "vtkProStarReader.h"
#include "vtkSTLReader.h"
#include "vtkSTLWriter.h"
#include "vtkTecplotReader.h"
#include "vtkUGFacetReader.h"
#include "vtkWindBladeReader.h"
#include "vtkXYZMolReader.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkAVSucdReader)
vtkInstantiatorNewMacro(vtkBYUReader)
vtkInstantiatorNewMacro(vtkBYUWriter)
vtkInstantiatorNewMacro(vtkChacoReader)
vtkInstantiatorNewMacro(vtkFacetWriter)
vtkInstantiatorNewMacro(vtkFLUENTReader)
vtkInstantiatorNewMacro(vtkGAMBITReader)
vtkInstantiatorNewMacro(vtkGaussianCubeReader)
vtkInstantiatorNewMacro(vtkIVWriter)
vtkInstantiatorNewMacro(vtkMCubesReader)
vtkInstantiatorNewMacro(vtkMCubesWriter)
vtkInstantiatorNewMacro(vtkMFIXReader)
vtkInstantiatorNewMacro(vtkMultiBlockPLOT3DReader)
vtkInstantiatorNewMacro(vtkOBJReader)
vtkInstantiatorNewMacro(vtkOpenFOAMReader)
vtkInstantiatorNewMacro(vtkParticleReader)
vtkInstantiatorNewMacro(vtkPDBReader)
vtkInstantiatorNewMacro(vtkPlot3DMetaReader)
vtkInstantiatorNewMacro(vtkProStarReader)
vtkInstantiatorNewMacro(vtkSTLReader)
vtkInstantiatorNewMacro(vtkSTLWriter)
vtkInstantiatorNewMacro(vtkTecplotReader)
vtkInstantiatorNewMacro(vtkUGFacetReader)
vtkInstantiatorNewMacro(vtkWindBladeReader)
vtkInstantiatorNewMacro(vtkXYZMolReader)



void vtkIOGeometryInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkAVSucdReader", vtkInstantiatorvtkAVSucdReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkBYUReader", vtkInstantiatorvtkBYUReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkBYUWriter", vtkInstantiatorvtkBYUWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkChacoReader", vtkInstantiatorvtkChacoReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkFacetWriter", vtkInstantiatorvtkFacetWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkFLUENTReader", vtkInstantiatorvtkFLUENTReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkGAMBITReader", vtkInstantiatorvtkGAMBITReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkGaussianCubeReader", vtkInstantiatorvtkGaussianCubeReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkIVWriter", vtkInstantiatorvtkIVWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkMCubesReader", vtkInstantiatorvtkMCubesReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkMCubesWriter", vtkInstantiatorvtkMCubesWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkMFIXReader", vtkInstantiatorvtkMFIXReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkMultiBlockPLOT3DReader", vtkInstantiatorvtkMultiBlockPLOT3DReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkOBJReader", vtkInstantiatorvtkOBJReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenFOAMReader", vtkInstantiatorvtkOpenFOAMReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkParticleReader", vtkInstantiatorvtkParticleReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkPDBReader", vtkInstantiatorvtkPDBReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkPlot3DMetaReader", vtkInstantiatorvtkPlot3DMetaReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkProStarReader", vtkInstantiatorvtkProStarReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkSTLReader", vtkInstantiatorvtkSTLReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkSTLWriter", vtkInstantiatorvtkSTLWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkTecplotReader", vtkInstantiatorvtkTecplotReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkUGFacetReader", vtkInstantiatorvtkUGFacetReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkWindBladeReader", vtkInstantiatorvtkWindBladeReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkXYZMolReader", vtkInstantiatorvtkXYZMolReaderNew);


}

void vtkIOGeometryInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkAVSucdReader", vtkInstantiatorvtkAVSucdReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBYUReader", vtkInstantiatorvtkBYUReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBYUWriter", vtkInstantiatorvtkBYUWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkChacoReader", vtkInstantiatorvtkChacoReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFacetWriter", vtkInstantiatorvtkFacetWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFLUENTReader", vtkInstantiatorvtkFLUENTReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGAMBITReader", vtkInstantiatorvtkGAMBITReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGaussianCubeReader", vtkInstantiatorvtkGaussianCubeReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkIVWriter", vtkInstantiatorvtkIVWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMCubesReader", vtkInstantiatorvtkMCubesReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMCubesWriter", vtkInstantiatorvtkMCubesWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMFIXReader", vtkInstantiatorvtkMFIXReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMultiBlockPLOT3DReader", vtkInstantiatorvtkMultiBlockPLOT3DReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOBJReader", vtkInstantiatorvtkOBJReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenFOAMReader", vtkInstantiatorvtkOpenFOAMReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParticleReader", vtkInstantiatorvtkParticleReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPDBReader", vtkInstantiatorvtkPDBReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPlot3DMetaReader", vtkInstantiatorvtkPlot3DMetaReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProStarReader", vtkInstantiatorvtkProStarReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSTLReader", vtkInstantiatorvtkSTLReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSTLWriter", vtkInstantiatorvtkSTLWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTecplotReader", vtkInstantiatorvtkTecplotReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUGFacetReader", vtkInstantiatorvtkUGFacetReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkWindBladeReader", vtkInstantiatorvtkWindBladeReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXYZMolReader", vtkInstantiatorvtkXYZMolReaderNew);


}

vtkIOGeometryInstantiator::vtkIOGeometryInstantiator()
{
  if(++vtkIOGeometryInstantiator::Count == 1)
    {
    vtkIOGeometryInstantiator::ClassInitialize();
    }
}

vtkIOGeometryInstantiator::~vtkIOGeometryInstantiator()
{
  if(--vtkIOGeometryInstantiator::Count == 0)
    {
    vtkIOGeometryInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkIOGeometryInstantiator::Count;
