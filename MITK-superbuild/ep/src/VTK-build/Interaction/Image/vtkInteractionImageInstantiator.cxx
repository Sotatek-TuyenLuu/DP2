#include "vtkInteractionImageInstantiator.h"
#include "vtkImageViewer2.h"
#include "vtkImageViewer.h"
#include "vtkResliceImageViewer.h"
#include "vtkResliceImageViewerMeasurements.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkImageViewer2)
vtkInstantiatorNewMacro(vtkImageViewer)
vtkInstantiatorNewMacro(vtkResliceImageViewer)
vtkInstantiatorNewMacro(vtkResliceImageViewerMeasurements)



void vtkInteractionImageInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkImageViewer2", vtkInstantiatorvtkImageViewer2New);
  vtkInstantiator::RegisterInstantiator("vtkImageViewer", vtkInstantiatorvtkImageViewerNew);
  vtkInstantiator::RegisterInstantiator("vtkResliceImageViewer", vtkInstantiatorvtkResliceImageViewerNew);
  vtkInstantiator::RegisterInstantiator("vtkResliceImageViewerMeasurements", vtkInstantiatorvtkResliceImageViewerMeasurementsNew);


}

void vtkInteractionImageInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkImageViewer2", vtkInstantiatorvtkImageViewer2New);
  vtkInstantiator::UnRegisterInstantiator("vtkImageViewer", vtkInstantiatorvtkImageViewerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkResliceImageViewer", vtkInstantiatorvtkResliceImageViewerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkResliceImageViewerMeasurements", vtkInstantiatorvtkResliceImageViewerMeasurementsNew);


}

vtkInteractionImageInstantiator::vtkInteractionImageInstantiator()
{
  if(++vtkInteractionImageInstantiator::Count == 1)
    {
    vtkInteractionImageInstantiator::ClassInitialize();
    }
}

vtkInteractionImageInstantiator::~vtkInteractionImageInstantiator()
{
  if(--vtkInteractionImageInstantiator::Count == 0)
    {
    vtkInteractionImageInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkInteractionImageInstantiator::Count;
