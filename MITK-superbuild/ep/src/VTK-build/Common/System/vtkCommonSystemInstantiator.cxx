#include "vtkCommonSystemInstantiator.h"
#include "vtkClientSocket.h"
#include "vtkDirectory.h"
#include "vtkServerSocket.h"
#include "vtkSocketCollection.h"
#include "vtkThreadMessager.h"
#include "vtkTimerLog.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkClientSocket)
vtkInstantiatorNewMacro(vtkDirectory)
vtkInstantiatorNewMacro(vtkServerSocket)
vtkInstantiatorNewMacro(vtkSocketCollection)
vtkInstantiatorNewMacro(vtkThreadMessager)
vtkInstantiatorNewMacro(vtkTimerLog)



void vtkCommonSystemInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkClientSocket", vtkInstantiatorvtkClientSocketNew);
  vtkInstantiator::RegisterInstantiator("vtkDirectory", vtkInstantiatorvtkDirectoryNew);
  vtkInstantiator::RegisterInstantiator("vtkServerSocket", vtkInstantiatorvtkServerSocketNew);
  vtkInstantiator::RegisterInstantiator("vtkSocketCollection", vtkInstantiatorvtkSocketCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkThreadMessager", vtkInstantiatorvtkThreadMessagerNew);
  vtkInstantiator::RegisterInstantiator("vtkTimerLog", vtkInstantiatorvtkTimerLogNew);


}

void vtkCommonSystemInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkClientSocket", vtkInstantiatorvtkClientSocketNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDirectory", vtkInstantiatorvtkDirectoryNew);
  vtkInstantiator::UnRegisterInstantiator("vtkServerSocket", vtkInstantiatorvtkServerSocketNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSocketCollection", vtkInstantiatorvtkSocketCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkThreadMessager", vtkInstantiatorvtkThreadMessagerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTimerLog", vtkInstantiatorvtkTimerLogNew);


}

vtkCommonSystemInstantiator::vtkCommonSystemInstantiator()
{
  if(++vtkCommonSystemInstantiator::Count == 1)
    {
    vtkCommonSystemInstantiator::ClassInitialize();
    }
}

vtkCommonSystemInstantiator::~vtkCommonSystemInstantiator()
{
  if(--vtkCommonSystemInstantiator::Count == 0)
    {
    vtkCommonSystemInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkCommonSystemInstantiator::Count;
