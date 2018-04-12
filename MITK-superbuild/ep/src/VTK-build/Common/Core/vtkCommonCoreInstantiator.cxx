#include "vtkCommonCoreInstantiator.h"
#include "vtkAnimationCue.h"
#include "vtkBitArray.h"
#include "vtkBitArrayIterator.h"
#include "vtkBoxMuellerRandomSequence.h"
#include "vtkByteSwap.h"
#include "vtkCharArray.h"
#include "vtkCollection.h"
#include "vtkCollectionIterator.h"
#include "vtkConditionVariable.h"
#include "vtkCriticalSection.h"
#include "vtkDataArrayCollection.h"
#include "vtkDataArrayCollectionIterator.h"
#include "vtkDataArraySelection.h"
#include "vtkDebugLeaks.h"
#include "vtkDoubleArray.h"
#include "vtkDynamicLoader.h"
#include "vtkFileOutputWindow.h"
#include "vtkFloatArray.h"
#include "vtkGarbageCollector.h"
#include "vtkIdListCollection.h"
#include "vtkIdList.h"
#include "vtkIdTypeArray.h"
#include "vtkInformation.h"
#include "vtkInformationIterator.h"
#include "vtkInformationVector.h"
#include "vtkInstantiator.h"
#include "vtkIntArray.h"
#include "vtkLongArray.h"
#include "vtkLookupTable.h"
#include "vtkMath.h"
#include "vtkMinimalStandardRandomSequence.h"
#include "vtkMultiThreader.h"
#include "vtkMutexLock.h"
#include "vtkObject.h"
#include "vtkObjectFactoryCollection.h"
#include "vtkOutputWindow.h"
#include "vtkOverrideInformationCollection.h"
#include "vtkOverrideInformation.h"
#include "vtkPoints2D.h"
#include "vtkPoints.h"
#include "vtkPriorityQueue.h"
#include "vtkReferenceCount.h"
#include "vtkScalarsToColors.h"
#include "vtkShortArray.h"
#include "vtkSignedCharArray.h"
#include "vtkSortDataArray.h"
#include "vtkStringArray.h"
#include "vtkTimePointUtility.h"
#include "vtkUnicodeStringArray.h"
#include "vtkUnsignedCharArray.h"
#include "vtkUnsignedIntArray.h"
#include "vtkUnsignedLongArray.h"
#include "vtkUnsignedShortArray.h"
#include "vtkVariantArray.h"
#include "vtkVersion.h"
#include "vtkVoidArray.h"
#include "vtkXMLFileOutputWindow.h"
#include "vtkWin32OutputWindow.h"
#include "vtkWin32ProcessOutputWindow.h"
#include "vtkLongLongArray.h"
#include "vtkUnsignedLongLongArray.h"
#include "vtkTypeInt8Array.h"
#include "vtkTypeInt16Array.h"
#include "vtkTypeInt32Array.h"
#include "vtkTypeInt64Array.h"
#include "vtkTypeUInt8Array.h"
#include "vtkTypeUInt16Array.h"
#include "vtkTypeUInt32Array.h"
#include "vtkTypeUInt64Array.h"
#include "vtkTypeFloat32Array.h"
#include "vtkTypeFloat64Array.h"

#include "vtkSetGet.h"

vtkInstantiatorNewMacro(vtkAnimationCue)
vtkInstantiatorNewMacro(vtkBitArray)
vtkInstantiatorNewMacro(vtkBitArrayIterator)
vtkInstantiatorNewMacro(vtkBoxMuellerRandomSequence)
vtkInstantiatorNewMacro(vtkByteSwap)
vtkInstantiatorNewMacro(vtkCharArray)
vtkInstantiatorNewMacro(vtkCollection)
vtkInstantiatorNewMacro(vtkCollectionIterator)
vtkInstantiatorNewMacro(vtkConditionVariable)
vtkInstantiatorNewMacro(vtkCriticalSection)
vtkInstantiatorNewMacro(vtkDataArrayCollection)
vtkInstantiatorNewMacro(vtkDataArrayCollectionIterator)
vtkInstantiatorNewMacro(vtkDataArraySelection)
vtkInstantiatorNewMacro(vtkDebugLeaks)
vtkInstantiatorNewMacro(vtkDoubleArray)
vtkInstantiatorNewMacro(vtkDynamicLoader)
vtkInstantiatorNewMacro(vtkFileOutputWindow)
vtkInstantiatorNewMacro(vtkFloatArray)
vtkInstantiatorNewMacro(vtkGarbageCollector)
vtkInstantiatorNewMacro(vtkIdListCollection)
vtkInstantiatorNewMacro(vtkIdList)
vtkInstantiatorNewMacro(vtkIdTypeArray)
vtkInstantiatorNewMacro(vtkInformation)
vtkInstantiatorNewMacro(vtkInformationIterator)
vtkInstantiatorNewMacro(vtkInformationVector)
vtkInstantiatorNewMacro(vtkInstantiator)
vtkInstantiatorNewMacro(vtkIntArray)
vtkInstantiatorNewMacro(vtkLongArray)
vtkInstantiatorNewMacro(vtkLookupTable)
vtkInstantiatorNewMacro(vtkMath)
vtkInstantiatorNewMacro(vtkMinimalStandardRandomSequence)
vtkInstantiatorNewMacro(vtkMultiThreader)
vtkInstantiatorNewMacro(vtkMutexLock)
vtkInstantiatorNewMacro(vtkObject)
vtkInstantiatorNewMacro(vtkObjectFactoryCollection)
vtkInstantiatorNewMacro(vtkOutputWindow)
vtkInstantiatorNewMacro(vtkOverrideInformationCollection)
vtkInstantiatorNewMacro(vtkOverrideInformation)
vtkInstantiatorNewMacro(vtkPoints2D)
vtkInstantiatorNewMacro(vtkPoints)
vtkInstantiatorNewMacro(vtkPriorityQueue)
vtkInstantiatorNewMacro(vtkReferenceCount)
vtkInstantiatorNewMacro(vtkScalarsToColors)
vtkInstantiatorNewMacro(vtkShortArray)
vtkInstantiatorNewMacro(vtkSignedCharArray)
vtkInstantiatorNewMacro(vtkSortDataArray)
vtkInstantiatorNewMacro(vtkStringArray)
vtkInstantiatorNewMacro(vtkTimePointUtility)
vtkInstantiatorNewMacro(vtkUnicodeStringArray)
vtkInstantiatorNewMacro(vtkUnsignedCharArray)
vtkInstantiatorNewMacro(vtkUnsignedIntArray)
vtkInstantiatorNewMacro(vtkUnsignedLongArray)
vtkInstantiatorNewMacro(vtkUnsignedShortArray)
vtkInstantiatorNewMacro(vtkVariantArray)
vtkInstantiatorNewMacro(vtkVersion)
vtkInstantiatorNewMacro(vtkVoidArray)
vtkInstantiatorNewMacro(vtkXMLFileOutputWindow)
vtkInstantiatorNewMacro(vtkWin32OutputWindow)
vtkInstantiatorNewMacro(vtkWin32ProcessOutputWindow)
vtkInstantiatorNewMacro(vtkLongLongArray)
vtkInstantiatorNewMacro(vtkUnsignedLongLongArray)
vtkInstantiatorNewMacro(vtkTypeInt8Array)
vtkInstantiatorNewMacro(vtkTypeInt16Array)
vtkInstantiatorNewMacro(vtkTypeInt32Array)
vtkInstantiatorNewMacro(vtkTypeInt64Array)
vtkInstantiatorNewMacro(vtkTypeUInt8Array)
vtkInstantiatorNewMacro(vtkTypeUInt16Array)
vtkInstantiatorNewMacro(vtkTypeUInt32Array)
vtkInstantiatorNewMacro(vtkTypeUInt64Array)
vtkInstantiatorNewMacro(vtkTypeFloat32Array)
vtkInstantiatorNewMacro(vtkTypeFloat64Array)



