#include "vtkIOLegacyInstantiator.h"
#include "vtkCompositeDataReader.h"
#include "vtkCompositeDataWriter.h"
#include "vtkDataObjectReader.h"
#include "vtkDataObjectWriter.h"
#include "vtkDataReader.h"
#include "vtkDataSetReader.h"
#include "vtkDataSetWriter.h"
#include "vtkDataWriter.h"
#include "vtkGenericDataObjectReader.h"
#include "vtkGenericDataObjectWriter.h"
#include "vtkGraphReader.h"
#include "vtkGraphWriter.h"
#include "vtkPolyDataReader.h"
#include "vtkPolyDataWriter.h"
#include "vtkRectilinearGridReader.h"
#include "vtkRectilinearGridWriter.h"
#include "vtkSimplePointsReader.h"
#include "vtkSimplePointsWriter.h"
#include "vtkStructuredGridReader.h"
#include "vtkStructuredGridWriter.h"
#include "vtkStructuredPointsReader.h"
#include "vtkStructuredPointsWriter.h"
#include "vtkTableReader.h"
#include "vtkTableWriter.h"
#include "vtkTreeReader.h"
#include "vtkTreeWriter.h"
#include "vtkUnstructuredGridReader.h"
#include "vtkUnstructuredGridWriter.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkCompositeDataReader)
vtkInstantiatorNewMacro(vtkCompositeDataWriter)
vtkInstantiatorNewMacro(vtkDataObjectReader)
vtkInstantiatorNewMacro(vtkDataObjectWriter)
vtkInstantiatorNewMacro(vtkDataReader)
vtkInstantiatorNewMacro(vtkDataSetReader)
vtkInstantiatorNewMacro(vtkDataSetWriter)
vtkInstantiatorNewMacro(vtkDataWriter)
vtkInstantiatorNewMacro(vtkGenericDataObjectReader)
vtkInstantiatorNewMacro(vtkGenericDataObjectWriter)
vtkInstantiatorNewMacro(vtkGraphReader)
vtkInstantiatorNewMacro(vtkGraphWriter)
vtkInstantiatorNewMacro(vtkPolyDataReader)
vtkInstantiatorNewMacro(vtkPolyDataWriter)
vtkInstantiatorNewMacro(vtkRectilinearGridReader)
vtkInstantiatorNewMacro(vtkRectilinearGridWriter)
vtkInstantiatorNewMacro(vtkSimplePointsReader)
vtkInstantiatorNewMacro(vtkSimplePointsWriter)
vtkInstantiatorNewMacro(vtkStructuredGridReader)
vtkInstantiatorNewMacro(vtkStructuredGridWriter)
vtkInstantiatorNewMacro(vtkStructuredPointsReader)
vtkInstantiatorNewMacro(vtkStructuredPointsWriter)
vtkInstantiatorNewMacro(vtkTableReader)
vtkInstantiatorNewMacro(vtkTableWriter)
vtkInstantiatorNewMacro(vtkTreeReader)
vtkInstantiatorNewMacro(vtkTreeWriter)
vtkInstantiatorNewMacro(vtkUnstructuredGridReader)
vtkInstantiatorNewMacro(vtkUnstructuredGridWriter)



void vtkIOLegacyInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkCompositeDataReader", vtkInstantiatorvtkCompositeDataReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkCompositeDataWriter", vtkInstantiatorvtkCompositeDataWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkDataObjectReader", vtkInstantiatorvtkDataObjectReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkDataObjectWriter", vtkInstantiatorvtkDataObjectWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkDataReader", vtkInstantiatorvtkDataReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkDataSetReader", vtkInstantiatorvtkDataSetReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkDataSetWriter", vtkInstantiatorvtkDataSetWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkDataWriter", vtkInstantiatorvtkDataWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkGenericDataObjectReader", vtkInstantiatorvtkGenericDataObjectReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkGenericDataObjectWriter", vtkInstantiatorvtkGenericDataObjectWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkGraphReader", vtkInstantiatorvtkGraphReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkGraphWriter", vtkInstantiatorvtkGraphWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkPolyDataReader", vtkInstantiatorvtkPolyDataReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkPolyDataWriter", vtkInstantiatorvtkPolyDataWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkRectilinearGridReader", vtkInstantiatorvtkRectilinearGridReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkRectilinearGridWriter", vtkInstantiatorvtkRectilinearGridWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkSimplePointsReader", vtkInstantiatorvtkSimplePointsReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkSimplePointsWriter", vtkInstantiatorvtkSimplePointsWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkStructuredGridReader", vtkInstantiatorvtkStructuredGridReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkStructuredGridWriter", vtkInstantiatorvtkStructuredGridWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkStructuredPointsReader", vtkInstantiatorvtkStructuredPointsReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkStructuredPointsWriter", vtkInstantiatorvtkStructuredPointsWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkTableReader", vtkInstantiatorvtkTableReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkTableWriter", vtkInstantiatorvtkTableWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkTreeReader", vtkInstantiatorvtkTreeReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkTreeWriter", vtkInstantiatorvtkTreeWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkUnstructuredGridReader", vtkInstantiatorvtkUnstructuredGridReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkUnstructuredGridWriter", vtkInstantiatorvtkUnstructuredGridWriterNew);


}

void vtkIOLegacyInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkCompositeDataReader", vtkInstantiatorvtkCompositeDataReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCompositeDataWriter", vtkInstantiatorvtkCompositeDataWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataObjectReader", vtkInstantiatorvtkDataObjectReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataObjectWriter", vtkInstantiatorvtkDataObjectWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataReader", vtkInstantiatorvtkDataReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataSetReader", vtkInstantiatorvtkDataSetReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataSetWriter", vtkInstantiatorvtkDataSetWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataWriter", vtkInstantiatorvtkDataWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGenericDataObjectReader", vtkInstantiatorvtkGenericDataObjectReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGenericDataObjectWriter", vtkInstantiatorvtkGenericDataObjectWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGraphReader", vtkInstantiatorvtkGraphReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGraphWriter", vtkInstantiatorvtkGraphWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPolyDataReader", vtkInstantiatorvtkPolyDataReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPolyDataWriter", vtkInstantiatorvtkPolyDataWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRectilinearGridReader", vtkInstantiatorvtkRectilinearGridReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRectilinearGridWriter", vtkInstantiatorvtkRectilinearGridWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSimplePointsReader", vtkInstantiatorvtkSimplePointsReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSimplePointsWriter", vtkInstantiatorvtkSimplePointsWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStructuredGridReader", vtkInstantiatorvtkStructuredGridReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStructuredGridWriter", vtkInstantiatorvtkStructuredGridWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStructuredPointsReader", vtkInstantiatorvtkStructuredPointsReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStructuredPointsWriter", vtkInstantiatorvtkStructuredPointsWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTableReader", vtkInstantiatorvtkTableReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTableWriter", vtkInstantiatorvtkTableWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTreeReader", vtkInstantiatorvtkTreeReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTreeWriter", vtkInstantiatorvtkTreeWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUnstructuredGridReader", vtkInstantiatorvtkUnstructuredGridReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUnstructuredGridWriter", vtkInstantiatorvtkUnstructuredGridWriterNew);


}

vtkIOLegacyInstantiator::vtkIOLegacyInstantiator()
{
  if(++vtkIOLegacyInstantiator::Count == 1)
    {
    vtkIOLegacyInstantiator::ClassInitialize();
    }
}

vtkIOLegacyInstantiator::~vtkIOLegacyInstantiator()
{
  if(--vtkIOLegacyInstantiator::Count == 0)
    {
    vtkIOLegacyInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkIOLegacyInstantiator::Count;
