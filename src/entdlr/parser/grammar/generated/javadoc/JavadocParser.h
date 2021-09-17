
// Generated from JavadocParser.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  JavadocParser : public antlr4::Parser {
public:
  enum {
    NAME = 1, NEWLINE = 2, SPACE = 3, TEXT_CONTENT = 4, AT = 5, STAR = 6, 
    SLASH = 7, JAVADOC_START = 8, JAVADOC_END = 9, INLINE_TAG_START = 10, 
    BRACE_OPEN = 11, BRACE_CLOSE = 12
  };

  enum {
    RuleDocumentation = 0, RuleDocumentationContent = 1, RuleSkipWhitespace = 2, 
    RuleDescription = 3, RuleDescriptionLine = 4, RuleDescriptionLineStart = 5, 
    RuleDescriptionLineNoSpaceNoAt = 6, RuleDescriptionLineElement = 7, 
    RuleDescriptionLineText = 8, RuleDescriptionNewline = 9, RuleTagSection = 10, 
    RuleBlockTag = 11, RuleBlockTagName = 12, RuleBlockTagContent = 13, 
    RuleBlockTagText = 14, RuleBlockTagTextElement = 15, RuleInlineTag = 16, 
    RuleInlineTagName = 17, RuleInlineTagContent = 18, RuleBraceExpression = 19, 
    RuleBraceContent = 20, RuleBraceText = 21
  };

  explicit JavadocParser(antlr4::TokenStream *input);
  ~JavadocParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class DocumentationContext;
  class DocumentationContentContext;
  class SkipWhitespaceContext;
  class DescriptionContext;
  class DescriptionLineContext;
  class DescriptionLineStartContext;
  class DescriptionLineNoSpaceNoAtContext;
  class DescriptionLineElementContext;
  class DescriptionLineTextContext;
  class DescriptionNewlineContext;
  class TagSectionContext;
  class BlockTagContext;
  class BlockTagNameContext;
  class BlockTagContentContext;
  class BlockTagTextContext;
  class BlockTagTextElementContext;
  class InlineTagContext;
  class InlineTagNameContext;
  class InlineTagContentContext;
  class BraceExpressionContext;
  class BraceContentContext;
  class BraceTextContext; 

  class  DocumentationContext : public antlr4::ParserRuleContext {
  public:
    DocumentationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    antlr4::tree::TerminalNode *JAVADOC_START();
    DocumentationContentContext *documentationContent();
    antlr4::tree::TerminalNode *JAVADOC_END();
    std::vector<SkipWhitespaceContext *> skipWhitespace();
    SkipWhitespaceContext* skipWhitespace(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DocumentationContext* documentation();

  class  DocumentationContentContext : public antlr4::ParserRuleContext {
  public:
    DocumentationContentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DescriptionContext *description();
    std::vector<SkipWhitespaceContext *> skipWhitespace();
    SkipWhitespaceContext* skipWhitespace(size_t i);
    TagSectionContext *tagSection();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DocumentationContentContext* documentationContent();

  class  SkipWhitespaceContext : public antlr4::ParserRuleContext {
  public:
    SkipWhitespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SkipWhitespaceContext* skipWhitespace();

  class  DescriptionContext : public antlr4::ParserRuleContext {
  public:
    DescriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DescriptionLineContext *> descriptionLine();
    DescriptionLineContext* descriptionLine(size_t i);
    std::vector<DescriptionNewlineContext *> descriptionNewline();
    DescriptionNewlineContext* descriptionNewline(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DescriptionContext* description();

  class  DescriptionLineContext : public antlr4::ParserRuleContext {
  public:
    DescriptionLineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DescriptionLineStartContext *descriptionLineStart();
    std::vector<DescriptionLineElementContext *> descriptionLineElement();
    DescriptionLineElementContext* descriptionLineElement(size_t i);
    InlineTagContext *inlineTag();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DescriptionLineContext* descriptionLine();

  class  DescriptionLineStartContext : public antlr4::ParserRuleContext {
  public:
    DescriptionLineStartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SPACE();
    antlr4::tree::TerminalNode* SPACE(size_t i);
    std::vector<DescriptionLineNoSpaceNoAtContext *> descriptionLineNoSpaceNoAt();
    DescriptionLineNoSpaceNoAtContext* descriptionLineNoSpaceNoAt(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AT();
    antlr4::tree::TerminalNode* AT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DescriptionLineStartContext* descriptionLineStart();

  class  DescriptionLineNoSpaceNoAtContext : public antlr4::ParserRuleContext {
  public:
    DescriptionLineNoSpaceNoAtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TEXT_CONTENT();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *SLASH();
    antlr4::tree::TerminalNode *BRACE_OPEN();
    antlr4::tree::TerminalNode *BRACE_CLOSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DescriptionLineNoSpaceNoAtContext* descriptionLineNoSpaceNoAt();

  class  DescriptionLineElementContext : public antlr4::ParserRuleContext {
  public:
    DescriptionLineElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InlineTagContext *inlineTag();
    DescriptionLineTextContext *descriptionLineText();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DescriptionLineElementContext* descriptionLineElement();

  class  DescriptionLineTextContext : public antlr4::ParserRuleContext {
  public:
    DescriptionLineTextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DescriptionLineNoSpaceNoAtContext *> descriptionLineNoSpaceNoAt();
    DescriptionLineNoSpaceNoAtContext* descriptionLineNoSpaceNoAt(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SPACE();
    antlr4::tree::TerminalNode* SPACE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AT();
    antlr4::tree::TerminalNode* AT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DescriptionLineTextContext* descriptionLineText();

  class  DescriptionNewlineContext : public antlr4::ParserRuleContext {
  public:
    DescriptionNewlineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEWLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DescriptionNewlineContext* descriptionNewline();

  class  TagSectionContext : public antlr4::ParserRuleContext {
  public:
    TagSectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BlockTagContext *> blockTag();
    BlockTagContext* blockTag(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TagSectionContext* tagSection();

  class  BlockTagContext : public antlr4::ParserRuleContext {
  public:
    BlockTagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    BlockTagNameContext *blockTagName();
    std::vector<antlr4::tree::TerminalNode *> SPACE();
    antlr4::tree::TerminalNode* SPACE(size_t i);
    std::vector<BlockTagContentContext *> blockTagContent();
    BlockTagContentContext* blockTagContent(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockTagContext* blockTag();

  class  BlockTagNameContext : public antlr4::ParserRuleContext {
  public:
    BlockTagNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockTagNameContext* blockTagName();

  class  BlockTagContentContext : public antlr4::ParserRuleContext {
  public:
    BlockTagContentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockTagTextContext *blockTagText();
    InlineTagContext *inlineTag();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockTagContentContext* blockTagContent();

  class  BlockTagTextContext : public antlr4::ParserRuleContext {
  public:
    BlockTagTextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BlockTagTextElementContext *> blockTagTextElement();
    BlockTagTextElementContext* blockTagTextElement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockTagTextContext* blockTagText();

  class  BlockTagTextElementContext : public antlr4::ParserRuleContext {
  public:
    BlockTagTextElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TEXT_CONTENT();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *SLASH();
    antlr4::tree::TerminalNode *BRACE_OPEN();
    antlr4::tree::TerminalNode *BRACE_CLOSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockTagTextElementContext* blockTagTextElement();

  class  InlineTagContext : public antlr4::ParserRuleContext {
  public:
    InlineTagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INLINE_TAG_START();
    InlineTagNameContext *inlineTagName();
    antlr4::tree::TerminalNode *BRACE_CLOSE();
    std::vector<antlr4::tree::TerminalNode *> SPACE();
    antlr4::tree::TerminalNode* SPACE(size_t i);
    InlineTagContentContext *inlineTagContent();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InlineTagContext* inlineTag();

  class  InlineTagNameContext : public antlr4::ParserRuleContext {
  public:
    InlineTagNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InlineTagNameContext* inlineTagName();

  class  InlineTagContentContext : public antlr4::ParserRuleContext {
  public:
    InlineTagContentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BraceContentContext *> braceContent();
    BraceContentContext* braceContent(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InlineTagContentContext* inlineTagContent();

  class  BraceExpressionContext : public antlr4::ParserRuleContext {
  public:
    BraceExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BRACE_OPEN();
    antlr4::tree::TerminalNode *BRACE_CLOSE();
    std::vector<BraceContentContext *> braceContent();
    BraceContentContext* braceContent(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BraceExpressionContext* braceExpression();

  class  BraceContentContext : public antlr4::ParserRuleContext {
  public:
    BraceContentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BraceExpressionContext *braceExpression();
    std::vector<BraceTextContext *> braceText();
    BraceTextContext* braceText(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BraceContentContext* braceContent();

  class  BraceTextContext : public antlr4::ParserRuleContext {
  public:
    BraceTextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TEXT_CONTENT();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *SLASH();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BraceTextContext* braceText();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

