
// Generated from JavadocParser.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "JavadocParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by JavadocParser.
 */
class  JavadocParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterDocumentation(JavadocParser::DocumentationContext *ctx) = 0;
  virtual void exitDocumentation(JavadocParser::DocumentationContext *ctx) = 0;

  virtual void enterDocumentationContent(JavadocParser::DocumentationContentContext *ctx) = 0;
  virtual void exitDocumentationContent(JavadocParser::DocumentationContentContext *ctx) = 0;

  virtual void enterSkipWhitespace(JavadocParser::SkipWhitespaceContext *ctx) = 0;
  virtual void exitSkipWhitespace(JavadocParser::SkipWhitespaceContext *ctx) = 0;

  virtual void enterDescription(JavadocParser::DescriptionContext *ctx) = 0;
  virtual void exitDescription(JavadocParser::DescriptionContext *ctx) = 0;

  virtual void enterDescriptionLine(JavadocParser::DescriptionLineContext *ctx) = 0;
  virtual void exitDescriptionLine(JavadocParser::DescriptionLineContext *ctx) = 0;

  virtual void enterDescriptionLineStart(JavadocParser::DescriptionLineStartContext *ctx) = 0;
  virtual void exitDescriptionLineStart(JavadocParser::DescriptionLineStartContext *ctx) = 0;

  virtual void enterDescriptionLineNoSpaceNoAt(JavadocParser::DescriptionLineNoSpaceNoAtContext *ctx) = 0;
  virtual void exitDescriptionLineNoSpaceNoAt(JavadocParser::DescriptionLineNoSpaceNoAtContext *ctx) = 0;

  virtual void enterDescriptionLineElement(JavadocParser::DescriptionLineElementContext *ctx) = 0;
  virtual void exitDescriptionLineElement(JavadocParser::DescriptionLineElementContext *ctx) = 0;

  virtual void enterDescriptionLineText(JavadocParser::DescriptionLineTextContext *ctx) = 0;
  virtual void exitDescriptionLineText(JavadocParser::DescriptionLineTextContext *ctx) = 0;

  virtual void enterDescriptionNewline(JavadocParser::DescriptionNewlineContext *ctx) = 0;
  virtual void exitDescriptionNewline(JavadocParser::DescriptionNewlineContext *ctx) = 0;

  virtual void enterTagSection(JavadocParser::TagSectionContext *ctx) = 0;
  virtual void exitTagSection(JavadocParser::TagSectionContext *ctx) = 0;

  virtual void enterBlockTag(JavadocParser::BlockTagContext *ctx) = 0;
  virtual void exitBlockTag(JavadocParser::BlockTagContext *ctx) = 0;

  virtual void enterBlockTagName(JavadocParser::BlockTagNameContext *ctx) = 0;
  virtual void exitBlockTagName(JavadocParser::BlockTagNameContext *ctx) = 0;

  virtual void enterBlockTagContent(JavadocParser::BlockTagContentContext *ctx) = 0;
  virtual void exitBlockTagContent(JavadocParser::BlockTagContentContext *ctx) = 0;

  virtual void enterBlockTagText(JavadocParser::BlockTagTextContext *ctx) = 0;
  virtual void exitBlockTagText(JavadocParser::BlockTagTextContext *ctx) = 0;

  virtual void enterBlockTagTextElement(JavadocParser::BlockTagTextElementContext *ctx) = 0;
  virtual void exitBlockTagTextElement(JavadocParser::BlockTagTextElementContext *ctx) = 0;

  virtual void enterInlineTag(JavadocParser::InlineTagContext *ctx) = 0;
  virtual void exitInlineTag(JavadocParser::InlineTagContext *ctx) = 0;

  virtual void enterInlineTagName(JavadocParser::InlineTagNameContext *ctx) = 0;
  virtual void exitInlineTagName(JavadocParser::InlineTagNameContext *ctx) = 0;

  virtual void enterInlineTagContent(JavadocParser::InlineTagContentContext *ctx) = 0;
  virtual void exitInlineTagContent(JavadocParser::InlineTagContentContext *ctx) = 0;

  virtual void enterBraceExpression(JavadocParser::BraceExpressionContext *ctx) = 0;
  virtual void exitBraceExpression(JavadocParser::BraceExpressionContext *ctx) = 0;

  virtual void enterBraceContent(JavadocParser::BraceContentContext *ctx) = 0;
  virtual void exitBraceContent(JavadocParser::BraceContentContext *ctx) = 0;

  virtual void enterBraceText(JavadocParser::BraceTextContext *ctx) = 0;
  virtual void exitBraceText(JavadocParser::BraceTextContext *ctx) = 0;


};

