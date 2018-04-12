#include "vtkIOParallelXMLInstantiator.h"
#include "vtkXMLPDataSetWriter.h"
#include "vtkXMLPImageDataWriter.h"
#include "vtkXMLPPolyDataWriter.h"
#include "vtkXMLPRectilinearGridWriter.h"
#include "vtkXMLPStructuredGridWriter.h"
#include "vtkXMLPUnstructuredGridWriter.h"
#include "vtkXMLPHierarchicalBoxDataWriter.h"
#include "vtkXMLPMultiBlockDataWriter.h"
#include "vtkXMLPUniformGridAMRWriter.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkXMLPDataSetWriter)
vtkInstantiatorNewMacro(vtkXMLPImageDataWriter)
vtkInstantiatorNewMacro(vtkXMLPPolyDataWriter)
vtkInstantiatorNewMacro(vtkXMLPRectilinearGridWriter)
vtkInstantiatorNewMacro(vtkXMLPStructuredGridWriter)
vtkInstantiatorNewMacro(vtkXMLPUnstructuredGridWriter)
vtkInstantiatorNewMacro(vtkXMLPHierarchicalBoxDataWriter)
vtkInstantiatorNewMacro(vtkXMLPMultiBlockDataWriter)
vtkInstantiatorNewMacro(vtkXMLPUniformGridAMRWriter)



void vtkIOParallelXMLInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkXMLPDataSetWriter", vtkInstantiatorvtkXMLPDataSetWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLPImageDataWriter", vtkInstantiatorvtkXMLPImageDataWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLPPolyDataWriter", vtkInstantiatorvtkXMLPPolyDataWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLPRectilinearGridWriter", vtkInstantiatorvtkXMLPRectilinearGridWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLPStructuredGridWriter", vtkInstantiatorvtkXMLPStructuredGridWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLPUnstructuredGridWriter", vtkInstantiatorvtkXMLPUnstructuredGridWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLPHierarchicalBoxDataWriter", vtkInstantiatorvtkXMLPHierarchicalBoxDataWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLPMultiBlockDataWriter", vtkInstantiatorvtkXMLPMultiBlockDataWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLPUniformGridAMRWriter", vtkInstantiatorvtkXMLPUniformGridAMRWriterNew);


}

void vtkIOParallelXMLInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkXMLPDataSetWriter", vtkInstantiatorvtkXMLPDataSetWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLPImageDataWriter", vtkInstantiatorvtkXMLPImageDataWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLPPolyDataWriter", vtkInstantiatorvtkXMLPPolyDataWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLPRectilinearGridWriter", vtkInstantiatorvtkXMLPRectilinearGridWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLPStructuredGridWriter", vtkInstantiatorvtkXMLPStructuredGridWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLPUnstructuredGridWriter", vtkInstantiatorvtkXMLPUnstructuredGridWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLPHierarchicalBoxDataWriter", vtkInstantiatorvtkXMLPHierarchicalBoxDataWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLPMultiBlockDataWriter", vtkInstantiatorvtkXMLPMultiBlockDataWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLPUniformGridAMRWriter", vtkInstantiatorvtkXMLPUniformGridAMRWriterNew);


}

vtkIOParallelXMLInstantiator::vtkIOParallelXMLInstantiator()
{
  if(++vtkIOParallelXMLInstantiator::Count == 1)
    {
    vtkIOParallelXMLInstantiator::ClassInitialize();
    }
}

vtkIOParallelXMLInstantiator::~vtkIOParallelXMLInstantiator()
{
  if(--vtkIOParallelXMLInstantiator::Count == 0)
    {
    vtkIOParallelXMLInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkIOParallelXMLInstantiator::Count;
