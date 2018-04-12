#include "vtkIOSQLInstantiator.h"
#include "vtkRowQueryToTable.h"
#include "vtkSQLDatabaseSchema.h"
#include "vtkSQLDatabaseTableSource.h"
#include "vtkSQLiteDatabase.h"
#include "vtkSQLiteQuery.h"
#include "vtkSQLiteToTableReader.h"
#include "vtkTableToSQLiteWriter.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkRowQueryToTable)
vtkInstantiatorNewMacro(vtkSQLDatabaseSchema)
vtkInstantiatorNewMacro(vtkSQLDatabaseTableSource)
vtkInstantiatorNewMacro(vtkSQLiteDatabase)
vtkInstantiatorNewMacro(vtkSQLiteQuery)
vtkInstantiatorNewMacro(vtkSQLiteToTableReader)
vtkInstantiatorNewMacro(vtkTableToSQLiteWriter)



void vtkIOSQLInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkRowQueryToTable", vtkInstantiatorvtkRowQueryToTableNew);
  vtkInstantiator::RegisterInstantiator("vtkSQLDatabaseSchema", vtkInstantiatorvtkSQLDatabaseSchemaNew);
  vtkInstantiator::RegisterInstantiator("vtkSQLDatabaseTableSource", vtkInstantiatorvtkSQLDatabaseTableSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkSQLiteDatabase", vtkInstantiatorvtkSQLiteDatabaseNew);
  vtkInstantiator::RegisterInstantiator("vtkSQLiteQuery", vtkInstantiatorvtkSQLiteQueryNew);
  vtkInstantiator::RegisterInstantiator("vtkSQLiteToTableReader", vtkInstantiatorvtkSQLiteToTableReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkTableToSQLiteWriter", vtkInstantiatorvtkTableToSQLiteWriterNew);


}

void vtkIOSQLInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkRowQueryToTable", vtkInstantiatorvtkRowQueryToTableNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSQLDatabaseSchema", vtkInstantiatorvtkSQLDatabaseSchemaNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSQLDatabaseTableSource", vtkInstantiatorvtkSQLDatabaseTableSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSQLiteDatabase", vtkInstantiatorvtkSQLiteDatabaseNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSQLiteQuery", vtkInstantiatorvtkSQLiteQueryNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSQLiteToTableReader", vtkInstantiatorvtkSQLiteToTableReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTableToSQLiteWriter", vtkInstantiatorvtkTableToSQLiteWriterNew);


}

vtkIOSQLInstantiator::vtkIOSQLInstantiator()
{
  if(++vtkIOSQLInstantiator::Count == 1)
    {
    vtkIOSQLInstantiator::ClassInitialize();
    }
}

vtkIOSQLInstantiator::~vtkIOSQLInstantiator()
{
  if(--vtkIOSQLInstantiator::Count == 0)
    {
    vtkIOSQLInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkIOSQLInstantiator::Count;