void vtkCommonCoreInstantiator::ClassInitialize()
{

  vtkInstantiator::RegisterInstantiator("vtkAnimationCue", vtkInstantiatorvtkAnimationCueNew);
  vtkInstantiator::RegisterInstantiator("vtkBitArray", vtkInstantiatorvtkBitArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkBitArrayIterator", vtkInstantiatorvtkBitArrayIteratorNew);
  vtkInstantiator::RegisterInstantiator("vtkBoxMuellerRandomSequence", vtkInstantiatorvtkBoxMuellerRandomSequenceNew);
  vtkInstantiator::RegisterInstantiator("vtkByteSwap", vtkInstantiatorvtkByteSwapNew);
  vtkInstantiator::RegisterInstantiator("vtkCharArray", vtkInstantiatorvtkCharArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkCollection", vtkInstantiatorvtkCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkCollectionIterator", vtkInstantiatorvtkCollectionIteratorNew);
  vtkInstantiator::RegisterInstantiator("vtkConditionVariable", vtkInstantiatorvtkConditionVariableNew);
  vtkInstantiator::RegisterInstantiator("vtkCriticalSection", vtkInstantiatorvtkCriticalSectionNew);
  vtkInstantiator::RegisterInstantiator("vtkDataArrayCollection", vtkInstantiatorvtkDataArrayCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkDataArrayCollectionIterator", vtkInstantiatorvtkDataArrayCollectionIteratorNew);
  vtkInstantiator::RegisterInstantiator("vtkDataArraySelection", vtkInstantiatorvtkDataArraySelectionNew);
  vtkInstantiator::RegisterInstantiator("vtkDebugLeaks", vtkInstantiatorvtkDebugLeaksNew);
  vtkInstantiator::RegisterInstantiator("vtkDoubleArray", vtkInstantiatorvtkDoubleArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkDynamicLoader", vtkInstantiatorvtkDynamicLoaderNew);
  vtkInstantiator::RegisterInstantiator("vtkFileOutputWindow", vtkInstantiatorvtkFileOutputWindowNew);
  vtkInstantiator::RegisterInstantiator("vtkFloatArray", vtkInstantiatorvtkFloatArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkGarbageCollector", vtkInstantiatorvtkGarbageCollectorNew);
  vtkInstantiator::RegisterInstantiator("vtkIdListCollection", vtkInstantiatorvtkIdListCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkIdList", vtkInstantiatorvtkIdListNew);
  vtkInstantiator::RegisterInstantiator("vtkIdTypeArray", vtkInstantiatorvtkIdTypeArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkInformation", vtkInstantiatorvtkInformationNew);
  vtkInstantiator::RegisterInstantiator("vtkInformationIterator", vtkInstantiatorvtkInformationIteratorNew);
  vtkInstantiator::RegisterInstantiator("vtkInformationVector", vtkInstantiatorvtkInformationVectorNew);
  vtkInstantiator::RegisterInstantiator("vtkInstantiator", vtkInstantiatorvtkInstantiatorNew);
  vtkInstantiator::RegisterInstantiator("vtkIntArray", vtkInstantiatorvtkIntArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkLongArray", vtkInstantiatorvtkLongArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkLookupTable", vtkInstantiatorvtkLookupTableNew);
  vtkInstantiator::RegisterInstantiator("vtkMath", vtkInstantiatorvtkMathNew);
  vtkInstantiator::RegisterInstantiator("vtkMinimalStandardRandomSequence", vtkInstantiatorvtkMinimalStandardRandomSequenceNew);
  vtkInstantiator::RegisterInstantiator("vtkMultiThreader", vtkInstantiatorvtkMultiThreaderNew);
  vtkInstantiator::RegisterInstantiator("vtkMutexLock", vtkInstantiatorvtkMutexLockNew);
  vtkInstantiator::RegisterInstantiator("vtkObject", vtkInstantiatorvtkObjectNew);
  vtkInstantiator::RegisterInstantiator("vtkObjectFactoryCollection", vtkInstantiatorvtkObjectFactoryCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkOutputWindow", vtkInstantiatorvtkOutputWindowNew);
  vtkInstantiator::RegisterInstantiator("vtkOverrideInformationCollection", vtkInstantiatorvtkOverrideInformationCollectionNew);
  vtkInstantiator::RegisterInstantiator("vtkOverrideInformation", vtkInstantiatorvtkOverrideInformationNew);
  vtkInstantiator::RegisterInstantiator("vtkPoints2D", vtkInstantiatorvtkPoints2DNew);
  vtkInstantiator::RegisterInstantiator("vtkPoints", vtkInstantiatorvtkPointsNew);
  vtkInstantiator::RegisterInstantiator("vtkPriorityQueue", vtkInstantiatorvtkPriorityQueueNew);
  vtkInstantiator::RegisterInstantiator("vtkReferenceCount", vtkInstantiatorvtkReferenceCountNew);
  vtkInstantiator::RegisterInstantiator("vtkScalarsToColors", vtkInstantiatorvtkScalarsToColorsNew);
  vtkInstantiator::RegisterInstantiator("vtkShortArray", vtkInstantiatorvtkShortArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkSignedCharArray", vtkInstantiatorvtkSignedCharArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkSortDataArray", vtkInstantiatorvtkSortDataArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkStringArray", vtkInstantiatorvtkStringArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkTimePointUtility", vtkInstantiatorvtkTimePointUtilityNew);
  vtkInstantiator::RegisterInstantiator("vtkUnicodeStringArray", vtkInstantiatorvtkUnicodeStringArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkUnsignedCharArray", vtkInstantiatorvtkUnsignedCharArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkUnsignedIntArray", vtkInstantiatorvtkUnsignedIntArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkUnsignedLongArray", vtkInstantiatorvtkUnsignedLongArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkUnsignedShortArray", vtkInstantiatorvtkUnsignedShortArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkVariantArray", vtkInstantiatorvtkVariantArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkVersion", vtkInstantiatorvtkVersionNew);
  vtkInstantiator::RegisterInstantiator("vtkVoidArray", vtkInstantiatorvtkVoidArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLFileOutputWindow", vtkInstantiatorvtkXMLFileOutputWindowNew);
  vtkInstantiator::RegisterInstantiator("vtkWin32OutputWindow", vtkInstantiatorvtkWin32OutputWindowNew);
  vtkInstantiator::RegisterInstantiator("vtkWin32ProcessOutputWindow", vtkInstantiatorvtkWin32ProcessOutputWindowNew);
  vtkInstantiator::RegisterInstantiator("vtkLongLongArray", vtkInstantiatorvtkLongLongArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkUnsignedLongLongArray", vtkInstantiatorvtkUnsignedLongLongArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkTypeInt8Array", vtkInstantiatorvtkTypeInt8ArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkTypeInt16Array", vtkInstantiatorvtkTypeInt16ArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkTypeInt32Array", vtkInstantiatorvtkTypeInt32ArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkTypeInt64Array", vtkInstantiatorvtkTypeInt64ArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkTypeUInt8Array", vtkInstantiatorvtkTypeUInt8ArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkTypeUInt16Array", vtkInstantiatorvtkTypeUInt16ArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkTypeUInt32Array", vtkInstantiatorvtkTypeUInt32ArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkTypeUInt64Array", vtkInstantiatorvtkTypeUInt64ArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkTypeFloat32Array", vtkInstantiatorvtkTypeFloat32ArrayNew);
  vtkInstantiator::RegisterInstantiator("vtkTypeFloat64Array", vtkInstantiatorvtkTypeFloat64ArrayNew);


}

void vtkCommonCoreInstantiator::ClassFinalize()
{

  vtkInstantiator::UnRegisterInstantiator("vtkAnimationCue", vtkInstantiatorvtkAnimationCueNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBitArray", vtkInstantiatorvtkBitArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBitArrayIterator", vtkInstantiatorvtkBitArrayIteratorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkBoxMuellerRandomSequence", vtkInstantiatorvtkBoxMuellerRandomSequenceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkByteSwap", vtkInstantiatorvtkByteSwapNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCharArray", vtkInstantiatorvtkCharArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCollection", vtkInstantiatorvtkCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCollectionIterator", vtkInstantiatorvtkCollectionIteratorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkConditionVariable", vtkInstantiatorvtkConditionVariableNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCriticalSection", vtkInstantiatorvtkCriticalSectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataArrayCollection", vtkInstantiatorvtkDataArrayCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataArrayCollectionIterator", vtkInstantiatorvtkDataArrayCollectionIteratorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDataArraySelection", vtkInstantiatorvtkDataArraySelectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDebugLeaks", vtkInstantiatorvtkDebugLeaksNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDoubleArray", vtkInstantiatorvtkDoubleArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDynamicLoader", vtkInstantiatorvtkDynamicLoaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFileOutputWindow", vtkInstantiatorvtkFileOutputWindowNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFloatArray", vtkInstantiatorvtkFloatArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkGarbageCollector", vtkInstantiatorvtkGarbageCollectorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkIdListCollection", vtkInstantiatorvtkIdListCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkIdList", vtkInstantiatorvtkIdListNew);
  vtkInstantiator::UnRegisterInstantiator("vtkIdTypeArray", vtkInstantiatorvtkIdTypeArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInformation", vtkInstantiatorvtkInformationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInformationIterator", vtkInstantiatorvtkInformationIteratorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInformationVector", vtkInstantiatorvtkInformationVectorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkInstantiator", vtkInstantiatorvtkInstantiatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkIntArray", vtkInstantiatorvtkIntArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLongArray", vtkInstantiatorvtkLongArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLookupTable", vtkInstantiatorvtkLookupTableNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMath", vtkInstantiatorvtkMathNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMinimalStandardRandomSequence", vtkInstantiatorvtkMinimalStandardRandomSequenceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMultiThreader", vtkInstantiatorvtkMultiThreaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMutexLock", vtkInstantiatorvtkMutexLockNew);
  vtkInstantiator::UnRegisterInstantiator("vtkObject", vtkInstantiatorvtkObjectNew);
  vtkInstantiator::UnRegisterInstantiator("vtkObjectFactoryCollection", vtkInstantiatorvtkObjectFactoryCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOutputWindow", vtkInstantiatorvtkOutputWindowNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOverrideInformationCollection", vtkInstantiatorvtkOverrideInformationCollectionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOverrideInformation", vtkInstantiatorvtkOverrideInformationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPoints2D", vtkInstantiatorvtkPoints2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPoints", vtkInstantiatorvtkPointsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPriorityQueue", vtkInstantiatorvtkPriorityQueueNew);
  vtkInstantiator::UnRegisterInstantiator("vtkReferenceCount", vtkInstantiatorvtkReferenceCountNew);
  vtkInstantiator::UnRegisterInstantiator("vtkScalarsToColors", vtkInstantiatorvtkScalarsToColorsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkShortArray", vtkInstantiatorvtkShortArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSignedCharArray", vtkInstantiatorvtkSignedCharArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSortDataArray", vtkInstantiatorvtkSortDataArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkStringArray", vtkInstantiatorvtkStringArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTimePointUtility", vtkInstantiatorvtkTimePointUtilityNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUnicodeStringArray", vtkInstantiatorvtkUnicodeStringArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUnsignedCharArray", vtkInstantiatorvtkUnsignedCharArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUnsignedIntArray", vtkInstantiatorvtkUnsignedIntArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUnsignedLongArray", vtkInstantiatorvtkUnsignedLongArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUnsignedShortArray", vtkInstantiatorvtkUnsignedShortArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVariantArray", vtkInstantiatorvtkVariantArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVersion", vtkInstantiatorvtkVersionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVoidArray", vtkInstantiatorvtkVoidArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLFileOutputWindow", vtkInstantiatorvtkXMLFileOutputWindowNew);
  vtkInstantiator::UnRegisterInstantiator("vtkWin32OutputWindow", vtkInstantiatorvtkWin32OutputWindowNew);
  vtkInstantiator::UnRegisterInstantiator("vtkWin32ProcessOutputWindow", vtkInstantiatorvtkWin32ProcessOutputWindowNew);
  vtkInstantiator::UnRegisterInstantiator("vtkLongLongArray", vtkInstantiatorvtkLongLongArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUnsignedLongLongArray", vtkInstantiatorvtkUnsignedLongLongArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTypeInt8Array", vtkInstantiatorvtkTypeInt8ArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTypeInt16Array", vtkInstantiatorvtkTypeInt16ArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTypeInt32Array", vtkInstantiatorvtkTypeInt32ArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTypeInt64Array", vtkInstantiatorvtkTypeInt64ArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTypeUInt8Array", vtkInstantiatorvtkTypeUInt8ArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTypeUInt16Array", vtkInstantiatorvtkTypeUInt16ArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTypeUInt32Array", vtkInstantiatorvtkTypeUInt32ArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTypeUInt64Array", vtkInstantiatorvtkTypeUInt64ArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTypeFloat32Array", vtkInstantiatorvtkTypeFloat32ArrayNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTypeFloat64Array", vtkInstantiatorvtkTypeFloat64ArrayNew);


}

vtkCommonCoreInstantiator::vtkCommonCoreInstantiator()
{
  if(++vtkCommonCoreInstantiator::Count == 1)
    {
    vtkCommonCoreInstantiator::ClassInitialize();
    }
}

vtkCommonCoreInstantiator::~vtkCommonCoreInstantiator()
{
  if(--vtkCommonCoreInstantiator::Count == 0)
    {
    vtkCommonCoreInstantiator::ClassFinalize();
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkCommonCoreInstantiator::Count;
