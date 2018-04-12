/*=========================================================================
 *
 *  Copyright Insight Software Consortium
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/

#include "itkDCMTKFileReader.h"
#undef HAVE_SSTREAM   // 'twould be nice if people coded without using
// incredibly generic macro names
#include "dcmtk/config/osconfig.h" // make sure OS specific configuration is included first
#define INCLUDE_CSTDIO
#define INCLUDE_CSTRING

#include "dcdict.h"             // For DcmDataDictionary
#include "dcsequen.h"        /* for DcmSequenceOfItems */
#include "dcvrcs.h"          /* for DcmCodeString */
#include "dcvrfd.h"          /* for DcmFloatingPointDouble */
#include "dcvrfl.h"          /* for DcmFloatingPointDouble */
#include "dcvrsl.h"          /* for DCMSignedLong */
#include "dcvrus.h"          /* for DcmUnsignedShort */
#include "dcvris.h"          /* for DcmIntegerString */
#include "dcvrobow.h"        /* for DcmOtherByteOtherWord */
#include "dcvrui.h"          /* for DcmUniqueIdentifier */
#include "dcfilefo.h"        /* for DcmFileFormat */
#include "dcdeftag.h"        /* for DCM_NumberOfFrames */
#include "dcvrlo.h"          /* for DcmLongString */
#include "dcvrtm.h"          /* for DCMTime */
#include "dcvrda.h"          /* for DcmDate */
#include "dcvrpn.h"          /* for DcmPersonName */
#include "dcmimage.h"        /* fore DicomImage */
// #include "diregist.h"     /* include to support color images */
#include "vnl/vnl_cross.h"
#include "itkIntTypes.h"
#include <algorithm>

namespace itk
{

void
DCMTKItem
::SetDcmItem(DcmItem *item)
{
  this->m_DcmItem = item;
}
int
DCMTKItem
::GetElementSQ(unsigned short group,
                 unsigned short entry,
                 DCMTKSequence &sequence,
                 bool throwException)
{
  DcmSequenceOfItems *seq;
  DcmTagKey tagKey(group,entry);
  //  this->m_DcmItem->print(std::cerr);
  if(this->m_DcmItem->findAndGetSequence(tagKey,seq) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Can't find sequence "
                   << std::hex << group << " "
                   << std::hex << entry)
      }
  sequence.SetDcmSequenceOfItems(seq);
  return EXIT_SUCCESS;
}


int
DCMTKSequence
::GetStack(unsigned short group,
             unsigned short element,
             DcmStack &resultStack, bool throwException)
{
  DcmTagKey tagkey(group,element);
  if(this->m_DcmSequenceOfItems->search(tagkey,resultStack) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Can't find tag " << std::hex << group << " "
                   << element << std::dec);
    }
  return EXIT_SUCCESS;
}


void
DCMTKSequence
::SetDcmSequenceOfItems(DcmSequenceOfItems *seq)
{
  this->m_DcmSequenceOfItems = seq;
}

int
DCMTKSequence
::card()
{
  return this->m_DcmSequenceOfItems->card();
}

int
DCMTKSequence
::GetSequence(unsigned long index,
              DCMTKSequence &target,
              bool throwException)
{
  DcmItem *item = this->m_DcmSequenceOfItems->getItem(index);
  DcmSequenceOfItems *sequence =
    dynamic_cast<DcmSequenceOfItems *>(item);
  if(sequence == 0)
    {
    DCMTKExceptionOrErrorReturn(<< "Can't find DCMTKSequence at index " << index);
    }
  target.SetDcmSequenceOfItems(sequence);
  return EXIT_SUCCESS;
}

int
DCMTKSequence
::GetElementCS(unsigned short group,
               unsigned short element,
               std::string &target,
               bool throwException)
{
  DcmTagKey tagkey(group,element);
  DcmStack resultStack;
  this->GetStack(group,element,resultStack,throwException);
  DcmCodeString *codeStringElement =
    dynamic_cast<DcmCodeString *>(resultStack.top());
  if(codeStringElement == 0)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find CodeString Element "
                   << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }

  OFString ofString;
  if(codeStringElement->getOFStringArray(ofString) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Can't get OFString Value at tag "
                   << std::hex << group << " "
                   << element << std::dec);
    }
  target = "";
  for(unsigned j = 0; j < ofString.length(); ++j)
    {
    target += ofString[j];
    }
  return EXIT_SUCCESS;
}

int
DCMTKSequence
::GetElementOB(unsigned short group,
               unsigned short element,
               std::string &target,
               bool throwException)
{
  DcmTagKey tagkey(group,element);
  DcmStack resultStack;
  this->GetStack(group,element,resultStack,throwException);
  DcmOtherByteOtherWord *obItem = dynamic_cast<DcmOtherByteOtherWord *>(resultStack.top());

  if(obItem == 0)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find DecimalString element " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  Uint8 *bytes;
  obItem->getUint8Array(bytes);
  Uint32 length = obItem->getLength();
  std::string val;
  for(unsigned i = 0; i < length; ++i)
    {
    val += bytes[i];
    }
  target = val;
  return EXIT_SUCCESS;
}

