#include "vtkIOXMLInstantiator.h"
#include "vtkRTXMLPolyDataReader.h"
#include "vtkXMLDataSetWriter.h"
#include "vtkXMLFileReadTester.h"
#include "vtkXMLGenericDataObjectReader.h"
#include "vtkXMLHierarchicalBoxDataFileConverter.h"
#include "vtkXMLHierarchicalBoxDataReader.h"
#include "vtkXMLHierarchicalBoxDataWriter.h"
#include "vtkXMLHierarchicalDataReader.h"
#include "vtkXMLHyperOctreeReader.h"
#include "vtkXMLHyperOctreeWriter.h"
#include "vtkXMLImageDataReader.h"
#include "vtkXMLImageDataWriter.h"
#include "vtkXMLMultiBlockDataReader.h"
#include "vtkXMLMultiBlockDataWriter.h"
#include "vtkXMLMultiGroupDataReader.h"
#include "vtkXMLPImageDataReader.h"
#include "vtkXMLPolyDataReader.h"
#include "vtkXMLPolyDataWriter.h"
#include "vtkXMLPPolyDataReader.h"
#include "vtkXMLPRectilinearGridReader.h"
#include "vtkXMLPStructuredGridReader.h"
#include "vtkXMLPUnstructuredGridReader.h"
#include "vtkXMLRectilinearGridReader.h"
#include "vtkXMLRectilinearGridWriter.h"
#include "vtkXMLStructuredGridReader.h"
#include "vtkXMLStructuredGridWriter.h"
#include "vtkXMLUniformGridAMRReader.h"
#include "vtkXMLUniformGridAMRWriter.h"
#include "vtkXMLUnstructuredGridReader.h"
#include "vtkXMLUnstructuredGridWriter.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkRTXMLPolyDataReader)
vtkInstantiatorNewMacro(vtkXMLDataSetWriter)
vtkInstantiatorNewMacro(vtkXMLFileReadTester)
vtkInstantiatorNewMacro(vtkXMLGenericDataObjectReader)
vtkInstantiatorNewMacro(vtkXMLHierarchicalBoxDataFileConverter)
vtkInstantiatorNewMacro(vtkXMLHierarchicalBoxDataReader)
vtkInstantiatorNewMacro(vtkXMLHierarchicalBoxDataWriter)
vtkInstantiatorNewMacro(vtkXMLHierarchicalDataReader)
vtkInstantiatorNewMacro(vtkXMLHyperOctreeReader)
vtkInstantiatorNewMacro(vtkXMLHyperOctreeWriter)
vtkInstantiatorNewMacro(vtkXMLImageDataReader)
vtkInstantiatorNewMacro(vtkXMLImageDataWriter)
vtkInstantiatorNewMacro(vtkXMLMultiBlockDataReader)
vtkInstantiatorNewMacro(vtkXMLMultiBlockDataWriter)
vtkInstantiatorNewMacro(vtkXMLMultiGroupDataReader)
vtkInstantiatorNewMacro(vtkXMLPImageDataReader)
vtkInstantiatorNewMacro(vtkXMLPolyDataReader)
vtkInstantiatorNewMacro(vtkXMLPolyDataWriter)
vtkInstantiatorNewMacro(vtkXMLPPolyDataReader)
vtkInstantiatorNewMacro(vtkXMLPRectilinearGridReader)
vtkInstantiatorNewMacro(vtkXMLPStructuredGridReader)
vtkInstantiatorNewMacro(vtkXMLPUnstructuredGridReader)
vtkInstantiatorNewMacro(vtkXMLRectilinearGridReader)
vtkInstantiatorNewMacro(vtkXMLRectilinearGridWriter)
vtkInstantiatorNewMacro(vtkXMLStructuredGridReader)
vtkInstantiatorNewMacro(vtkXMLStructuredGridWriter)
vtkInstantiatorNewMacro(vtkXMLUniformGridAMRReader)
vtkInstantiatorNewMacro(vtkXMLUniformGridAMRWriter)
vtkInstantiatorNewMacro(vtkXMLUnstructuredGridReader)
vtkInstantiatorNewMacro(vtkXMLUnstructuredGridWriter)



void vtkIOXMLInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkRTXMLPolyDataReader", vtkInstantiatorvtkRTXMLPolyDataReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLDataSetWriter", vtkInstantiatorvtkXMLDataSetWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLFileReadTester", vtkInstantiatorvtkXMLFileReadTesterNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLGenericDataObjectReader", vtkInstantiatorvtkXMLGenericDataObjectReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLHierarchicalBoxDataFileConverter", vtkInstantiatorvtkXMLHierarchicalBoxDataFileConverterNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLHierarchicalBoxDataReader", vtkInstantiatorvtkXMLHierarchicalBoxDataReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLHierarchicalBoxDataWriter", vtkInstantiatorvtkXMLHierarchicalBoxDataWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLHierarchicalDataReader", vtkInstantiatorvtkXMLHierarchicalDataReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLHyperOctreeReader", vtkInstantiatorvtkXMLHyperOctreeReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLHyperOctreeWriter", vtkInstantiatorvtkXMLHyperOctreeWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLImageDataReader", vtkInstantiatorvtkXMLImageDataReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLImageDataWriter", vtkInstantiatorvtkXMLImageDataWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLMultiBlockDataReader", vtkInstantiatorvtkXMLMultiBlockDataReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLMultiBlockDataWriter", vtkInstantiatorvtkXMLMultiBlockDataWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLMultiGroupDataReader", vtkInstantiatorvtkXMLMultiGroupDataReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLPImageDataReader", vtkInstantiatorvtkXMLPImageDataReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLPolyDataReader", vtkInstantiatorvtkXMLPolyDataReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLPolyDataWriter", vtkInstantiatorvtkXMLPolyDataWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLPPolyDataReader", vtkInstantiatorvtkXMLPPolyDataReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLPRectilinearGridReader", vtkInstantiatorvtkXMLPRectilinearGridReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLPStructuredGridReader", vtkInstantiatorvtkXMLPStructuredGridReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLPUnstructuredGridReader", vtkInstantiatorvtkXMLPUnstructuredGridReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLRectilinearGridReader", vtkInstantiatorvtkXMLRectilinearGridReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLRectilinearGridWriter", vtkInstantiatorvtkXMLRectilinearGridWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLStructuredGridReader", vtkInstantiatorvtkXMLStructuredGridReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLStructuredGridWriter", vtkInstantiatorvtkXMLStructuredGridWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLUniformGridAMRReader", vtkInstantiatorvtkXMLUniformGridAMRReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLUniformGridAMRWriter", vtkInstantiatorvtkXMLUniformGridAMRWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLUnstructuredGridReader", vtkInstantiatorvtkXMLUnstructuredGridReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLUnstructuredGridWriter", vtkInstantiatorvtkXMLUnstructuredGridWriterNew);


}

void vtkIOXMLInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkRTXMLPolyDataReader", vtkInstantiatorvtkRTXMLPolyDataReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLDataSetWriter", vtkInstantiatorvtkXMLDataSetWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLFileReadTester", vtkInstantiatorvtkXMLFileReadTesterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLGenericDataObjectReader", vtkInstantiatorvtkXMLGenericDataObjectReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLHierarchicalBoxDataFileConverter", vtkInstantiatorvtkXMLHierarchicalBoxDataFileConverterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLHierarchicalBoxDataReader", vtkInstantiatorvtkXMLHierarchicalBoxDataReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLHierarchicalBoxDataWriter", vtkInstantiatorvtkXMLHierarchicalBoxDataWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLHierarchicalDataReader", vtkInstantiatorvtkXMLHierarchicalDataReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLHyperOctreeReader", vtkInstantiatorvtkXMLHyperOctreeReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLHyperOctreeWriter", vtkInstantiatorvtkXMLHyperOctreeWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLImageDataReader", vtkInstantiatorvtkXMLImageDataReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLImageDataWriter", vtkInstantiatorvtkXMLImageDataWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLMultiBlockDataReader", vtkInstantiatorvtkXMLMultiBlockDataReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLMultiBlockDataWriter", vtkInstantiatorvtkXMLMultiBlockDataWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLMultiGroupDataReader", vtkInstantiatorvtkXMLMultiGroupDataReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLPImageDataReader", vtkInstantiatorvtkXMLPImageDataReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLPolyDataReader", vtkInstantiatorvtkXMLPolyDataReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLPolyDataWriter", vtkInstantiatorvtkXMLPolyDataWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLPPolyDataReader", vtkInstantiatorvtkXMLPPolyDataReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLPRectilinearGridReader", vtkInstantiatorvtkXMLPRectilinearGridReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLPStructuredGridReader", vtkInstantiatorvtkXMLPStructuredGridReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLPUnstructuredGridReader", vtkInstantiatorvtkXMLPUnstructuredGridReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLRectilinearGridReader", vtkInstantiatorvtkXMLRectilinearGridReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLRectilinearGridWriter", vtkInstantiatorvtkXMLRectilinearGridWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLStructuredGridReader", vtkInstantiatorvtkXMLStructuredGridReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLStructuredGridWriter", vtkInstantiatorvtkXMLStructuredGridWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLUniformGridAMRReader", vtkInstantiatorvtkXMLUniformGridAMRReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLUniformGridAMRWriter", vtkInstantiatorvtkXMLUniformGridAMRWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLUnstructuredGridReader", vtkInstantiatorvtkXMLUnstructuredGridReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLUnstructuredGridWriter", vtkInstantiatorvtkXMLUnstructuredGridWriterNew);


}

vtkIOXMLInstantiator::vtkIOXMLInstantiator()
{
  if(++vtkIOXMLInstantiator::Count == 1)
    {
    vtkIOXMLInstantiator::ClassInitialize();
    }
}

vtkIOXMLInstantiator::~vtkIOXMLInstantiator()
{
  if(--vtkIOXMLInstantiator::Count == 0)
    {
    vtkIOXMLInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkIOXMLInstantiator::Count;
