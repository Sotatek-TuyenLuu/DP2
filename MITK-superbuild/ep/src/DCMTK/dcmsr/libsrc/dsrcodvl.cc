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
 *    classes: DSRCodedEntryValue
 *
 */


#include "dcmtk/config/osconfig.h"    /* make sure OS specific configuration is included first */

#include "dcmtk/dcmsr/dsrtypes.h"
#include "dcmtk/dcmsr/dsrcodvl.h"
#include "dcmtk/dcmsr/dsrxmld.h"


DSRCodedEntryValue::DSRCodedEntryValue()
  : CodeValue(),
    CodingSchemeDesignator(),
    CodingSchemeVersion(),
    CodeMeaning(),
    ContextIdentifier(),
    ContextUID(),
    MappingResource(),
    ContextGroupVersion(),
    ContextGroupLocalVersion(),
    ContextGroupExtensionCreatorUID()
{
}


DSRCodedEntryValue::DSRCodedEntryValue(const OFString &codeValue,
                                       const OFString &codingSchemeDesignator,
                                       const OFString &codeMeaning,
                                       const OFBool check)
  : CodeValue(codeValue),
    CodingSchemeDesignator(codingSchemeDesignator),
    CodingSchemeVersion(),
    CodeMeaning(codeMeaning),
    ContextIdentifier(),
    ContextUID(),
    MappingResource(),
    ContextGroupVersion(),
    ContextGroupLocalVersion(),
    ContextGroupExtensionCreatorUID()
{
    /* check code (if not disabled) */
    setCode(codeValue, codingSchemeDesignator, codeMeaning, check);
}


DSRCodedEntryValue::DSRCodedEntryValue(const OFString &codeValue,
                                       const OFString &codingSchemeDesignator,
                                       const OFString &codingSchemeVersion,
                                       const OFString &codeMeaning,
                                       const OFBool check)
  : CodeValue(),
    CodingSchemeDesignator(),
    CodingSchemeVersion(),
    CodeMeaning(),
    ContextIdentifier(),
    ContextUID(),
    MappingResource(),
    ContextGroupVersion(),
    ContextGroupLocalVersion(),
    ContextGroupExtensionCreatorUID()
{
    /* check code (if not disabled) */
    setCode(codeValue, codingSchemeDesignator, codingSchemeVersion, codeMeaning, check);
}


DSRCodedEntryValue::DSRCodedEntryValue(const DSRCodedEntryValue &codedEntryValue)
  : CodeValue(codedEntryValue.CodeValue),
    CodingSchemeDesignator(codedEntryValue.CodingSchemeDesignator),
    CodingSchemeVersion(codedEntryValue.CodingSchemeVersion),
    CodeMeaning(codedEntryValue.CodeMeaning),
    ContextIdentifier(codedEntryValue.ContextIdentifier),
    ContextUID(codedEntryValue.ContextUID),
    MappingResource(codedEntryValue.MappingResource),
    ContextGroupVersion(codedEntryValue.ContextGroupVersion),
    ContextGroupLocalVersion(codedEntryValue.ContextGroupLocalVersion),
    ContextGroupExtensionCreatorUID(codedEntryValue.ContextGroupExtensionCreatorUID)
{
    /* do not check since this would be unexpected to the user */
}


DSRCodedEntryValue::~DSRCodedEntryValue()
{
}


DSRCodedEntryValue &DSRCodedEntryValue::operator=(const DSRCodedEntryValue &codedEntryValue)
{
    /* do not check since this would be unexpected to the user */
    CodeValue = codedEntryValue.CodeValue;
    CodingSchemeDesignator = codedEntryValue.CodingSchemeDesignator;
    CodingSchemeVersion = codedEntryValue.CodingSchemeVersion;
    CodeMeaning = codedEntryValue.CodeMeaning;
    ContextIdentifier = codedEntryValue.ContextIdentifier;
    ContextUID = codedEntryValue.ContextUID;
    MappingResource = codedEntryValue.MappingResource;
    ContextGroupVersion = codedEntryValue.ContextGroupVersion;
    ContextGroupLocalVersion = codedEntryValue.ContextGroupLocalVersion;
    ContextGroupExtensionCreatorUID = codedEntryValue.ContextGroupExtensionCreatorUID;
    return *this;
}


OFBool DSRCodedEntryValue::operator==(const DSRCodedEntryValue &codedEntryValue) const
{
    /* Code Meaning is not used for comparing the two codes */
    return (CodeValue == codedEntryValue.CodeValue) &&
           (CodingSchemeDesignator == codedEntryValue.CodingSchemeDesignator) &&
           (CodingSchemeVersion == codedEntryValue.CodingSchemeVersion);
}


void DSRCodedEntryValue::clear()
{
    CodeValue.clear();
    CodingSchemeDesignator.clear();
    CodingSchemeVersion.clear();
    CodeMeaning.clear();
    ContextIdentifier.clear();
    ContextUID.clear();
    MappingResource.clear();
    ContextGroupVersion.clear();
    ContextGroupLocalVersion.clear();
    ContextGroupExtensionCreatorUID.clear();
}


OFBool DSRCodedEntryValue::isValid() const
{
    /* tbd: there might be an issue with checking extended characters! */
    return checkCurrentValue().good();
}


OFBool DSRCodedEntryValue::isEmpty() const
{
    return CodeValue.empty() && CodingSchemeDesignator.empty() && CodingSchemeVersion.empty() && CodeMeaning.empty();
}


void DSRCodedEntryValue::print(STD_NAMESPACE ostream &stream,
                               const OFBool printCodeValue,
                               const OFBool printInvalid) const
{
    if (isValid())
    {
        OFString printString;
        stream << "(";
        if (printCodeValue)
        {
            stream << DSRTypes::convertToPrintString(CodeValue, printString) << ",";
            stream << DSRTypes::convertToPrintString(CodingSchemeDesignator, printString);
            if (!CodingSchemeVersion.empty())
                stream << "[" << DSRTypes::convertToPrintString(CodingSchemeVersion, printString) << "]";
        } else
            stream << ",";
        stream << ",\"" << DSRTypes::convertToPrintString(CodeMeaning, printString) << "\")";
    }
    else if (printInvalid)
        stream << "invalid code";
}


OFCondition DSRCodedEntryValue::readItem(DcmItem &dataset,
                                         const char *moduleName)
{
    /* read "Basic Coded Entry Attributes" */
    OFCondition result = DSRTypes::getAndCheckStringValueFromDataset(dataset, DCM_CodeValue, CodeValue, "1", "1", moduleName);
    if (result.good())
        result = DSRTypes::getAndCheckStringValueFromDataset(dataset, DCM_CodingSchemeDesignator, CodingSchemeDesignator, "1", "1", moduleName);
    if (result.good())                                              /* conditional (type 1C) */
        DSRTypes::getAndCheckStringValueFromDataset(dataset, DCM_CodingSchemeVersion, CodingSchemeVersion, "1", "1C", moduleName);
    if (result.good())
        result = DSRTypes::getAndCheckStringValueFromDataset(dataset, DCM_CodeMeaning, CodeMeaning, "1", "1", moduleName);
    /* read "Enhanced Encoding Mode" */
    if (result.good())                                              /* optional or conditional */
    {
        DSRTypes::getAndCheckStringValueFromDataset(dataset, DCM_ContextIdentifier, ContextIdentifier, "1", "3", moduleName);
        if (!ContextIdentifier.empty())
        {
            OFString extensionFlag;
            /* check for a common error: Context Group Identifier includes "CID" prefix */
            if ((ContextIdentifier.find_first_not_of("0123456789") != OFString_npos) || (ContextIdentifier.at(0) == '0'))
                DCMSR_WARN("ContextIdentifier shall be a string of digits without leading zeros");
            DSRTypes::getAndCheckStringValueFromDataset(dataset, DCM_MappingResource, MappingResource, "1", "1" /* was 1C */, moduleName);
            DSRTypes::getAndCheckStringValueFromDataset(dataset, DCM_ContextGroupVersion, ContextGroupVersion, "1", "1" /* was 1C */, moduleName);
            DSRTypes::getAndCheckStringValueFromDataset(dataset, DCM_ContextGroupExtensionFlag, extensionFlag, "1", "3", moduleName);
            if (extensionFlag == "Y")
            {
                DSRTypes::getAndCheckStringValueFromDataset(dataset, DCM_ContextGroupLocalVersion, ContextGroupLocalVersion, "1", "1" /* was 1C */, moduleName);
                DSRTypes::getAndCheckStringValueFromDataset(dataset, DCM_ContextGroupExtensionCreatorUID, ContextGroupExtensionCreatorUID, "1", "1" /* was 1C */, moduleName);
            } else {
                /* ignore Context Group Local Version and/or Context Group Extension Creator UID */
            }
        }
        DSRTypes::getAndCheckStringValueFromDataset(dataset, DCM_ContextUID, ContextUID, "1", "3", moduleName);
    }
    /* tbd: might add check for correct code */
    return result;
}


