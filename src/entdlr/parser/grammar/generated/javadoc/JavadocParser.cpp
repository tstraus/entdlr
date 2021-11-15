
// Generated from JavadocParser.g4 by ANTLR 4.9.3


#include "JavadocParserListener.h"
#include "JavadocParserVisitor.h"

#include "JavadocParser.h"


using namespace antlrcpp;
using namespace antlr4;

JavadocParser::JavadocParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

JavadocParser::~JavadocParser() {
  delete _interpreter;
}

std::string JavadocParser::getGrammarFileName() const {
  return "JavadocParser.g4";
}

const std::vector<std::string>& JavadocParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& JavadocParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- DocumentationContext ------------------------------------------------------------------

JavadocParser::DocumentationContext::DocumentationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavadocParser::DocumentationContext::EOF() {
  return getToken(JavadocParser::EOF, 0);
}

tree::TerminalNode* JavadocParser::DocumentationContext::JAVADOC_START() {
  return getToken(JavadocParser::JAVADOC_START, 0);
}

JavadocParser::DocumentationContentContext* JavadocParser::DocumentationContext::documentationContent() {
  return getRuleContext<JavadocParser::DocumentationContentContext>(0);
}

tree::TerminalNode* JavadocParser::DocumentationContext::JAVADOC_END() {
  return getToken(JavadocParser::JAVADOC_END, 0);
}

std::vector<JavadocParser::SkipWhitespaceContext *> JavadocParser::DocumentationContext::skipWhitespace() {
  return getRuleContexts<JavadocParser::SkipWhitespaceContext>();
}

JavadocParser::SkipWhitespaceContext* JavadocParser::DocumentationContext::skipWhitespace(size_t i) {
  return getRuleContext<JavadocParser::SkipWhitespaceContext>(i);
}


size_t JavadocParser::DocumentationContext::getRuleIndex() const {
  return JavadocParser::RuleDocumentation;
}

void JavadocParser::DocumentationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDocumentation(this);
}

void JavadocParser::DocumentationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDocumentation(this);
}


antlrcpp::Any JavadocParser::DocumentationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavadocParserVisitor*>(visitor))
    return parserVisitor->visitDocumentation(this);
  else
    return visitor->visitChildren(this);
}

JavadocParser::DocumentationContext* JavadocParser::documentation() {
  DocumentationContext *_localctx = _tracker.createInstance<DocumentationContext>(_ctx, getState());
  enterRule(_localctx, 0, JavadocParser::RuleDocumentation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(65);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavadocParser::EOF: {
        enterOuterAlt(_localctx, 1);
        setState(44);
        match(JavadocParser::EOF);
        break;
      }

      case JavadocParser::JAVADOC_START: {
        enterOuterAlt(_localctx, 2);
        setState(45);
        match(JavadocParser::JAVADOC_START);
        setState(49);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(46);
            skipWhitespace(); 
          }
          setState(51);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
        }
        setState(52);
        documentationContent();
        setState(53);
        match(JavadocParser::JAVADOC_END);
        setState(54);
        match(JavadocParser::EOF);
        break;
      }

      case JavadocParser::NAME:
      case JavadocParser::NEWLINE:
      case JavadocParser::SPACE:
      case JavadocParser::TEXT_CONTENT:
      case JavadocParser::AT:
      case JavadocParser::STAR:
      case JavadocParser::SLASH:
      case JavadocParser::INLINE_TAG_START:
      case JavadocParser::BRACE_OPEN:
      case JavadocParser::BRACE_CLOSE: {
        enterOuterAlt(_localctx, 3);
        setState(59);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(56);
            skipWhitespace(); 
          }
          setState(61);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
        }
        setState(62);
        documentationContent();
        setState(63);
        match(JavadocParser::EOF);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DocumentationContentContext ------------------------------------------------------------------

JavadocParser::DocumentationContentContext::DocumentationContentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavadocParser::DescriptionContext* JavadocParser::DocumentationContentContext::description() {
  return getRuleContext<JavadocParser::DescriptionContext>(0);
}

std::vector<JavadocParser::SkipWhitespaceContext *> JavadocParser::DocumentationContentContext::skipWhitespace() {
  return getRuleContexts<JavadocParser::SkipWhitespaceContext>();
}

JavadocParser::SkipWhitespaceContext* JavadocParser::DocumentationContentContext::skipWhitespace(size_t i) {
  return getRuleContext<JavadocParser::SkipWhitespaceContext>(i);
}

JavadocParser::TagSectionContext* JavadocParser::DocumentationContentContext::tagSection() {
  return getRuleContext<JavadocParser::TagSectionContext>(0);
}

std::vector<tree::TerminalNode *> JavadocParser::DocumentationContentContext::NEWLINE() {
  return getTokens(JavadocParser::NEWLINE);
}

tree::TerminalNode* JavadocParser::DocumentationContentContext::NEWLINE(size_t i) {
  return getToken(JavadocParser::NEWLINE, i);
}


size_t JavadocParser::DocumentationContentContext::getRuleIndex() const {
  return JavadocParser::RuleDocumentationContent;
}

void JavadocParser::DocumentationContentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDocumentationContent(this);
}

void JavadocParser::DocumentationContentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDocumentationContent(this);
}


antlrcpp::Any JavadocParser::DocumentationContentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavadocParserVisitor*>(visitor))
    return parserVisitor->visitDocumentationContent(this);
  else
    return visitor->visitChildren(this);
}

JavadocParser::DocumentationContentContext* JavadocParser::documentationContent() {
  DocumentationContentContext *_localctx = _tracker.createInstance<DocumentationContentContext>(_ctx, getState());
  enterRule(_localctx, 2, JavadocParser::RuleDocumentationContent);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(95);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(67);
      description();
      setState(71);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == JavadocParser::NEWLINE

      || _la == JavadocParser::SPACE) {
        setState(68);
        skipWhitespace();
        setState(73);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(77);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(74);
          skipWhitespace(); 
        }
        setState(79);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
      }
      setState(80);
      tagSection();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(81);
      description();
      setState(83); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(82);
                match(JavadocParser::NEWLINE);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(85); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(90);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(87);
          skipWhitespace(); 
        }
        setState(92);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
      }
      setState(93);
      tagSection();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SkipWhitespaceContext ------------------------------------------------------------------

JavadocParser::SkipWhitespaceContext::SkipWhitespaceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavadocParser::SkipWhitespaceContext::SPACE() {
  return getToken(JavadocParser::SPACE, 0);
}

tree::TerminalNode* JavadocParser::SkipWhitespaceContext::NEWLINE() {
  return getToken(JavadocParser::NEWLINE, 0);
}


size_t JavadocParser::SkipWhitespaceContext::getRuleIndex() const {
  return JavadocParser::RuleSkipWhitespace;
}

void JavadocParser::SkipWhitespaceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSkipWhitespace(this);
}

void JavadocParser::SkipWhitespaceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSkipWhitespace(this);
}


antlrcpp::Any JavadocParser::SkipWhitespaceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavadocParserVisitor*>(visitor))
    return parserVisitor->visitSkipWhitespace(this);
  else
    return visitor->visitChildren(this);
}

JavadocParser::SkipWhitespaceContext* JavadocParser::skipWhitespace() {
  SkipWhitespaceContext *_localctx = _tracker.createInstance<SkipWhitespaceContext>(_ctx, getState());
  enterRule(_localctx, 4, JavadocParser::RuleSkipWhitespace);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    _la = _input->LA(1);
    if (!(_la == JavadocParser::NEWLINE

    || _la == JavadocParser::SPACE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DescriptionContext ------------------------------------------------------------------

JavadocParser::DescriptionContext::DescriptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavadocParser::DescriptionLineContext *> JavadocParser::DescriptionContext::descriptionLine() {
  return getRuleContexts<JavadocParser::DescriptionLineContext>();
}

JavadocParser::DescriptionLineContext* JavadocParser::DescriptionContext::descriptionLine(size_t i) {
  return getRuleContext<JavadocParser::DescriptionLineContext>(i);
}

std::vector<JavadocParser::DescriptionNewlineContext *> JavadocParser::DescriptionContext::descriptionNewline() {
  return getRuleContexts<JavadocParser::DescriptionNewlineContext>();
}

JavadocParser::DescriptionNewlineContext* JavadocParser::DescriptionContext::descriptionNewline(size_t i) {
  return getRuleContext<JavadocParser::DescriptionNewlineContext>(i);
}


size_t JavadocParser::DescriptionContext::getRuleIndex() const {
  return JavadocParser::RuleDescription;
}

void JavadocParser::DescriptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDescription(this);
}

void JavadocParser::DescriptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDescription(this);
}


antlrcpp::Any JavadocParser::DescriptionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavadocParserVisitor*>(visitor))
    return parserVisitor->visitDescription(this);
  else
    return visitor->visitChildren(this);
}

JavadocParser::DescriptionContext* JavadocParser::description() {
  DescriptionContext *_localctx = _tracker.createInstance<DescriptionContext>(_ctx, getState());
  enterRule(_localctx, 6, JavadocParser::RuleDescription);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(99);
    descriptionLine();
    setState(109);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(101); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(100);
          descriptionNewline();
          setState(103); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == JavadocParser::NEWLINE);
        setState(105);
        descriptionLine(); 
      }
      setState(111);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DescriptionLineContext ------------------------------------------------------------------

JavadocParser::DescriptionLineContext::DescriptionLineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavadocParser::DescriptionLineStartContext* JavadocParser::DescriptionLineContext::descriptionLineStart() {
  return getRuleContext<JavadocParser::DescriptionLineStartContext>(0);
}

std::vector<JavadocParser::DescriptionLineElementContext *> JavadocParser::DescriptionLineContext::descriptionLineElement() {
  return getRuleContexts<JavadocParser::DescriptionLineElementContext>();
}

JavadocParser::DescriptionLineElementContext* JavadocParser::DescriptionLineContext::descriptionLineElement(size_t i) {
  return getRuleContext<JavadocParser::DescriptionLineElementContext>(i);
}

JavadocParser::InlineTagContext* JavadocParser::DescriptionLineContext::inlineTag() {
  return getRuleContext<JavadocParser::InlineTagContext>(0);
}


size_t JavadocParser::DescriptionLineContext::getRuleIndex() const {
  return JavadocParser::RuleDescriptionLine;
}

void JavadocParser::DescriptionLineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDescriptionLine(this);
}

void JavadocParser::DescriptionLineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDescriptionLine(this);
}


antlrcpp::Any JavadocParser::DescriptionLineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavadocParserVisitor*>(visitor))
    return parserVisitor->visitDescriptionLine(this);
  else
    return visitor->visitChildren(this);
}

JavadocParser::DescriptionLineContext* JavadocParser::descriptionLine() {
  DescriptionLineContext *_localctx = _tracker.createInstance<DescriptionLineContext>(_ctx, getState());
  enterRule(_localctx, 8, JavadocParser::RuleDescriptionLine);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(126);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavadocParser::NAME:
      case JavadocParser::SPACE:
      case JavadocParser::TEXT_CONTENT:
      case JavadocParser::STAR:
      case JavadocParser::SLASH:
      case JavadocParser::BRACE_OPEN:
      case JavadocParser::BRACE_CLOSE: {
        enterOuterAlt(_localctx, 1);
        setState(112);
        descriptionLineStart();
        setState(116);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(113);
            descriptionLineElement(); 
          }
          setState(118);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
        }
        break;
      }

      case JavadocParser::INLINE_TAG_START: {
        enterOuterAlt(_localctx, 2);
        setState(119);
        inlineTag();
        setState(123);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(120);
            descriptionLineElement(); 
          }
          setState(125);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DescriptionLineStartContext ------------------------------------------------------------------

JavadocParser::DescriptionLineStartContext::DescriptionLineStartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> JavadocParser::DescriptionLineStartContext::SPACE() {
  return getTokens(JavadocParser::SPACE);
}

tree::TerminalNode* JavadocParser::DescriptionLineStartContext::SPACE(size_t i) {
  return getToken(JavadocParser::SPACE, i);
}

std::vector<JavadocParser::DescriptionLineNoSpaceNoAtContext *> JavadocParser::DescriptionLineStartContext::descriptionLineNoSpaceNoAt() {
  return getRuleContexts<JavadocParser::DescriptionLineNoSpaceNoAtContext>();
}

JavadocParser::DescriptionLineNoSpaceNoAtContext* JavadocParser::DescriptionLineStartContext::descriptionLineNoSpaceNoAt(size_t i) {
  return getRuleContext<JavadocParser::DescriptionLineNoSpaceNoAtContext>(i);
}

std::vector<tree::TerminalNode *> JavadocParser::DescriptionLineStartContext::AT() {
  return getTokens(JavadocParser::AT);
}

tree::TerminalNode* JavadocParser::DescriptionLineStartContext::AT(size_t i) {
  return getToken(JavadocParser::AT, i);
}


size_t JavadocParser::DescriptionLineStartContext::getRuleIndex() const {
  return JavadocParser::RuleDescriptionLineStart;
}

void JavadocParser::DescriptionLineStartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDescriptionLineStart(this);
}

void JavadocParser::DescriptionLineStartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDescriptionLineStart(this);
}


antlrcpp::Any JavadocParser::DescriptionLineStartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavadocParserVisitor*>(visitor))
    return parserVisitor->visitDescriptionLineStart(this);
  else
    return visitor->visitChildren(this);
}

JavadocParser::DescriptionLineStartContext* JavadocParser::descriptionLineStart() {
  DescriptionLineStartContext *_localctx = _tracker.createInstance<DescriptionLineStartContext>(_ctx, getState());
  enterRule(_localctx, 10, JavadocParser::RuleDescriptionLineStart);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(129);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavadocParser::SPACE) {
      setState(128);
      match(JavadocParser::SPACE);
    }
    setState(132); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(131);
              descriptionLineNoSpaceNoAt();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(134); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(141);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(139);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case JavadocParser::NAME:
          case JavadocParser::TEXT_CONTENT:
          case JavadocParser::STAR:
          case JavadocParser::SLASH:
          case JavadocParser::BRACE_OPEN:
          case JavadocParser::BRACE_CLOSE: {
            setState(136);
            descriptionLineNoSpaceNoAt();
            break;
          }

          case JavadocParser::SPACE: {
            setState(137);
            match(JavadocParser::SPACE);
            break;
          }

          case JavadocParser::AT: {
            setState(138);
            match(JavadocParser::AT);
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(143);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DescriptionLineNoSpaceNoAtContext ------------------------------------------------------------------

JavadocParser::DescriptionLineNoSpaceNoAtContext::DescriptionLineNoSpaceNoAtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavadocParser::DescriptionLineNoSpaceNoAtContext::TEXT_CONTENT() {
  return getToken(JavadocParser::TEXT_CONTENT, 0);
}

tree::TerminalNode* JavadocParser::DescriptionLineNoSpaceNoAtContext::NAME() {
  return getToken(JavadocParser::NAME, 0);
}

tree::TerminalNode* JavadocParser::DescriptionLineNoSpaceNoAtContext::STAR() {
  return getToken(JavadocParser::STAR, 0);
}

tree::TerminalNode* JavadocParser::DescriptionLineNoSpaceNoAtContext::SLASH() {
  return getToken(JavadocParser::SLASH, 0);
}

tree::TerminalNode* JavadocParser::DescriptionLineNoSpaceNoAtContext::BRACE_OPEN() {
  return getToken(JavadocParser::BRACE_OPEN, 0);
}

tree::TerminalNode* JavadocParser::DescriptionLineNoSpaceNoAtContext::BRACE_CLOSE() {
  return getToken(JavadocParser::BRACE_CLOSE, 0);
}


size_t JavadocParser::DescriptionLineNoSpaceNoAtContext::getRuleIndex() const {
  return JavadocParser::RuleDescriptionLineNoSpaceNoAt;
}

void JavadocParser::DescriptionLineNoSpaceNoAtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDescriptionLineNoSpaceNoAt(this);
}

void JavadocParser::DescriptionLineNoSpaceNoAtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDescriptionLineNoSpaceNoAt(this);
}


antlrcpp::Any JavadocParser::DescriptionLineNoSpaceNoAtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavadocParserVisitor*>(visitor))
    return parserVisitor->visitDescriptionLineNoSpaceNoAt(this);
  else
    return visitor->visitChildren(this);
}

JavadocParser::DescriptionLineNoSpaceNoAtContext* JavadocParser::descriptionLineNoSpaceNoAt() {
  DescriptionLineNoSpaceNoAtContext *_localctx = _tracker.createInstance<DescriptionLineNoSpaceNoAtContext>(_ctx, getState());
  enterRule(_localctx, 12, JavadocParser::RuleDescriptionLineNoSpaceNoAt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavadocParser::NAME)
      | (1ULL << JavadocParser::TEXT_CONTENT)
      | (1ULL << JavadocParser::STAR)
      | (1ULL << JavadocParser::SLASH)
      | (1ULL << JavadocParser::BRACE_OPEN)
      | (1ULL << JavadocParser::BRACE_CLOSE))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DescriptionLineElementContext ------------------------------------------------------------------

JavadocParser::DescriptionLineElementContext::DescriptionLineElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavadocParser::InlineTagContext* JavadocParser::DescriptionLineElementContext::inlineTag() {
  return getRuleContext<JavadocParser::InlineTagContext>(0);
}

JavadocParser::DescriptionLineTextContext* JavadocParser::DescriptionLineElementContext::descriptionLineText() {
  return getRuleContext<JavadocParser::DescriptionLineTextContext>(0);
}


size_t JavadocParser::DescriptionLineElementContext::getRuleIndex() const {
  return JavadocParser::RuleDescriptionLineElement;
}

void JavadocParser::DescriptionLineElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDescriptionLineElement(this);
}

void JavadocParser::DescriptionLineElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDescriptionLineElement(this);
}


antlrcpp::Any JavadocParser::DescriptionLineElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavadocParserVisitor*>(visitor))
    return parserVisitor->visitDescriptionLineElement(this);
  else
    return visitor->visitChildren(this);
}

JavadocParser::DescriptionLineElementContext* JavadocParser::descriptionLineElement() {
  DescriptionLineElementContext *_localctx = _tracker.createInstance<DescriptionLineElementContext>(_ctx, getState());
  enterRule(_localctx, 14, JavadocParser::RuleDescriptionLineElement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(148);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavadocParser::INLINE_TAG_START: {
        enterOuterAlt(_localctx, 1);
        setState(146);
        inlineTag();
        break;
      }

      case JavadocParser::NAME:
      case JavadocParser::SPACE:
      case JavadocParser::TEXT_CONTENT:
      case JavadocParser::AT:
      case JavadocParser::STAR:
      case JavadocParser::SLASH:
      case JavadocParser::BRACE_OPEN:
      case JavadocParser::BRACE_CLOSE: {
        enterOuterAlt(_localctx, 2);
        setState(147);
        descriptionLineText();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DescriptionLineTextContext ------------------------------------------------------------------

JavadocParser::DescriptionLineTextContext::DescriptionLineTextContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavadocParser::DescriptionLineNoSpaceNoAtContext *> JavadocParser::DescriptionLineTextContext::descriptionLineNoSpaceNoAt() {
  return getRuleContexts<JavadocParser::DescriptionLineNoSpaceNoAtContext>();
}

JavadocParser::DescriptionLineNoSpaceNoAtContext* JavadocParser::DescriptionLineTextContext::descriptionLineNoSpaceNoAt(size_t i) {
  return getRuleContext<JavadocParser::DescriptionLineNoSpaceNoAtContext>(i);
}

std::vector<tree::TerminalNode *> JavadocParser::DescriptionLineTextContext::SPACE() {
  return getTokens(JavadocParser::SPACE);
}

tree::TerminalNode* JavadocParser::DescriptionLineTextContext::SPACE(size_t i) {
  return getToken(JavadocParser::SPACE, i);
}

std::vector<tree::TerminalNode *> JavadocParser::DescriptionLineTextContext::AT() {
  return getTokens(JavadocParser::AT);
}

tree::TerminalNode* JavadocParser::DescriptionLineTextContext::AT(size_t i) {
  return getToken(JavadocParser::AT, i);
}


size_t JavadocParser::DescriptionLineTextContext::getRuleIndex() const {
  return JavadocParser::RuleDescriptionLineText;
}

void JavadocParser::DescriptionLineTextContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDescriptionLineText(this);
}

void JavadocParser::DescriptionLineTextContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDescriptionLineText(this);
}


antlrcpp::Any JavadocParser::DescriptionLineTextContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavadocParserVisitor*>(visitor))
    return parserVisitor->visitDescriptionLineText(this);
  else
    return visitor->visitChildren(this);
}

JavadocParser::DescriptionLineTextContext* JavadocParser::descriptionLineText() {
  DescriptionLineTextContext *_localctx = _tracker.createInstance<DescriptionLineTextContext>(_ctx, getState());
  enterRule(_localctx, 16, JavadocParser::RuleDescriptionLineText);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(153); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(153);
              _errHandler->sync(this);
              switch (_input->LA(1)) {
                case JavadocParser::NAME:
                case JavadocParser::TEXT_CONTENT:
                case JavadocParser::STAR:
                case JavadocParser::SLASH:
                case JavadocParser::BRACE_OPEN:
                case JavadocParser::BRACE_CLOSE: {
                  setState(150);
                  descriptionLineNoSpaceNoAt();
                  break;
                }

                case JavadocParser::SPACE: {
                  setState(151);
                  match(JavadocParser::SPACE);
                  break;
                }

                case JavadocParser::AT: {
                  setState(152);
                  match(JavadocParser::AT);
                  break;
                }

              default:
                throw NoViableAltException(this);
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(155); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DescriptionNewlineContext ------------------------------------------------------------------

JavadocParser::DescriptionNewlineContext::DescriptionNewlineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavadocParser::DescriptionNewlineContext::NEWLINE() {
  return getToken(JavadocParser::NEWLINE, 0);
}


size_t JavadocParser::DescriptionNewlineContext::getRuleIndex() const {
  return JavadocParser::RuleDescriptionNewline;
}

void JavadocParser::DescriptionNewlineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDescriptionNewline(this);
}

void JavadocParser::DescriptionNewlineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDescriptionNewline(this);
}


antlrcpp::Any JavadocParser::DescriptionNewlineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavadocParserVisitor*>(visitor))
    return parserVisitor->visitDescriptionNewline(this);
  else
    return visitor->visitChildren(this);
}

JavadocParser::DescriptionNewlineContext* JavadocParser::descriptionNewline() {
  DescriptionNewlineContext *_localctx = _tracker.createInstance<DescriptionNewlineContext>(_ctx, getState());
  enterRule(_localctx, 18, JavadocParser::RuleDescriptionNewline);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
    match(JavadocParser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TagSectionContext ------------------------------------------------------------------

JavadocParser::TagSectionContext::TagSectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavadocParser::BlockTagContext *> JavadocParser::TagSectionContext::blockTag() {
  return getRuleContexts<JavadocParser::BlockTagContext>();
}

JavadocParser::BlockTagContext* JavadocParser::TagSectionContext::blockTag(size_t i) {
  return getRuleContext<JavadocParser::BlockTagContext>(i);
}


size_t JavadocParser::TagSectionContext::getRuleIndex() const {
  return JavadocParser::RuleTagSection;
}

void JavadocParser::TagSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTagSection(this);
}

void JavadocParser::TagSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTagSection(this);
}


antlrcpp::Any JavadocParser::TagSectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavadocParserVisitor*>(visitor))
    return parserVisitor->visitTagSection(this);
  else
    return visitor->visitChildren(this);
}

JavadocParser::TagSectionContext* JavadocParser::tagSection() {
  TagSectionContext *_localctx = _tracker.createInstance<TagSectionContext>(_ctx, getState());
  enterRule(_localctx, 20, JavadocParser::RuleTagSection);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(159);
      blockTag();
      setState(162); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == JavadocParser::SPACE

    || _la == JavadocParser::AT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockTagContext ------------------------------------------------------------------

JavadocParser::BlockTagContext::BlockTagContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavadocParser::BlockTagContext::AT() {
  return getToken(JavadocParser::AT, 0);
}

JavadocParser::BlockTagNameContext* JavadocParser::BlockTagContext::blockTagName() {
  return getRuleContext<JavadocParser::BlockTagNameContext>(0);
}

std::vector<tree::TerminalNode *> JavadocParser::BlockTagContext::SPACE() {
  return getTokens(JavadocParser::SPACE);
}

tree::TerminalNode* JavadocParser::BlockTagContext::SPACE(size_t i) {
  return getToken(JavadocParser::SPACE, i);
}

std::vector<JavadocParser::BlockTagContentContext *> JavadocParser::BlockTagContext::blockTagContent() {
  return getRuleContexts<JavadocParser::BlockTagContentContext>();
}

JavadocParser::BlockTagContentContext* JavadocParser::BlockTagContext::blockTagContent(size_t i) {
  return getRuleContext<JavadocParser::BlockTagContentContext>(i);
}


size_t JavadocParser::BlockTagContext::getRuleIndex() const {
  return JavadocParser::RuleBlockTag;
}

void JavadocParser::BlockTagContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockTag(this);
}

void JavadocParser::BlockTagContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockTag(this);
}


antlrcpp::Any JavadocParser::BlockTagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavadocParserVisitor*>(visitor))
    return parserVisitor->visitBlockTag(this);
  else
    return visitor->visitChildren(this);
}

JavadocParser::BlockTagContext* JavadocParser::blockTag() {
  BlockTagContext *_localctx = _tracker.createInstance<BlockTagContext>(_ctx, getState());
  enterRule(_localctx, 22, JavadocParser::RuleBlockTag);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(165);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavadocParser::SPACE) {
      setState(164);
      match(JavadocParser::SPACE);
    }
    setState(167);
    match(JavadocParser::AT);
    setState(168);
    blockTagName();
    setState(170);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(169);
      match(JavadocParser::SPACE);
      break;
    }

    default:
      break;
    }
    setState(175);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(172);
        blockTagContent(); 
      }
      setState(177);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockTagNameContext ------------------------------------------------------------------

JavadocParser::BlockTagNameContext::BlockTagNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavadocParser::BlockTagNameContext::NAME() {
  return getToken(JavadocParser::NAME, 0);
}


size_t JavadocParser::BlockTagNameContext::getRuleIndex() const {
  return JavadocParser::RuleBlockTagName;
}

void JavadocParser::BlockTagNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockTagName(this);
}

void JavadocParser::BlockTagNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockTagName(this);
}


antlrcpp::Any JavadocParser::BlockTagNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavadocParserVisitor*>(visitor))
    return parserVisitor->visitBlockTagName(this);
  else
    return visitor->visitChildren(this);
}

JavadocParser::BlockTagNameContext* JavadocParser::blockTagName() {
  BlockTagNameContext *_localctx = _tracker.createInstance<BlockTagNameContext>(_ctx, getState());
  enterRule(_localctx, 24, JavadocParser::RuleBlockTagName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
    match(JavadocParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockTagContentContext ------------------------------------------------------------------

JavadocParser::BlockTagContentContext::BlockTagContentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavadocParser::BlockTagTextContext* JavadocParser::BlockTagContentContext::blockTagText() {
  return getRuleContext<JavadocParser::BlockTagTextContext>(0);
}

JavadocParser::InlineTagContext* JavadocParser::BlockTagContentContext::inlineTag() {
  return getRuleContext<JavadocParser::InlineTagContext>(0);
}

tree::TerminalNode* JavadocParser::BlockTagContentContext::NEWLINE() {
  return getToken(JavadocParser::NEWLINE, 0);
}


size_t JavadocParser::BlockTagContentContext::getRuleIndex() const {
  return JavadocParser::RuleBlockTagContent;
}

void JavadocParser::BlockTagContentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockTagContent(this);
}

void JavadocParser::BlockTagContentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockTagContent(this);
}


antlrcpp::Any JavadocParser::BlockTagContentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavadocParserVisitor*>(visitor))
    return parserVisitor->visitBlockTagContent(this);
  else
    return visitor->visitChildren(this);
}

JavadocParser::BlockTagContentContext* JavadocParser::blockTagContent() {
  BlockTagContentContext *_localctx = _tracker.createInstance<BlockTagContentContext>(_ctx, getState());
  enterRule(_localctx, 26, JavadocParser::RuleBlockTagContent);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(183);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavadocParser::NAME:
      case JavadocParser::SPACE:
      case JavadocParser::TEXT_CONTENT:
      case JavadocParser::STAR:
      case JavadocParser::SLASH:
      case JavadocParser::BRACE_OPEN:
      case JavadocParser::BRACE_CLOSE: {
        enterOuterAlt(_localctx, 1);
        setState(180);
        blockTagText();
        break;
      }

      case JavadocParser::INLINE_TAG_START: {
        enterOuterAlt(_localctx, 2);
        setState(181);
        inlineTag();
        break;
      }

      case JavadocParser::NEWLINE: {
        enterOuterAlt(_localctx, 3);
        setState(182);
        match(JavadocParser::NEWLINE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockTagTextContext ------------------------------------------------------------------

JavadocParser::BlockTagTextContext::BlockTagTextContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavadocParser::BlockTagTextElementContext *> JavadocParser::BlockTagTextContext::blockTagTextElement() {
  return getRuleContexts<JavadocParser::BlockTagTextElementContext>();
}

JavadocParser::BlockTagTextElementContext* JavadocParser::BlockTagTextContext::blockTagTextElement(size_t i) {
  return getRuleContext<JavadocParser::BlockTagTextElementContext>(i);
}


size_t JavadocParser::BlockTagTextContext::getRuleIndex() const {
  return JavadocParser::RuleBlockTagText;
}

void JavadocParser::BlockTagTextContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockTagText(this);
}

void JavadocParser::BlockTagTextContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockTagText(this);
}


antlrcpp::Any JavadocParser::BlockTagTextContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavadocParserVisitor*>(visitor))
    return parserVisitor->visitBlockTagText(this);
  else
    return visitor->visitChildren(this);
}

JavadocParser::BlockTagTextContext* JavadocParser::blockTagText() {
  BlockTagTextContext *_localctx = _tracker.createInstance<BlockTagTextContext>(_ctx, getState());
  enterRule(_localctx, 28, JavadocParser::RuleBlockTagText);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(186); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(185);
              blockTagTextElement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(188); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockTagTextElementContext ------------------------------------------------------------------

JavadocParser::BlockTagTextElementContext::BlockTagTextElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavadocParser::BlockTagTextElementContext::TEXT_CONTENT() {
  return getToken(JavadocParser::TEXT_CONTENT, 0);
}

tree::TerminalNode* JavadocParser::BlockTagTextElementContext::NAME() {
  return getToken(JavadocParser::NAME, 0);
}

tree::TerminalNode* JavadocParser::BlockTagTextElementContext::SPACE() {
  return getToken(JavadocParser::SPACE, 0);
}

tree::TerminalNode* JavadocParser::BlockTagTextElementContext::STAR() {
  return getToken(JavadocParser::STAR, 0);
}

tree::TerminalNode* JavadocParser::BlockTagTextElementContext::SLASH() {
  return getToken(JavadocParser::SLASH, 0);
}

tree::TerminalNode* JavadocParser::BlockTagTextElementContext::BRACE_OPEN() {
  return getToken(JavadocParser::BRACE_OPEN, 0);
}

tree::TerminalNode* JavadocParser::BlockTagTextElementContext::BRACE_CLOSE() {
  return getToken(JavadocParser::BRACE_CLOSE, 0);
}


size_t JavadocParser::BlockTagTextElementContext::getRuleIndex() const {
  return JavadocParser::RuleBlockTagTextElement;
}

void JavadocParser::BlockTagTextElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockTagTextElement(this);
}

void JavadocParser::BlockTagTextElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockTagTextElement(this);
}


antlrcpp::Any JavadocParser::BlockTagTextElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavadocParserVisitor*>(visitor))
    return parserVisitor->visitBlockTagTextElement(this);
  else
    return visitor->visitChildren(this);
}

JavadocParser::BlockTagTextElementContext* JavadocParser::blockTagTextElement() {
  BlockTagTextElementContext *_localctx = _tracker.createInstance<BlockTagTextElementContext>(_ctx, getState());
  enterRule(_localctx, 30, JavadocParser::RuleBlockTagTextElement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavadocParser::NAME)
      | (1ULL << JavadocParser::SPACE)
      | (1ULL << JavadocParser::TEXT_CONTENT)
      | (1ULL << JavadocParser::STAR)
      | (1ULL << JavadocParser::SLASH)
      | (1ULL << JavadocParser::BRACE_OPEN)
      | (1ULL << JavadocParser::BRACE_CLOSE))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InlineTagContext ------------------------------------------------------------------

JavadocParser::InlineTagContext::InlineTagContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavadocParser::InlineTagContext::INLINE_TAG_START() {
  return getToken(JavadocParser::INLINE_TAG_START, 0);
}

JavadocParser::InlineTagNameContext* JavadocParser::InlineTagContext::inlineTagName() {
  return getRuleContext<JavadocParser::InlineTagNameContext>(0);
}

tree::TerminalNode* JavadocParser::InlineTagContext::BRACE_CLOSE() {
  return getToken(JavadocParser::BRACE_CLOSE, 0);
}

std::vector<tree::TerminalNode *> JavadocParser::InlineTagContext::SPACE() {
  return getTokens(JavadocParser::SPACE);
}

tree::TerminalNode* JavadocParser::InlineTagContext::SPACE(size_t i) {
  return getToken(JavadocParser::SPACE, i);
}

JavadocParser::InlineTagContentContext* JavadocParser::InlineTagContext::inlineTagContent() {
  return getRuleContext<JavadocParser::InlineTagContentContext>(0);
}


size_t JavadocParser::InlineTagContext::getRuleIndex() const {
  return JavadocParser::RuleInlineTag;
}

void JavadocParser::InlineTagContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineTag(this);
}

void JavadocParser::InlineTagContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineTag(this);
}


antlrcpp::Any JavadocParser::InlineTagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavadocParserVisitor*>(visitor))
    return parserVisitor->visitInlineTag(this);
  else
    return visitor->visitChildren(this);
}

JavadocParser::InlineTagContext* JavadocParser::inlineTag() {
  InlineTagContext *_localctx = _tracker.createInstance<InlineTagContext>(_ctx, getState());
  enterRule(_localctx, 32, JavadocParser::RuleInlineTag);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(192);
    match(JavadocParser::INLINE_TAG_START);
    setState(193);
    inlineTagName();
    setState(197);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(194);
        match(JavadocParser::SPACE); 
      }
      setState(199);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    }
    setState(201);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavadocParser::NAME)
      | (1ULL << JavadocParser::NEWLINE)
      | (1ULL << JavadocParser::SPACE)
      | (1ULL << JavadocParser::TEXT_CONTENT)
      | (1ULL << JavadocParser::STAR)
      | (1ULL << JavadocParser::SLASH)
      | (1ULL << JavadocParser::BRACE_OPEN))) != 0)) {
      setState(200);
      inlineTagContent();
    }
    setState(203);
    match(JavadocParser::BRACE_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InlineTagNameContext ------------------------------------------------------------------

JavadocParser::InlineTagNameContext::InlineTagNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavadocParser::InlineTagNameContext::NAME() {
  return getToken(JavadocParser::NAME, 0);
}


size_t JavadocParser::InlineTagNameContext::getRuleIndex() const {
  return JavadocParser::RuleInlineTagName;
}

void JavadocParser::InlineTagNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineTagName(this);
}

void JavadocParser::InlineTagNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineTagName(this);
}


antlrcpp::Any JavadocParser::InlineTagNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavadocParserVisitor*>(visitor))
    return parserVisitor->visitInlineTagName(this);
  else
    return visitor->visitChildren(this);
}

JavadocParser::InlineTagNameContext* JavadocParser::inlineTagName() {
  InlineTagNameContext *_localctx = _tracker.createInstance<InlineTagNameContext>(_ctx, getState());
  enterRule(_localctx, 34, JavadocParser::RuleInlineTagName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(205);
    match(JavadocParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InlineTagContentContext ------------------------------------------------------------------

JavadocParser::InlineTagContentContext::InlineTagContentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavadocParser::BraceContentContext *> JavadocParser::InlineTagContentContext::braceContent() {
  return getRuleContexts<JavadocParser::BraceContentContext>();
}

JavadocParser::BraceContentContext* JavadocParser::InlineTagContentContext::braceContent(size_t i) {
  return getRuleContext<JavadocParser::BraceContentContext>(i);
}


size_t JavadocParser::InlineTagContentContext::getRuleIndex() const {
  return JavadocParser::RuleInlineTagContent;
}

void JavadocParser::InlineTagContentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineTagContent(this);
}

void JavadocParser::InlineTagContentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineTagContent(this);
}


antlrcpp::Any JavadocParser::InlineTagContentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavadocParserVisitor*>(visitor))
    return parserVisitor->visitInlineTagContent(this);
  else
    return visitor->visitChildren(this);
}

JavadocParser::InlineTagContentContext* JavadocParser::inlineTagContent() {
  InlineTagContentContext *_localctx = _tracker.createInstance<InlineTagContentContext>(_ctx, getState());
  enterRule(_localctx, 36, JavadocParser::RuleInlineTagContent);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(207);
      braceContent();
      setState(210); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavadocParser::NAME)
      | (1ULL << JavadocParser::NEWLINE)
      | (1ULL << JavadocParser::SPACE)
      | (1ULL << JavadocParser::TEXT_CONTENT)
      | (1ULL << JavadocParser::STAR)
      | (1ULL << JavadocParser::SLASH)
      | (1ULL << JavadocParser::BRACE_OPEN))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BraceExpressionContext ------------------------------------------------------------------

JavadocParser::BraceExpressionContext::BraceExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavadocParser::BraceExpressionContext::BRACE_OPEN() {
  return getToken(JavadocParser::BRACE_OPEN, 0);
}

tree::TerminalNode* JavadocParser::BraceExpressionContext::BRACE_CLOSE() {
  return getToken(JavadocParser::BRACE_CLOSE, 0);
}

std::vector<JavadocParser::BraceContentContext *> JavadocParser::BraceExpressionContext::braceContent() {
  return getRuleContexts<JavadocParser::BraceContentContext>();
}

JavadocParser::BraceContentContext* JavadocParser::BraceExpressionContext::braceContent(size_t i) {
  return getRuleContext<JavadocParser::BraceContentContext>(i);
}


size_t JavadocParser::BraceExpressionContext::getRuleIndex() const {
  return JavadocParser::RuleBraceExpression;
}

void JavadocParser::BraceExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBraceExpression(this);
}

void JavadocParser::BraceExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBraceExpression(this);
}


antlrcpp::Any JavadocParser::BraceExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavadocParserVisitor*>(visitor))
    return parserVisitor->visitBraceExpression(this);
  else
    return visitor->visitChildren(this);
}

JavadocParser::BraceExpressionContext* JavadocParser::braceExpression() {
  BraceExpressionContext *_localctx = _tracker.createInstance<BraceExpressionContext>(_ctx, getState());
  enterRule(_localctx, 38, JavadocParser::RuleBraceExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    match(JavadocParser::BRACE_OPEN);
    setState(216);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavadocParser::NAME)
      | (1ULL << JavadocParser::NEWLINE)
      | (1ULL << JavadocParser::SPACE)
      | (1ULL << JavadocParser::TEXT_CONTENT)
      | (1ULL << JavadocParser::STAR)
      | (1ULL << JavadocParser::SLASH)
      | (1ULL << JavadocParser::BRACE_OPEN))) != 0)) {
      setState(213);
      braceContent();
      setState(218);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(219);
    match(JavadocParser::BRACE_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BraceContentContext ------------------------------------------------------------------

JavadocParser::BraceContentContext::BraceContentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavadocParser::BraceExpressionContext* JavadocParser::BraceContentContext::braceExpression() {
  return getRuleContext<JavadocParser::BraceExpressionContext>(0);
}

std::vector<JavadocParser::BraceTextContext *> JavadocParser::BraceContentContext::braceText() {
  return getRuleContexts<JavadocParser::BraceTextContext>();
}

JavadocParser::BraceTextContext* JavadocParser::BraceContentContext::braceText(size_t i) {
  return getRuleContext<JavadocParser::BraceTextContext>(i);
}

std::vector<tree::TerminalNode *> JavadocParser::BraceContentContext::NEWLINE() {
  return getTokens(JavadocParser::NEWLINE);
}

tree::TerminalNode* JavadocParser::BraceContentContext::NEWLINE(size_t i) {
  return getToken(JavadocParser::NEWLINE, i);
}


size_t JavadocParser::BraceContentContext::getRuleIndex() const {
  return JavadocParser::RuleBraceContent;
}

void JavadocParser::BraceContentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBraceContent(this);
}

void JavadocParser::BraceContentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBraceContent(this);
}


antlrcpp::Any JavadocParser::BraceContentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavadocParserVisitor*>(visitor))
    return parserVisitor->visitBraceContent(this);
  else
    return visitor->visitChildren(this);
}

JavadocParser::BraceContentContext* JavadocParser::braceContent() {
  BraceContentContext *_localctx = _tracker.createInstance<BraceContentContext>(_ctx, getState());
  enterRule(_localctx, 40, JavadocParser::RuleBraceContent);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(235);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavadocParser::BRACE_OPEN: {
        enterOuterAlt(_localctx, 1);
        setState(221);
        braceExpression();
        break;
      }

      case JavadocParser::NAME:
      case JavadocParser::NEWLINE:
      case JavadocParser::SPACE:
      case JavadocParser::TEXT_CONTENT:
      case JavadocParser::STAR:
      case JavadocParser::SLASH: {
        enterOuterAlt(_localctx, 2);
        setState(222);
        braceText();
        setState(232);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(226);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
              if (alt == 1) {
                setState(223);
                match(JavadocParser::NEWLINE); 
              }
              setState(228);
              _errHandler->sync(this);
              alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
            }
            setState(229);
            braceText(); 
          }
          setState(234);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BraceTextContext ------------------------------------------------------------------

JavadocParser::BraceTextContext::BraceTextContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavadocParser::BraceTextContext::TEXT_CONTENT() {
  return getToken(JavadocParser::TEXT_CONTENT, 0);
}

tree::TerminalNode* JavadocParser::BraceTextContext::NAME() {
  return getToken(JavadocParser::NAME, 0);
}

tree::TerminalNode* JavadocParser::BraceTextContext::SPACE() {
  return getToken(JavadocParser::SPACE, 0);
}

tree::TerminalNode* JavadocParser::BraceTextContext::STAR() {
  return getToken(JavadocParser::STAR, 0);
}

tree::TerminalNode* JavadocParser::BraceTextContext::SLASH() {
  return getToken(JavadocParser::SLASH, 0);
}

tree::TerminalNode* JavadocParser::BraceTextContext::NEWLINE() {
  return getToken(JavadocParser::NEWLINE, 0);
}


size_t JavadocParser::BraceTextContext::getRuleIndex() const {
  return JavadocParser::RuleBraceText;
}

void JavadocParser::BraceTextContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBraceText(this);
}

void JavadocParser::BraceTextContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavadocParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBraceText(this);
}


antlrcpp::Any JavadocParser::BraceTextContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JavadocParserVisitor*>(visitor))
    return parserVisitor->visitBraceText(this);
  else
    return visitor->visitChildren(this);
}

JavadocParser::BraceTextContext* JavadocParser::braceText() {
  BraceTextContext *_localctx = _tracker.createInstance<BraceTextContext>(_ctx, getState());
  enterRule(_localctx, 42, JavadocParser::RuleBraceText);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(237);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavadocParser::NAME)
      | (1ULL << JavadocParser::NEWLINE)
      | (1ULL << JavadocParser::SPACE)
      | (1ULL << JavadocParser::TEXT_CONTENT)
      | (1ULL << JavadocParser::STAR)
      | (1ULL << JavadocParser::SLASH))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> JavadocParser::_decisionToDFA;
atn::PredictionContextCache JavadocParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN JavadocParser::_atn;
std::vector<uint16_t> JavadocParser::_serializedATN;

std::vector<std::string> JavadocParser::_ruleNames = {
  "documentation", "documentationContent", "skipWhitespace", "description", 
  "descriptionLine", "descriptionLineStart", "descriptionLineNoSpaceNoAt", 
  "descriptionLineElement", "descriptionLineText", "descriptionNewline", 
  "tagSection", "blockTag", "blockTagName", "blockTagContent", "blockTagText", 
  "blockTagTextElement", "inlineTag", "inlineTagName", "inlineTagContent", 
  "braceExpression", "braceContent", "braceText"
};

std::vector<std::string> JavadocParser::_literalNames = {
  "", "", "", "", "", "'@'", "'*'", "'/'", "", "", "'{@'", "'{'", "'}'"
};

std::vector<std::string> JavadocParser::_symbolicNames = {
  "", "NAME", "NEWLINE", "SPACE", "TEXT_CONTENT", "AT", "STAR", "SLASH", 
  "JAVADOC_START", "JAVADOC_END", "INLINE_TAG_START", "BRACE_OPEN", "BRACE_CLOSE"
};

dfa::Vocabulary JavadocParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> JavadocParser::_tokenNames;

JavadocParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0xe, 0xf2, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x32, 0xa, 0x2, 
       0xc, 0x2, 0xe, 0x2, 0x35, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
       0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x3c, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 
       0x3f, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x44, 0xa, 
       0x2, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x48, 0xa, 0x3, 0xc, 0x3, 0xe, 
       0x3, 0x4b, 0xb, 0x3, 0x3, 0x3, 0x7, 0x3, 0x4e, 0xa, 0x3, 0xc, 0x3, 
       0xe, 0x3, 0x51, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x6, 0x3, 
       0x56, 0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0x57, 0x3, 0x3, 0x7, 0x3, 0x5b, 
       0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x5e, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x5, 0x3, 0x62, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 
       0x6, 0x5, 0x68, 0xa, 0x5, 0xd, 0x5, 0xe, 0x5, 0x69, 0x3, 0x5, 0x3, 
       0x5, 0x7, 0x5, 0x6e, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x71, 0xb, 0x5, 
       0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x75, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 
       0x78, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x7c, 0xa, 0x6, 0xc, 
       0x6, 0xe, 0x6, 0x7f, 0xb, 0x6, 0x5, 0x6, 0x81, 0xa, 0x6, 0x3, 0x7, 
       0x5, 0x7, 0x84, 0xa, 0x7, 0x3, 0x7, 0x6, 0x7, 0x87, 0xa, 0x7, 0xd, 
       0x7, 0xe, 0x7, 0x88, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x8e, 
       0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x91, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x97, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 
       0x3, 0xa, 0x6, 0xa, 0x9c, 0xa, 0xa, 0xd, 0xa, 0xe, 0xa, 0x9d, 0x3, 
       0xb, 0x3, 0xb, 0x3, 0xc, 0x6, 0xc, 0xa3, 0xa, 0xc, 0xd, 0xc, 0xe, 
       0xc, 0xa4, 0x3, 0xd, 0x5, 0xd, 0xa8, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 
       0x3, 0xd, 0x5, 0xd, 0xad, 0xa, 0xd, 0x3, 0xd, 0x7, 0xd, 0xb0, 0xa, 
       0xd, 0xc, 0xd, 0xe, 0xd, 0xb3, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
       0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xba, 0xa, 0xf, 0x3, 0x10, 0x6, 
       0x10, 0xbd, 0xa, 0x10, 0xd, 0x10, 0xe, 0x10, 0xbe, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0xc6, 0xa, 0x12, 
       0xc, 0x12, 0xe, 0x12, 0xc9, 0xb, 0x12, 0x3, 0x12, 0x5, 0x12, 0xcc, 
       0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 
       0x6, 0x14, 0xd3, 0xa, 0x14, 0xd, 0x14, 0xe, 0x14, 0xd4, 0x3, 0x15, 
       0x3, 0x15, 0x7, 0x15, 0xd9, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0xdc, 
       0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x7, 0x16, 0xe3, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0xe6, 0xb, 0x16, 
       0x3, 0x16, 0x7, 0x16, 0xe9, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0xec, 
       0xb, 0x16, 0x5, 0x16, 0xee, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 
       0x17, 0x2, 0x2, 0x18, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
       0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
       0x2a, 0x2c, 0x2, 0x6, 0x3, 0x2, 0x4, 0x5, 0x6, 0x2, 0x3, 0x3, 0x6, 
       0x6, 0x8, 0x9, 0xd, 0xe, 0x6, 0x2, 0x3, 0x3, 0x5, 0x6, 0x8, 0x9, 
       0xd, 0xe, 0x4, 0x2, 0x3, 0x6, 0x8, 0x9, 0x2, 0x101, 0x2, 0x43, 0x3, 
       0x2, 0x2, 0x2, 0x4, 0x61, 0x3, 0x2, 0x2, 0x2, 0x6, 0x63, 0x3, 0x2, 
       0x2, 0x2, 0x8, 0x65, 0x3, 0x2, 0x2, 0x2, 0xa, 0x80, 0x3, 0x2, 0x2, 
       0x2, 0xc, 0x83, 0x3, 0x2, 0x2, 0x2, 0xe, 0x92, 0x3, 0x2, 0x2, 0x2, 
       0x10, 0x96, 0x3, 0x2, 0x2, 0x2, 0x12, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x14, 
       0x9f, 0x3, 0x2, 0x2, 0x2, 0x16, 0xa2, 0x3, 0x2, 0x2, 0x2, 0x18, 0xa7, 
       0x3, 0x2, 0x2, 0x2, 0x1a, 0xb4, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xb9, 0x3, 
       0x2, 0x2, 0x2, 0x1e, 0xbc, 0x3, 0x2, 0x2, 0x2, 0x20, 0xc0, 0x3, 0x2, 
       0x2, 0x2, 0x22, 0xc2, 0x3, 0x2, 0x2, 0x2, 0x24, 0xcf, 0x3, 0x2, 0x2, 
       0x2, 0x26, 0xd2, 0x3, 0x2, 0x2, 0x2, 0x28, 0xd6, 0x3, 0x2, 0x2, 0x2, 
       0x2a, 0xed, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xef, 0x3, 0x2, 0x2, 0x2, 0x2e, 
       0x44, 0x7, 0x2, 0x2, 0x3, 0x2f, 0x33, 0x7, 0xa, 0x2, 0x2, 0x30, 0x32, 
       0x5, 0x6, 0x4, 0x2, 0x31, 0x30, 0x3, 0x2, 0x2, 0x2, 0x32, 0x35, 0x3, 
       0x2, 0x2, 0x2, 0x33, 0x31, 0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 0x3, 0x2, 
       0x2, 0x2, 0x34, 0x36, 0x3, 0x2, 0x2, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 
       0x2, 0x36, 0x37, 0x5, 0x4, 0x3, 0x2, 0x37, 0x38, 0x7, 0xb, 0x2, 0x2, 
       0x38, 0x39, 0x7, 0x2, 0x2, 0x3, 0x39, 0x44, 0x3, 0x2, 0x2, 0x2, 0x3a, 
       0x3c, 0x5, 0x6, 0x4, 0x2, 0x3b, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3f, 
       0x3, 0x2, 0x2, 0x2, 0x3d, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 0x3, 
       0x2, 0x2, 0x2, 0x3e, 0x40, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3d, 0x3, 0x2, 
       0x2, 0x2, 0x40, 0x41, 0x5, 0x4, 0x3, 0x2, 0x41, 0x42, 0x7, 0x2, 0x2, 
       0x3, 0x42, 0x44, 0x3, 0x2, 0x2, 0x2, 0x43, 0x2e, 0x3, 0x2, 0x2, 0x2, 
       0x43, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x43, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x44, 
       0x3, 0x3, 0x2, 0x2, 0x2, 0x45, 0x49, 0x5, 0x8, 0x5, 0x2, 0x46, 0x48, 
       0x5, 0x6, 0x4, 0x2, 0x47, 0x46, 0x3, 0x2, 0x2, 0x2, 0x48, 0x4b, 0x3, 
       0x2, 0x2, 0x2, 0x49, 0x47, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x3, 0x2, 
       0x2, 0x2, 0x4a, 0x62, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x49, 0x3, 0x2, 0x2, 
       0x2, 0x4c, 0x4e, 0x5, 0x6, 0x4, 0x2, 0x4d, 0x4c, 0x3, 0x2, 0x2, 0x2, 
       0x4e, 0x51, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4f, 
       0x50, 0x3, 0x2, 0x2, 0x2, 0x50, 0x52, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4f, 
       0x3, 0x2, 0x2, 0x2, 0x52, 0x62, 0x5, 0x16, 0xc, 0x2, 0x53, 0x55, 
       0x5, 0x8, 0x5, 0x2, 0x54, 0x56, 0x7, 0x4, 0x2, 0x2, 0x55, 0x54, 0x3, 
       0x2, 0x2, 0x2, 0x56, 0x57, 0x3, 0x2, 0x2, 0x2, 0x57, 0x55, 0x3, 0x2, 
       0x2, 0x2, 0x57, 0x58, 0x3, 0x2, 0x2, 0x2, 0x58, 0x5c, 0x3, 0x2, 0x2, 
       0x2, 0x59, 0x5b, 0x5, 0x6, 0x4, 0x2, 0x5a, 0x59, 0x3, 0x2, 0x2, 0x2, 
       0x5b, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5c, 
       0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5c, 
       0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x5, 0x16, 0xc, 0x2, 0x60, 0x62, 
       0x3, 0x2, 0x2, 0x2, 0x61, 0x45, 0x3, 0x2, 0x2, 0x2, 0x61, 0x4f, 0x3, 
       0x2, 0x2, 0x2, 0x61, 0x53, 0x3, 0x2, 0x2, 0x2, 0x62, 0x5, 0x3, 0x2, 
       0x2, 0x2, 0x63, 0x64, 0x9, 0x2, 0x2, 0x2, 0x64, 0x7, 0x3, 0x2, 0x2, 
       0x2, 0x65, 0x6f, 0x5, 0xa, 0x6, 0x2, 0x66, 0x68, 0x5, 0x14, 0xb, 
       0x2, 0x67, 0x66, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x3, 0x2, 0x2, 0x2, 
       0x69, 0x67, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6a, 
       0x6b, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x5, 0xa, 0x6, 0x2, 0x6c, 0x6e, 
       0x3, 0x2, 0x2, 0x2, 0x6d, 0x67, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x71, 0x3, 
       0x2, 0x2, 0x2, 0x6f, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x3, 0x2, 
       0x2, 0x2, 0x70, 0x9, 0x3, 0x2, 0x2, 0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 
       0x2, 0x72, 0x76, 0x5, 0xc, 0x7, 0x2, 0x73, 0x75, 0x5, 0x10, 0x9, 
       0x2, 0x74, 0x73, 0x3, 0x2, 0x2, 0x2, 0x75, 0x78, 0x3, 0x2, 0x2, 0x2, 
       0x76, 0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 0x2, 0x2, 0x2, 0x77, 
       0x81, 0x3, 0x2, 0x2, 0x2, 0x78, 0x76, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7d, 
       0x5, 0x22, 0x12, 0x2, 0x7a, 0x7c, 0x5, 0x10, 0x9, 0x2, 0x7b, 0x7a, 
       0x3, 0x2, 0x2, 0x2, 0x7c, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7b, 0x3, 
       0x2, 0x2, 0x2, 0x7d, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x81, 0x3, 0x2, 
       0x2, 0x2, 0x7f, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x80, 0x72, 0x3, 0x2, 0x2, 
       0x2, 0x80, 0x79, 0x3, 0x2, 0x2, 0x2, 0x81, 0xb, 0x3, 0x2, 0x2, 0x2, 
       0x82, 0x84, 0x7, 0x5, 0x2, 0x2, 0x83, 0x82, 0x3, 0x2, 0x2, 0x2, 0x83, 
       0x84, 0x3, 0x2, 0x2, 0x2, 0x84, 0x86, 0x3, 0x2, 0x2, 0x2, 0x85, 0x87, 
       0x5, 0xe, 0x8, 0x2, 0x86, 0x85, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x3, 
       0x2, 0x2, 0x2, 0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x3, 0x2, 
       0x2, 0x2, 0x89, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8e, 0x5, 0xe, 0x8, 
       0x2, 0x8b, 0x8e, 0x7, 0x5, 0x2, 0x2, 0x8c, 0x8e, 0x7, 0x7, 0x2, 0x2, 
       0x8d, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8d, 
       0x8c, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x91, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x8d, 
       0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x3, 0x2, 0x2, 0x2, 0x90, 0xd, 0x3, 
       0x2, 0x2, 0x2, 0x91, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x9, 0x3, 
       0x2, 0x2, 0x93, 0xf, 0x3, 0x2, 0x2, 0x2, 0x94, 0x97, 0x5, 0x22, 0x12, 
       0x2, 0x95, 0x97, 0x5, 0x12, 0xa, 0x2, 0x96, 0x94, 0x3, 0x2, 0x2, 
       0x2, 0x96, 0x95, 0x3, 0x2, 0x2, 0x2, 0x97, 0x11, 0x3, 0x2, 0x2, 0x2, 
       0x98, 0x9c, 0x5, 0xe, 0x8, 0x2, 0x99, 0x9c, 0x7, 0x5, 0x2, 0x2, 0x9a, 
       0x9c, 0x7, 0x7, 0x2, 0x2, 0x9b, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x99, 
       0x3, 0x2, 0x2, 0x2, 0x9b, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x3, 
       0x2, 0x2, 0x2, 0x9d, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x3, 0x2, 
       0x2, 0x2, 0x9e, 0x13, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x7, 0x4, 0x2, 
       0x2, 0xa0, 0x15, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa3, 0x5, 0x18, 0xd, 
       0x2, 0xa2, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 0x3, 0x2, 0x2, 0x2, 
       0xa4, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa5, 
       0x17, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa8, 0x7, 0x5, 0x2, 0x2, 0xa7, 0xa6, 
       0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x3, 
       0x2, 0x2, 0x2, 0xa9, 0xaa, 0x7, 0x7, 0x2, 0x2, 0xaa, 0xac, 0x5, 0x1a, 
       0xe, 0x2, 0xab, 0xad, 0x7, 0x5, 0x2, 0x2, 0xac, 0xab, 0x3, 0x2, 0x2, 
       0x2, 0xac, 0xad, 0x3, 0x2, 0x2, 0x2, 0xad, 0xb1, 0x3, 0x2, 0x2, 0x2, 
       0xae, 0xb0, 0x5, 0x1c, 0xf, 0x2, 0xaf, 0xae, 0x3, 0x2, 0x2, 0x2, 
       0xb0, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb1, 
       0xb2, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x19, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb1, 
       0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0x7, 0x3, 0x2, 0x2, 0xb5, 0x1b, 0x3, 
       0x2, 0x2, 0x2, 0xb6, 0xba, 0x5, 0x1e, 0x10, 0x2, 0xb7, 0xba, 0x5, 
       0x22, 0x12, 0x2, 0xb8, 0xba, 0x7, 0x4, 0x2, 0x2, 0xb9, 0xb6, 0x3, 
       0x2, 0x2, 0x2, 0xb9, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb8, 0x3, 0x2, 
       0x2, 0x2, 0xba, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbd, 0x5, 0x20, 
       0x11, 0x2, 0xbc, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x3, 0x2, 
       0x2, 0x2, 0xbe, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x3, 0x2, 0x2, 
       0x2, 0xbf, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x9, 0x4, 0x2, 0x2, 
       0xc1, 0x21, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x7, 0xc, 0x2, 0x2, 0xc3, 
       0xc7, 0x5, 0x24, 0x13, 0x2, 0xc4, 0xc6, 0x7, 0x5, 0x2, 0x2, 0xc5, 
       0xc4, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc5, 
       0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xcb, 0x3, 
       0x2, 0x2, 0x2, 0xc9, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcc, 0x5, 0x26, 
       0x14, 0x2, 0xcb, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x3, 0x2, 
       0x2, 0x2, 0xcc, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x7, 0xe, 0x2, 
       0x2, 0xce, 0x23, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x7, 0x3, 0x2, 0x2, 
       0xd0, 0x25, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd3, 0x5, 0x2a, 0x16, 0x2, 
       0xd2, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd4, 
       0xd2, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd5, 0x27, 
       0x3, 0x2, 0x2, 0x2, 0xd6, 0xda, 0x7, 0xd, 0x2, 0x2, 0xd7, 0xd9, 0x5, 
       0x2a, 0x16, 0x2, 0xd8, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xdc, 0x3, 
       0x2, 0x2, 0x2, 0xda, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x3, 0x2, 
       0x2, 0x2, 0xdb, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xda, 0x3, 0x2, 0x2, 
       0x2, 0xdd, 0xde, 0x7, 0xe, 0x2, 0x2, 0xde, 0x29, 0x3, 0x2, 0x2, 0x2, 
       0xdf, 0xee, 0x5, 0x28, 0x15, 0x2, 0xe0, 0xea, 0x5, 0x2c, 0x17, 0x2, 
       0xe1, 0xe3, 0x7, 0x4, 0x2, 0x2, 0xe2, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe3, 
       0xe6, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 
       0x3, 0x2, 0x2, 0x2, 0xe5, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe4, 0x3, 
       0x2, 0x2, 0x2, 0xe7, 0xe9, 0x5, 0x2c, 0x17, 0x2, 0xe8, 0xe4, 0x3, 
       0x2, 0x2, 0x2, 0xe9, 0xec, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe8, 0x3, 0x2, 
       0x2, 0x2, 0xea, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xee, 0x3, 0x2, 0x2, 
       0x2, 0xec, 0xea, 0x3, 0x2, 0x2, 0x2, 0xed, 0xdf, 0x3, 0x2, 0x2, 0x2, 
       0xed, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xee, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xef, 
       0xf0, 0x9, 0x5, 0x2, 0x2, 0xf0, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x23, 0x33, 
       0x3d, 0x43, 0x49, 0x4f, 0x57, 0x5c, 0x61, 0x69, 0x6f, 0x76, 0x7d, 
       0x80, 0x83, 0x88, 0x8d, 0x8f, 0x96, 0x9b, 0x9d, 0xa4, 0xa7, 0xac, 
       0xb1, 0xb9, 0xbe, 0xc7, 0xcb, 0xd4, 0xda, 0xe4, 0xea, 0xed, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

JavadocParser::Initializer JavadocParser::_init;
