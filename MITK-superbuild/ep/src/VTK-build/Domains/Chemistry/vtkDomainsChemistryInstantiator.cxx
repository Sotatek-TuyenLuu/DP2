#include "vtkDomainsChemistryInstantiator.h"
#include "vtkCMLMoleculeReader.h"
#include "vtkMoleculeAlgorithm.h"
#include "vtkMoleculeMapper.h"
#include "vtkMoleculeToAtomBallFilter.h"
#include "vtkMoleculeToBondStickFilter.h"
#include "vtkPeriodicTable.h"
#include "vtkProgrammableElectronicData.h"
#include "vtkProteinRibbonFilter.h"
#include "vtkSimpleBondPerceiver.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkCMLMoleculeReader)
vtkInstantiatorNewMacro(vtkMoleculeAlgorithm)
vtkInstantiatorNewMacro(vtkMoleculeMapper)
vtkInstantiatorNewMacro(vtkMoleculeToAtomBallFilter)
vtkInstantiatorNewMacro(vtkMoleculeToBondStickFilter)
vtkInstantiatorNewMacro(vtkPeriodicTable)
vtkInstantiatorNewMacro(vtkProgrammableElectronicData)
vtkInstantiatorNewMacro(vtkProteinRibbonFilter)
vtkInstantiatorNewMacro(vtkSimpleBondPerceiver)



void vtkDomainsChemistryInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkCMLMoleculeReader", vtkInstantiatorvtkCMLMoleculeReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkMoleculeAlgorithm", vtkInstantiatorvtkMoleculeAlgorithmNew);
  vtkInstantiator::RegisterInstantiator("vtkMoleculeMapper", vtkInstantiatorvtkMoleculeMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkMoleculeToAtomBallFilter", vtkInstantiatorvtkMoleculeToAtomBallFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkMoleculeToBondStickFilter", vtkInstantiatorvtkMoleculeToBondStickFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkPeriodicTable", vtkInstantiatorvtkPeriodicTableNew);
  vtkInstantiator::RegisterInstantiator("vtkProgrammableElectronicData", vtkInstantiatorvtkProgrammableElectronicDataNew);
  vtkInstantiator::RegisterInstantiator("vtkProteinRibbonFilter", vtkInstantiatorvtkProteinRibbonFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkSimpleBondPerceiver", vtkInstantiatorvtkSimpleBondPerceiverNew);


}

void vtkDomainsChemistryInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkCMLMoleculeReader", vtkInstantiatorvtkCMLMoleculeReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMoleculeAlgorithm", vtkInstantiatorvtkMoleculeAlgorithmNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMoleculeMapper", vtkInstantiatorvtkMoleculeMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMoleculeToAtomBallFilter", vtkInstantiatorvtkMoleculeToAtomBallFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMoleculeToBondStickFilter", vtkInstantiatorvtkMoleculeToBondStickFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPeriodicTable", vtkInstantiatorvtkPeriodicTableNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProgrammableElectronicData", vtkInstantiatorvtkProgrammableElectronicDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProteinRibbonFilter", vtkInstantiatorvtkProteinRibbonFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSimpleBondPerceiver", vtkInstantiatorvtkSimpleBondPerceiverNew);


}

vtkDomainsChemistryInstantiator::vtkDomainsChemistryInstantiator()
{
  if(++vtkDomainsChemistryInstantiator::Count == 1)
    {
    vtkDomainsChemistryInstantiator::ClassInitialize();
    }
}

vtkDomainsChemistryInstantiator::~vtkDomainsChemistryInstantiator()
{
  if(--vtkDomainsChemistryInstantiator::Count == 0)
    {
    vtkDomainsChemistryInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkDomainsChemistryInstantiator::Count;
