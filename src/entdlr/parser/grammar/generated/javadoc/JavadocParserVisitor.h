
// Generated from JavadocParser.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "JavadocParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by JavadocParser.
 */
class  JavadocParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by JavadocParser.
   */
    virtual antlrcpp::Any visitDocumentation(JavadocParser::DocumentationContext *context) = 0;

    virtual antlrcpp::Any visitDocumentationContent(JavadocParser::DocumentationContentContext *context) = 0;

    virtual antlrcpp::Any visitSkipWhitespace(JavadocParser::SkipWhitespaceContext *context) = 0;

    virtual antlrcpp::Any visitDescription(JavadocParser::DescriptionContext *context) = 0;

    virtual antlrcpp::Any visitDescriptionLine(JavadocParser::DescriptionLineContext *context) = 0;

    virtual antlrcpp::Any visitDescriptionLineStart(JavadocParser::DescriptionLineStartContext *context) = 0;

    virtual antlrcpp::Any visitDescriptionLineNoSpaceNoAt(JavadocParser::DescriptionLineNoSpaceNoAtContext *context) = 0;

    virtual antlrcpp::Any visitDescriptionLineElement(JavadocParser::DescriptionLineElementContext *context) = 0;

    virtual antlrcpp::Any visitDescriptionLineText(JavadocParser::DescriptionLineTextContext *context) = 0;

    virtual antlrcpp::Any visitDescriptionNewline(JavadocParser::DescriptionNewlineContext *context) = 0;

    virtual antlrcpp::Any visitTagSection(JavadocParser::TagSectionContext *context) = 0;

    virtual antlrcpp::Any visitBlockTag(JavadocParser::BlockTagContext *context) = 0;

    virtual antlrcpp::Any visitBlockTagName(JavadocParser::BlockTagNameContext *context) = 0;

    virtual antlrcpp::Any visitBlockTagContent(JavadocParser::BlockTagContentContext *context) = 0;

    virtual antlrcpp::Any visitBlockTagText(JavadocParser::BlockTagTextContext *context) = 0;

    virtual antlrcpp::Any visitBlockTagTextElement(JavadocParser::BlockTagTextElementContext *context) = 0;

    virtual antlrcpp::Any visitInlineTag(JavadocParser::InlineTagContext *context) = 0;

    virtual antlrcpp::Any visitInlineTagName(JavadocParser::InlineTagNameContext *context) = 0;

    virtual antlrcpp::Any visitInlineTagContent(JavadocParser::InlineTagContentContext *context) = 0;

    virtual antlrcpp::Any visitBraceExpression(JavadocParser::BraceExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBraceContent(JavadocParser::BraceContentContext *context) = 0;

    virtual antlrcpp::Any visitBraceText(JavadocParser::BraceTextContext *context) = 0;


};

