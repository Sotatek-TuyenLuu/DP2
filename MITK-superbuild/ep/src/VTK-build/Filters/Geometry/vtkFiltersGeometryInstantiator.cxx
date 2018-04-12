#include "vtkFiltersGeometryInstantiator.h"
#include "vtkCompositeDataGeometryFilter.h"
#include "vtkGeometryFilter.h"
#include "vtkHierarchicalDataSetGeometryFilter.h"
#include "vtkImageDataGeometryFilter.h"
#include "vtkImageDataToUniformGrid.h"
#include "vtkProjectSphereFilter.h"
#include "vtkRectilinearGridGeometryFilter.h"
#include "vtkStructuredGridGeometryFilter.h"
#include "vtkStructuredPointsGeometryFilter.h"
#include "vtkUnstructuredGridGeometryFilter.h"
#include "vtkDataSetSurfaceFilter.h"
#include "vtkRectilinearGridPartitioner.h"
#include "vtkStructuredAMRGridConnectivity.h"
#include "vtkStructuredGridConnectivity.h"
#include "vtkStructuredGridGhostDataGenerator.h"
#include "vtkStructuredGridPartitioner.h"
#include "vtkUniformGridGhostDataGenerator.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkCompositeDataGeometryFilter)
vtkInstantiatorNewMacro(vtkGeometryFilter)
vtkInstantiatorNewMacro(vtkHierarchicalDataSetGeometryFilter)
vtkInstantiatorNewMacro(vtkImageDataGeometryFilter)
vtkInstantiatorNewMacro(vtkImageDataToUniformGrid)
vtkInstantiatorNewMacro(vtkProjectSphereFilter)
vtkInstantiatorNewMacro(vtkRectilinearGridGeometryFilter)
vtkInstantiatorNewMacro(vtkStructuredGridGeometryFilter)
vtkInstantiatorNewMacro(vtkStructuredPointsGeometryFilter)
vtkInstantiatorNewMacro(vtkUnstructuredGridGeometryFilter)
vtkInstantiatorNewMacro(vtkDataSetSurfaceFilter)
vtkInstantiatorNewMacro(vtkRectilinearGridPartitioner)
vtkInstantiatorNewMacro(vtkStructuredAMRGridConnectivity)
vtkInstantiatorNewMacro(vtkStructuredGridConnectivity)
vtkInstantiatorNewMacro(vtkStructuredGridGhostDataGenerator)
vtkInstantiatorNewMacro(vtkStructuredGridPartitioner)
vtkInstantiatorNewMacro(vtkUniformGridGhostDataGenerator)



void vtkFiltersGeometryInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkCompositeDataGeometryFilter", vtkInstantiatorvtkCompositeDataGeometryFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkGeometryFilter", vtkInstantiatorvtkGeometryFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkHierarchicalDataSetGeometryFilter", vtkInstantiatorvtkHierarchicalDataSetGeometryFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkImageDataGeometryFilter", vtkInstantiatorvtkImageDataGeometryFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkImageDataToUniformGrid", vtkInstantiatorvtkImageDataToUniformGridNew);
  vtkInstantiator::RegisterInstantiator("vtkProjectSphereFilter", vtkInstantiatorvtkProjectSphereFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkRectilinearGridGeometryFilter", vtkInstantiatorvtkRectilinearGridGeometryFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkStructuredGridGeometryFilter", vtkInstantiatorvtkStructuredGridGeometryFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkStructuredPointsGeometryFilter", vtkInstantiatorvtkStructuredPointsGeometryFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkUnstructuredGridGeometryFilter", vtkInstantiatorvtkUnstructuredGridGeometryFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkDataSetSurfaceFilter", vtkInstantiatorvtkDataSetSurfaceFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkRectilinearGridPartitioner", vtkInstantiatorvtkRectilinearGridPartitionerNew);
  vtkInstantiator::RegisterInstantiator("vtkStructuredAMRGridConnectivity", vtkInstantiatorvtkStructuredAMRGridConnectivityNew);
  vtkInstantiator::RegisterInstantiator("vtkStructuredGridConnectivity", vtkInstantiatorvtkStructuredGridConnectivityNew);
  vtkInstantiator::RegisterInstantiator("vtkStructuredGridGhostDataGenerator", vtkInstantiatorvtkStructuredGridGhostDataGeneratorNew);
  vtkInstantiator::RegisterInstantiator("vtkStructuredGridPartitioner", vtkInstantiatorvtkStructuredGridPartitionerNew);
  vtkInstantiator::RegisterInstantiator("vtkUniformGridGhostDataGenerator", vtkInstantiatorvtkUniformGridGhostDataGeneratorNew);


}

void vtkFiltersGeometryInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkCompositeDataGeometryFilter", vtkInstantiatorvtkCompositeDataGeometryFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGeometryFilter", vtkInstantiatorvtkGeometryFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkHierarchicalDataSetGeometryFilter", vtkInstantiatorvtkHierarchicalDataSetGeometryFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageDataGeometryFilter", vtkInstantiatorvtkImageDataGeometryFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageDataToUniformGrid", vtkInstantiatorvtkImageDataToUniformGridNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProjectSphereFilter", vtkInstantiatorvtkProjectSphereFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRectilinearGridGeometryFilter", vtkInstantiatorvtkRectilinearGridGeometryFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStructuredGridGeometryFilter", vtkInstantiatorvtkStructuredGridGeometryFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStructuredPointsGeometryFilter", vtkInstantiatorvtkStructuredPointsGeometryFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUnstructuredGridGeometryFilter", vtkInstantiatorvtkUnstructuredGridGeometryFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataSetSurfaceFilter", vtkInstantiatorvtkDataSetSurfaceFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRectilinearGridPartitioner", vtkInstantiatorvtkRectilinearGridPartitionerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStructuredAMRGridConnectivity", vtkInstantiatorvtkStructuredAMRGridConnectivityNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStructuredGridConnectivity", vtkInstantiatorvtkStructuredGridConnectivityNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStructuredGridGhostDataGenerator", vtkInstantiatorvtkStructuredGridGhostDataGeneratorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStructuredGridPartitioner", vtkInstantiatorvtkStructuredGridPartitionerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUniformGridGhostDataGenerator", vtkInstantiatorvtkUniformGridGhostDataGeneratorNew);


}

vtkFiltersGeometryInstantiator::vtkFiltersGeometryInstantiator()
{
  if(++vtkFiltersGeometryInstantiator::Count == 1)
    {
    vtkFiltersGeometryInstantiator::ClassInitialize();
    }
}

vtkFiltersGeometryInstantiator::~vtkFiltersGeometryInstantiator()
{
  if(--vtkFiltersGeometryInstantiator::Count == 0)
    {
    vtkFiltersGeometryInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkFiltersGeometryInstantiator::Count;
