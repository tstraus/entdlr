
// Generated from JavadocParser.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "JavadocParserListener.h"


/**
 * This class provides an empty implementation of JavadocParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  JavadocParserBaseListener : public JavadocParserListener {
public:

  virtual void enterDocumentation(JavadocParser::DocumentationContext * /*ctx*/) override { }
  virtual void exitDocumentation(JavadocParser::DocumentationContext * /*ctx*/) override { }

  virtual void enterDocumentationContent(JavadocParser::DocumentationContentContext * /*ctx*/) override { }
  virtual void exitDocumentationContent(JavadocParser::DocumentationContentContext * /*ctx*/) override { }

  virtual void enterSkipWhitespace(JavadocParser::SkipWhitespaceContext * /*ctx*/) override { }
  virtual void exitSkipWhitespace(JavadocParser::SkipWhitespaceContext * /*ctx*/) override { }

  virtual void enterDescription(JavadocParser::DescriptionContext * /*ctx*/) override { }
  virtual void exitDescription(JavadocParser::DescriptionContext * /*ctx*/) override { }

  virtual void enterDescriptionLine(JavadocParser::DescriptionLineContext * /*ctx*/) override { }
  virtual void exitDescriptionLine(JavadocParser::DescriptionLineContext * /*ctx*/) override { }

  virtual void enterDescriptionLineStart(JavadocParser::DescriptionLineStartContext * /*ctx*/) override { }
  virtual void exitDescriptionLineStart(JavadocParser::DescriptionLineStartContext * /*ctx*/) override { }

  virtual void enterDescriptionLineNoSpaceNoAt(JavadocParser::DescriptionLineNoSpaceNoAtContext * /*ctx*/) override { }
  virtual void exitDescriptionLineNoSpaceNoAt(JavadocParser::DescriptionLineNoSpaceNoAtContext * /*ctx*/) override { }

  virtual void enterDescriptionLineElement(JavadocParser::DescriptionLineElementContext * /*ctx*/) override { }
  virtual void exitDescriptionLineElement(JavadocParser::DescriptionLineElementContext * /*ctx*/) override { }

  virtual void enterDescriptionLineText(JavadocParser::DescriptionLineTextContext * /*ctx*/) override { }
  virtual void exitDescriptionLineText(JavadocParser::DescriptionLineTextContext * /*ctx*/) override { }

  virtual void enterDescriptionNewline(JavadocParser::DescriptionNewlineContext * /*ctx*/) override { }
  virtual void exitDescriptionNewline(JavadocParser::DescriptionNewlineContext * /*ctx*/) override { }

  virtual void enterTagSection(JavadocParser::TagSectionContext * /*ctx*/) override { }
  virtual void exitTagSection(JavadocParser::TagSectionContext * /*ctx*/) override { }

  virtual void enterBlockTag(JavadocParser::BlockTagContext * /*ctx*/) override { }
  virtual void exitBlockTag(JavadocParser::BlockTagContext * /*ctx*/) override { }

  virtual void enterBlockTagName(JavadocParser::BlockTagNameContext * /*ctx*/) override { }
  virtual void exitBlockTagName(JavadocParser::BlockTagNameContext * /*ctx*/) override { }

  virtual void enterBlockTagContent(JavadocParser::BlockTagContentContext * /*ctx*/) override { }
  virtual void exitBlockTagContent(JavadocParser::BlockTagContentContext * /*ctx*/) override { }

  virtual void enterBlockTagText(JavadocParser::BlockTagTextContext * /*ctx*/) override { }
  virtual void exitBlockTagText(JavadocParser::BlockTagTextContext * /*ctx*/) override { }

  virtual void enterBlockTagTextElement(JavadocParser::BlockTagTextElementContext * /*ctx*/) override { }
  virtual void exitBlockTagTextElement(JavadocParser::BlockTagTextElementContext * /*ctx*/) override { }

  virtual void enterInlineTag(JavadocParser::InlineTagContext * /*ctx*/) override { }
  virtual void exitInlineTag(JavadocParser::InlineTagContext * /*ctx*/) override { }

  virtual void enterInlineTagName(JavadocParser::InlineTagNameContext * /*ctx*/) override { }
  virtual void exitInlineTagName(JavadocParser::InlineTagNameContext * /*ctx*/) override { }

  virtual void enterInlineTagContent(JavadocParser::InlineTagContentContext * /*ctx*/) override { }
  virtual void exitInlineTagContent(JavadocParser::InlineTagContentContext * /*ctx*/) override { }

  virtual void enterBraceExpression(JavadocParser::BraceExpressionContext * /*ctx*/) override { }
  virtual void exitBraceExpression(JavadocParser::BraceExpressionContext * /*ctx*/) override { }

  virtual void enterBraceContent(JavadocParser::BraceContentContext * /*ctx*/) override { }
  virtual void exitBraceContent(JavadocParser::BraceContentContext * /*ctx*/) override { }

  virtual void enterBraceText(JavadocParser::BraceTextContext * /*ctx*/) override { }
  virtual void exitBraceText(JavadocParser::BraceTextContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

