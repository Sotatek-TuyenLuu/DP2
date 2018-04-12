#include "vtkParallelCoreInstantiator.h"
#include "vtkDummyCommunicator.h"
#include "vtkDummyController.h"
#include "vtkProcessGroup.h"
#include "vtkSocketCommunicator.h"
#include "vtkSocketController.h"
#include "vtkSubCommunicator.h"
#include "vtkSubGroup.h"
#include "vtkFieldDataSerializer.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkDummyCommunicator)
vtkInstantiatorNewMacro(vtkDummyController)
vtkInstantiatorNewMacro(vtkProcessGroup)
vtkInstantiatorNewMacro(vtkSocketCommunicator)
vtkInstantiatorNewMacro(vtkSocketController)
vtkInstantiatorNewMacro(vtkSubCommunicator)
vtkInstantiatorNewMacro(vtkSubGroup)
vtkInstantiatorNewMacro(vtkFieldDataSerializer)



void vtkParallelCoreInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkDummyCommunicator", vtkInstantiatorvtkDummyCommunicatorNew);
  vtkInstantiator::RegisterInstantiator("vtkDummyController", vtkInstantiatorvtkDummyControllerNew);
  vtkInstantiator::RegisterInstantiator("vtkProcessGroup", vtkInstantiatorvtkProcessGroupNew);
  vtkInstantiator::RegisterInstantiator("vtkSocketCommunicator", vtkInstantiatorvtkSocketCommunicatorNew);
  vtkInstantiator::RegisterInstantiator("vtkSocketController", vtkInstantiatorvtkSocketControllerNew);
  vtkInstantiator::RegisterInstantiator("vtkSubCommunicator", vtkInstantiatorvtkSubCommunicatorNew);
  vtkInstantiator::RegisterInstantiator("vtkSubGroup", vtkInstantiatorvtkSubGroupNew);
  vtkInstantiator::RegisterInstantiator("vtkFieldDataSerializer", vtkInstantiatorvtkFieldDataSerializerNew);


}

void vtkParallelCoreInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkDummyCommunicator", vtkInstantiatorvtkDummyCommunicatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDummyController", vtkInstantiatorvtkDummyControllerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProcessGroup", vtkInstantiatorvtkProcessGroupNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSocketCommunicator", vtkInstantiatorvtkSocketCommunicatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSocketController", vtkInstantiatorvtkSocketControllerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSubCommunicator", vtkInstantiatorvtkSubCommunicatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSubGroup", vtkInstantiatorvtkSubGroupNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFieldDataSerializer", vtkInstantiatorvtkFieldDataSerializerNew);


}

vtkParallelCoreInstantiator::vtkParallelCoreInstantiator()
{
  if(++vtkParallelCoreInstantiator::Count == 1)
    {
    vtkParallelCoreInstantiator::ClassInitialize();
    }
}

vtkParallelCoreInstantiator::~vtkParallelCoreInstantiator()
{
  if(--vtkParallelCoreInstantiator::Count == 0)
    {
    vtkParallelCoreInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkParallelCoreInstantiator::Count;
