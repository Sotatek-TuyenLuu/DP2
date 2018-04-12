/*
 *
 *  Copyright (C) 2000-2010, OFFIS e.V.
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
 *    classes: DSRCodeTreeNode
 *
 */


#include "dcmtk/config/osconfig.h"    /* make sure OS specific configuration is included first */

#include "dcmtk/dcmsr/dsrtypes.h"
#include "dcmtk/dcmsr/dsrcodtn.h"
#include "dcmtk/dcmsr/dsrxmld.h"


DSRCodeTreeNode::DSRCodeTreeNode(const E_RelationshipType relationshipType)
 : DSRDocumentTreeNode(relationshipType, VT_Code),
   DSRCodedEntryValue()
{
}


DSRCodeTreeNode::~DSRCodeTreeNode()
{
}


void DSRCodeTreeNode::clear()
{
    DSRDocumentTreeNode::clear();
    DSRCodedEntryValue::clear();
}


OFBool DSRCodeTreeNode::isValid() const
{
    /* ConceptNameCodeSequence required */
    return DSRDocumentTreeNode::isValid() && DSRCodedEntryValue::isValid() && getConceptName().isValid();
}


OFCondition DSRCodeTreeNode::print(STD_NAMESPACE ostream &stream,
                                   const size_t flags) const
{
    OFCondition result = DSRDocumentTreeNode::print(stream, flags);
    if (result.good())
    {
        DCMSR_PRINT_ANSI_ESCAPE_CODE(DCMSR_ANSI_ESCAPE_CODE_DELIMITER)
        stream << "=";
        DCMSR_PRINT_ANSI_ESCAPE_CODE(DCMSR_ANSI_ESCAPE_CODE_ITEM_VALUE)
        DSRCodedEntryValue::print(stream, OFTrue /*printCodeValue*/, OFTrue /*printInvalid*/);
    }
    return result;
}


OFCondition DSRCodeTreeNode::readXMLContentItem(const DSRXMLDocument &doc,
                                                DSRXMLCursor cursor)
{
    OFCondition result = SR_EC_CorruptedXMLStructure;
    if (cursor.valid())
    {
        /* goto "value" element */
        const DSRXMLCursor childCursor = doc.getNamedNode(cursor.getChild(), "value");
        if (childCursor.valid())
        {
            /* check whether code is stored as XML elements or attributes */
            if (doc.hasAttribute(childCursor, "codValue"))
                result = DSRCodedEntryValue::readXML(doc, childCursor);
            else
                result = DSRCodedEntryValue::readXML(doc, cursor);
        }
    }
    return result;
}


OFCondition DSRCodeTreeNode::writeXML(STD_NAMESPACE ostream &stream,
                                      const size_t flags) const
{
    OFCondition result = EC_Normal;
    writeXMLItemStart(stream, flags);
    result = DSRDocumentTreeNode::writeXML(stream, flags);
    if (flags & DSRTypes::XF_codeComponentsAsAttribute)
    {
        stream << "<value";     // bracket ">" is closed in next the writeXML() routine
        DSRCodedEntryValue::writeXML(stream, flags);
        stream << "</value>" << OFendl;
    } else
        DSRCodedEntryValue::writeXML(stream, flags);
    writeXMLItemEnd(stream, flags);
    return result;
}


OFCondition DSRCodeTreeNode::readContentItem(DcmItem &dataset)
{
    /* read ConceptCodeSequence */
    return DSRCodedEntryValue::readSequence(dataset, DCM_ConceptCodeSequence, "1" /*type*/);
}


OFCondition DSRCodeTreeNode::writeContentItem(DcmItem &dataset) const
{
    /* write ConceptCodeSequence */
    return DSRCodedEntryValue::writeSequence(dataset, DCM_ConceptCodeSequence);
}


OFCondition DSRCodeTreeNode::renderHTMLContentItem(STD_NAMESPACE ostream &docStream,
                                                   STD_NAMESPACE ostream & /*annexStream*/,
                                                   const size_t /*nestingLevel*/,
                                                   size_t & /*annexNumber*/,
                                                   const size_t flags) const
{
    /* render ConceptName */
    OFCondition result = renderHTMLConceptName(docStream, flags);
    /* render Code */
    if (result.good())
    {
        const OFBool fullCode = (flags & DSRTypes::HF_renderInlineCodes) || (flags & DSRTypes::HF_renderItemsSeparately);
        if (!fullCode || (flags & DSRTypes::HF_useCodeDetailsTooltip))
        {
            if (flags & DSRTypes::HF_XHTML11Compatibility)
                docStream << "<span class=\"code\">";
            else if (flags & DSRTypes::HF_HTML32Compatibility)
                docStream << "<u>";
            else /* HTML 4.01 */
                docStream << "<span class=\"under\">";
        }
        result = DSRCodedEntryValue::renderHTML(docStream, flags, fullCode);
        if (!fullCode || (flags & DSRTypes::HF_useCodeDetailsTooltip))
        {
            if (flags & DSRTypes::HF_HTML32Compatibility)
                docStream << "</u>";
            else
                docStream << "</span>";
        }
        docStream << OFendl;
    }
    return result;
}