int
DCMTKSequence
::GetElementCSorOB(unsigned short group,
                      unsigned short element,
                      std::string &target,
                      bool throwException)
{
  if(this->GetElementCS(group,element,target,false) == EXIT_SUCCESS)
    {
    return EXIT_SUCCESS;
    }
  if(this->GetElementOB(group,element,target,throwException) != EXIT_SUCCESS)
    {
    return EXIT_FAILURE;
    }
  return EXIT_SUCCESS;
}

int
DCMTKSequence::
GetElementFD(unsigned short group,
             unsigned short element,
             int count,
             double * target,
             bool throwException)
{
  DcmStack resultStack;
  this->GetStack(group,element,resultStack);
  DcmFloatingPointDouble *fdItem = dynamic_cast<DcmFloatingPointDouble *>(resultStack.top());
  if(fdItem == 0)
    {
    DCMTKExceptionOrErrorReturn(<< "Can't get CodeString Element at tag "
                   << std::hex << group << " "
                   << element << std::dec);
    }
  double *tmp;
  std::stringstream ss;
  ss << count;
  OFString vm(ss.str().c_str());
  if(fdItem->checkValue(vm).bad())
    {
    DCMTKExceptionOrErrorReturn(<< "Value multiplicity doesn't match "
                   << count << " at  tag "
                   << std::hex << group << " "
                   << element << std::dec);
    }
  if(fdItem->getFloat64Array(tmp) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Can't get floatarray Value at tag "
                   << std::hex << group << " "
                   << element << std::dec);
    }
  for(int i = 0; i < count; ++i)
    {
    target[i] = tmp[i];
    }
  return EXIT_SUCCESS;
}

int
DCMTKSequence
::GetElementFD(unsigned short group,
                   unsigned short element,
                   double &target,
               bool throwException)
{
  this->GetElementFD(group,element,1,&target,throwException);
  return EXIT_SUCCESS;
}

int
DCMTKSequence
::GetElementDS(unsigned short group,
                   unsigned short element,
                   std::string &target,
               bool throwException)
{
  DcmStack resultStack;
  this->GetStack(group,element,resultStack);
  DcmDecimalString *decimalStringElement = dynamic_cast<DcmDecimalString *>(resultStack.top());
  if(decimalStringElement == 0)
    {
    DCMTKExceptionOrErrorReturn(<< "Can't get DecimalString Element at tag "
                   << std::hex << group << " "
                   << element << std::dec);
    }
  OFString ofString;
  if(decimalStringElement->getOFStringArray(ofString) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Can't get DecimalString Value at tag "
                   << std::hex << group << " "
                   << element << std::dec);
    }
  target = "";
  for(unsigned j = 0; j < ofString.length(); ++j)
    {
    target += ofString[j];
    }
  return EXIT_SUCCESS;
}

int
DCMTKSequence
::GetElementSQ(unsigned short group,
                   unsigned short element,
                   DCMTKSequence &target,
               bool throwException)
{
  DcmTagKey tagkey(group,element);
  DcmStack resultStack;
  this->GetStack(group,element,resultStack);

  DcmSequenceOfItems *seqElement = dynamic_cast<DcmSequenceOfItems *>(resultStack.top());
  if(seqElement == 0)
    {
    DCMTKExceptionOrErrorReturn(<< "Can't get  at tag "
                   << std::hex << group << " "
                   << element << std::dec);
    }
  target.SetDcmSequenceOfItems(seqElement);
  return EXIT_SUCCESS;
}

int
DCMTKSequence
::GetElementItem(unsigned short index,
                 DCMTKItem &target,
                 bool throwException)
{
  DcmItem *itemElement = this->m_DcmSequenceOfItems->getItem(index);
  if(itemElement == 0)
    {
    DCMTKExceptionOrErrorReturn(<< "Can't get item "
                   << index
                   << std::endl);
    }
  target.SetDcmItem(itemElement);
  return EXIT_SUCCESS;
}

int
DCMTKSequence
::GetElementTM(unsigned short group,
             unsigned short element,
             std::string &target,
             bool throwException)
{
  DcmTagKey tagkey(group,element);
  DcmStack resultStack;
  this->GetStack(group,element,resultStack);

  DcmTime *dcmTime = dynamic_cast<DcmTime *>(resultStack.top());
  if(dcmTime == 0)
    {
    DCMTKExceptionOrErrorReturn(<< "Can't get  at tag "
                   << std::hex << group << " "
                   << element << std::dec);
    }
  char *cs;
  dcmTime->getString(cs);
  target = cs;
  return EXIT_SUCCESS;
}

