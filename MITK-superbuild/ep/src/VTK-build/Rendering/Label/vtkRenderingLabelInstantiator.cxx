#include "vtkRenderingLabelInstantiator.h"
#include "vtkLabeledDataMapper.h"
#include "vtkLabeledTreeMapDataMapper.h"
#include "vtkLabelHierarchyAlgorithm.h"
#include "vtkLabelHierarchyCompositeIterator.h"
#include "vtkLabelHierarchy.h"
#include "vtkLabelPlacementMapper.h"
#include "vtkLabelPlacer.h"
#include "vtkLabelSizeCalculator.h"
#include "vtkFreeTypeLabelRenderStrategy.h"
#include "vtkDynamic2DLabelMapper.h"
#include "vtkPointSetToLabelHierarchy.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkLabeledDataMapper)
vtkInstantiatorNewMacro(vtkLabeledTreeMapDataMapper)
vtkInstantiatorNewMacro(vtkLabelHierarchyAlgorithm)
vtkInstantiatorNewMacro(vtkLabelHierarchyCompositeIterator)
vtkInstantiatorNewMacro(vtkLabelHierarchy)
vtkInstantiatorNewMacro(vtkLabelPlacementMapper)
vtkInstantiatorNewMacro(vtkLabelPlacer)
vtkInstantiatorNewMacro(vtkLabelSizeCalculator)
vtkInstantiatorNewMacro(vtkFreeTypeLabelRenderStrategy)
vtkInstantiatorNewMacro(vtkDynamic2DLabelMapper)
vtkInstantiatorNewMacro(vtkPointSetToLabelHierarchy)



void vtkRenderingLabelInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkLabeledDataMapper", vtkInstantiatorvtkLabeledDataMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkLabeledTreeMapDataMapper", vtkInstantiatorvtkLabeledTreeMapDataMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkLabelHierarchyAlgorithm", vtkInstantiatorvtkLabelHierarchyAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkLabelHierarchyCompositeIterator", vtkInstantiatorvtkLabelHierarchyCompositeIteratorNew);
  vtkInstantiator::RegisterInstantiator("vtkLabelHierarchy", vtkInstantiatorvtkLabelHierarchyNew);
  vtkInstantiator::RegisterInstantiator("vtkLabelPlacementMapper", vtkInstantiatorvtkLabelPlacementMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkLabelPlacer", vtkInstantiatorvtkLabelPlacerNew);
  vtkInstantiator::RegisterInstantiator("vtkLabelSizeCalculator", vtkInstantiatorvtkLabelSizeCalculatorNew);
  vtkInstantiator::RegisterInstantiator("vtkFreeTypeLabelRenderStrategy", vtkInstantiatorvtkFreeTypeLabelRenderStrategyNew);
  vtkInstantiator::RegisterInstantiator("vtkDynamic2DLabelMapper", vtkInstantiatorvtkDynamic2DLabelMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkPointSetToLabelHierarchy", vtkInstantiatorvtkPointSetToLabelHierarchyNew);


}

void vtkRenderingLabelInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkLabeledDataMapper", vtkInstantiatorvtkLabeledDataMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLabeledTreeMapDataMapper", vtkInstantiatorvtkLabeledTreeMapDataMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLabelHierarchyAlgorithm", vtkInstantiatorvtkLabelHierarchyAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLabelHierarchyCompositeIterator", vtkInstantiatorvtkLabelHierarchyCompositeIteratorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLabelHierarchy", vtkInstantiatorvtkLabelHierarchyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLabelPlacementMapper", vtkInstantiatorvtkLabelPlacementMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLabelPlacer", vtkInstantiatorvtkLabelPlacerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLabelSizeCalculator", vtkInstantiatorvtkLabelSizeCalculatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFreeTypeLabelRenderStrategy", vtkInstantiatorvtkFreeTypeLabelRenderStrategyNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDynamic2DLabelMapper", vtkInstantiatorvtkDynamic2DLabelMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPointSetToLabelHierarchy", vtkInstantiatorvtkPointSetToLabelHierarchyNew);


}

vtkRenderingLabelInstantiator::vtkRenderingLabelInstantiator()
{
  if(++vtkRenderingLabelInstantiator::Count == 1)
    {
    vtkRenderingLabelInstantiator::ClassInitialize();
    }
}

vtkRenderingLabelInstantiator::~vtkRenderingLabelInstantiator()
{
  if(--vtkRenderingLabelInstantiator::Count == 0)
    {
    vtkRenderingLabelInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkRenderingLabelInstantiator::Count;
