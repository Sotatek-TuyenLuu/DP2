#include "vtkCommonMathInstantiator.h"
#include "vtkAmoebaMinimizer.h"
#include "vtkMatrix3x3.h"
#include "vtkMatrix4x4.h"
#include "vtkPolynomialSolversUnivariate.h"
#include "vtkQuaternionInterpolator.h"
#include "vtkRungeKutta2.h"
#include "vtkRungeKutta4.h"
#include "vtkRungeKutta45.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkAmoebaMinimizer)
vtkInstantiatorNewMacro(vtkMatrix3x3)
vtkInstantiatorNewMacro(vtkMatrix4x4)
vtkInstantiatorNewMacro(vtkPolynomialSolversUnivariate)
vtkInstantiatorNewMacro(vtkQuaternionInterpolator)
vtkInstantiatorNewMacro(vtkRungeKutta2)
vtkInstantiatorNewMacro(vtkRungeKutta4)
vtkInstantiatorNewMacro(vtkRungeKutta45)



void vtkCommonMathInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkAmoebaMinimizer", vtkInstantiatorvtkAmoebaMinimizerNew);
  vtkInstantiator::RegisterInstantiator("vtkMatrix3x3", vtkInstantiatorvtkMatrix3x3New);
  vtkInstantiator::RegisterInstantiator("vtkMatrix4x4", vtkInstantiatorvtkMatrix4x4New);
  vtkInstantiator::RegisterInstantiator("vtkPolynomialSolversUnivariate", vtkInstantiatorvtkPolynomialSolversUnivariateNew);
  vtkInstantiator::RegisterInstantiator("vtkQuaternionInterpolator", vtkInstantiatorvtkQuaternionInterpolatorNew);
  vtkInstantiator::RegisterInstantiator("vtkRungeKutta2", vtkInstantiatorvtkRungeKutta2New);
  vtkInstantiator::RegisterInstantiator("vtkRungeKutta4", vtkInstantiatorvtkRungeKutta4New);
  vtkInstantiator::RegisterInstantiator("vtkRungeKutta45", vtkInstantiatorvtkRungeKutta45New);


}

void vtkCommonMathInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkAmoebaMinimizer", vtkInstantiatorvtkAmoebaMinimizerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMatrix3x3", vtkInstantiatorvtkMatrix3x3New);
  vtkInstantiator::UnRegisterInstantiator("vtkMatrix4x4", vtkInstantiatorvtkMatrix4x4New);
  vtkInstantiator::UnRegisterInstantiator("vtkPolynomialSolversUnivariate", vtkInstantiatorvtkPolynomialSolversUnivariateNew);
  vtkInstantiator::UnRegisterInstantiator("vtkQuaternionInterpolator", vtkInstantiatorvtkQuaternionInterpolatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRungeKutta2", vtkInstantiatorvtkRungeKutta2New);
  vtkInstantiator::UnRegisterInstantiator("vtkRungeKutta4", vtkInstantiatorvtkRungeKutta4New);
  vtkInstantiator::UnRegisterInstantiator("vtkRungeKutta45", vtkInstantiatorvtkRungeKutta45New);


}

vtkCommonMathInstantiator::vtkCommonMathInstantiator()
{
  if(++vtkCommonMathInstantiator::Count == 1)
    {
    vtkCommonMathInstantiator::ClassInitialize();
    }
}

vtkCommonMathInstantiator::~vtkCommonMathInstantiator()
{
  if(--vtkCommonMathInstantiator::Count == 0)
    {
    vtkCommonMathInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkCommonMathInstantiator::Count;