DCMTKFileReader
::~DCMTKFileReader()
{
  delete [] m_Origin;
  delete m_DFile;
}

void
DCMTKFileReader
::SetFileName(const std::string &fileName)
{
  this->m_FileName = fileName;
}

const std::string &
DCMTKFileReader
::GetFileName() const
{
  return this->m_FileName;
}

bool
DCMTKFileReader
::CanReadFile(const std::string &filename)
{
  DcmFileFormat *DFile = new DcmFileFormat();
  bool rval = false;
  if( DFile &&
      DFile->loadFile(filename.c_str(),
                      EXS_Unknown,
                      EGL_noChange,
                      65536) == EC_Normal)
    {
    rval = true;
    }
  delete DFile;
  return rval;
}

bool
DCMTKFileReader
::IsImageFile(const std::string &filename)
{
  if( !DCMTKFileReader::CanReadFile(filename) )
    {
    return false;
    }

  bool rval = false;
  DicomImage *image = new DicomImage(filename.c_str());
  if( image && image->getStatus() == EIS_Normal && image->getInterData() )
    {
    rval = true;
    }
  delete image;
  return rval;
}

void
DCMTKFileReader
::LoadFile()
{
  if(this->m_FileName == "")
    {
    itkGenericExceptionMacro(<< "No filename given" );
    }
  delete this->m_Origin;
  this->m_Origin = 0;
  delete this->m_DFile;
  this->m_DFile = new DcmFileFormat();
  OFCondition cond = this->m_DFile->loadFile(this->m_FileName.c_str());
                                             // /* transfer syntax, autodetect */
                                             // EXS_Unknown,
                                             // /* group length */
                                             // EGL_noChange,
                                             // /* Max read length */
                                             // 1024, // should be big
                                             //       // enough for
                                             //       // header stuff but
                                             //       // prevent reading
                                             //       // image data.
                                             // /* file read mode */
                                             // ERM_fileOnly);
  if(cond != EC_Normal)
    {
    itkGenericExceptionMacro(<< cond.text() << ": reading file " << this->m_FileName);
    }
  this->m_Dataset = this->m_DFile->getDataset();
  this->m_Xfer = this->m_Dataset->getOriginalXfer();
  if(this->m_Dataset->findAndGetSint32(DCM_NumberOfFrames,this->m_FrameCount).bad())
    {
    this->m_FrameCount = 1;
    }
  int fnum(0);
  if(this->GetElementIS(0x0020,0x0013,fnum,false) == EXIT_SUCCESS)
    {
    this->m_FileNumber = fnum;
    }
}

