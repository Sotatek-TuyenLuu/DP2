/*
 *
 *  Copyright (C) 2000-2012, OFFIS e.V.
 *  All rights reserved.  See COPYRIGHT file for details.
 *
 *  This software and supporting documentation were developed by
 *
 *    OFFIS e.V.
 *    R&D Division Health
 *    Escherweg 2
 *    D-26121 Oldenburg, Germany
 *
 *
 *  Module:  dcmsr
 *
 *  Author:  Joerg Riesmeier
 *
 *  Purpose:
 *    classes: DSRImageReferenceValue
 *
 */


#include "dcmtk/config/osconfig.h"    /* make sure OS specific configuration is included first */

#include "dcmtk/dcmsr/dsrimgvl.h"
#include "dcmtk/dcmsr/dsrxmld.h"
#include "dcmtk/dcmimgle/dcmimage.h"
#include "dcmtk/dcmimgle/diutils.h"
#include "dcmtk/dcmimage/diregist.h"  /* add support for color images */


DSRImageReferenceValue::DSRImageReferenceValue()
  : DSRCompositeReferenceValue(),
    PresentationState(),
    FrameList(),
    IconImage(NULL)
{
}


DSRImageReferenceValue::DSRImageReferenceValue(const OFString &sopClassUID,
                                               const OFString &sopInstanceUID,
                                               const OFBool check)
  : DSRCompositeReferenceValue(),
    PresentationState(),
    FrameList(),
    IconImage(NULL)
{
    /* use the set method for checking purposes */
    setReference(sopClassUID, sopInstanceUID, check);
}


DSRImageReferenceValue::DSRImageReferenceValue(const OFString &imageSOPClassUID,
                                               const OFString &imageSOPInstanceUID,
                                               const OFString &pstateSOPClassUID,
                                               const OFString &pstateSOPInstanceUID,
                                               const OFBool check)
  : DSRCompositeReferenceValue(),
    PresentationState(),
    FrameList(),
    IconImage(NULL)
{
    /* use the set methods for checking purposes */
    setReference(imageSOPClassUID, imageSOPInstanceUID, check);
    setPresentationState(DSRCompositeReferenceValue(pstateSOPClassUID, pstateSOPInstanceUID, OFFalse /*check*/), check);
}


DSRImageReferenceValue::DSRImageReferenceValue(const DSRImageReferenceValue &referenceValue)
  : DSRCompositeReferenceValue(referenceValue),
    PresentationState(referenceValue.PresentationState),
    FrameList(referenceValue.FrameList),
    IconImage(NULL)
{
    /* do not check values since this would be unexpected to the user */

    /* create copy of icon image (if any), first frame only */
    if (referenceValue.IconImage != NULL)
        IconImage = referenceValue.IconImage->createDicomImage(0 /*fstart*/, 1 /*fcount*/);
}


DSRImageReferenceValue::DSRImageReferenceValue(const DSRCompositeReferenceValue &imageReferenceValue,
                                               const DSRCompositeReferenceValue &pstateReferenceValue)
  : DSRCompositeReferenceValue(imageReferenceValue),
    PresentationState(pstateReferenceValue),
    FrameList(),
    IconImage(NULL)
{
}


DSRImageReferenceValue::~DSRImageReferenceValue()
{
    deleteIconImage();
}


DSRImageReferenceValue &DSRImageReferenceValue::operator=(const DSRImageReferenceValue &referenceValue)
{
    DSRCompositeReferenceValue::operator=(referenceValue);
    /* do not check since this would be unexpected to the user */
    PresentationState = referenceValue.PresentationState;
    FrameList = referenceValue.FrameList;
    /* create copy of icon image (if any), first frame only */
    IconImage = (referenceValue.IconImage != NULL) ? referenceValue.IconImage->createDicomImage(0 /*fstart*/, 1 /*fcount*/) : NULL;
    return *this;
}


void DSRImageReferenceValue::clear()
{
    DSRCompositeReferenceValue::clear();
    PresentationState.clear();
    FrameList.clear();
    deleteIconImage();
}


OFBool DSRImageReferenceValue::isValid() const
{
    return DSRCompositeReferenceValue::isValid() && checkPresentationState(PresentationState).good();
}


OFBool DSRImageReferenceValue::isShort(const size_t flags) const
{
    return FrameList.isEmpty() || !(flags & DSRTypes::HF_renderFullData);
}


OFCondition DSRImageReferenceValue::print(STD_NAMESPACE ostream &stream,
                                          const size_t flags) const
{
    const char *modality = dcmSOPClassUIDToModality(SOPClassUID.c_str());
    stream << "(";
    if (modality != NULL)
        stream << modality << " image";
    else
        stream << "\"" << SOPClassUID << "\"";
    stream << ",";
    if (flags & DSRTypes::PF_printSOPInstanceUID)
        stream << "\"" << SOPInstanceUID << "\"";
    if (!FrameList.isEmpty())
    {
        stream << ",";
        FrameList.print(stream, flags);
    }
    stream << ")";
    if (PresentationState.isValid())
    {
        const DSRTypes::E_PresentationStateType pstateType = DSRTypes::sopClassUIDToPresentationStateType(PresentationState.getSOPClassUID());
        if (pstateType != DSRTypes::PT_invalid)
            stream << ",(" << DSRTypes::presentationStateTypeToShortName(pstateType) << ",";
        else
            stream << ",(" << PresentationState.getSOPClassUID() << ",";
        if (flags & DSRTypes::PF_printSOPInstanceUID)
            stream << "\"" << PresentationState.getSOPInstanceUID() << "\"";
        stream << ")";
    }
    return EC_Normal;
}


OFCondition DSRImageReferenceValue::readXML(const DSRXMLDocument &doc,
                                            DSRXMLCursor cursor)
{
    /* first read general composite reference information */
    OFCondition result = DSRCompositeReferenceValue::readXML(doc, cursor);
    /* then read image related XML tags */
    if (result.good())
    {
        /* frame list (optional) */
        const DSRXMLCursor childCursor = doc.getNamedNode(cursor.getChild(), "frames", OFFalse /*required*/);
        if (childCursor.valid())
        {
            OFString tmpString;
            /* put element content to the channel list */
            result = FrameList.putString(doc.getStringFromNodeContent(childCursor, tmpString).c_str());
        }
        if (result.good())
        {
            /* presentation state (optional) */
            cursor = doc.getNamedNode(cursor.getChild(), "pstate", OFFalse /*required*/);
            if (cursor.getChild().valid())
                result = PresentationState.readXML(doc, cursor);
        }
    }
    return result;
}


OFCondition DSRImageReferenceValue::writeXML(STD_NAMESPACE ostream &stream,
                                             const size_t flags) const
{
    OFCondition result = DSRCompositeReferenceValue::writeXML(stream, flags);
    if ((flags & DSRTypes::XF_writeEmptyTags) || !FrameList.isEmpty())
    {
        stream << "<frames>";
        FrameList.print(stream);
        stream << "</frames>" << OFendl;
    }
    if ((flags & DSRTypes::XF_writeEmptyTags) || PresentationState.isValid())
    {
        stream << "<pstate>" << OFendl;
        if (PresentationState.isValid())
            PresentationState.writeXML(stream, flags);
        stream << "</pstate>" << OFendl;
    }
    return result;
}


OFCondition DSRImageReferenceValue::readItem(DcmItem &dataset)
{
    /* be very careful, delete any previously created icon image (should never apply) */
    deleteIconImage();
    /* read ReferencedSOPClassUID and ReferencedSOPInstanceUID */
    OFCondition result = DSRCompositeReferenceValue::readItem(dataset);
    /* read ReferencedFrameNumber (conditional) */
    if (result.good())
        FrameList.read(dataset);
    /* read ReferencedSOPSequence (Presentation State, optional) */
    if (result.good())
        PresentationState.readSequence(dataset, "3" /*type*/);
    /* read IconImageSequence (optional) */
    if (result.good())
    {
        DcmSequenceOfItems dseq(DCM_IconImageSequence);
        /* use local status variable since the sequence is optional */
        const OFCondition seqStatus = DSRTypes::getElementFromDataset(dataset, dseq);
        DSRTypes::checkElementValue(dseq, "1", "3", seqStatus, "IMAGE content item");
        if (seqStatus.good())
        {
            /* check for empty sequence (allowed!) */
            if (!dseq.isEmpty())
            {
                /* read first item */
                DcmItem *ditem = dseq.getItem(0);
                if ((ditem != NULL) && !ditem->isEmpty())
                {
                    /* try to load/process the icon image */
                    IconImage = new DicomImage(ditem, EXS_LittleEndianExplicit);
                    if (IconImage != NULL)
                    {
                        if (IconImage->getStatus() != EIS_Normal)
                            result = SR_EC_CannotCreateIconImage;
                    } else
                        result = EC_MemoryExhausted;
                } else
                    result = SR_EC_InvalidDocumentTree;
            }
        }
    }
    return result;
}


OFCondition DSRImageReferenceValue::writeItem(DcmItem &dataset) const
{
    /* write ReferencedSOPClassUID and ReferencedSOPInstanceUID */
    OFCondition result = DSRCompositeReferenceValue::writeItem(dataset);
    /* write ReferencedFrameNumber (conditional) */
    if (result.good())
    {
        if (!FrameList.isEmpty())
            result = FrameList.write(dataset);
    }
    /* write ReferencedSOPSequence (Presentation State, optional) */
    if (result.good())
    {
        if (PresentationState.isValid())
            result = PresentationState.writeSequence(dataset);
    }
    /* write IconImageSequence (optional) */
    if (result.good() && (IconImage != NULL))
    {
        DcmItem *ditem = NULL;
        /* create sequence with a single item */
        result = dataset.findOrCreateSequenceItem(DCM_IconImageSequence, ditem, 0 /*position*/);
        if (result.good())
        {
            /* write icon image */
            if (IconImage->writeFrameToDataset(*ditem))
            {
                /* delete unwanted element NumberOfFrames (0028,0008) */
                ditem->findAndDeleteElement(DCM_NumberOfFrames);
            } else
                result = EC_CorruptedData;
        }
    }
    return result;
}


OFCondition DSRImageReferenceValue::renderHTML(STD_NAMESPACE ostream &docStream,
                                               STD_NAMESPACE ostream &annexStream,
                                               size_t &annexNumber,
                                               const size_t flags) const
{
    /* reference: image */
    docStream << "<a href=\"" << HTML_HYPERLINK_PREFIX_FOR_CGI;
    docStream << "?image=" << SOPClassUID << "+" << SOPInstanceUID;
    /* reference: pstate */
    if (PresentationState.isValid())
    {
        docStream << "&amp;pstate=" << PresentationState.getSOPClassUID();
        docStream << "+" << PresentationState.getSOPInstanceUID();
    }
    /* reference: frames */
    if (!FrameList.isEmpty())
    {
        docStream << "&amp;frames=";
        FrameList.print(docStream, 0 /*flags*/, '+');
    }
    docStream << "\">";
    /* text: image */
    const char *modality = dcmSOPClassUIDToModality(SOPClassUID.c_str());
    if (modality != NULL)
        docStream << modality;
    else
        docStream << "unknown";
    docStream << " image";
    /* text: pstate */
    if (PresentationState.isValid())
        docStream << " with presentation state";
    docStream << "</a>";
    if (!isShort(flags))
    {
        const char *lineBreak = (flags & DSRTypes::HF_renderSectionTitlesInline) ? " " :
                                (flags & DSRTypes::HF_XHTML11Compatibility) ? "<br />" : "<br>";
        if (flags & DSRTypes::HF_currentlyInsideAnnex)
        {
            docStream << OFendl << "<p>" << OFendl;
            /* render frame list (= print)*/
            docStream << "<b>Referenced Frame Number:</b>" << lineBreak;
            FrameList.print(docStream);
            docStream << "</p>";
        } else {
            docStream << " ";
            DSRTypes::createHTMLAnnexEntry(docStream, annexStream, "for more details see", annexNumber, flags);
            annexStream << "<p>" << OFendl;
            /* render frame list (= print)*/
            annexStream << "<b>Referenced Frame Number:</b>" << lineBreak;
            FrameList.print(annexStream);
            annexStream << "</p>" << OFendl;
        }
    }
    return EC_Normal;
}


OFCondition DSRImageReferenceValue::createIconImage(const OFString &filename,
                                                    const unsigned long frame,
                                                    const unsigned long width,
                                                    const unsigned long height)
{
    /* delete old icon image (if any) */
    deleteIconImage();
    OFCondition result = EC_IllegalParameter;
    if (!filename.empty())
    {
        /* try to load specified DICOM image */
        const unsigned long flags = CIF_UsePartialAccessToPixelData | CIF_NeverAccessEmbeddedOverlays;
        DicomImage *image = new DicomImage(filename.c_str(), flags, frame, 1 /*fcount*/);
        if (image != NULL)
        {
            /* set VOI window (for monochrome images) */
            if (image->isMonochrome() && !image->setWindow(0))
                image->setMinMaxWindow();
            /* do the real work: create a down-scaled version of the DICOM image */
            result = createIconImage(image, width, height);
            delete image;
        } else
            result = EC_MemoryExhausted;
    }
    return result;
}


OFCondition DSRImageReferenceValue::createIconImage(DcmObject *object,
                                                    const E_TransferSyntax xfer,
                                                    const unsigned long frame,
                                                    const unsigned long width,
                                                    const unsigned long height)
{
    /* delete old icon image (if any) */
    deleteIconImage();
    OFCondition result = EC_IllegalParameter;
    if (object != NULL)
    {
        /* try to load specified DICOM image */
        const unsigned long flags = CIF_UsePartialAccessToPixelData | CIF_NeverAccessEmbeddedOverlays;
        DicomImage *image = new DicomImage(object, xfer, flags, frame, 1 /*fcount*/);
        if (image != NULL)
        {
            /* set VOI window (for monochrome images) */
            if (image->isMonochrome() && !image->setWindow(0))
                image->setMinMaxWindow();
            /* do the real work: create a down-scaled version of the DICOM image */
            result = createIconImage(image, width, height);
            delete image;
        } else
            result = EC_MemoryExhausted;
    }
    return result;
}


OFCondition DSRImageReferenceValue::createIconImage(const DicomImage *image,
                                                    const unsigned long width,
                                                    const unsigned long height)
{
    /* delete old icon image (if any) */
    deleteIconImage();
    OFCondition result = EC_IllegalParameter;
    if (image != NULL)
    {
        const EI_Status imageStatus = image->getStatus();
        /* check whether image loading/processing was successful */
        switch (imageStatus)
        {
            case EIS_Normal:
            {
                if (image->getFrameCount() > 1)
                    DCMSR_DEBUG("DICOM image passed for creating an icon image contains multiple frames");
                /* create a down-scaled version of the DICOM image */
                const int aspect = (width == 0) || (height == 0);
                IconImage = image->createScaledImage(width, height, 1 /*interpolate*/, aspect);
                result = (IconImage != NULL) ? EC_Normal : SR_EC_CannotCreateIconImage;
                break;
            }
            case EIS_InvalidDocument:
            case EIS_InvalidImage:
                result = SR_EC_InvalidDocument;
                break;
            case EIS_MissingAttribute:
                result = SR_EC_MandatoryAttributeMissing;
                break;
            case EIS_InvalidValue:
                result = SR_EC_InvalidValue;
                break;
            case EIS_NotSupportedValue:
                result = SR_EC_UnsupportedValue;
                break;
            case EIS_MemoryFailure:
                result = EC_MemoryExhausted;
                break;
            default:
                /* this is the fallback for all other kind of errors */
                result = SR_EC_CannotCreateIconImage;
                break;
        }
    }
    return result;
}


void DSRImageReferenceValue::deleteIconImage()
{
    delete IconImage;
    IconImage = NULL;
}


OFCondition DSRImageReferenceValue::getValue(DSRImageReferenceValue &referenceValue) const
{
    referenceValue = *this;
    return EC_Normal;
}


OFCondition DSRImageReferenceValue::setValue(const DSRImageReferenceValue &referenceValue,
                                             const OFBool check)
{
    OFCondition result = DSRCompositeReferenceValue::setValue(referenceValue, check);
    if (result.good())
    {
        FrameList = referenceValue.FrameList;
        /* ignore status (return value) since the presentation state is optional */
        setPresentationState(referenceValue.PresentationState, check);
    }
    return result;
}


OFCondition DSRImageReferenceValue::setPresentationState(const DSRCompositeReferenceValue &pstateValue,
                                                         const OFBool check)
{
    OFCondition result = EC_Normal;
    /* check whether the passed value is valid */
    if (check)
        result = checkPresentationState(pstateValue);
    /* both UID values need to be empty or non-empty (optional) */
    else if (pstateValue.getSOPClassUID().empty() != pstateValue.getSOPInstanceUID().empty())
        result = SR_EC_InvalidValue;
    if (result.good())
        PresentationState = pstateValue;
    return result;
}


OFBool DSRImageReferenceValue::appliesToFrame(const Sint32 frameNumber) const
{
    OFBool result = OFTrue;
    if (!FrameList.isEmpty())
        result = FrameList.isElement(frameNumber);
    return result;
}


OFCondition DSRImageReferenceValue::checkSOPClassUID(const OFString &sopClassUID) const
{
    OFCondition result = DSRCompositeReferenceValue::checkSOPClassUID(sopClassUID);
    if (result.good())
    {
        /* tbd: might check for known IMAGE storage class later on */
    }
    return result;
}


OFCondition DSRImageReferenceValue::checkPresentationState(const DSRCompositeReferenceValue &referenceValue) const
{
    OFCondition result = EC_Normal;
    /* the reference to a presentation state is optional, so an empty value is also valid */
    if (!referenceValue.isEmpty())
    {
        result = referenceValue.checkCurrentValue();
        if (result.good() && (DSRTypes::sopClassUIDToPresentationStateType(referenceValue.getSOPClassUID()) == DSRTypes::PT_invalid))
            result = SR_EC_InvalidValue;
    }
    return result;
}