OFCondition DSRCodedEntryValue::writeItem(DcmItem &dataset) const
{
    /* write "Basic Coded Entry Attributes" */
    OFCondition result = DSRTypes::putStringValueToDataset(dataset, DCM_CodeValue, CodeValue);
    if (result.good())
        result = DSRTypes::putStringValueToDataset(dataset, DCM_CodingSchemeDesignator, CodingSchemeDesignator);
    if (result.good())                                              /* conditional (type 1C) */
        result = DSRTypes::putStringValueToDataset(dataset, DCM_CodingSchemeVersion, CodingSchemeVersion, OFFalse /*allowEmpty*/);
    if (result.good())
        result = DSRTypes::putStringValueToDataset(dataset, DCM_CodeMeaning, CodeMeaning);
    /* write "Enhanced Encoding Mode" */
    if (result.good())                                              /* optional or conditional */
    {
        if (!ContextIdentifier.empty())
        {
            DSRTypes::putStringValueToDataset(dataset, DCM_ContextIdentifier, ContextIdentifier);
            DSRTypes::putStringValueToDataset(dataset, DCM_ContextUID, ContextUID, OFFalse /*allowEmpty*/);
            DSRTypes::putStringValueToDataset(dataset, DCM_MappingResource, MappingResource, OFFalse /*allowEmpty*/);
            DSRTypes::putStringValueToDataset(dataset, DCM_ContextGroupVersion, ContextGroupVersion, OFFalse /*allowEmpty*/);
            if (!ContextGroupLocalVersion.empty() && !ContextGroupExtensionCreatorUID.empty())
            {
                DSRTypes::putStringValueToDataset(dataset, DCM_ContextGroupExtensionFlag, "Y");
                DSRTypes::putStringValueToDataset(dataset, DCM_ContextGroupLocalVersion, ContextGroupLocalVersion);
                DSRTypes::putStringValueToDataset(dataset, DCM_ContextGroupExtensionCreatorUID, ContextGroupExtensionCreatorUID);
            }
        }
        DSRTypes::putStringValueToDataset(dataset, DCM_ContextUID, ContextUID, OFFalse /*allowEmpty*/);
    }
    return result;
}


OFCondition DSRCodedEntryValue::readSequence(DcmItem &dataset,
                                             const DcmTagKey &tagKey,
                                             const OFString &type)
{
    /* read CodeSequence */
    DcmSequenceOfItems dseq(tagKey);
    OFCondition result = DSRTypes::getElementFromDataset(dataset, dseq);
    DSRTypes::checkElementValue(dseq, "1", type, result);
    if (result.good())
    {
        DcmItem *ditem = dseq.getItem(0);
        if (ditem != NULL)
        {
            /* read Code */
            result = readItem(*ditem, DcmTag(tagKey).getTagName());
        } else
            result = SR_EC_InvalidDocumentTree;
    }
    return result;
}


OFCondition DSRCodedEntryValue::writeSequence(DcmItem &dataset,
                                              const DcmTagKey &tagKey) const
{
    OFCondition result = EC_MemoryExhausted;
    /* write CodeSequence */
    DcmSequenceOfItems *dseq = new DcmSequenceOfItems(tagKey);
    if (dseq != NULL)
    {
        /* check for empty value */
        if (isEmpty())
            result = EC_Normal;
        else
        {
            DcmItem *ditem = new DcmItem();
            if (ditem != NULL)
            {
                /* write Code */
                if (isValid())
                    result = writeItem(*ditem);
                if (result.good())
                    dseq->insert(ditem);
                else
                    delete ditem;
            } else
                result = EC_MemoryExhausted;
        }
        if (result.good())
            result= dataset.insert(dseq, OFTrue /*replaceOld*/);
        if (result.bad())
            delete dseq;
    }
    return result;
}


OFCondition DSRCodedEntryValue::readXML(const DSRXMLDocument &doc,
                                        DSRXMLCursor cursor)
{
    OFCondition result = SR_EC_CorruptedXMLStructure;
    if (cursor.valid())
    {
        /* check whether code is stored as XML attributes */
        if (doc.hasAttribute(cursor, "codValue"))
        {
            doc.getStringFromAttribute(cursor, CodeValue, "codValue", OFTrue /*encoding*/);
            doc.getStringFromAttribute(cursor, CodingSchemeDesignator, "codScheme", OFTrue /*encoding*/);
            doc.getStringFromAttribute(cursor, CodingSchemeVersion, "codVersion", OFTrue /*encoding*/, OFFalse /*required*/);
            doc.getStringFromNodeContent(cursor, CodeMeaning, NULL /*name*/, OFTrue /*encoding*/);
        } else {
            /* goto first child node */
            cursor.gotoChild();
            /* iterate over all content items */
            while (cursor.valid())
            {
                /* check for known element tags */
                if (doc.matchNode(cursor, "scheme"))
                {
                    doc.getStringFromNodeContent(doc.getNamedNode(cursor.getChild(), "designator"), CodingSchemeDesignator, NULL /*name*/, OFTrue /*encoding*/, OFFalse /*clearString*/);
                    doc.getStringFromNodeContent(doc.getNamedNode(cursor.getChild(), "version", OFFalse /*required*/), CodingSchemeVersion, NULL /*name*/, OFTrue /*encoding*/, OFFalse /*clearString*/);
                } else {
                    doc.getStringFromNodeContent(cursor, CodeValue, "value", OFTrue /*encoding*/, OFFalse /*clearString*/);
                    doc.getStringFromNodeContent(cursor, CodeMeaning, "meaning", OFTrue /*encoding*/, OFFalse /*clearString*/);
                }
                /* proceed with next node */
                cursor.gotoNext();
            }
        }
        /* check whether code is valid */
        result = isValid() ? EC_Normal : SR_EC_InvalidValue;
    }
    return result;
}


OFCondition DSRCodedEntryValue::writeXML(STD_NAMESPACE ostream &stream,
                                         const size_t flags) const
{
    OFString tmpString;
    if (flags & DSRTypes::XF_codeComponentsAsAttribute)
    {
        stream << " codValue=\"" << DSRTypes::convertToXMLString(CodeValue, tmpString) << "\"";
        stream << " codScheme=\"" << DSRTypes::convertToXMLString(CodingSchemeDesignator, tmpString) << "\"";
        if (!CodingSchemeVersion.empty() || (flags & DSRTypes::XF_writeEmptyTags))
            stream << " codVersion=\"" << DSRTypes::convertToXMLString(CodingSchemeVersion, tmpString) << "\"";
        stream << ">";      // close open bracket from calling routine
        stream << DSRTypes::convertToXMLString(CodeMeaning, tmpString);
    } else {
        DSRTypes::writeStringValueToXML(stream, CodeValue, "value", (flags & DSRTypes::XF_writeEmptyTags) > 0);
        stream << "<scheme>" << OFendl;
        DSRTypes::writeStringValueToXML(stream, CodingSchemeDesignator, "designator", (flags & DSRTypes::XF_writeEmptyTags) > 0);
        DSRTypes::writeStringValueToXML(stream, CodingSchemeVersion, "version", (flags & DSRTypes::XF_writeEmptyTags) > 0);
        stream << "</scheme>" << OFendl;
        DSRTypes::writeStringValueToXML(stream, CodeMeaning, "meaning", (flags & DSRTypes::XF_writeEmptyTags) > 0);
    }
    return EC_Normal;
}


OFCondition DSRCodedEntryValue::renderHTML(STD_NAMESPACE ostream &stream,
                                           const size_t flags,
                                           const OFBool fullCode,
                                           const OFBool valueFirst) const
{
    OFString htmlString;
    if (flags & DSRTypes::HF_useCodeDetailsTooltip)
    {
        /* render code details as a tooltip */
        stream << "<span title=\"(";
        stream << DSRTypes::convertToHTMLString(CodeValue, htmlString, flags) << ", ";
        stream << DSRTypes::convertToHTMLString(CodingSchemeDesignator, htmlString, flags);
        if (!CodingSchemeVersion.empty())
            stream << " [" << DSRTypes::convertToHTMLString(CodingSchemeVersion, htmlString, flags) << "]";
        stream << ", &quot;" << DSRTypes::convertToHTMLString(CodeMeaning, htmlString, flags) << "&quot;)\">";
        /* render value */
        if (valueFirst)
            stream << DSRTypes::convertToHTMLString(CodeValue, htmlString, flags);
        else
            stream << DSRTypes::convertToHTMLString(CodeMeaning, htmlString, flags);
        stream << "</span>";
    } else {
        /* render code in a conventional manner */
        if (valueFirst)
            stream << DSRTypes::convertToHTMLString(CodeValue, htmlString, flags);
        else
            stream << DSRTypes::convertToHTMLString(CodeMeaning, htmlString, flags);
        if (fullCode)
        {
            stream << " (";
            if (!valueFirst)
                stream << DSRTypes::convertToHTMLString(CodeValue, htmlString, flags) << ", ";
            stream << DSRTypes::convertToHTMLString(CodingSchemeDesignator, htmlString, flags);
            if (!CodingSchemeVersion.empty())
                stream << " [" << DSRTypes::convertToHTMLString(CodingSchemeVersion, htmlString, flags) << "]";
            if (valueFirst)
                stream << ", &quot;" << DSRTypes::convertToHTMLString(CodeMeaning, htmlString, flags) << "&quot;";
            stream << ")";
        }
    }
    return EC_Normal;
}


OFCondition DSRCodedEntryValue::getValue(DSRCodedEntryValue &codedEntryValue) const
{
    codedEntryValue = *this;
    return EC_Normal;
}


OFCondition DSRCodedEntryValue::setValue(const DSRCodedEntryValue &codedEntryValue,
                                         const OFBool check)
{
    /* first set "Basic Coded Entry Attributes" */
    OFCondition result = setCode(codedEntryValue.CodeValue,
                                 codedEntryValue.CodingSchemeDesignator,
                                 codedEntryValue.CodingSchemeVersion,
                                 codedEntryValue.CodeMeaning,
                                 check);
    /* then handle "Enhanced Encoding Mode" (if present) */
    if (result.good())
    {
        if (!codedEntryValue.ContextIdentifier.empty())
        {
            /* specify details for a non-private context group */
            result = setEnhancedEncodingMode(codedEntryValue.ContextIdentifier,
                                             codedEntryValue.MappingResource,
                                             codedEntryValue.ContextGroupVersion,
                                             codedEntryValue.ContextUID,
                                             codedEntryValue.ContextGroupLocalVersion,
                                             codedEntryValue.ContextGroupExtensionCreatorUID,
                                             check);
        }
        else if (!codedEntryValue.ContextUID.empty())
        {
            /* specify details for a private context group */
            result = setEnhancedEncodingMode(codedEntryValue.ContextUID,
                                             check);
        }
    }
    return result;
}


OFCondition DSRCodedEntryValue::setCode(const OFString &codeValue,
                                        const OFString &codingSchemeDesignator,
                                        const OFString &codeMeaning,
                                        const OFBool check)
{
    return setCode(codeValue, codingSchemeDesignator, "" /*codingSchemeVersion*/, codeMeaning, check);
}


OFCondition DSRCodedEntryValue::setCode(const OFString &codeValue,
                                        const OFString &codingSchemeDesignator,
                                        const OFString &codingSchemeVersion,
                                        const OFString &codeMeaning,
                                        const OFBool check)
{
    OFCondition result = EC_Normal;
    if (check)
    {
        /* check whether the passed values are valid */
        result = checkCode(codeValue, codingSchemeDesignator, codingSchemeVersion, codeMeaning);
    } else {
        /* make sure that the mandatory values are non-empty */
        if (codeValue.empty() || codingSchemeDesignator.empty() || codeMeaning.empty())
            result = EC_IllegalParameter;
    }
    if (result.good())
    {
        /* copy "Basic Coded Entry Attributes" */
        CodeValue = codeValue;
        CodingSchemeDesignator = codingSchemeDesignator;
        CodingSchemeVersion = codingSchemeVersion;
        CodeMeaning = codeMeaning;
        /* clear attributes from "Enhanced Encoding Mode" */
        removeEnhancedEncodingMode();
    }
    return result;
}


OFBool DSRCodedEntryValue::usesEnhancedEncodingMode() const
{
    /* this is currently a very simple check */
    return !ContextIdentifier.empty() || !ContextUID.empty();
}


void DSRCodedEntryValue::removeEnhancedEncodingMode()
{
    ContextIdentifier.clear();
    ContextUID.clear();
    MappingResource.clear();
    ContextGroupVersion.clear();
    ContextGroupLocalVersion.clear();
    ContextGroupExtensionCreatorUID.clear();
}


OFCondition DSRCodedEntryValue::setEnhancedEncodingMode(const OFString &contextUID,
                                                        const OFBool check)
{
    OFCondition result = EC_Normal;
    /* first, make sure that the mandatory value is non-empty */
    if (contextUID.empty())
        result = EC_IllegalParameter;
    else if (check)
    {
        /* check whether the passed value is valid */
        result = DcmUniqueIdentifier::checkStringValue(contextUID, "1");
    }
    if (result.good())
    {
        ContextUID = contextUID;
        /* clear all other attributes */
        ContextIdentifier.clear();
        MappingResource.clear();
        ContextGroupVersion.clear();
        ContextGroupLocalVersion.clear();
        ContextGroupExtensionCreatorUID.clear();
    }
    return result;
}


OFCondition DSRCodedEntryValue::setEnhancedEncodingMode(const OFString &contextIdentifier,
                                                        const OFString &mappingResource,
                                                        const OFString &contextGroupVersion,
                                                        const OFString &contextUID,
                                                        const OFString &localVersion,
                                                        const OFString &extensionCreatorUID,
                                                        const OFBool check)
{
    OFCondition result = EC_Normal;
    /* first, make sure that the mandatory values are non-empty */
    if (contextIdentifier.empty() || mappingResource.empty() || contextGroupVersion.empty())
        result = EC_IllegalParameter;
    /* both values need to be empty or non-empty */
    else if (localVersion.empty() != extensionCreatorUID.empty())
        result = SR_EC_InvalidValue;
    else if (check)
    {
        /* check whether the passed values are valid */
        result = DcmCodeString::checkStringValue(contextIdentifier, "1");
        if (result.good())
            result = DcmCodeString::checkStringValue(mappingResource, "1");
        if (result.good())
            result = DcmDateTime::checkStringValue(contextGroupVersion, "1");
        if (result.good())
            result = DcmUniqueIdentifier::checkStringValue(contextUID, "1");
        if (result.good())
            result = DcmDateTime::checkStringValue(localVersion, "1");
        if (result.good())
            result = DcmUniqueIdentifier::checkStringValue(extensionCreatorUID, "1");
    }
    if (result.good())
    {
        ContextIdentifier = contextIdentifier;
        MappingResource = mappingResource;
        ContextGroupVersion = contextGroupVersion;
        ContextUID = contextUID;
        ContextGroupLocalVersion = localVersion;
        ContextGroupExtensionCreatorUID = extensionCreatorUID;
    }
    return result;
}


OFCondition DSRCodedEntryValue::checkCode(const OFString &codeValue,
                                          const OFString &codingSchemeDesignator,
                                          const OFString &codingSchemeVersion,
                                          const OFString &codeMeaning) const
{
    OFCondition result = EC_Normal;
    /* first, make sure that the mandatory values are non-empty */
    if (codeValue.empty() || codingSchemeDesignator.empty() || codeMeaning.empty())
        result = SR_EC_InvalidValue;
    /* then, check whether the passed values are valid */
    if (result.good())
        result = DcmShortString::checkStringValue(codeValue, "1");
    if (result.good())
        result = DcmShortString::checkStringValue(codingSchemeDesignator, "1");
    if (result.good())
        result = DcmShortString::checkStringValue(codingSchemeVersion, "1");
    if (result.good())
        result = DcmLongString::checkStringValue(codeMeaning, "1");
    /* tbd: also need to check correctness of the code (requires code dictionary) */
    return result;
}


OFCondition DSRCodedEntryValue::checkCurrentValue() const
{
    return checkCode(CodeValue, CodingSchemeDesignator, CodingSchemeVersion, CodeMeaning);
}