int
DCMTKFileReader
::GetElementLO(unsigned short group,
                 unsigned short element,
                 std::string &target,
                 bool throwException)
{
  DcmTagKey tagkey(group,element);
  DcmElement *el;
  if(this->m_Dataset->findAndGetElement(tagkey,el) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find tag " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  DcmLongString *loItem = dynamic_cast<DcmLongString *>(el);
  if(loItem == 0)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find DecimalString element " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  OFString ofString;
  if(loItem->getOFStringArray(ofString) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant get string from element " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  target = "";
  for(unsigned i = 0; i < ofString.size(); i++)
    {
    target += ofString[i];
    }
  return EXIT_SUCCESS;
}

int
DCMTKFileReader
::GetElementLO(unsigned short group,
                 unsigned short element,
                 std::vector<std::string> &target,
                 bool throwException)
{
  DcmTagKey tagkey(group,element);
  DcmElement *el;
  if(this->m_Dataset->findAndGetElement(tagkey,el) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find tag " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  DcmLongString *loItem = dynamic_cast<DcmLongString *>(el);
  if(loItem == 0)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find DecimalString element " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  target.clear();
  OFString ofString;
  for(unsigned long i = 0; loItem->getOFString(ofString,i) == EC_Normal; ++i)
    {
    std::string targetStr = "";
    for(unsigned j = 0; j < ofString.size(); j++)
      {
      targetStr += ofString[j];
      }
    target.push_back(targetStr);
    }
  return EXIT_SUCCESS;
}

/** Get a DecimalString Item as a single string
 */
int
DCMTKFileReader
::GetElementDS(unsigned short group,
                  unsigned short element,
                  std::string &target,
                  bool throwException)
{
  DcmTagKey tagkey(group,element);
  DcmElement *el;
  if(this->m_Dataset->findAndGetElement(tagkey,el) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find tag " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  DcmDecimalString *dsItem = dynamic_cast<DcmDecimalString *>(el);
  if(dsItem == 0)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find DecimalString element " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  OFString ofString;
  if(dsItem->getOFStringArray(ofString) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Can't get DecimalString Value at tag "
                   << std::hex << group << " "
                   << element << std::dec);
    }
  target = "";
  for(unsigned j = 0; j < ofString.length(); ++j)
    {
    target += ofString[j];
    }
  return EXIT_SUCCESS;
}

int
DCMTKFileReader
::GetElementFD(unsigned short group,
               unsigned short element,
               int count,
               double * target,
               bool throwException)
{
  DcmTagKey tagkey(group,element);
  DcmElement *el;
  if(this->m_Dataset->findAndGetElement(tagkey,el) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find tag " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  DcmFloatingPointDouble *fdItem = dynamic_cast<DcmFloatingPointDouble *>(el);
  if(fdItem == 0)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find DecimalString element " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }

  std::stringstream ss;
  ss << count;
  OFString vm(ss.str().c_str());
  if(fdItem->checkValue(vm).bad())
    {
    DCMTKExceptionOrErrorReturn(<< "Value multiplicity doesn't match "
                   << count << " at  tag "
                   << std::hex << group << " "
                   << element << std::dec);
    }
  double *doubleArray;
  if(fdItem->getFloat64Array(doubleArray) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant extract Array from DecimalString " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  for(int i = 0; i < count; ++i)
    {
    target[i] = doubleArray[i];
    }
  return EXIT_SUCCESS;
}

int
DCMTKFileReader
::GetElementFD(unsigned short group,
                  unsigned short element,
                  double &target,
                  bool throwException)
{
  return this->GetElementFD(group,element,1,&target,throwException);
}

int
DCMTKFileReader
::GetElementFL(unsigned short group,
                  unsigned short element,
                  float &target,
                  bool throwException)
{
  DcmTagKey tagkey(group,element);
  DcmElement *el;
  if(this->m_Dataset->findAndGetElement(tagkey,el) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find tag " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  DcmFloatingPointSingle *flItem = dynamic_cast<DcmFloatingPointSingle *>(el);
  if(flItem == 0)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find DecimalString element " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  if(flItem->getFloat32(target) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant extract Array from DecimalString " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  return EXIT_SUCCESS;
}
int
DCMTKFileReader
::GetElementFLorOB(unsigned short group,
                      unsigned short element,
                      float &target,
                      bool throwException)
{
  if(this->GetElementFL(group,element,target,false) == EXIT_SUCCESS)
    {
    return EXIT_SUCCESS;
    }
  std::string val;
  if(this->GetElementOB(group,element,val,throwException) != EXIT_SUCCESS)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find DecimalString element " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  const char *data = val.c_str();
  const float *fptr = reinterpret_cast<const float *>(data);
  target = *fptr;
  switch(this->GetTransferSyntax())
    {
    case EXS_LittleEndianImplicit:
    case EXS_LittleEndianExplicit:
      itk::ByteSwapper<float>::SwapFromSystemToLittleEndian(&target);
      break;
    case EXS_BigEndianImplicit:
    case EXS_BigEndianExplicit:
      itk::ByteSwapper<float>::SwapFromSystemToBigEndian(&target);
      break;
    default:
      break;
    }
  return EXIT_SUCCESS;
}

int
DCMTKFileReader
::GetElementUS(unsigned short group,
                  unsigned short element,
                  unsigned short &target,
                  bool throwException)
{
  DcmTagKey tagkey(group,element);
  DcmElement *el;
  if(this->m_Dataset->findAndGetElement(tagkey,el) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find tag " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  DcmUnsignedShort *usItem = dynamic_cast<DcmUnsignedShort *>(el);
  if(usItem == 0)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find DecimalString element " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  if(usItem->getUint16(target) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant extract Array from DecimalString " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  return EXIT_SUCCESS;
}
int
DCMTKFileReader
::GetElementUS(unsigned short group,
                  unsigned short element,
                  unsigned short *&target,
                  bool throwException)
{
  DcmTagKey tagkey(group,element);
  DcmElement *el;
  if(this->m_Dataset->findAndGetElement(tagkey,el) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find tag " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  DcmUnsignedShort *usItem = dynamic_cast<DcmUnsignedShort *>(el);
  if(usItem == 0)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find DecimalString element " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  if(usItem->getUint16Array(target) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant extract Array from DecimalString " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  return EXIT_SUCCESS;
}
/** Get a DecimalString Item as a single string
   */
int
DCMTKFileReader
::GetElementCS(unsigned short group,
                  unsigned short element,
                  std::string &target,
                  bool throwException)
{
  DcmTagKey tagkey(group,element);
  DcmElement *el;
  if(this->m_Dataset->findAndGetElement(tagkey,el) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find tag " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  DcmCodeString *csItem = dynamic_cast<DcmCodeString *>(el);
  if(csItem == 0)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find DecimalString element " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  OFString ofString;
  if(csItem->getOFStringArray(ofString) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Can't get DecimalString Value at tag "
                   << std::hex << group << " "
                   << element << std::dec);
    }
  target = "";
  for(unsigned j = 0; j < ofString.length(); ++j)
    {
    target += ofString[j];
    }
  return EXIT_SUCCESS;
}
int
DCMTKFileReader
::GetElementCSorOB(unsigned short group,
                      unsigned short element,
                      std::string &target,
                      bool throwException)
{
  if(this->GetElementCS(group,element,target,false) == EXIT_SUCCESS)
    {
    return EXIT_SUCCESS;
    }
  if(this->GetElementOB(group,element,target,throwException) != EXIT_SUCCESS)
    {
    return EXIT_FAILURE;
    }
  return EXIT_SUCCESS;
}


int
DCMTKFileReader
::GetElementPN(unsigned short group,
                  unsigned short element,
                  std::string &target,
                  bool throwException)
{
  DcmTagKey tagkey(group,element);
  DcmElement *el;
  if(this->m_Dataset->findAndGetElement(tagkey,el) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find tag " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  DcmPersonName *pnItem = dynamic_cast<DcmPersonName *>(el);
  if(pnItem == 0)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find DecimalString element " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  OFString ofString;
  if(pnItem->getOFStringArray(ofString) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Can't get DecimalString Value at tag "
                   << std::hex << group << " "
                   << element << std::dec);
    }
  target = "";
  for(unsigned j = 0; j < ofString.length(); ++j)
    {
    target += ofString[j];
    }
  return EXIT_SUCCESS;
}

/** get an IS (Integer String Item
   */
int
DCMTKFileReader
::GetElementIS(unsigned short group,
                  unsigned short element,
                  ::itk::int32_t  &target,
                  bool throwException)
{
  DcmTagKey tagkey(group,element);
  DcmElement *el;
  if(this->m_Dataset->findAndGetElement(tagkey,el) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find tag " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  DcmIntegerString *isItem = dynamic_cast<DcmIntegerString *>(el);
  if(isItem == 0)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find DecimalString element " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  Sint32 _target; // MSVC seems to have type conversion problems with
                  // using int32_t as a an argument to getSint32
  if(isItem->getSint32(_target) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Can't get DecimalString Value at tag "
                   << std::hex << group << " "
                   << element << std::dec);
    }
  target = static_cast< ::itk::int32_t>(_target);
  return EXIT_SUCCESS;
}

int
DCMTKFileReader
::GetElementSL(unsigned short group,
               unsigned short element,
               ::itk::int32_t &target,
               bool throwException)
{
  DcmTagKey tagkey(group,element);
  DcmElement *el;
  if(this->m_Dataset->findAndGetElement(tagkey,el) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find tag " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  DcmSignedLong *isItem = dynamic_cast<DcmSignedLong *>(el);
  if(isItem == 0)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find DecimalString element " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  Sint32 _target; // MSVC seems to have type conversion problems with
                  // using int32_t as a an argument to getSint32
  if(isItem->getSint32(_target) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Can't get DecimalString Value at tag "
                   << std::hex << group << " "
                   << element << std::dec);
    }
  target = static_cast< ::itk::int32_t>(_target);
  return EXIT_SUCCESS;
}

int
DCMTKFileReader
::GetElementISorOB(unsigned short group,
                      unsigned short element,
                      ::itk::int32_t  &target,
                      bool throwException)
{
  if(this->GetElementIS(group,element,target,false) == EXIT_SUCCESS)
    {
    return EXIT_SUCCESS;
    }
  std::string val;
  if(this->GetElementOB(group,element,val,throwException) != EXIT_SUCCESS)
    {
    return EXIT_FAILURE;
    }
  const char *data = val.c_str();
  const int *iptr = reinterpret_cast<const int *>(data);
  target = *iptr;
  switch(this->GetTransferSyntax())
    {
    case EXS_LittleEndianImplicit:
    case EXS_LittleEndianExplicit:
      itk::ByteSwapper<int>::SwapFromSystemToLittleEndian(&target);
      break;
    case EXS_BigEndianImplicit:
    case EXS_BigEndianExplicit:
      itk::ByteSwapper<int>::SwapFromSystemToBigEndian(&target);
      break;
    default:                // no idea what to do
      break;
    }

  return EXIT_SUCCESS;
}

/** get an OB OtherByte Item
   */
int
DCMTKFileReader
::GetElementOB(unsigned short group,
                  unsigned short element,
                  std::string &target,
                  bool throwException)
{
  DcmTagKey tagkey(group,element);
  DcmElement *el;
  if(this->m_Dataset->findAndGetElement(tagkey,el) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find tag " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  DcmOtherByteOtherWord *obItem = dynamic_cast<DcmOtherByteOtherWord *>(el);
  if(obItem == 0)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find DecimalString element " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  Uint8 *bytes;
  obItem->getUint8Array(bytes);
  Uint32 length = obItem->getLength();
  std::string val;
  for(unsigned i = 0; i < length; ++i)
    {
    val += bytes[i];
    }
  target = val;
  return EXIT_SUCCESS;
}

int
DCMTKFileReader
::GetElementSQ(unsigned short group,
                 unsigned short entry,
                 DCMTKSequence &sequence,
                 bool throwException)
{
  DcmSequenceOfItems *seq;
  DcmTagKey tagKey(group,entry);

  if(this->m_Dataset->findAndGetSequence(tagKey,seq) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Can't find sequence "
                   << std::hex << group << " "
                   << std::hex << entry)
      }
  sequence.SetDcmSequenceOfItems(seq);
  return EXIT_SUCCESS;
}

int
DCMTKFileReader
::GetElementUI(unsigned short group,
                 unsigned short entry,
                 std::string &target,
                 bool throwException)
{
  DcmTagKey tagKey(group,entry);
  DcmElement *el;
  if(this->m_Dataset->findAndGetElement(tagKey,el) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find tag " << std::hex
                   << group << " " << std::hex
                   << entry << std::dec);
    }
  DcmUniqueIdentifier *uiItem = dynamic_cast<DcmUniqueIdentifier *>(el);
  if(uiItem == 0)
    {
    DCMTKExceptionOrErrorReturn(<< "Can't convert data item " << group
                   << "," << entry);
    }
  OFString ofString;
  if(uiItem->getOFStringArray(ofString,0) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Can't get UID Value at tag "
                   << std::hex << group << " " << std::hex
                   << entry << std::dec);
    }
  target = "";
  for(unsigned int j = 0; j < ofString.length(); ++j)
    {
    target.push_back(ofString[j]);
    }
  return EXIT_SUCCESS;
}

int DCMTKFileReader::
GetElementDA(unsigned short group,
             unsigned short element,
             std::string &target,
             bool throwException)
{
  DcmTagKey tagkey(group,element);
  DcmElement *el;
  if(this->m_Dataset->findAndGetElement(tagkey,el) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find tag " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  DcmDate *dcmDate = dynamic_cast<DcmDate *>(el);
  if(dcmDate == 0)
    {
    DCMTKExceptionOrErrorReturn(<< "Can't get  at tag "
                   << std::hex << group << " "
                   << element << std::dec);
    }
  char *cs;
  dcmDate->getString(cs);
  target = cs;
  return EXIT_SUCCESS;
}

int
DCMTKFileReader
::GetElementTM(unsigned short group,
             unsigned short element,
             std::string &target,
             bool throwException)
{

  DcmTagKey tagkey(group,element);
  DcmElement *el;
  if(this->m_Dataset->findAndGetElement(tagkey,el) != EC_Normal)
    {
    DCMTKExceptionOrErrorReturn(<< "Cant find tag " << std::hex
                   << group << " " << std::hex
                   << element << std::dec);
    }
  DcmTime *dcmTime = dynamic_cast<DcmTime *>(el);
  if(dcmTime == 0)
    {
    DCMTKExceptionOrErrorReturn(<< "Can't get  at tag "
                   << std::hex << group << " "
                   << element << std::dec);
    }
  char *cs;
  dcmTime->getString(cs);
  target = cs;
  return EXIT_SUCCESS;
}

int
DCMTKFileReader
::GetDirCosArray(double *dircos)
{
  int rval;
  DCMTKSequence planeSeq;

  dircos[0] = 1; dircos[1] = 0; dircos[2] = 0;
  dircos[3] = 0; dircos[4] = 1; dircos[5] = 0;
  if((rval = this->GetElementDS(0x0020,0x0037,6,dircos,false)) != EXIT_SUCCESS)
    {
    rval = this->GetElementSQ(0x0020,0x9116,planeSeq,false);
    if(rval == EXIT_SUCCESS)
      {
      rval = planeSeq.GetElementDS(0x0020,0x0037,6,dircos,false);
      return rval;
      }
    }
  //
  // for multiframe Philips images
  unsigned short candidateSequences[2] =
    {
      0x9229, // check for Shared Functional Group Sequence first
      0x9230, // check the Per-frame Functional Groups Sequence
    };
  for(unsigned i = 0; i < 2; ++i)
    {
    rval = this->GetElementSQ(0x5200,candidateSequences[i],planeSeq,false);
    if(rval == EXIT_SUCCESS)
      {
      DCMTKItem item;
      rval = planeSeq.GetElementItem(0,item,false);
      if(rval == EXIT_SUCCESS)
        {
        DCMTKSequence subSequence;
        // Plane Orientation sequence
        rval = item.GetElementSQ(0x0020,0x9116,subSequence,false);
        if(rval == EXIT_SUCCESS)
          {
          // Image Orientation Patient
          rval = subSequence.GetElementDS(0x0020,0x0037,6,dircos,false);
          if(rval == EXIT_SUCCESS)
            {
            break;
            }
          }
        }
      }
    }
  return rval;
}

int
DCMTKFileReader
::GetDirCosines(vnl_vector<double> &dir1,
                  vnl_vector<double> &dir2,
                  vnl_vector<double> &dir3)
{
  double dircos[6];
  int rval = this->GetDirCosArray(dircos);
  if(rval == EXIT_SUCCESS)
    {
    dir1[0] = dircos[0]; dir1[1] = dircos[1]; dir1[2] = dircos[2];
    dir2[0] = dircos[3]; dir2[1] = dircos[4]; dir2[2] = dircos[5];
    dir3 = vnl_cross_3d(dir1,dir2);
    }
  return rval;
}

int
DCMTKFileReader
::GetSlopeIntercept(double &slope, double &intercept)
{
  if(this->GetElementDS<double>(0x0028,0x1053,1,&slope,false) != EXIT_SUCCESS)
    {
    slope = 1.0;
    }
  if(this->GetElementDS<double>(0x0028,0x1052,1,&intercept,false) != EXIT_SUCCESS)
    {
    intercept = 0.0;
    }
  return EXIT_SUCCESS;
}

ImageIOBase::IOPixelType
DCMTKFileReader
::GetImagePixelType()
{
  unsigned short SamplesPerPixel;
  if(this->GetElementUS(0x0028,0x0100,SamplesPerPixel,false) != EXIT_SUCCESS)
    {
    return ImageIOBase::UNKNOWNPIXELTYPE;
    }
  ImageIOBase::IOPixelType pixelType;
  switch(SamplesPerPixel)
    {
    case 8:
    case 16:
      pixelType = ImageIOBase::SCALAR;
      break;
    case 24:
      pixelType = ImageIOBase::RGB;
      break;
    default:
      pixelType = ImageIOBase::VECTOR;
    }
  return pixelType;
}

ImageIOBase::IOComponentType
DCMTKFileReader
::GetImageDataType()
{
  unsigned short IsSigned;
  unsigned short BitsAllocated;
  unsigned short BitsStored;
  unsigned short HighBit;
  ImageIOBase::IOComponentType type =
    ImageIOBase::UNKNOWNCOMPONENTTYPE;

  if(this->GetElementUS(0x0028,0x0100,BitsAllocated,false) != EXIT_SUCCESS ||
     this->GetElementUS(0x0028,0x0101,BitsStored,false) != EXIT_SUCCESS ||
     this->GetElementUS(0x0028,0x0102,HighBit,false) != EXIT_SUCCESS ||
     this->GetElementUS(0x0028,0x0103,IsSigned,false) != EXIT_SUCCESS)
    {
    return type;
    }
  double slope, intercept;
  this->GetSlopeIntercept(slope,intercept);

  switch( BitsAllocated )
    {
    case 1:
    case 8:
    case 24: // RGB?
      if(IsSigned)
        {
        type = ImageIOBase::CHAR;
        }
      else
        {
        type = ImageIOBase::UCHAR;
        }
    break;
  case 12:
  case 16:
    if(IsSigned)
      {
      type = ImageIOBase::SHORT;
      }
    else
      {
      type = ImageIOBase::USHORT;
      }
    break;
  case 32:
  case 64: // Don't know what this actually means
    if(IsSigned)
      {
      type = ImageIOBase::LONG;
      }
    else
      {
      type = ImageIOBase::ULONG;
      }
    break;
  case 0:
  default:
    break;
    //assert(0);
    }

  return type;
}


int
DCMTKFileReader
::GetDimensions(unsigned short &rows, unsigned short &columns)
{
  if(this->GetElementUS(0x0028,0x0010,rows,false) != EXIT_SUCCESS ||
     this->GetElementUS(0x0028,0x0011,columns,false) != EXIT_SUCCESS)
    {
    return EXIT_FAILURE;
    }
  return EXIT_SUCCESS;
}

int
DCMTKFileReader
::GetSpacing(double *spacing)
{
  double _spacing[3];
  //
  // There are several tags that can have spacing, and we're going
  // from most to least desirable, starting with PixelSpacing, which
  // is guaranteed to be in patient space.
  // Imager Pixel spacing is inter-pixel spacing at the sensor front plane
  // Pixel spacing

  // first, shared function groups sequence, then
  // per-frame groups sequence
  _spacing[0] = _spacing[1] = _spacing[2] = 0.0;
  int rval(EXIT_SUCCESS);

  rval = this->GetElementDS<double>(0x0028,0x0030,2,_spacing,false);
  if(rval != EXIT_SUCCESS)
    {
    // imager pixel spacing
    rval = this->GetElementDS<double>(0x0018, 0x1164, 2, &_spacing[0],false);
    if(rval != EXIT_SUCCESS)
      {
      // Nominal Scanned PixelSpacing
      rval = this->GetElementDS<double>(0x0018, 0x2010, 2, &_spacing[0],false);
      }
    }

  if(rval == EXIT_SUCCESS)
    {
    // slice thickness
    spacing[0] = _spacing[1];
    spacing[1] = _spacing[0];
    if(this->GetElementDS<double>(0x0018,0x0050,1,&_spacing[2],false) == EXIT_SUCCESS)
      {
      spacing[2] = _spacing[2];
      }
    else
      {
      // punt, thicknes of 1
      spacing[2] = 1.0;
      }
    return rval;
    }
  // this is for multiframe images -- preferentially use the shared
  // functional group, and then the per-frame functional group
  unsigned short candidateSequences[2] =
    {
      0x9229, // check for Shared Functional Group Sequence first
      0x9230, // check the Per-frame Functional Groups Sequence
    };
  for(unsigned i = 0; i < 2; ++i)
    {
    DCMTKSequence spacingSequence;
    rval = this->GetElementSQ(0x5200,candidateSequences[i],spacingSequence,false);
    if(rval == EXIT_SUCCESS)
      {
      DCMTKItem item;
      rval = spacingSequence.GetElementItem(0,item,false);
      if(rval == EXIT_SUCCESS)
        {
        DCMTKSequence subSequence;
        // Pixel Measures Sequence
        rval = item.GetElementSQ(0x0028,0x9110,subSequence,false);
        if(rval == EXIT_SUCCESS)
          {
          if(subSequence.GetElementDS<double>(0x0028,0x0030,2,_spacing,false) == EXIT_SUCCESS
             && subSequence.GetElementDS<double>(0x0018,0x0050,1,&_spacing[2]) == EXIT_SUCCESS)
            {
            spacing[0] = _spacing[1];
            spacing[1] = _spacing[0];
            spacing[2] = _spacing[2];
            break;
            }
          }
        }
      }
    }
  return rval;
}

int
DCMTKFileReader
::GetOrigin(double *origin)
{
  int rval = EXIT_SUCCESS;
  // if the origin has yet to be cached
  if(this->m_Origin == ITK_NULLPTR)
    {
    this->m_Origin = new double [3];
    std::fill(this->m_Origin,this->m_Origin+3,0.0);
    DCMTKSequence originSequence;
    DCMTKItem item;
    DCMTKSequence subSequence;

    rval = this->GetElementDS<double>(0x0020,0x0032,3,origin,false);
    if(rval == EXIT_SUCCESS)
      {
      return EXIT_SUCCESS;
      }
    // this is for multiframe images -- preferentially use the shared
    // functional group, and then the per-frame functional group
    unsigned short candidateSequences[2] =
      {
        0x9229, // check for Shared Functional Group Sequence first
        0x9230, // check the Per-frame Functional Groups Sequence
      };
    for(unsigned i = 0; i < 2; ++i)
      {
      rval = this->GetElementSQ(0x5200,candidateSequences[i],originSequence,false);
      if(rval != EXIT_SUCCESS)
        {
        continue;
        }
      rval = originSequence.GetElementItem(0,item,false);
      if(rval != EXIT_SUCCESS)
        {
        continue;
        }
      rval = item.GetElementSQ(0x0020,0x9113,subSequence,false);
      if(rval != EXIT_SUCCESS)
        {
        continue;
        }
      subSequence.GetElementDS<double>(0x0020,0x0032,3,this->m_Origin,true);
      if(rval != EXIT_SUCCESS)
        {
        continue;
        }
      break;
      }
    }
  origin[0] = this->m_Origin[0];
  origin[1] = this->m_Origin[1];
  origin[2] = this->m_Origin[2];
  return rval;
}

bool
DCMTKFileReader
::HasPixelData() const
{
  DcmTagKey tagkey(0x7fe0,0x0010);
  DcmStack resultStack;
  return this->m_DFile->search(tagkey,resultStack) == EC_Normal;
}

int
DCMTKFileReader
::GetFrameCount() const
{
  return this->m_FrameCount;
}

E_TransferSyntax
DCMTKFileReader
::GetTransferSyntax() const
{
  return m_Xfer;
}

long
DCMTKFileReader
::GetFileNumber() const
{
  return m_FileNumber;
}

void
DCMTKFileReader
::AddDictEntry(DcmDictEntry *entry)
{
  DcmDataDictionary &dict = dcmDataDict.wrlock();
  dict.addEntry(entry);
  dcmDataDict.unlock();
}

bool CompareDCMTKFileReaders(DCMTKFileReader *a, DCMTKFileReader *b)
{
  return a->GetFileNumber() < b->GetFileNumber();
}

}
