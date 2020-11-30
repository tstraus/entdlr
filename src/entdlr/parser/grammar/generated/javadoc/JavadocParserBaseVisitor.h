
// Generated from JavadocParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "JavadocParserVisitor.h"


/**
 * This class provides an empty implementation of JavadocParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  JavadocParserBaseVisitor : public JavadocParserVisitor {
public:

  virtual antlrcpp::Any visitDocumentation(JavadocParser::DocumentationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDocumentationContent(JavadocParser::DocumentationContentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSkipWhitespace(JavadocParser::SkipWhitespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDescription(JavadocParser::DescriptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDescriptionLine(JavadocParser::DescriptionLineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDescriptionLineStart(JavadocParser::DescriptionLineStartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDescriptionLineNoSpaceNoAt(JavadocParser::DescriptionLineNoSpaceNoAtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDescriptionLineElement(JavadocParser::DescriptionLineElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDescriptionLineText(JavadocParser::DescriptionLineTextContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDescriptionNewline(JavadocParser::DescriptionNewlineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTagSection(JavadocParser::TagSectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockTag(JavadocParser::BlockTagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockTagName(JavadocParser::BlockTagNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockTagContent(JavadocParser::BlockTagContentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockTagText(JavadocParser::BlockTagTextContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockTagTextElement(JavadocParser::BlockTagTextElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInlineTag(JavadocParser::InlineTagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInlineTagName(JavadocParser::InlineTagNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInlineTagContent(JavadocParser::InlineTagContentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBraceExpression(JavadocParser::BraceExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBraceContent(JavadocParser::BraceContentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBraceText(JavadocParser::BraceTextContext *ctx) override {
    return visitChildren(ctx);
  }


};

