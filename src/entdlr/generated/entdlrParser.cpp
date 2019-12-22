
// Generated from entdlr.g4 by ANTLR 4.7.2


#include "entdlrListener.h"
#include "entdlrVisitor.h"

#include "entdlrParser.h"


using namespace antlrcpp;
using namespace antlr4;

entdlrParser::entdlrParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

entdlrParser::~entdlrParser() {
  delete _interpreter;
}

std::string entdlrParser::getGrammarFileName() const {
  return "entdlr.g4";
}

const std::vector<std::string>& entdlrParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& entdlrParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProtoContext ------------------------------------------------------------------

entdlrParser::ProtoContext::ProtoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

entdlrParser::SyntaxContext* entdlrParser::ProtoContext::syntax() {
  return getRuleContext<entdlrParser::SyntaxContext>(0);
}

tree::TerminalNode* entdlrParser::ProtoContext::EOF() {
  return getToken(entdlrParser::EOF, 0);
}

std::vector<entdlrParser::ImportStatementContext *> entdlrParser::ProtoContext::importStatement() {
  return getRuleContexts<entdlrParser::ImportStatementContext>();
}

entdlrParser::ImportStatementContext* entdlrParser::ProtoContext::importStatement(size_t i) {
  return getRuleContext<entdlrParser::ImportStatementContext>(i);
}

std::vector<entdlrParser::PackageStatementContext *> entdlrParser::ProtoContext::packageStatement() {
  return getRuleContexts<entdlrParser::PackageStatementContext>();
}

entdlrParser::PackageStatementContext* entdlrParser::ProtoContext::packageStatement(size_t i) {
  return getRuleContext<entdlrParser::PackageStatementContext>(i);
}

std::vector<entdlrParser::OptionContext *> entdlrParser::ProtoContext::option() {
  return getRuleContexts<entdlrParser::OptionContext>();
}

entdlrParser::OptionContext* entdlrParser::ProtoContext::option(size_t i) {
  return getRuleContext<entdlrParser::OptionContext>(i);
}

std::vector<entdlrParser::TopLevelDefContext *> entdlrParser::ProtoContext::topLevelDef() {
  return getRuleContexts<entdlrParser::TopLevelDefContext>();
}

entdlrParser::TopLevelDefContext* entdlrParser::ProtoContext::topLevelDef(size_t i) {
  return getRuleContext<entdlrParser::TopLevelDefContext>(i);
}

std::vector<entdlrParser::EmptyStatementContext *> entdlrParser::ProtoContext::emptyStatement() {
  return getRuleContexts<entdlrParser::EmptyStatementContext>();
}

entdlrParser::EmptyStatementContext* entdlrParser::ProtoContext::emptyStatement(size_t i) {
  return getRuleContext<entdlrParser::EmptyStatementContext>(i);
}


size_t entdlrParser::ProtoContext::getRuleIndex() const {
  return entdlrParser::RuleProto;
}

void entdlrParser::ProtoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProto(this);
}

void entdlrParser::ProtoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProto(this);
}


antlrcpp::Any entdlrParser::ProtoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitProto(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::ProtoContext* entdlrParser::proto() {
  ProtoContext *_localctx = _tracker.createInstance<ProtoContext>(_ctx, getState());
  enterRule(_localctx, 0, entdlrParser::RuleProto);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    syntax();
    setState(96);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << entdlrParser::ENUM)
      | (1ULL << entdlrParser::IMPORT)
      | (1ULL << entdlrParser::MESSAGE)
      | (1ULL << entdlrParser::OPTION)
      | (1ULL << entdlrParser::PACKAGE)
      | (1ULL << entdlrParser::SERVICE)
      | (1ULL << entdlrParser::SEMI))) != 0)) {
      setState(94);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case entdlrParser::IMPORT: {
          setState(89);
          importStatement();
          break;
        }

        case entdlrParser::PACKAGE: {
          setState(90);
          packageStatement();
          break;
        }

        case entdlrParser::OPTION: {
          setState(91);
          option();
          break;
        }

        case entdlrParser::ENUM:
        case entdlrParser::MESSAGE:
        case entdlrParser::SERVICE: {
          setState(92);
          topLevelDef();
          break;
        }

        case entdlrParser::SEMI: {
          setState(93);
          emptyStatement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(98);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(99);
    match(entdlrParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SyntaxContext ------------------------------------------------------------------

entdlrParser::SyntaxContext::SyntaxContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::SyntaxContext::SYNTAX() {
  return getToken(entdlrParser::SYNTAX, 0);
}

tree::TerminalNode* entdlrParser::SyntaxContext::ASSIGN() {
  return getToken(entdlrParser::ASSIGN, 0);
}

tree::TerminalNode* entdlrParser::SyntaxContext::SEMI() {
  return getToken(entdlrParser::SEMI, 0);
}

tree::TerminalNode* entdlrParser::SyntaxContext::PROTO3_DOUBLE() {
  return getToken(entdlrParser::PROTO3_DOUBLE, 0);
}

tree::TerminalNode* entdlrParser::SyntaxContext::PROTO3_SINGLE() {
  return getToken(entdlrParser::PROTO3_SINGLE, 0);
}


size_t entdlrParser::SyntaxContext::getRuleIndex() const {
  return entdlrParser::RuleSyntax;
}

void entdlrParser::SyntaxContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSyntax(this);
}

void entdlrParser::SyntaxContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSyntax(this);
}


antlrcpp::Any entdlrParser::SyntaxContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitSyntax(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::SyntaxContext* entdlrParser::syntax() {
  SyntaxContext *_localctx = _tracker.createInstance<SyntaxContext>(_ctx, getState());
  enterRule(_localctx, 2, entdlrParser::RuleSyntax);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    match(entdlrParser::SYNTAX);
    setState(102);
    match(entdlrParser::ASSIGN);
    setState(103);
    _la = _input->LA(1);
    if (!(_la == entdlrParser::PROTO3_DOUBLE

    || _la == entdlrParser::PROTO3_SINGLE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(104);
    match(entdlrParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportStatementContext ------------------------------------------------------------------

entdlrParser::ImportStatementContext::ImportStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::ImportStatementContext::IMPORT() {
  return getToken(entdlrParser::IMPORT, 0);
}

tree::TerminalNode* entdlrParser::ImportStatementContext::StrLit() {
  return getToken(entdlrParser::StrLit, 0);
}

tree::TerminalNode* entdlrParser::ImportStatementContext::SEMI() {
  return getToken(entdlrParser::SEMI, 0);
}

tree::TerminalNode* entdlrParser::ImportStatementContext::WEAK() {
  return getToken(entdlrParser::WEAK, 0);
}

tree::TerminalNode* entdlrParser::ImportStatementContext::PUBLIC() {
  return getToken(entdlrParser::PUBLIC, 0);
}


size_t entdlrParser::ImportStatementContext::getRuleIndex() const {
  return entdlrParser::RuleImportStatement;
}

void entdlrParser::ImportStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportStatement(this);
}

void entdlrParser::ImportStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportStatement(this);
}


antlrcpp::Any entdlrParser::ImportStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitImportStatement(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::ImportStatementContext* entdlrParser::importStatement() {
  ImportStatementContext *_localctx = _tracker.createInstance<ImportStatementContext>(_ctx, getState());
  enterRule(_localctx, 4, entdlrParser::RuleImportStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    match(entdlrParser::IMPORT);
    setState(108);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == entdlrParser::PUBLIC

    || _la == entdlrParser::WEAK) {
      setState(107);
      _la = _input->LA(1);
      if (!(_la == entdlrParser::PUBLIC

      || _la == entdlrParser::WEAK)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(110);
    match(entdlrParser::StrLit);
    setState(111);
    match(entdlrParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PackageStatementContext ------------------------------------------------------------------

entdlrParser::PackageStatementContext::PackageStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::PackageStatementContext::PACKAGE() {
  return getToken(entdlrParser::PACKAGE, 0);
}

entdlrParser::FullIdentContext* entdlrParser::PackageStatementContext::fullIdent() {
  return getRuleContext<entdlrParser::FullIdentContext>(0);
}

tree::TerminalNode* entdlrParser::PackageStatementContext::SEMI() {
  return getToken(entdlrParser::SEMI, 0);
}


size_t entdlrParser::PackageStatementContext::getRuleIndex() const {
  return entdlrParser::RulePackageStatement;
}

void entdlrParser::PackageStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPackageStatement(this);
}

void entdlrParser::PackageStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPackageStatement(this);
}


antlrcpp::Any entdlrParser::PackageStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitPackageStatement(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::PackageStatementContext* entdlrParser::packageStatement() {
  PackageStatementContext *_localctx = _tracker.createInstance<PackageStatementContext>(_ctx, getState());
  enterRule(_localctx, 6, entdlrParser::RulePackageStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    match(entdlrParser::PACKAGE);
    setState(114);
    fullIdent();
    setState(115);
    match(entdlrParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionContext ------------------------------------------------------------------

entdlrParser::OptionContext::OptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::OptionContext::OPTION() {
  return getToken(entdlrParser::OPTION, 0);
}

entdlrParser::OptionNameContext* entdlrParser::OptionContext::optionName() {
  return getRuleContext<entdlrParser::OptionNameContext>(0);
}

tree::TerminalNode* entdlrParser::OptionContext::ASSIGN() {
  return getToken(entdlrParser::ASSIGN, 0);
}

tree::TerminalNode* entdlrParser::OptionContext::SEMI() {
  return getToken(entdlrParser::SEMI, 0);
}

entdlrParser::ConstantContext* entdlrParser::OptionContext::constant() {
  return getRuleContext<entdlrParser::ConstantContext>(0);
}

entdlrParser::OptionBodyContext* entdlrParser::OptionContext::optionBody() {
  return getRuleContext<entdlrParser::OptionBodyContext>(0);
}


size_t entdlrParser::OptionContext::getRuleIndex() const {
  return entdlrParser::RuleOption;
}

void entdlrParser::OptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOption(this);
}

void entdlrParser::OptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOption(this);
}


antlrcpp::Any entdlrParser::OptionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitOption(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::OptionContext* entdlrParser::option() {
  OptionContext *_localctx = _tracker.createInstance<OptionContext>(_ctx, getState());
  enterRule(_localctx, 8, entdlrParser::RuleOption);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    match(entdlrParser::OPTION);
    setState(118);
    optionName();
    setState(119);
    match(entdlrParser::ASSIGN);
    setState(122);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case entdlrParser::Ident:
      case entdlrParser::IntLit:
      case entdlrParser::FloatLit:
      case entdlrParser::BoolLit:
      case entdlrParser::StrLit:
      case entdlrParser::MINUS:
      case entdlrParser::PLUS: {
        setState(120);
        constant();
        break;
      }

      case entdlrParser::LBRACE: {
        setState(121);
        optionBody();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(124);
    match(entdlrParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionNameContext ------------------------------------------------------------------

entdlrParser::OptionNameContext::OptionNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> entdlrParser::OptionNameContext::Ident() {
  return getTokens(entdlrParser::Ident);
}

tree::TerminalNode* entdlrParser::OptionNameContext::Ident(size_t i) {
  return getToken(entdlrParser::Ident, i);
}

tree::TerminalNode* entdlrParser::OptionNameContext::LPAREN() {
  return getToken(entdlrParser::LPAREN, 0);
}

entdlrParser::FullIdentContext* entdlrParser::OptionNameContext::fullIdent() {
  return getRuleContext<entdlrParser::FullIdentContext>(0);
}

tree::TerminalNode* entdlrParser::OptionNameContext::RPAREN() {
  return getToken(entdlrParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> entdlrParser::OptionNameContext::DOT() {
  return getTokens(entdlrParser::DOT);
}

tree::TerminalNode* entdlrParser::OptionNameContext::DOT(size_t i) {
  return getToken(entdlrParser::DOT, i);
}

std::vector<entdlrParser::ReservedWordContext *> entdlrParser::OptionNameContext::reservedWord() {
  return getRuleContexts<entdlrParser::ReservedWordContext>();
}

entdlrParser::ReservedWordContext* entdlrParser::OptionNameContext::reservedWord(size_t i) {
  return getRuleContext<entdlrParser::ReservedWordContext>(i);
}


size_t entdlrParser::OptionNameContext::getRuleIndex() const {
  return entdlrParser::RuleOptionName;
}

void entdlrParser::OptionNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptionName(this);
}

void entdlrParser::OptionNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptionName(this);
}


antlrcpp::Any entdlrParser::OptionNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitOptionName(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::OptionNameContext* entdlrParser::optionName() {
  OptionNameContext *_localctx = _tracker.createInstance<OptionNameContext>(_ctx, getState());
  enterRule(_localctx, 10, entdlrParser::RuleOptionName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case entdlrParser::Ident: {
        setState(126);
        match(entdlrParser::Ident);
        break;
      }

      case entdlrParser::LPAREN: {
        setState(127);
        match(entdlrParser::LPAREN);
        setState(128);
        fullIdent();
        setState(129);
        match(entdlrParser::RPAREN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(140);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == entdlrParser::DOT) {
      setState(133);
      match(entdlrParser::DOT);
      setState(136);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case entdlrParser::Ident: {
          setState(134);
          match(entdlrParser::Ident);
          break;
        }

        case entdlrParser::MESSAGE:
        case entdlrParser::OPTION:
        case entdlrParser::PACKAGE:
        case entdlrParser::RPC:
        case entdlrParser::SERVICE:
        case entdlrParser::STREAM:
        case entdlrParser::STRING:
        case entdlrParser::SYNTAX:
        case entdlrParser::WEAK: {
          setState(135);
          reservedWord();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(142);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionBodyContext ------------------------------------------------------------------

entdlrParser::OptionBodyContext::OptionBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::OptionBodyContext::LBRACE() {
  return getToken(entdlrParser::LBRACE, 0);
}

tree::TerminalNode* entdlrParser::OptionBodyContext::RBRACE() {
  return getToken(entdlrParser::RBRACE, 0);
}

std::vector<entdlrParser::OptionBodyVariableContext *> entdlrParser::OptionBodyContext::optionBodyVariable() {
  return getRuleContexts<entdlrParser::OptionBodyVariableContext>();
}

entdlrParser::OptionBodyVariableContext* entdlrParser::OptionBodyContext::optionBodyVariable(size_t i) {
  return getRuleContext<entdlrParser::OptionBodyVariableContext>(i);
}


size_t entdlrParser::OptionBodyContext::getRuleIndex() const {
  return entdlrParser::RuleOptionBody;
}

void entdlrParser::OptionBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptionBody(this);
}

void entdlrParser::OptionBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptionBody(this);
}


antlrcpp::Any entdlrParser::OptionBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitOptionBody(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::OptionBodyContext* entdlrParser::optionBody() {
  OptionBodyContext *_localctx = _tracker.createInstance<OptionBodyContext>(_ctx, getState());
  enterRule(_localctx, 12, entdlrParser::RuleOptionBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(143);
    match(entdlrParser::LBRACE);
    setState(147);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == entdlrParser::Ident

    || _la == entdlrParser::LPAREN) {
      setState(144);
      optionBodyVariable();
      setState(149);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(150);
    match(entdlrParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionBodyVariableContext ------------------------------------------------------------------

entdlrParser::OptionBodyVariableContext::OptionBodyVariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

entdlrParser::OptionNameContext* entdlrParser::OptionBodyVariableContext::optionName() {
  return getRuleContext<entdlrParser::OptionNameContext>(0);
}

entdlrParser::ConstantContext* entdlrParser::OptionBodyVariableContext::constant() {
  return getRuleContext<entdlrParser::ConstantContext>(0);
}


size_t entdlrParser::OptionBodyVariableContext::getRuleIndex() const {
  return entdlrParser::RuleOptionBodyVariable;
}

void entdlrParser::OptionBodyVariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptionBodyVariable(this);
}

void entdlrParser::OptionBodyVariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptionBodyVariable(this);
}


antlrcpp::Any entdlrParser::OptionBodyVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitOptionBodyVariable(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::OptionBodyVariableContext* entdlrParser::optionBodyVariable() {
  OptionBodyVariableContext *_localctx = _tracker.createInstance<OptionBodyVariableContext>(_ctx, getState());
  enterRule(_localctx, 14, entdlrParser::RuleOptionBodyVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    optionName();
    setState(153);
    match(entdlrParser::T__0);
    setState(154);
    constant();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TopLevelDefContext ------------------------------------------------------------------

entdlrParser::TopLevelDefContext::TopLevelDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

entdlrParser::MessageContext* entdlrParser::TopLevelDefContext::message() {
  return getRuleContext<entdlrParser::MessageContext>(0);
}

entdlrParser::EnumDefinitionContext* entdlrParser::TopLevelDefContext::enumDefinition() {
  return getRuleContext<entdlrParser::EnumDefinitionContext>(0);
}

entdlrParser::ServiceContext* entdlrParser::TopLevelDefContext::service() {
  return getRuleContext<entdlrParser::ServiceContext>(0);
}


size_t entdlrParser::TopLevelDefContext::getRuleIndex() const {
  return entdlrParser::RuleTopLevelDef;
}

void entdlrParser::TopLevelDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTopLevelDef(this);
}

void entdlrParser::TopLevelDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTopLevelDef(this);
}


antlrcpp::Any entdlrParser::TopLevelDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitTopLevelDef(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::TopLevelDefContext* entdlrParser::topLevelDef() {
  TopLevelDefContext *_localctx = _tracker.createInstance<TopLevelDefContext>(_ctx, getState());
  enterRule(_localctx, 16, entdlrParser::RuleTopLevelDef);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(159);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case entdlrParser::MESSAGE: {
        enterOuterAlt(_localctx, 1);
        setState(156);
        message();
        break;
      }

      case entdlrParser::ENUM: {
        enterOuterAlt(_localctx, 2);
        setState(157);
        enumDefinition();
        break;
      }

      case entdlrParser::SERVICE: {
        enterOuterAlt(_localctx, 3);
        setState(158);
        service();
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

//----------------- MessageContext ------------------------------------------------------------------

entdlrParser::MessageContext::MessageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::MessageContext::MESSAGE() {
  return getToken(entdlrParser::MESSAGE, 0);
}

entdlrParser::MessageNameContext* entdlrParser::MessageContext::messageName() {
  return getRuleContext<entdlrParser::MessageNameContext>(0);
}

entdlrParser::MessageBodyContext* entdlrParser::MessageContext::messageBody() {
  return getRuleContext<entdlrParser::MessageBodyContext>(0);
}


size_t entdlrParser::MessageContext::getRuleIndex() const {
  return entdlrParser::RuleMessage;
}

void entdlrParser::MessageContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessage(this);
}

void entdlrParser::MessageContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessage(this);
}


antlrcpp::Any entdlrParser::MessageContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitMessage(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::MessageContext* entdlrParser::message() {
  MessageContext *_localctx = _tracker.createInstance<MessageContext>(_ctx, getState());
  enterRule(_localctx, 18, entdlrParser::RuleMessage);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    match(entdlrParser::MESSAGE);
    setState(162);
    messageName();
    setState(163);
    messageBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MessageBodyContext ------------------------------------------------------------------

entdlrParser::MessageBodyContext::MessageBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::MessageBodyContext::LBRACE() {
  return getToken(entdlrParser::LBRACE, 0);
}

tree::TerminalNode* entdlrParser::MessageBodyContext::RBRACE() {
  return getToken(entdlrParser::RBRACE, 0);
}

std::vector<entdlrParser::FieldContext *> entdlrParser::MessageBodyContext::field() {
  return getRuleContexts<entdlrParser::FieldContext>();
}

entdlrParser::FieldContext* entdlrParser::MessageBodyContext::field(size_t i) {
  return getRuleContext<entdlrParser::FieldContext>(i);
}

std::vector<entdlrParser::EnumDefinitionContext *> entdlrParser::MessageBodyContext::enumDefinition() {
  return getRuleContexts<entdlrParser::EnumDefinitionContext>();
}

entdlrParser::EnumDefinitionContext* entdlrParser::MessageBodyContext::enumDefinition(size_t i) {
  return getRuleContext<entdlrParser::EnumDefinitionContext>(i);
}

std::vector<entdlrParser::MessageContext *> entdlrParser::MessageBodyContext::message() {
  return getRuleContexts<entdlrParser::MessageContext>();
}

entdlrParser::MessageContext* entdlrParser::MessageBodyContext::message(size_t i) {
  return getRuleContext<entdlrParser::MessageContext>(i);
}

std::vector<entdlrParser::OptionContext *> entdlrParser::MessageBodyContext::option() {
  return getRuleContexts<entdlrParser::OptionContext>();
}

entdlrParser::OptionContext* entdlrParser::MessageBodyContext::option(size_t i) {
  return getRuleContext<entdlrParser::OptionContext>(i);
}

std::vector<entdlrParser::OneofContext *> entdlrParser::MessageBodyContext::oneof() {
  return getRuleContexts<entdlrParser::OneofContext>();
}

entdlrParser::OneofContext* entdlrParser::MessageBodyContext::oneof(size_t i) {
  return getRuleContext<entdlrParser::OneofContext>(i);
}

std::vector<entdlrParser::MapFieldContext *> entdlrParser::MessageBodyContext::mapField() {
  return getRuleContexts<entdlrParser::MapFieldContext>();
}

entdlrParser::MapFieldContext* entdlrParser::MessageBodyContext::mapField(size_t i) {
  return getRuleContext<entdlrParser::MapFieldContext>(i);
}

std::vector<entdlrParser::ReservedContext *> entdlrParser::MessageBodyContext::reserved() {
  return getRuleContexts<entdlrParser::ReservedContext>();
}

entdlrParser::ReservedContext* entdlrParser::MessageBodyContext::reserved(size_t i) {
  return getRuleContext<entdlrParser::ReservedContext>(i);
}

std::vector<entdlrParser::EmptyStatementContext *> entdlrParser::MessageBodyContext::emptyStatement() {
  return getRuleContexts<entdlrParser::EmptyStatementContext>();
}

entdlrParser::EmptyStatementContext* entdlrParser::MessageBodyContext::emptyStatement(size_t i) {
  return getRuleContext<entdlrParser::EmptyStatementContext>(i);
}


size_t entdlrParser::MessageBodyContext::getRuleIndex() const {
  return entdlrParser::RuleMessageBody;
}

void entdlrParser::MessageBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessageBody(this);
}

void entdlrParser::MessageBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessageBody(this);
}


antlrcpp::Any entdlrParser::MessageBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitMessageBody(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::MessageBodyContext* entdlrParser::messageBody() {
  MessageBodyContext *_localctx = _tracker.createInstance<MessageBodyContext>(_ctx, getState());
  enterRule(_localctx, 20, entdlrParser::RuleMessageBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(165);
    match(entdlrParser::LBRACE);
    setState(176);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << entdlrParser::BOOL)
      | (1ULL << entdlrParser::BYTES)
      | (1ULL << entdlrParser::DOUBLE)
      | (1ULL << entdlrParser::ENUM)
      | (1ULL << entdlrParser::FIXED32)
      | (1ULL << entdlrParser::FIXED64)
      | (1ULL << entdlrParser::FLOAT)
      | (1ULL << entdlrParser::INT32)
      | (1ULL << entdlrParser::INT64)
      | (1ULL << entdlrParser::MAP)
      | (1ULL << entdlrParser::MESSAGE)
      | (1ULL << entdlrParser::ONEOF)
      | (1ULL << entdlrParser::OPTION)
      | (1ULL << entdlrParser::PACKAGE)
      | (1ULL << entdlrParser::REPEATED)
      | (1ULL << entdlrParser::RESERVED)
      | (1ULL << entdlrParser::RPC)
      | (1ULL << entdlrParser::SERVICE)
      | (1ULL << entdlrParser::SFIXED32)
      | (1ULL << entdlrParser::SFIXED64)
      | (1ULL << entdlrParser::SINT32)
      | (1ULL << entdlrParser::SINT64)
      | (1ULL << entdlrParser::STREAM)
      | (1ULL << entdlrParser::STRING)
      | (1ULL << entdlrParser::SYNTAX)
      | (1ULL << entdlrParser::UINT32)
      | (1ULL << entdlrParser::UINT64)
      | (1ULL << entdlrParser::WEAK)
      | (1ULL << entdlrParser::Ident)
      | (1ULL << entdlrParser::SEMI)
      | (1ULL << entdlrParser::DOT))) != 0)) {
      setState(174);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
      case 1: {
        setState(166);
        field();
        break;
      }

      case 2: {
        setState(167);
        enumDefinition();
        break;
      }

      case 3: {
        setState(168);
        message();
        break;
      }

      case 4: {
        setState(169);
        option();
        break;
      }

      case 5: {
        setState(170);
        oneof();
        break;
      }

      case 6: {
        setState(171);
        mapField();
        break;
      }

      case 7: {
        setState(172);
        reserved();
        break;
      }

      case 8: {
        setState(173);
        emptyStatement();
        break;
      }

      }
      setState(178);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(179);
    match(entdlrParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumDefinitionContext ------------------------------------------------------------------

entdlrParser::EnumDefinitionContext::EnumDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::EnumDefinitionContext::ENUM() {
  return getToken(entdlrParser::ENUM, 0);
}

entdlrParser::EnumNameContext* entdlrParser::EnumDefinitionContext::enumName() {
  return getRuleContext<entdlrParser::EnumNameContext>(0);
}

entdlrParser::EnumBodyContext* entdlrParser::EnumDefinitionContext::enumBody() {
  return getRuleContext<entdlrParser::EnumBodyContext>(0);
}


size_t entdlrParser::EnumDefinitionContext::getRuleIndex() const {
  return entdlrParser::RuleEnumDefinition;
}

void entdlrParser::EnumDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumDefinition(this);
}

void entdlrParser::EnumDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumDefinition(this);
}


antlrcpp::Any entdlrParser::EnumDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitEnumDefinition(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::EnumDefinitionContext* entdlrParser::enumDefinition() {
  EnumDefinitionContext *_localctx = _tracker.createInstance<EnumDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 22, entdlrParser::RuleEnumDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(181);
    match(entdlrParser::ENUM);
    setState(182);
    enumName();
    setState(183);
    enumBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumBodyContext ------------------------------------------------------------------

entdlrParser::EnumBodyContext::EnumBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::EnumBodyContext::LBRACE() {
  return getToken(entdlrParser::LBRACE, 0);
}

tree::TerminalNode* entdlrParser::EnumBodyContext::RBRACE() {
  return getToken(entdlrParser::RBRACE, 0);
}

std::vector<entdlrParser::OptionContext *> entdlrParser::EnumBodyContext::option() {
  return getRuleContexts<entdlrParser::OptionContext>();
}

entdlrParser::OptionContext* entdlrParser::EnumBodyContext::option(size_t i) {
  return getRuleContext<entdlrParser::OptionContext>(i);
}

std::vector<entdlrParser::EnumFieldContext *> entdlrParser::EnumBodyContext::enumField() {
  return getRuleContexts<entdlrParser::EnumFieldContext>();
}

entdlrParser::EnumFieldContext* entdlrParser::EnumBodyContext::enumField(size_t i) {
  return getRuleContext<entdlrParser::EnumFieldContext>(i);
}

std::vector<entdlrParser::EmptyStatementContext *> entdlrParser::EnumBodyContext::emptyStatement() {
  return getRuleContexts<entdlrParser::EmptyStatementContext>();
}

entdlrParser::EmptyStatementContext* entdlrParser::EnumBodyContext::emptyStatement(size_t i) {
  return getRuleContext<entdlrParser::EmptyStatementContext>(i);
}


size_t entdlrParser::EnumBodyContext::getRuleIndex() const {
  return entdlrParser::RuleEnumBody;
}

void entdlrParser::EnumBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumBody(this);
}

void entdlrParser::EnumBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumBody(this);
}


antlrcpp::Any entdlrParser::EnumBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitEnumBody(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::EnumBodyContext* entdlrParser::enumBody() {
  EnumBodyContext *_localctx = _tracker.createInstance<EnumBodyContext>(_ctx, getState());
  enterRule(_localctx, 24, entdlrParser::RuleEnumBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    match(entdlrParser::LBRACE);
    setState(191);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << entdlrParser::OPTION)
      | (1ULL << entdlrParser::Ident)
      | (1ULL << entdlrParser::SEMI))) != 0)) {
      setState(189);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case entdlrParser::OPTION: {
          setState(186);
          option();
          break;
        }

        case entdlrParser::Ident: {
          setState(187);
          enumField();
          break;
        }

        case entdlrParser::SEMI: {
          setState(188);
          emptyStatement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(193);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(194);
    match(entdlrParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumFieldContext ------------------------------------------------------------------

entdlrParser::EnumFieldContext::EnumFieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::EnumFieldContext::Ident() {
  return getToken(entdlrParser::Ident, 0);
}

tree::TerminalNode* entdlrParser::EnumFieldContext::ASSIGN() {
  return getToken(entdlrParser::ASSIGN, 0);
}

tree::TerminalNode* entdlrParser::EnumFieldContext::IntLit() {
  return getToken(entdlrParser::IntLit, 0);
}

tree::TerminalNode* entdlrParser::EnumFieldContext::SEMI() {
  return getToken(entdlrParser::SEMI, 0);
}

tree::TerminalNode* entdlrParser::EnumFieldContext::MINUS() {
  return getToken(entdlrParser::MINUS, 0);
}

tree::TerminalNode* entdlrParser::EnumFieldContext::LBRACK() {
  return getToken(entdlrParser::LBRACK, 0);
}

std::vector<entdlrParser::EnumValueOptionContext *> entdlrParser::EnumFieldContext::enumValueOption() {
  return getRuleContexts<entdlrParser::EnumValueOptionContext>();
}

entdlrParser::EnumValueOptionContext* entdlrParser::EnumFieldContext::enumValueOption(size_t i) {
  return getRuleContext<entdlrParser::EnumValueOptionContext>(i);
}

tree::TerminalNode* entdlrParser::EnumFieldContext::RBRACK() {
  return getToken(entdlrParser::RBRACK, 0);
}

std::vector<tree::TerminalNode *> entdlrParser::EnumFieldContext::COMMA() {
  return getTokens(entdlrParser::COMMA);
}

tree::TerminalNode* entdlrParser::EnumFieldContext::COMMA(size_t i) {
  return getToken(entdlrParser::COMMA, i);
}


size_t entdlrParser::EnumFieldContext::getRuleIndex() const {
  return entdlrParser::RuleEnumField;
}

void entdlrParser::EnumFieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumField(this);
}

void entdlrParser::EnumFieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumField(this);
}


antlrcpp::Any entdlrParser::EnumFieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitEnumField(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::EnumFieldContext* entdlrParser::enumField() {
  EnumFieldContext *_localctx = _tracker.createInstance<EnumFieldContext>(_ctx, getState());
  enterRule(_localctx, 26, entdlrParser::RuleEnumField);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(196);
    match(entdlrParser::Ident);
    setState(197);
    match(entdlrParser::ASSIGN);
    setState(199);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == entdlrParser::MINUS) {
      setState(198);
      match(entdlrParser::MINUS);
    }
    setState(201);
    match(entdlrParser::IntLit);
    setState(213);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == entdlrParser::LBRACK) {
      setState(202);
      match(entdlrParser::LBRACK);
      setState(203);
      enumValueOption();
      setState(208);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == entdlrParser::COMMA) {
        setState(204);
        match(entdlrParser::COMMA);
        setState(205);
        enumValueOption();
        setState(210);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(211);
      match(entdlrParser::RBRACK);
    }
    setState(215);
    match(entdlrParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumValueOptionContext ------------------------------------------------------------------

entdlrParser::EnumValueOptionContext::EnumValueOptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

entdlrParser::OptionNameContext* entdlrParser::EnumValueOptionContext::optionName() {
  return getRuleContext<entdlrParser::OptionNameContext>(0);
}

tree::TerminalNode* entdlrParser::EnumValueOptionContext::ASSIGN() {
  return getToken(entdlrParser::ASSIGN, 0);
}

entdlrParser::ConstantContext* entdlrParser::EnumValueOptionContext::constant() {
  return getRuleContext<entdlrParser::ConstantContext>(0);
}


size_t entdlrParser::EnumValueOptionContext::getRuleIndex() const {
  return entdlrParser::RuleEnumValueOption;
}

void entdlrParser::EnumValueOptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumValueOption(this);
}

void entdlrParser::EnumValueOptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumValueOption(this);
}


antlrcpp::Any entdlrParser::EnumValueOptionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitEnumValueOption(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::EnumValueOptionContext* entdlrParser::enumValueOption() {
  EnumValueOptionContext *_localctx = _tracker.createInstance<EnumValueOptionContext>(_ctx, getState());
  enterRule(_localctx, 28, entdlrParser::RuleEnumValueOption);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(217);
    optionName();
    setState(218);
    match(entdlrParser::ASSIGN);
    setState(219);
    constant();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ServiceContext ------------------------------------------------------------------

entdlrParser::ServiceContext::ServiceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::ServiceContext::SERVICE() {
  return getToken(entdlrParser::SERVICE, 0);
}

entdlrParser::ServiceNameContext* entdlrParser::ServiceContext::serviceName() {
  return getRuleContext<entdlrParser::ServiceNameContext>(0);
}

tree::TerminalNode* entdlrParser::ServiceContext::LBRACE() {
  return getToken(entdlrParser::LBRACE, 0);
}

tree::TerminalNode* entdlrParser::ServiceContext::RBRACE() {
  return getToken(entdlrParser::RBRACE, 0);
}

std::vector<entdlrParser::OptionContext *> entdlrParser::ServiceContext::option() {
  return getRuleContexts<entdlrParser::OptionContext>();
}

entdlrParser::OptionContext* entdlrParser::ServiceContext::option(size_t i) {
  return getRuleContext<entdlrParser::OptionContext>(i);
}

std::vector<entdlrParser::RpcContext *> entdlrParser::ServiceContext::rpc() {
  return getRuleContexts<entdlrParser::RpcContext>();
}

entdlrParser::RpcContext* entdlrParser::ServiceContext::rpc(size_t i) {
  return getRuleContext<entdlrParser::RpcContext>(i);
}

std::vector<entdlrParser::EmptyStatementContext *> entdlrParser::ServiceContext::emptyStatement() {
  return getRuleContexts<entdlrParser::EmptyStatementContext>();
}

entdlrParser::EmptyStatementContext* entdlrParser::ServiceContext::emptyStatement(size_t i) {
  return getRuleContext<entdlrParser::EmptyStatementContext>(i);
}


size_t entdlrParser::ServiceContext::getRuleIndex() const {
  return entdlrParser::RuleService;
}

void entdlrParser::ServiceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterService(this);
}

void entdlrParser::ServiceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitService(this);
}


antlrcpp::Any entdlrParser::ServiceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitService(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::ServiceContext* entdlrParser::service() {
  ServiceContext *_localctx = _tracker.createInstance<ServiceContext>(_ctx, getState());
  enterRule(_localctx, 30, entdlrParser::RuleService);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(221);
    match(entdlrParser::SERVICE);
    setState(222);
    serviceName();
    setState(223);
    match(entdlrParser::LBRACE);
    setState(229);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << entdlrParser::OPTION)
      | (1ULL << entdlrParser::RPC)
      | (1ULL << entdlrParser::SEMI))) != 0)) {
      setState(227);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case entdlrParser::OPTION: {
          setState(224);
          option();
          break;
        }

        case entdlrParser::RPC: {
          setState(225);
          rpc();
          break;
        }

        case entdlrParser::SEMI: {
          setState(226);
          emptyStatement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(231);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(232);
    match(entdlrParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RpcContext ------------------------------------------------------------------

entdlrParser::RpcContext::RpcContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::RpcContext::RPC() {
  return getToken(entdlrParser::RPC, 0);
}

entdlrParser::RpcNameContext* entdlrParser::RpcContext::rpcName() {
  return getRuleContext<entdlrParser::RpcNameContext>(0);
}

std::vector<tree::TerminalNode *> entdlrParser::RpcContext::LPAREN() {
  return getTokens(entdlrParser::LPAREN);
}

tree::TerminalNode* entdlrParser::RpcContext::LPAREN(size_t i) {
  return getToken(entdlrParser::LPAREN, i);
}

std::vector<entdlrParser::MessageTypeContext *> entdlrParser::RpcContext::messageType() {
  return getRuleContexts<entdlrParser::MessageTypeContext>();
}

entdlrParser::MessageTypeContext* entdlrParser::RpcContext::messageType(size_t i) {
  return getRuleContext<entdlrParser::MessageTypeContext>(i);
}

std::vector<tree::TerminalNode *> entdlrParser::RpcContext::RPAREN() {
  return getTokens(entdlrParser::RPAREN);
}

tree::TerminalNode* entdlrParser::RpcContext::RPAREN(size_t i) {
  return getToken(entdlrParser::RPAREN, i);
}

tree::TerminalNode* entdlrParser::RpcContext::RETURNS() {
  return getToken(entdlrParser::RETURNS, 0);
}

tree::TerminalNode* entdlrParser::RpcContext::SEMI() {
  return getToken(entdlrParser::SEMI, 0);
}

std::vector<tree::TerminalNode *> entdlrParser::RpcContext::STREAM() {
  return getTokens(entdlrParser::STREAM);
}

tree::TerminalNode* entdlrParser::RpcContext::STREAM(size_t i) {
  return getToken(entdlrParser::STREAM, i);
}

tree::TerminalNode* entdlrParser::RpcContext::LBRACE() {
  return getToken(entdlrParser::LBRACE, 0);
}

tree::TerminalNode* entdlrParser::RpcContext::RBRACE() {
  return getToken(entdlrParser::RBRACE, 0);
}

std::vector<entdlrParser::OptionContext *> entdlrParser::RpcContext::option() {
  return getRuleContexts<entdlrParser::OptionContext>();
}

entdlrParser::OptionContext* entdlrParser::RpcContext::option(size_t i) {
  return getRuleContext<entdlrParser::OptionContext>(i);
}

std::vector<entdlrParser::EmptyStatementContext *> entdlrParser::RpcContext::emptyStatement() {
  return getRuleContexts<entdlrParser::EmptyStatementContext>();
}

entdlrParser::EmptyStatementContext* entdlrParser::RpcContext::emptyStatement(size_t i) {
  return getRuleContext<entdlrParser::EmptyStatementContext>(i);
}


size_t entdlrParser::RpcContext::getRuleIndex() const {
  return entdlrParser::RuleRpc;
}

void entdlrParser::RpcContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRpc(this);
}

void entdlrParser::RpcContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRpc(this);
}


antlrcpp::Any entdlrParser::RpcContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitRpc(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::RpcContext* entdlrParser::rpc() {
  RpcContext *_localctx = _tracker.createInstance<RpcContext>(_ctx, getState());
  enterRule(_localctx, 32, entdlrParser::RuleRpc);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(234);
    match(entdlrParser::RPC);
    setState(235);
    rpcName();
    setState(236);
    match(entdlrParser::LPAREN);
    setState(238);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == entdlrParser::STREAM) {
      setState(237);
      match(entdlrParser::STREAM);
    }
    setState(240);
    messageType();
    setState(241);
    match(entdlrParser::RPAREN);
    setState(242);
    match(entdlrParser::RETURNS);
    setState(243);
    match(entdlrParser::LPAREN);
    setState(245);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == entdlrParser::STREAM) {
      setState(244);
      match(entdlrParser::STREAM);
    }
    setState(247);
    messageType();
    setState(248);
    match(entdlrParser::RPAREN);
    setState(259);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case entdlrParser::LBRACE: {
        setState(249);
        match(entdlrParser::LBRACE);
        setState(254);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == entdlrParser::OPTION

        || _la == entdlrParser::SEMI) {
          setState(252);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case entdlrParser::OPTION: {
              setState(250);
              option();
              break;
            }

            case entdlrParser::SEMI: {
              setState(251);
              emptyStatement();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(256);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(257);
        match(entdlrParser::RBRACE);
        break;
      }

      case entdlrParser::SEMI: {
        setState(258);
        match(entdlrParser::SEMI);
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

//----------------- ReservedContext ------------------------------------------------------------------

entdlrParser::ReservedContext::ReservedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::ReservedContext::RESERVED() {
  return getToken(entdlrParser::RESERVED, 0);
}

tree::TerminalNode* entdlrParser::ReservedContext::SEMI() {
  return getToken(entdlrParser::SEMI, 0);
}

entdlrParser::RangesContext* entdlrParser::ReservedContext::ranges() {
  return getRuleContext<entdlrParser::RangesContext>(0);
}

entdlrParser::FieldNamesContext* entdlrParser::ReservedContext::fieldNames() {
  return getRuleContext<entdlrParser::FieldNamesContext>(0);
}


size_t entdlrParser::ReservedContext::getRuleIndex() const {
  return entdlrParser::RuleReserved;
}

void entdlrParser::ReservedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReserved(this);
}

void entdlrParser::ReservedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReserved(this);
}


antlrcpp::Any entdlrParser::ReservedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitReserved(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::ReservedContext* entdlrParser::reserved() {
  ReservedContext *_localctx = _tracker.createInstance<ReservedContext>(_ctx, getState());
  enterRule(_localctx, 34, entdlrParser::RuleReserved);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(261);
    match(entdlrParser::RESERVED);
    setState(264);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case entdlrParser::IntLit: {
        setState(262);
        ranges();
        break;
      }

      case entdlrParser::StrLit: {
        setState(263);
        fieldNames();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(266);
    match(entdlrParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RangesContext ------------------------------------------------------------------

entdlrParser::RangesContext::RangesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<entdlrParser::RangeContext *> entdlrParser::RangesContext::range() {
  return getRuleContexts<entdlrParser::RangeContext>();
}

entdlrParser::RangeContext* entdlrParser::RangesContext::range(size_t i) {
  return getRuleContext<entdlrParser::RangeContext>(i);
}

std::vector<tree::TerminalNode *> entdlrParser::RangesContext::COMMA() {
  return getTokens(entdlrParser::COMMA);
}

tree::TerminalNode* entdlrParser::RangesContext::COMMA(size_t i) {
  return getToken(entdlrParser::COMMA, i);
}


size_t entdlrParser::RangesContext::getRuleIndex() const {
  return entdlrParser::RuleRanges;
}

void entdlrParser::RangesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRanges(this);
}

void entdlrParser::RangesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRanges(this);
}


antlrcpp::Any entdlrParser::RangesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitRanges(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::RangesContext* entdlrParser::ranges() {
  RangesContext *_localctx = _tracker.createInstance<RangesContext>(_ctx, getState());
  enterRule(_localctx, 36, entdlrParser::RuleRanges);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(268);
    range();
    setState(273);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == entdlrParser::COMMA) {
      setState(269);
      match(entdlrParser::COMMA);
      setState(270);
      range();
      setState(275);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RangeContext ------------------------------------------------------------------

entdlrParser::RangeContext::RangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> entdlrParser::RangeContext::IntLit() {
  return getTokens(entdlrParser::IntLit);
}

tree::TerminalNode* entdlrParser::RangeContext::IntLit(size_t i) {
  return getToken(entdlrParser::IntLit, i);
}

tree::TerminalNode* entdlrParser::RangeContext::TO() {
  return getToken(entdlrParser::TO, 0);
}


size_t entdlrParser::RangeContext::getRuleIndex() const {
  return entdlrParser::RuleRange;
}

void entdlrParser::RangeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRange(this);
}

void entdlrParser::RangeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRange(this);
}


antlrcpp::Any entdlrParser::RangeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitRange(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::RangeContext* entdlrParser::range() {
  RangeContext *_localctx = _tracker.createInstance<RangeContext>(_ctx, getState());
  enterRule(_localctx, 38, entdlrParser::RuleRange);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(280);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(276);
      match(entdlrParser::IntLit);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(277);
      match(entdlrParser::IntLit);
      setState(278);
      match(entdlrParser::TO);
      setState(279);
      match(entdlrParser::IntLit);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldNamesContext ------------------------------------------------------------------

entdlrParser::FieldNamesContext::FieldNamesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> entdlrParser::FieldNamesContext::StrLit() {
  return getTokens(entdlrParser::StrLit);
}

tree::TerminalNode* entdlrParser::FieldNamesContext::StrLit(size_t i) {
  return getToken(entdlrParser::StrLit, i);
}

std::vector<tree::TerminalNode *> entdlrParser::FieldNamesContext::COMMA() {
  return getTokens(entdlrParser::COMMA);
}

tree::TerminalNode* entdlrParser::FieldNamesContext::COMMA(size_t i) {
  return getToken(entdlrParser::COMMA, i);
}


size_t entdlrParser::FieldNamesContext::getRuleIndex() const {
  return entdlrParser::RuleFieldNames;
}

void entdlrParser::FieldNamesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldNames(this);
}

void entdlrParser::FieldNamesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldNames(this);
}


antlrcpp::Any entdlrParser::FieldNamesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitFieldNames(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::FieldNamesContext* entdlrParser::fieldNames() {
  FieldNamesContext *_localctx = _tracker.createInstance<FieldNamesContext>(_ctx, getState());
  enterRule(_localctx, 40, entdlrParser::RuleFieldNames);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(282);
    match(entdlrParser::StrLit);
    setState(287);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == entdlrParser::COMMA) {
      setState(283);
      match(entdlrParser::COMMA);
      setState(284);
      match(entdlrParser::StrLit);
      setState(289);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

entdlrParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::TypeContext::DOUBLE() {
  return getToken(entdlrParser::DOUBLE, 0);
}

tree::TerminalNode* entdlrParser::TypeContext::FLOAT() {
  return getToken(entdlrParser::FLOAT, 0);
}

tree::TerminalNode* entdlrParser::TypeContext::INT32() {
  return getToken(entdlrParser::INT32, 0);
}

tree::TerminalNode* entdlrParser::TypeContext::INT64() {
  return getToken(entdlrParser::INT64, 0);
}

tree::TerminalNode* entdlrParser::TypeContext::UINT32() {
  return getToken(entdlrParser::UINT32, 0);
}

tree::TerminalNode* entdlrParser::TypeContext::UINT64() {
  return getToken(entdlrParser::UINT64, 0);
}

tree::TerminalNode* entdlrParser::TypeContext::SINT32() {
  return getToken(entdlrParser::SINT32, 0);
}

tree::TerminalNode* entdlrParser::TypeContext::SINT64() {
  return getToken(entdlrParser::SINT64, 0);
}

tree::TerminalNode* entdlrParser::TypeContext::FIXED32() {
  return getToken(entdlrParser::FIXED32, 0);
}

tree::TerminalNode* entdlrParser::TypeContext::FIXED64() {
  return getToken(entdlrParser::FIXED64, 0);
}

tree::TerminalNode* entdlrParser::TypeContext::SFIXED32() {
  return getToken(entdlrParser::SFIXED32, 0);
}

tree::TerminalNode* entdlrParser::TypeContext::SFIXED64() {
  return getToken(entdlrParser::SFIXED64, 0);
}

tree::TerminalNode* entdlrParser::TypeContext::BOOL() {
  return getToken(entdlrParser::BOOL, 0);
}

tree::TerminalNode* entdlrParser::TypeContext::STRING() {
  return getToken(entdlrParser::STRING, 0);
}

tree::TerminalNode* entdlrParser::TypeContext::BYTES() {
  return getToken(entdlrParser::BYTES, 0);
}

entdlrParser::MessageOrEnumTypeContext* entdlrParser::TypeContext::messageOrEnumType() {
  return getRuleContext<entdlrParser::MessageOrEnumTypeContext>(0);
}


size_t entdlrParser::TypeContext::getRuleIndex() const {
  return entdlrParser::RuleType;
}

void entdlrParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void entdlrParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


antlrcpp::Any entdlrParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::TypeContext* entdlrParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 42, entdlrParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(292);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(290);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << entdlrParser::BOOL)
        | (1ULL << entdlrParser::BYTES)
        | (1ULL << entdlrParser::DOUBLE)
        | (1ULL << entdlrParser::FIXED32)
        | (1ULL << entdlrParser::FIXED64)
        | (1ULL << entdlrParser::FLOAT)
        | (1ULL << entdlrParser::INT32)
        | (1ULL << entdlrParser::INT64)
        | (1ULL << entdlrParser::SFIXED32)
        | (1ULL << entdlrParser::SFIXED64)
        | (1ULL << entdlrParser::SINT32)
        | (1ULL << entdlrParser::SINT64)
        | (1ULL << entdlrParser::STRING)
        | (1ULL << entdlrParser::UINT32)
        | (1ULL << entdlrParser::UINT64))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(291);
      messageOrEnumType();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldNumberContext ------------------------------------------------------------------

entdlrParser::FieldNumberContext::FieldNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::FieldNumberContext::IntLit() {
  return getToken(entdlrParser::IntLit, 0);
}


size_t entdlrParser::FieldNumberContext::getRuleIndex() const {
  return entdlrParser::RuleFieldNumber;
}

void entdlrParser::FieldNumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldNumber(this);
}

void entdlrParser::FieldNumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldNumber(this);
}


antlrcpp::Any entdlrParser::FieldNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitFieldNumber(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::FieldNumberContext* entdlrParser::fieldNumber() {
  FieldNumberContext *_localctx = _tracker.createInstance<FieldNumberContext>(_ctx, getState());
  enterRule(_localctx, 44, entdlrParser::RuleFieldNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(294);
    match(entdlrParser::IntLit);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldContext ------------------------------------------------------------------

entdlrParser::FieldContext::FieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

entdlrParser::TypeContext* entdlrParser::FieldContext::type() {
  return getRuleContext<entdlrParser::TypeContext>(0);
}

entdlrParser::FieldNameContext* entdlrParser::FieldContext::fieldName() {
  return getRuleContext<entdlrParser::FieldNameContext>(0);
}

tree::TerminalNode* entdlrParser::FieldContext::ASSIGN() {
  return getToken(entdlrParser::ASSIGN, 0);
}

entdlrParser::FieldNumberContext* entdlrParser::FieldContext::fieldNumber() {
  return getRuleContext<entdlrParser::FieldNumberContext>(0);
}

tree::TerminalNode* entdlrParser::FieldContext::SEMI() {
  return getToken(entdlrParser::SEMI, 0);
}

tree::TerminalNode* entdlrParser::FieldContext::REPEATED() {
  return getToken(entdlrParser::REPEATED, 0);
}

tree::TerminalNode* entdlrParser::FieldContext::LBRACK() {
  return getToken(entdlrParser::LBRACK, 0);
}

entdlrParser::FieldOptionsContext* entdlrParser::FieldContext::fieldOptions() {
  return getRuleContext<entdlrParser::FieldOptionsContext>(0);
}

tree::TerminalNode* entdlrParser::FieldContext::RBRACK() {
  return getToken(entdlrParser::RBRACK, 0);
}


size_t entdlrParser::FieldContext::getRuleIndex() const {
  return entdlrParser::RuleField;
}

void entdlrParser::FieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterField(this);
}

void entdlrParser::FieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitField(this);
}


antlrcpp::Any entdlrParser::FieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitField(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::FieldContext* entdlrParser::field() {
  FieldContext *_localctx = _tracker.createInstance<FieldContext>(_ctx, getState());
  enterRule(_localctx, 46, entdlrParser::RuleField);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(297);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == entdlrParser::REPEATED) {
      setState(296);
      match(entdlrParser::REPEATED);
    }
    setState(299);
    type();
    setState(300);
    fieldName();
    setState(301);
    match(entdlrParser::ASSIGN);
    setState(302);
    fieldNumber();
    setState(307);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == entdlrParser::LBRACK) {
      setState(303);
      match(entdlrParser::LBRACK);
      setState(304);
      fieldOptions();
      setState(305);
      match(entdlrParser::RBRACK);
    }
    setState(309);
    match(entdlrParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldOptionsContext ------------------------------------------------------------------

entdlrParser::FieldOptionsContext::FieldOptionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<entdlrParser::FieldOptionContext *> entdlrParser::FieldOptionsContext::fieldOption() {
  return getRuleContexts<entdlrParser::FieldOptionContext>();
}

entdlrParser::FieldOptionContext* entdlrParser::FieldOptionsContext::fieldOption(size_t i) {
  return getRuleContext<entdlrParser::FieldOptionContext>(i);
}

std::vector<tree::TerminalNode *> entdlrParser::FieldOptionsContext::COMMA() {
  return getTokens(entdlrParser::COMMA);
}

tree::TerminalNode* entdlrParser::FieldOptionsContext::COMMA(size_t i) {
  return getToken(entdlrParser::COMMA, i);
}


size_t entdlrParser::FieldOptionsContext::getRuleIndex() const {
  return entdlrParser::RuleFieldOptions;
}

void entdlrParser::FieldOptionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldOptions(this);
}

void entdlrParser::FieldOptionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldOptions(this);
}


antlrcpp::Any entdlrParser::FieldOptionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitFieldOptions(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::FieldOptionsContext* entdlrParser::fieldOptions() {
  FieldOptionsContext *_localctx = _tracker.createInstance<FieldOptionsContext>(_ctx, getState());
  enterRule(_localctx, 48, entdlrParser::RuleFieldOptions);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(311);
    fieldOption();
    setState(316);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == entdlrParser::COMMA) {
      setState(312);
      match(entdlrParser::COMMA);
      setState(313);
      fieldOption();
      setState(318);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldOptionContext ------------------------------------------------------------------

entdlrParser::FieldOptionContext::FieldOptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

entdlrParser::OptionNameContext* entdlrParser::FieldOptionContext::optionName() {
  return getRuleContext<entdlrParser::OptionNameContext>(0);
}

tree::TerminalNode* entdlrParser::FieldOptionContext::ASSIGN() {
  return getToken(entdlrParser::ASSIGN, 0);
}

entdlrParser::ConstantContext* entdlrParser::FieldOptionContext::constant() {
  return getRuleContext<entdlrParser::ConstantContext>(0);
}


size_t entdlrParser::FieldOptionContext::getRuleIndex() const {
  return entdlrParser::RuleFieldOption;
}

void entdlrParser::FieldOptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldOption(this);
}

void entdlrParser::FieldOptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldOption(this);
}


antlrcpp::Any entdlrParser::FieldOptionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitFieldOption(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::FieldOptionContext* entdlrParser::fieldOption() {
  FieldOptionContext *_localctx = _tracker.createInstance<FieldOptionContext>(_ctx, getState());
  enterRule(_localctx, 50, entdlrParser::RuleFieldOption);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(319);
    optionName();
    setState(320);
    match(entdlrParser::ASSIGN);
    setState(321);
    constant();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OneofContext ------------------------------------------------------------------

entdlrParser::OneofContext::OneofContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::OneofContext::ONEOF() {
  return getToken(entdlrParser::ONEOF, 0);
}

entdlrParser::OneofNameContext* entdlrParser::OneofContext::oneofName() {
  return getRuleContext<entdlrParser::OneofNameContext>(0);
}

tree::TerminalNode* entdlrParser::OneofContext::LBRACE() {
  return getToken(entdlrParser::LBRACE, 0);
}

tree::TerminalNode* entdlrParser::OneofContext::RBRACE() {
  return getToken(entdlrParser::RBRACE, 0);
}

std::vector<entdlrParser::OneofFieldContext *> entdlrParser::OneofContext::oneofField() {
  return getRuleContexts<entdlrParser::OneofFieldContext>();
}

entdlrParser::OneofFieldContext* entdlrParser::OneofContext::oneofField(size_t i) {
  return getRuleContext<entdlrParser::OneofFieldContext>(i);
}

std::vector<entdlrParser::EmptyStatementContext *> entdlrParser::OneofContext::emptyStatement() {
  return getRuleContexts<entdlrParser::EmptyStatementContext>();
}

entdlrParser::EmptyStatementContext* entdlrParser::OneofContext::emptyStatement(size_t i) {
  return getRuleContext<entdlrParser::EmptyStatementContext>(i);
}


size_t entdlrParser::OneofContext::getRuleIndex() const {
  return entdlrParser::RuleOneof;
}

void entdlrParser::OneofContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOneof(this);
}

void entdlrParser::OneofContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOneof(this);
}


antlrcpp::Any entdlrParser::OneofContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitOneof(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::OneofContext* entdlrParser::oneof() {
  OneofContext *_localctx = _tracker.createInstance<OneofContext>(_ctx, getState());
  enterRule(_localctx, 52, entdlrParser::RuleOneof);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(323);
    match(entdlrParser::ONEOF);
    setState(324);
    oneofName();
    setState(325);
    match(entdlrParser::LBRACE);
    setState(330);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << entdlrParser::BOOL)
      | (1ULL << entdlrParser::BYTES)
      | (1ULL << entdlrParser::DOUBLE)
      | (1ULL << entdlrParser::FIXED32)
      | (1ULL << entdlrParser::FIXED64)
      | (1ULL << entdlrParser::FLOAT)
      | (1ULL << entdlrParser::INT32)
      | (1ULL << entdlrParser::INT64)
      | (1ULL << entdlrParser::MESSAGE)
      | (1ULL << entdlrParser::OPTION)
      | (1ULL << entdlrParser::PACKAGE)
      | (1ULL << entdlrParser::RPC)
      | (1ULL << entdlrParser::SERVICE)
      | (1ULL << entdlrParser::SFIXED32)
      | (1ULL << entdlrParser::SFIXED64)
      | (1ULL << entdlrParser::SINT32)
      | (1ULL << entdlrParser::SINT64)
      | (1ULL << entdlrParser::STREAM)
      | (1ULL << entdlrParser::STRING)
      | (1ULL << entdlrParser::SYNTAX)
      | (1ULL << entdlrParser::UINT32)
      | (1ULL << entdlrParser::UINT64)
      | (1ULL << entdlrParser::WEAK)
      | (1ULL << entdlrParser::Ident)
      | (1ULL << entdlrParser::SEMI)
      | (1ULL << entdlrParser::DOT))) != 0)) {
      setState(328);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case entdlrParser::BOOL:
        case entdlrParser::BYTES:
        case entdlrParser::DOUBLE:
        case entdlrParser::FIXED32:
        case entdlrParser::FIXED64:
        case entdlrParser::FLOAT:
        case entdlrParser::INT32:
        case entdlrParser::INT64:
        case entdlrParser::MESSAGE:
        case entdlrParser::OPTION:
        case entdlrParser::PACKAGE:
        case entdlrParser::RPC:
        case entdlrParser::SERVICE:
        case entdlrParser::SFIXED32:
        case entdlrParser::SFIXED64:
        case entdlrParser::SINT32:
        case entdlrParser::SINT64:
        case entdlrParser::STREAM:
        case entdlrParser::STRING:
        case entdlrParser::SYNTAX:
        case entdlrParser::UINT32:
        case entdlrParser::UINT64:
        case entdlrParser::WEAK:
        case entdlrParser::Ident:
        case entdlrParser::DOT: {
          setState(326);
          oneofField();
          break;
        }

        case entdlrParser::SEMI: {
          setState(327);
          emptyStatement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(332);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(333);
    match(entdlrParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OneofFieldContext ------------------------------------------------------------------

entdlrParser::OneofFieldContext::OneofFieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

entdlrParser::TypeContext* entdlrParser::OneofFieldContext::type() {
  return getRuleContext<entdlrParser::TypeContext>(0);
}

entdlrParser::FieldNameContext* entdlrParser::OneofFieldContext::fieldName() {
  return getRuleContext<entdlrParser::FieldNameContext>(0);
}

tree::TerminalNode* entdlrParser::OneofFieldContext::ASSIGN() {
  return getToken(entdlrParser::ASSIGN, 0);
}

entdlrParser::FieldNumberContext* entdlrParser::OneofFieldContext::fieldNumber() {
  return getRuleContext<entdlrParser::FieldNumberContext>(0);
}

tree::TerminalNode* entdlrParser::OneofFieldContext::SEMI() {
  return getToken(entdlrParser::SEMI, 0);
}

tree::TerminalNode* entdlrParser::OneofFieldContext::LBRACK() {
  return getToken(entdlrParser::LBRACK, 0);
}

entdlrParser::FieldOptionsContext* entdlrParser::OneofFieldContext::fieldOptions() {
  return getRuleContext<entdlrParser::FieldOptionsContext>(0);
}

tree::TerminalNode* entdlrParser::OneofFieldContext::RBRACK() {
  return getToken(entdlrParser::RBRACK, 0);
}


size_t entdlrParser::OneofFieldContext::getRuleIndex() const {
  return entdlrParser::RuleOneofField;
}

void entdlrParser::OneofFieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOneofField(this);
}

void entdlrParser::OneofFieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOneofField(this);
}


antlrcpp::Any entdlrParser::OneofFieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitOneofField(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::OneofFieldContext* entdlrParser::oneofField() {
  OneofFieldContext *_localctx = _tracker.createInstance<OneofFieldContext>(_ctx, getState());
  enterRule(_localctx, 54, entdlrParser::RuleOneofField);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(335);
    type();
    setState(336);
    fieldName();
    setState(337);
    match(entdlrParser::ASSIGN);
    setState(338);
    fieldNumber();
    setState(343);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == entdlrParser::LBRACK) {
      setState(339);
      match(entdlrParser::LBRACK);
      setState(340);
      fieldOptions();
      setState(341);
      match(entdlrParser::RBRACK);
    }
    setState(345);
    match(entdlrParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MapFieldContext ------------------------------------------------------------------

entdlrParser::MapFieldContext::MapFieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::MapFieldContext::MAP() {
  return getToken(entdlrParser::MAP, 0);
}

tree::TerminalNode* entdlrParser::MapFieldContext::LCHEVR() {
  return getToken(entdlrParser::LCHEVR, 0);
}

entdlrParser::KeyTypeContext* entdlrParser::MapFieldContext::keyType() {
  return getRuleContext<entdlrParser::KeyTypeContext>(0);
}

tree::TerminalNode* entdlrParser::MapFieldContext::COMMA() {
  return getToken(entdlrParser::COMMA, 0);
}

entdlrParser::TypeContext* entdlrParser::MapFieldContext::type() {
  return getRuleContext<entdlrParser::TypeContext>(0);
}

tree::TerminalNode* entdlrParser::MapFieldContext::RCHEVR() {
  return getToken(entdlrParser::RCHEVR, 0);
}

entdlrParser::MapNameContext* entdlrParser::MapFieldContext::mapName() {
  return getRuleContext<entdlrParser::MapNameContext>(0);
}

tree::TerminalNode* entdlrParser::MapFieldContext::ASSIGN() {
  return getToken(entdlrParser::ASSIGN, 0);
}

entdlrParser::FieldNumberContext* entdlrParser::MapFieldContext::fieldNumber() {
  return getRuleContext<entdlrParser::FieldNumberContext>(0);
}

tree::TerminalNode* entdlrParser::MapFieldContext::SEMI() {
  return getToken(entdlrParser::SEMI, 0);
}

tree::TerminalNode* entdlrParser::MapFieldContext::LBRACK() {
  return getToken(entdlrParser::LBRACK, 0);
}

entdlrParser::FieldOptionsContext* entdlrParser::MapFieldContext::fieldOptions() {
  return getRuleContext<entdlrParser::FieldOptionsContext>(0);
}

tree::TerminalNode* entdlrParser::MapFieldContext::RBRACK() {
  return getToken(entdlrParser::RBRACK, 0);
}


size_t entdlrParser::MapFieldContext::getRuleIndex() const {
  return entdlrParser::RuleMapField;
}

void entdlrParser::MapFieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMapField(this);
}

void entdlrParser::MapFieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMapField(this);
}


antlrcpp::Any entdlrParser::MapFieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitMapField(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::MapFieldContext* entdlrParser::mapField() {
  MapFieldContext *_localctx = _tracker.createInstance<MapFieldContext>(_ctx, getState());
  enterRule(_localctx, 56, entdlrParser::RuleMapField);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(347);
    match(entdlrParser::MAP);
    setState(348);
    match(entdlrParser::LCHEVR);
    setState(349);
    keyType();
    setState(350);
    match(entdlrParser::COMMA);
    setState(351);
    type();
    setState(352);
    match(entdlrParser::RCHEVR);
    setState(353);
    mapName();
    setState(354);
    match(entdlrParser::ASSIGN);
    setState(355);
    fieldNumber();
    setState(360);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == entdlrParser::LBRACK) {
      setState(356);
      match(entdlrParser::LBRACK);
      setState(357);
      fieldOptions();
      setState(358);
      match(entdlrParser::RBRACK);
    }
    setState(362);
    match(entdlrParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeyTypeContext ------------------------------------------------------------------

entdlrParser::KeyTypeContext::KeyTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::KeyTypeContext::INT32() {
  return getToken(entdlrParser::INT32, 0);
}

tree::TerminalNode* entdlrParser::KeyTypeContext::INT64() {
  return getToken(entdlrParser::INT64, 0);
}

tree::TerminalNode* entdlrParser::KeyTypeContext::UINT32() {
  return getToken(entdlrParser::UINT32, 0);
}

tree::TerminalNode* entdlrParser::KeyTypeContext::UINT64() {
  return getToken(entdlrParser::UINT64, 0);
}

tree::TerminalNode* entdlrParser::KeyTypeContext::SINT32() {
  return getToken(entdlrParser::SINT32, 0);
}

tree::TerminalNode* entdlrParser::KeyTypeContext::SINT64() {
  return getToken(entdlrParser::SINT64, 0);
}

tree::TerminalNode* entdlrParser::KeyTypeContext::FIXED32() {
  return getToken(entdlrParser::FIXED32, 0);
}

tree::TerminalNode* entdlrParser::KeyTypeContext::FIXED64() {
  return getToken(entdlrParser::FIXED64, 0);
}

tree::TerminalNode* entdlrParser::KeyTypeContext::SFIXED32() {
  return getToken(entdlrParser::SFIXED32, 0);
}

tree::TerminalNode* entdlrParser::KeyTypeContext::SFIXED64() {
  return getToken(entdlrParser::SFIXED64, 0);
}

tree::TerminalNode* entdlrParser::KeyTypeContext::BOOL() {
  return getToken(entdlrParser::BOOL, 0);
}

tree::TerminalNode* entdlrParser::KeyTypeContext::STRING() {
  return getToken(entdlrParser::STRING, 0);
}


size_t entdlrParser::KeyTypeContext::getRuleIndex() const {
  return entdlrParser::RuleKeyType;
}

void entdlrParser::KeyTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeyType(this);
}

void entdlrParser::KeyTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeyType(this);
}


antlrcpp::Any entdlrParser::KeyTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitKeyType(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::KeyTypeContext* entdlrParser::keyType() {
  KeyTypeContext *_localctx = _tracker.createInstance<KeyTypeContext>(_ctx, getState());
  enterRule(_localctx, 58, entdlrParser::RuleKeyType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(364);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << entdlrParser::BOOL)
      | (1ULL << entdlrParser::FIXED32)
      | (1ULL << entdlrParser::FIXED64)
      | (1ULL << entdlrParser::INT32)
      | (1ULL << entdlrParser::INT64)
      | (1ULL << entdlrParser::SFIXED32)
      | (1ULL << entdlrParser::SFIXED64)
      | (1ULL << entdlrParser::SINT32)
      | (1ULL << entdlrParser::SINT64)
      | (1ULL << entdlrParser::STRING)
      | (1ULL << entdlrParser::UINT32)
      | (1ULL << entdlrParser::UINT64))) != 0))) {
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

//----------------- ReservedWordContext ------------------------------------------------------------------

entdlrParser::ReservedWordContext::ReservedWordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::ReservedWordContext::MESSAGE() {
  return getToken(entdlrParser::MESSAGE, 0);
}

tree::TerminalNode* entdlrParser::ReservedWordContext::OPTION() {
  return getToken(entdlrParser::OPTION, 0);
}

tree::TerminalNode* entdlrParser::ReservedWordContext::PACKAGE() {
  return getToken(entdlrParser::PACKAGE, 0);
}

tree::TerminalNode* entdlrParser::ReservedWordContext::SERVICE() {
  return getToken(entdlrParser::SERVICE, 0);
}

tree::TerminalNode* entdlrParser::ReservedWordContext::STREAM() {
  return getToken(entdlrParser::STREAM, 0);
}

tree::TerminalNode* entdlrParser::ReservedWordContext::STRING() {
  return getToken(entdlrParser::STRING, 0);
}

tree::TerminalNode* entdlrParser::ReservedWordContext::SYNTAX() {
  return getToken(entdlrParser::SYNTAX, 0);
}

tree::TerminalNode* entdlrParser::ReservedWordContext::WEAK() {
  return getToken(entdlrParser::WEAK, 0);
}

tree::TerminalNode* entdlrParser::ReservedWordContext::RPC() {
  return getToken(entdlrParser::RPC, 0);
}


size_t entdlrParser::ReservedWordContext::getRuleIndex() const {
  return entdlrParser::RuleReservedWord;
}

void entdlrParser::ReservedWordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReservedWord(this);
}

void entdlrParser::ReservedWordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReservedWord(this);
}


antlrcpp::Any entdlrParser::ReservedWordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitReservedWord(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::ReservedWordContext* entdlrParser::reservedWord() {
  ReservedWordContext *_localctx = _tracker.createInstance<ReservedWordContext>(_ctx, getState());
  enterRule(_localctx, 60, entdlrParser::RuleReservedWord);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(366);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << entdlrParser::MESSAGE)
      | (1ULL << entdlrParser::OPTION)
      | (1ULL << entdlrParser::PACKAGE)
      | (1ULL << entdlrParser::RPC)
      | (1ULL << entdlrParser::SERVICE)
      | (1ULL << entdlrParser::STREAM)
      | (1ULL << entdlrParser::STRING)
      | (1ULL << entdlrParser::SYNTAX)
      | (1ULL << entdlrParser::WEAK))) != 0))) {
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

//----------------- FullIdentContext ------------------------------------------------------------------

entdlrParser::FullIdentContext::FullIdentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> entdlrParser::FullIdentContext::Ident() {
  return getTokens(entdlrParser::Ident);
}

tree::TerminalNode* entdlrParser::FullIdentContext::Ident(size_t i) {
  return getToken(entdlrParser::Ident, i);
}

std::vector<tree::TerminalNode *> entdlrParser::FullIdentContext::DOT() {
  return getTokens(entdlrParser::DOT);
}

tree::TerminalNode* entdlrParser::FullIdentContext::DOT(size_t i) {
  return getToken(entdlrParser::DOT, i);
}


size_t entdlrParser::FullIdentContext::getRuleIndex() const {
  return entdlrParser::RuleFullIdent;
}

void entdlrParser::FullIdentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFullIdent(this);
}

void entdlrParser::FullIdentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFullIdent(this);
}


antlrcpp::Any entdlrParser::FullIdentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitFullIdent(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::FullIdentContext* entdlrParser::fullIdent() {
  FullIdentContext *_localctx = _tracker.createInstance<FullIdentContext>(_ctx, getState());
  enterRule(_localctx, 62, entdlrParser::RuleFullIdent);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(368);
    match(entdlrParser::Ident);
    setState(373);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == entdlrParser::DOT) {
      setState(369);
      match(entdlrParser::DOT);
      setState(370);
      match(entdlrParser::Ident);
      setState(375);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MessageNameContext ------------------------------------------------------------------

entdlrParser::MessageNameContext::MessageNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::MessageNameContext::Ident() {
  return getToken(entdlrParser::Ident, 0);
}


size_t entdlrParser::MessageNameContext::getRuleIndex() const {
  return entdlrParser::RuleMessageName;
}

void entdlrParser::MessageNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessageName(this);
}

void entdlrParser::MessageNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessageName(this);
}


antlrcpp::Any entdlrParser::MessageNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitMessageName(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::MessageNameContext* entdlrParser::messageName() {
  MessageNameContext *_localctx = _tracker.createInstance<MessageNameContext>(_ctx, getState());
  enterRule(_localctx, 64, entdlrParser::RuleMessageName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(376);
    match(entdlrParser::Ident);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumNameContext ------------------------------------------------------------------

entdlrParser::EnumNameContext::EnumNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::EnumNameContext::Ident() {
  return getToken(entdlrParser::Ident, 0);
}


size_t entdlrParser::EnumNameContext::getRuleIndex() const {
  return entdlrParser::RuleEnumName;
}

void entdlrParser::EnumNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumName(this);
}

void entdlrParser::EnumNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumName(this);
}


antlrcpp::Any entdlrParser::EnumNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitEnumName(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::EnumNameContext* entdlrParser::enumName() {
  EnumNameContext *_localctx = _tracker.createInstance<EnumNameContext>(_ctx, getState());
  enterRule(_localctx, 66, entdlrParser::RuleEnumName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(378);
    match(entdlrParser::Ident);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MessageOrEnumNameContext ------------------------------------------------------------------

entdlrParser::MessageOrEnumNameContext::MessageOrEnumNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::MessageOrEnumNameContext::Ident() {
  return getToken(entdlrParser::Ident, 0);
}


size_t entdlrParser::MessageOrEnumNameContext::getRuleIndex() const {
  return entdlrParser::RuleMessageOrEnumName;
}

void entdlrParser::MessageOrEnumNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessageOrEnumName(this);
}

void entdlrParser::MessageOrEnumNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessageOrEnumName(this);
}


antlrcpp::Any entdlrParser::MessageOrEnumNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitMessageOrEnumName(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::MessageOrEnumNameContext* entdlrParser::messageOrEnumName() {
  MessageOrEnumNameContext *_localctx = _tracker.createInstance<MessageOrEnumNameContext>(_ctx, getState());
  enterRule(_localctx, 68, entdlrParser::RuleMessageOrEnumName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(380);
    match(entdlrParser::Ident);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldNameContext ------------------------------------------------------------------

entdlrParser::FieldNameContext::FieldNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::FieldNameContext::Ident() {
  return getToken(entdlrParser::Ident, 0);
}

entdlrParser::ReservedWordContext* entdlrParser::FieldNameContext::reservedWord() {
  return getRuleContext<entdlrParser::ReservedWordContext>(0);
}


size_t entdlrParser::FieldNameContext::getRuleIndex() const {
  return entdlrParser::RuleFieldName;
}

void entdlrParser::FieldNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldName(this);
}

void entdlrParser::FieldNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldName(this);
}


antlrcpp::Any entdlrParser::FieldNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitFieldName(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::FieldNameContext* entdlrParser::fieldName() {
  FieldNameContext *_localctx = _tracker.createInstance<FieldNameContext>(_ctx, getState());
  enterRule(_localctx, 70, entdlrParser::RuleFieldName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(384);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case entdlrParser::Ident: {
        enterOuterAlt(_localctx, 1);
        setState(382);
        match(entdlrParser::Ident);
        break;
      }

      case entdlrParser::MESSAGE:
      case entdlrParser::OPTION:
      case entdlrParser::PACKAGE:
      case entdlrParser::RPC:
      case entdlrParser::SERVICE:
      case entdlrParser::STREAM:
      case entdlrParser::STRING:
      case entdlrParser::SYNTAX:
      case entdlrParser::WEAK: {
        enterOuterAlt(_localctx, 2);
        setState(383);
        reservedWord();
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

//----------------- OneofNameContext ------------------------------------------------------------------

entdlrParser::OneofNameContext::OneofNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::OneofNameContext::Ident() {
  return getToken(entdlrParser::Ident, 0);
}


size_t entdlrParser::OneofNameContext::getRuleIndex() const {
  return entdlrParser::RuleOneofName;
}

void entdlrParser::OneofNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOneofName(this);
}

void entdlrParser::OneofNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOneofName(this);
}


antlrcpp::Any entdlrParser::OneofNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitOneofName(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::OneofNameContext* entdlrParser::oneofName() {
  OneofNameContext *_localctx = _tracker.createInstance<OneofNameContext>(_ctx, getState());
  enterRule(_localctx, 72, entdlrParser::RuleOneofName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(386);
    match(entdlrParser::Ident);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MapNameContext ------------------------------------------------------------------

entdlrParser::MapNameContext::MapNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::MapNameContext::Ident() {
  return getToken(entdlrParser::Ident, 0);
}


size_t entdlrParser::MapNameContext::getRuleIndex() const {
  return entdlrParser::RuleMapName;
}

void entdlrParser::MapNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMapName(this);
}

void entdlrParser::MapNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMapName(this);
}


antlrcpp::Any entdlrParser::MapNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitMapName(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::MapNameContext* entdlrParser::mapName() {
  MapNameContext *_localctx = _tracker.createInstance<MapNameContext>(_ctx, getState());
  enterRule(_localctx, 74, entdlrParser::RuleMapName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(388);
    match(entdlrParser::Ident);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ServiceNameContext ------------------------------------------------------------------

entdlrParser::ServiceNameContext::ServiceNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::ServiceNameContext::Ident() {
  return getToken(entdlrParser::Ident, 0);
}


size_t entdlrParser::ServiceNameContext::getRuleIndex() const {
  return entdlrParser::RuleServiceName;
}

void entdlrParser::ServiceNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterServiceName(this);
}

void entdlrParser::ServiceNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitServiceName(this);
}


antlrcpp::Any entdlrParser::ServiceNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitServiceName(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::ServiceNameContext* entdlrParser::serviceName() {
  ServiceNameContext *_localctx = _tracker.createInstance<ServiceNameContext>(_ctx, getState());
  enterRule(_localctx, 76, entdlrParser::RuleServiceName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(390);
    match(entdlrParser::Ident);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RpcNameContext ------------------------------------------------------------------

entdlrParser::RpcNameContext::RpcNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::RpcNameContext::Ident() {
  return getToken(entdlrParser::Ident, 0);
}


size_t entdlrParser::RpcNameContext::getRuleIndex() const {
  return entdlrParser::RuleRpcName;
}

void entdlrParser::RpcNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRpcName(this);
}

void entdlrParser::RpcNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRpcName(this);
}


antlrcpp::Any entdlrParser::RpcNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitRpcName(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::RpcNameContext* entdlrParser::rpcName() {
  RpcNameContext *_localctx = _tracker.createInstance<RpcNameContext>(_ctx, getState());
  enterRule(_localctx, 78, entdlrParser::RuleRpcName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(392);
    match(entdlrParser::Ident);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MessageTypeContext ------------------------------------------------------------------

entdlrParser::MessageTypeContext::MessageTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

entdlrParser::MessageNameContext* entdlrParser::MessageTypeContext::messageName() {
  return getRuleContext<entdlrParser::MessageNameContext>(0);
}

std::vector<tree::TerminalNode *> entdlrParser::MessageTypeContext::DOT() {
  return getTokens(entdlrParser::DOT);
}

tree::TerminalNode* entdlrParser::MessageTypeContext::DOT(size_t i) {
  return getToken(entdlrParser::DOT, i);
}

std::vector<tree::TerminalNode *> entdlrParser::MessageTypeContext::Ident() {
  return getTokens(entdlrParser::Ident);
}

tree::TerminalNode* entdlrParser::MessageTypeContext::Ident(size_t i) {
  return getToken(entdlrParser::Ident, i);
}


size_t entdlrParser::MessageTypeContext::getRuleIndex() const {
  return entdlrParser::RuleMessageType;
}

void entdlrParser::MessageTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessageType(this);
}

void entdlrParser::MessageTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessageType(this);
}


antlrcpp::Any entdlrParser::MessageTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitMessageType(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::MessageTypeContext* entdlrParser::messageType() {
  MessageTypeContext *_localctx = _tracker.createInstance<MessageTypeContext>(_ctx, getState());
  enterRule(_localctx, 80, entdlrParser::RuleMessageType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(395);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == entdlrParser::DOT) {
      setState(394);
      match(entdlrParser::DOT);
    }
    setState(401);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(397);
        match(entdlrParser::Ident);
        setState(398);
        match(entdlrParser::DOT); 
      }
      setState(403);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    }
    setState(404);
    messageName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MessageOrEnumTypeContext ------------------------------------------------------------------

entdlrParser::MessageOrEnumTypeContext::MessageOrEnumTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

entdlrParser::MessageOrEnumNameContext* entdlrParser::MessageOrEnumTypeContext::messageOrEnumName() {
  return getRuleContext<entdlrParser::MessageOrEnumNameContext>(0);
}

std::vector<tree::TerminalNode *> entdlrParser::MessageOrEnumTypeContext::DOT() {
  return getTokens(entdlrParser::DOT);
}

tree::TerminalNode* entdlrParser::MessageOrEnumTypeContext::DOT(size_t i) {
  return getToken(entdlrParser::DOT, i);
}

std::vector<tree::TerminalNode *> entdlrParser::MessageOrEnumTypeContext::Ident() {
  return getTokens(entdlrParser::Ident);
}

tree::TerminalNode* entdlrParser::MessageOrEnumTypeContext::Ident(size_t i) {
  return getToken(entdlrParser::Ident, i);
}

std::vector<entdlrParser::ReservedWordContext *> entdlrParser::MessageOrEnumTypeContext::reservedWord() {
  return getRuleContexts<entdlrParser::ReservedWordContext>();
}

entdlrParser::ReservedWordContext* entdlrParser::MessageOrEnumTypeContext::reservedWord(size_t i) {
  return getRuleContext<entdlrParser::ReservedWordContext>(i);
}


size_t entdlrParser::MessageOrEnumTypeContext::getRuleIndex() const {
  return entdlrParser::RuleMessageOrEnumType;
}

void entdlrParser::MessageOrEnumTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessageOrEnumType(this);
}

void entdlrParser::MessageOrEnumTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessageOrEnumType(this);
}


antlrcpp::Any entdlrParser::MessageOrEnumTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitMessageOrEnumType(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::MessageOrEnumTypeContext* entdlrParser::messageOrEnumType() {
  MessageOrEnumTypeContext *_localctx = _tracker.createInstance<MessageOrEnumTypeContext>(_ctx, getState());
  enterRule(_localctx, 82, entdlrParser::RuleMessageOrEnumType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(407);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == entdlrParser::DOT) {
      setState(406);
      match(entdlrParser::DOT);
    }
    setState(416);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(411);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case entdlrParser::Ident: {
            setState(409);
            match(entdlrParser::Ident);
            break;
          }

          case entdlrParser::MESSAGE:
          case entdlrParser::OPTION:
          case entdlrParser::PACKAGE:
          case entdlrParser::RPC:
          case entdlrParser::SERVICE:
          case entdlrParser::STREAM:
          case entdlrParser::STRING:
          case entdlrParser::SYNTAX:
          case entdlrParser::WEAK: {
            setState(410);
            reservedWord();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(413);
        match(entdlrParser::DOT); 
      }
      setState(418);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx);
    }
    setState(419);
    messageOrEnumName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptyStatementContext ------------------------------------------------------------------

entdlrParser::EmptyStatementContext::EmptyStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* entdlrParser::EmptyStatementContext::SEMI() {
  return getToken(entdlrParser::SEMI, 0);
}


size_t entdlrParser::EmptyStatementContext::getRuleIndex() const {
  return entdlrParser::RuleEmptyStatement;
}

void entdlrParser::EmptyStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptyStatement(this);
}

void entdlrParser::EmptyStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptyStatement(this);
}


antlrcpp::Any entdlrParser::EmptyStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitEmptyStatement(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::EmptyStatementContext* entdlrParser::emptyStatement() {
  EmptyStatementContext *_localctx = _tracker.createInstance<EmptyStatementContext>(_ctx, getState());
  enterRule(_localctx, 84, entdlrParser::RuleEmptyStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(421);
    match(entdlrParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

entdlrParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

entdlrParser::FullIdentContext* entdlrParser::ConstantContext::fullIdent() {
  return getRuleContext<entdlrParser::FullIdentContext>(0);
}

tree::TerminalNode* entdlrParser::ConstantContext::IntLit() {
  return getToken(entdlrParser::IntLit, 0);
}

tree::TerminalNode* entdlrParser::ConstantContext::MINUS() {
  return getToken(entdlrParser::MINUS, 0);
}

tree::TerminalNode* entdlrParser::ConstantContext::PLUS() {
  return getToken(entdlrParser::PLUS, 0);
}

tree::TerminalNode* entdlrParser::ConstantContext::FloatLit() {
  return getToken(entdlrParser::FloatLit, 0);
}

tree::TerminalNode* entdlrParser::ConstantContext::StrLit() {
  return getToken(entdlrParser::StrLit, 0);
}

tree::TerminalNode* entdlrParser::ConstantContext::BoolLit() {
  return getToken(entdlrParser::BoolLit, 0);
}


size_t entdlrParser::ConstantContext::getRuleIndex() const {
  return entdlrParser::RuleConstant;
}

void entdlrParser::ConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant(this);
}

void entdlrParser::ConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<entdlrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant(this);
}


antlrcpp::Any entdlrParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<entdlrVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

entdlrParser::ConstantContext* entdlrParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 86, entdlrParser::RuleConstant);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(433);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(423);
      fullIdent();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(425);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == entdlrParser::MINUS

      || _la == entdlrParser::PLUS) {
        setState(424);
        _la = _input->LA(1);
        if (!(_la == entdlrParser::MINUS

        || _la == entdlrParser::PLUS)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(427);
      match(entdlrParser::IntLit);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(429);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == entdlrParser::MINUS

      || _la == entdlrParser::PLUS) {
        setState(428);
        _la = _input->LA(1);
        if (!(_la == entdlrParser::MINUS

        || _la == entdlrParser::PLUS)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(431);
      match(entdlrParser::FloatLit);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(432);
      _la = _input->LA(1);
      if (!(_la == entdlrParser::BoolLit

      || _la == entdlrParser::StrLit)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

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
std::vector<dfa::DFA> entdlrParser::_decisionToDFA;
atn::PredictionContextCache entdlrParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN entdlrParser::_atn;
std::vector<uint16_t> entdlrParser::_serializedATN;

std::vector<std::string> entdlrParser::_ruleNames = {
  "proto", "syntax", "importStatement", "packageStatement", "option", "optionName", 
  "optionBody", "optionBodyVariable", "topLevelDef", "message", "messageBody", 
  "enumDefinition", "enumBody", "enumField", "enumValueOption", "service", 
  "rpc", "reserved", "ranges", "range", "fieldNames", "type", "fieldNumber", 
  "field", "fieldOptions", "fieldOption", "oneof", "oneofField", "mapField", 
  "keyType", "reservedWord", "fullIdent", "messageName", "enumName", "messageOrEnumName", 
  "fieldName", "oneofName", "mapName", "serviceName", "rpcName", "messageType", 
  "messageOrEnumType", "emptyStatement", "constant"
};

std::vector<std::string> entdlrParser::_literalNames = {
  "", "':'", "'bool'", "'bytes'", "'double'", "'enum'", "'fixed32'", "'fixed64'", 
  "'float'", "'import'", "'int32'", "'int64'", "'map'", "'message'", "'oneof'", 
  "'option'", "'package'", "'\"proto3\"'", "''proto3''", "'public'", "'repeated'", 
  "'reserved'", "'returns'", "'rpc'", "'service'", "'sfixed32'", "'sfixed64'", 
  "'sint32'", "'sint64'", "'stream'", "'string'", "'syntax'", "'to'", "'uint32'", 
  "'uint64'", "'weak'", "", "", "", "", "", "", "'('", "')'", "'{'", "'}'", 
  "'['", "']'", "'<'", "'>'", "';'", "','", "'.'", "'-'", "'+'", "'='"
};

std::vector<std::string> entdlrParser::_symbolicNames = {
  "", "", "BOOL", "BYTES", "DOUBLE", "ENUM", "FIXED32", "FIXED64", "FLOAT", 
  "IMPORT", "INT32", "INT64", "MAP", "MESSAGE", "ONEOF", "OPTION", "PACKAGE", 
  "PROTO3_DOUBLE", "PROTO3_SINGLE", "PUBLIC", "REPEATED", "RESERVED", "RETURNS", 
  "RPC", "SERVICE", "SFIXED32", "SFIXED64", "SINT32", "SINT64", "STREAM", 
  "STRING", "SYNTAX", "TO", "UINT32", "UINT64", "WEAK", "Ident", "IntLit", 
  "FloatLit", "BoolLit", "StrLit", "Quote", "LPAREN", "RPAREN", "LBRACE", 
  "RBRACE", "LBRACK", "RBRACK", "LCHEVR", "RCHEVR", "SEMI", "COMMA", "DOT", 
  "MINUS", "PLUS", "ASSIGN", "WS", "COMMENT", "LINE_COMMENT"
};

dfa::Vocabulary entdlrParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> entdlrParser::_tokenNames;

entdlrParser::Initializer::Initializer() {
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

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x3c, 0x1b6, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x61, 0xa, 0x2, 0xc, 0x2, 0xe, 
    0x2, 0x64, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x6f, 0xa, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x7d, 0xa, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x5, 0x7, 0x86, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x8b, 
    0xa, 0x7, 0x7, 0x7, 0x8d, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x90, 0xb, 0x7, 
    0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x94, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x97, 
    0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xa2, 0xa, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0xb1, 0xa, 0xc, 
    0xc, 0xc, 0xe, 0xc, 0xb4, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 
    0xe, 0xc0, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0xc3, 0xb, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xca, 0xa, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xd1, 0xa, 0xf, 0xc, 
    0xf, 0xe, 0xf, 0xd4, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xd8, 0xa, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 
    0x11, 0xe6, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xe9, 0xb, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xf1, 
    0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 
    0x12, 0xf8, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x7, 0x12, 0xff, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x102, 0xb, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x106, 0xa, 0x12, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x10b, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0x112, 0xa, 0x14, 0xc, 0x14, 
    0xe, 0x14, 0x115, 0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x5, 0x15, 0x11b, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 
    0x120, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x123, 0xb, 0x16, 0x3, 0x17, 
    0x3, 0x17, 0x5, 0x17, 0x127, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 
    0x5, 0x19, 0x12c, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x136, 0xa, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x13d, 
    0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x140, 0xb, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
    0x1c, 0x7, 0x1c, 0x14b, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x14e, 0xb, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x15a, 0xa, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
    0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x16b, 0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 
    0x21, 0x7, 0x21, 0x176, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x179, 0xb, 
    0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 
    0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x183, 0xa, 0x25, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x2a, 0x5, 0x2a, 0x18e, 0xa, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x7, 0x2a, 
    0x192, 0xa, 0x2a, 0xc, 0x2a, 0xe, 0x2a, 0x195, 0xb, 0x2a, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2b, 0x5, 0x2b, 0x19a, 0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x5, 0x2b, 0x19e, 0xa, 0x2b, 0x3, 0x2b, 0x7, 0x2b, 0x1a1, 0xa, 0x2b, 
    0xc, 0x2b, 0xe, 0x2b, 0x1a4, 0xb, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x1ac, 0xa, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x5, 0x2d, 0x1b0, 0xa, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 
    0x1b4, 0xa, 0x2d, 0x3, 0x2d, 0x2, 0x2, 0x2e, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
    0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 
    0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 
    0x54, 0x56, 0x58, 0x2, 0x9, 0x3, 0x2, 0x13, 0x14, 0x4, 0x2, 0x15, 0x15, 
    0x25, 0x25, 0x8, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xd, 0x1b, 0x1e, 0x20, 
    0x20, 0x23, 0x24, 0x8, 0x2, 0x4, 0x4, 0x8, 0x9, 0xc, 0xd, 0x1b, 0x1e, 
    0x20, 0x20, 0x23, 0x24, 0x7, 0x2, 0xf, 0xf, 0x11, 0x12, 0x19, 0x1a, 
    0x1f, 0x21, 0x25, 0x25, 0x3, 0x2, 0x37, 0x38, 0x3, 0x2, 0x29, 0x2a, 
    0x2, 0x1c4, 0x2, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x4, 0x67, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x8, 0x73, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x77, 0x3, 0x2, 0x2, 0x2, 0xc, 0x85, 0x3, 0x2, 0x2, 0x2, 0xe, 0x91, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x12, 0xa1, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x16, 0xa7, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xbb, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0xc6, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xdb, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x22, 0xec, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0x107, 0x3, 0x2, 0x2, 0x2, 0x26, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x28, 0x11a, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x126, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x128, 0x3, 0x2, 0x2, 0x2, 0x30, 0x12b, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x139, 0x3, 0x2, 0x2, 0x2, 0x34, 0x141, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x145, 0x3, 0x2, 0x2, 0x2, 0x38, 0x151, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x170, 0x3, 0x2, 0x2, 0x2, 0x40, 0x172, 0x3, 0x2, 0x2, 0x2, 0x42, 0x17a, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x46, 0x17e, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0x182, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x184, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x186, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x188, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x52, 0x18d, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0x199, 0x3, 0x2, 0x2, 0x2, 0x56, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x58, 
    0x1b3, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x62, 0x5, 0x4, 0x3, 0x2, 0x5b, 0x61, 
    0x5, 0x6, 0x4, 0x2, 0x5c, 0x61, 0x5, 0x8, 0x5, 0x2, 0x5d, 0x61, 0x5, 
    0xa, 0x6, 0x2, 0x5e, 0x61, 0x5, 0x12, 0xa, 0x2, 0x5f, 0x61, 0x5, 0x56, 
    0x2c, 0x2, 0x60, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x60, 0x5c, 0x3, 0x2, 0x2, 
    0x2, 0x60, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x60, 0x5e, 0x3, 0x2, 0x2, 0x2, 
    0x60, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x61, 0x64, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x60, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x3, 0x2, 0x2, 0x2, 0x63, 0x65, 
    0x3, 0x2, 0x2, 0x2, 0x64, 0x62, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x7, 
    0x2, 0x2, 0x3, 0x66, 0x3, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x7, 0x21, 
    0x2, 0x2, 0x68, 0x69, 0x7, 0x39, 0x2, 0x2, 0x69, 0x6a, 0x9, 0x2, 0x2, 
    0x2, 0x6a, 0x6b, 0x7, 0x34, 0x2, 0x2, 0x6b, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x6c, 0x6e, 0x7, 0xb, 0x2, 0x2, 0x6d, 0x6f, 0x9, 0x3, 0x2, 0x2, 0x6e, 
    0x6d, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 
    0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x7, 0x2a, 0x2, 0x2, 0x71, 0x72, 0x7, 
    0x34, 0x2, 0x2, 0x72, 0x7, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x7, 0x12, 
    0x2, 0x2, 0x74, 0x75, 0x5, 0x40, 0x21, 0x2, 0x75, 0x76, 0x7, 0x34, 0x2, 
    0x2, 0x76, 0x9, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x7, 0x11, 0x2, 0x2, 
    0x78, 0x79, 0x5, 0xc, 0x7, 0x2, 0x79, 0x7c, 0x7, 0x39, 0x2, 0x2, 0x7a, 
    0x7d, 0x5, 0x58, 0x2d, 0x2, 0x7b, 0x7d, 0x5, 0xe, 0x8, 0x2, 0x7c, 0x7a, 
    0x3, 0x2, 0x2, 0x2, 0x7c, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x3, 
    0x2, 0x2, 0x2, 0x7e, 0x7f, 0x7, 0x34, 0x2, 0x2, 0x7f, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x80, 0x86, 0x7, 0x26, 0x2, 0x2, 0x81, 0x82, 0x7, 0x2c, 0x2, 
    0x2, 0x82, 0x83, 0x5, 0x40, 0x21, 0x2, 0x83, 0x84, 0x7, 0x2d, 0x2, 0x2, 
    0x84, 0x86, 0x3, 0x2, 0x2, 0x2, 0x85, 0x80, 0x3, 0x2, 0x2, 0x2, 0x85, 
    0x81, 0x3, 0x2, 0x2, 0x2, 0x86, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x87, 0x8a, 
    0x7, 0x36, 0x2, 0x2, 0x88, 0x8b, 0x7, 0x26, 0x2, 0x2, 0x89, 0x8b, 0x5, 
    0x3e, 0x20, 0x2, 0x8a, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x89, 0x3, 0x2, 
    0x2, 0x2, 0x8b, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x87, 0x3, 0x2, 0x2, 
    0x2, 0x8d, 0x90, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8c, 0x3, 0x2, 0x2, 0x2, 
    0x8e, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x8f, 0xd, 0x3, 0x2, 0x2, 0x2, 0x90, 
    0x8e, 0x3, 0x2, 0x2, 0x2, 0x91, 0x95, 0x7, 0x2e, 0x2, 0x2, 0x92, 0x94, 
    0x5, 0x10, 0x9, 0x2, 0x93, 0x92, 0x3, 0x2, 0x2, 0x2, 0x94, 0x97, 0x3, 
    0x2, 0x2, 0x2, 0x95, 0x93, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x3, 0x2, 
    0x2, 0x2, 0x96, 0x98, 0x3, 0x2, 0x2, 0x2, 0x97, 0x95, 0x3, 0x2, 0x2, 
    0x2, 0x98, 0x99, 0x7, 0x2f, 0x2, 0x2, 0x99, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x9a, 0x9b, 0x5, 0xc, 0x7, 0x2, 0x9b, 0x9c, 0x7, 0x3, 0x2, 0x2, 0x9c, 
    0x9d, 0x5, 0x58, 0x2d, 0x2, 0x9d, 0x11, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa2, 
    0x5, 0x14, 0xb, 0x2, 0x9f, 0xa2, 0x5, 0x18, 0xd, 0x2, 0xa0, 0xa2, 0x5, 
    0x20, 0x11, 0x2, 0xa1, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa1, 0x9f, 0x3, 0x2, 
    0x2, 0x2, 0xa1, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0xa3, 0xa4, 0x7, 0xf, 0x2, 0x2, 0xa4, 0xa5, 0x5, 0x42, 0x22, 0x2, 
    0xa5, 0xa6, 0x5, 0x16, 0xc, 0x2, 0xa6, 0x15, 0x3, 0x2, 0x2, 0x2, 0xa7, 
    0xb2, 0x7, 0x2e, 0x2, 0x2, 0xa8, 0xb1, 0x5, 0x30, 0x19, 0x2, 0xa9, 0xb1, 
    0x5, 0x18, 0xd, 0x2, 0xaa, 0xb1, 0x5, 0x14, 0xb, 0x2, 0xab, 0xb1, 0x5, 
    0xa, 0x6, 0x2, 0xac, 0xb1, 0x5, 0x36, 0x1c, 0x2, 0xad, 0xb1, 0x5, 0x3a, 
    0x1e, 0x2, 0xae, 0xb1, 0x5, 0x24, 0x13, 0x2, 0xaf, 0xb1, 0x5, 0x56, 
    0x2c, 0x2, 0xb0, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xa9, 0x3, 0x2, 0x2, 
    0x2, 0xb0, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xab, 0x3, 0x2, 0x2, 0x2, 
    0xb0, 0xac, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xad, 0x3, 0x2, 0x2, 0x2, 0xb0, 
    0xae, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb4, 
    0x3, 0x2, 0x2, 0x2, 0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x3, 
    0x2, 0x2, 0x2, 0xb3, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb2, 0x3, 0x2, 
    0x2, 0x2, 0xb5, 0xb6, 0x7, 0x2f, 0x2, 0x2, 0xb6, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0xb7, 0xb8, 0x7, 0x7, 0x2, 0x2, 0xb8, 0xb9, 0x5, 0x44, 0x23, 0x2, 
    0xb9, 0xba, 0x5, 0x1a, 0xe, 0x2, 0xba, 0x19, 0x3, 0x2, 0x2, 0x2, 0xbb, 
    0xc1, 0x7, 0x2e, 0x2, 0x2, 0xbc, 0xc0, 0x5, 0xa, 0x6, 0x2, 0xbd, 0xc0, 
    0x5, 0x1c, 0xf, 0x2, 0xbe, 0xc0, 0x5, 0x56, 0x2c, 0x2, 0xbf, 0xbc, 0x3, 
    0x2, 0x2, 0x2, 0xbf, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xbe, 0x3, 0x2, 
    0x2, 0x2, 0xc0, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xbf, 0x3, 0x2, 0x2, 
    0x2, 0xc1, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc4, 0x3, 0x2, 0x2, 0x2, 
    0xc3, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x7, 0x2f, 0x2, 0x2, 0xc5, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x7, 0x26, 0x2, 0x2, 0xc7, 0xc9, 
    0x7, 0x39, 0x2, 0x2, 0xc8, 0xca, 0x7, 0x37, 0x2, 0x2, 0xc9, 0xc8, 0x3, 
    0x2, 0x2, 0x2, 0xc9, 0xca, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x3, 0x2, 
    0x2, 0x2, 0xcb, 0xd7, 0x7, 0x27, 0x2, 0x2, 0xcc, 0xcd, 0x7, 0x30, 0x2, 
    0x2, 0xcd, 0xd2, 0x5, 0x1e, 0x10, 0x2, 0xce, 0xcf, 0x7, 0x35, 0x2, 0x2, 
    0xcf, 0xd1, 0x5, 0x1e, 0x10, 0x2, 0xd0, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd1, 
    0xd4, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 
    0x3, 0x2, 0x2, 0x2, 0xd3, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd2, 0x3, 
    0x2, 0x2, 0x2, 0xd5, 0xd6, 0x7, 0x31, 0x2, 0x2, 0xd6, 0xd8, 0x3, 0x2, 
    0x2, 0x2, 0xd7, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x3, 0x2, 0x2, 
    0x2, 0xd8, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x7, 0x34, 0x2, 0x2, 
    0xda, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x5, 0xc, 0x7, 0x2, 0xdc, 
    0xdd, 0x7, 0x39, 0x2, 0x2, 0xdd, 0xde, 0x5, 0x58, 0x2d, 0x2, 0xde, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x7, 0x1a, 0x2, 0x2, 0xe0, 0xe1, 0x5, 
    0x4e, 0x28, 0x2, 0xe1, 0xe7, 0x7, 0x2e, 0x2, 0x2, 0xe2, 0xe6, 0x5, 0xa, 
    0x6, 0x2, 0xe3, 0xe6, 0x5, 0x22, 0x12, 0x2, 0xe4, 0xe6, 0x5, 0x56, 0x2c, 
    0x2, 0xe5, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe3, 0x3, 0x2, 0x2, 0x2, 
    0xe5, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xe7, 
    0xe5, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xea, 
    0x3, 0x2, 0x2, 0x2, 0xe9, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x7, 
    0x2f, 0x2, 0x2, 0xeb, 0x21, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0x7, 0x19, 
    0x2, 0x2, 0xed, 0xee, 0x5, 0x50, 0x29, 0x2, 0xee, 0xf0, 0x7, 0x2c, 0x2, 
    0x2, 0xef, 0xf1, 0x7, 0x1f, 0x2, 0x2, 0xf0, 0xef, 0x3, 0x2, 0x2, 0x2, 
    0xf0, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf2, 
    0xf3, 0x5, 0x52, 0x2a, 0x2, 0xf3, 0xf4, 0x7, 0x2d, 0x2, 0x2, 0xf4, 0xf5, 
    0x7, 0x18, 0x2, 0x2, 0xf5, 0xf7, 0x7, 0x2c, 0x2, 0x2, 0xf6, 0xf8, 0x7, 
    0x1f, 0x2, 0x2, 0xf7, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 0x3, 0x2, 
    0x2, 0x2, 0xf8, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 0x5, 0x52, 0x2a, 
    0x2, 0xfa, 0x105, 0x7, 0x2d, 0x2, 0x2, 0xfb, 0x100, 0x7, 0x2e, 0x2, 
    0x2, 0xfc, 0xff, 0x5, 0xa, 0x6, 0x2, 0xfd, 0xff, 0x5, 0x56, 0x2c, 0x2, 
    0xfe, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xff, 
    0x102, 0x3, 0x2, 0x2, 0x2, 0x100, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 
    0x3, 0x2, 0x2, 0x2, 0x101, 0x103, 0x3, 0x2, 0x2, 0x2, 0x102, 0x100, 
    0x3, 0x2, 0x2, 0x2, 0x103, 0x106, 0x7, 0x2f, 0x2, 0x2, 0x104, 0x106, 
    0x7, 0x34, 0x2, 0x2, 0x105, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x105, 0x104, 
    0x3, 0x2, 0x2, 0x2, 0x106, 0x23, 0x3, 0x2, 0x2, 0x2, 0x107, 0x10a, 0x7, 
    0x17, 0x2, 0x2, 0x108, 0x10b, 0x5, 0x26, 0x14, 0x2, 0x109, 0x10b, 0x5, 
    0x2a, 0x16, 0x2, 0x10a, 0x108, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x109, 0x3, 
    0x2, 0x2, 0x2, 0x10b, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 0x7, 
    0x34, 0x2, 0x2, 0x10d, 0x25, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x113, 0x5, 
    0x28, 0x15, 0x2, 0x10f, 0x110, 0x7, 0x35, 0x2, 0x2, 0x110, 0x112, 0x5, 
    0x28, 0x15, 0x2, 0x111, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x112, 0x115, 0x3, 
    0x2, 0x2, 0x2, 0x113, 0x111, 0x3, 0x2, 0x2, 0x2, 0x113, 0x114, 0x3, 
    0x2, 0x2, 0x2, 0x114, 0x27, 0x3, 0x2, 0x2, 0x2, 0x115, 0x113, 0x3, 0x2, 
    0x2, 0x2, 0x116, 0x11b, 0x7, 0x27, 0x2, 0x2, 0x117, 0x118, 0x7, 0x27, 
    0x2, 0x2, 0x118, 0x119, 0x7, 0x22, 0x2, 0x2, 0x119, 0x11b, 0x7, 0x27, 
    0x2, 0x2, 0x11a, 0x116, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x117, 0x3, 0x2, 
    0x2, 0x2, 0x11b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x121, 0x7, 0x2a, 
    0x2, 0x2, 0x11d, 0x11e, 0x7, 0x35, 0x2, 0x2, 0x11e, 0x120, 0x7, 0x2a, 
    0x2, 0x2, 0x11f, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x120, 0x123, 0x3, 0x2, 
    0x2, 0x2, 0x121, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 0x3, 0x2, 
    0x2, 0x2, 0x122, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x123, 0x121, 0x3, 0x2, 0x2, 
    0x2, 0x124, 0x127, 0x9, 0x4, 0x2, 0x2, 0x125, 0x127, 0x5, 0x54, 0x2b, 
    0x2, 0x126, 0x124, 0x3, 0x2, 0x2, 0x2, 0x126, 0x125, 0x3, 0x2, 0x2, 
    0x2, 0x127, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x7, 0x27, 0x2, 
    0x2, 0x129, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12c, 0x7, 0x16, 0x2, 
    0x2, 0x12b, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12c, 0x3, 0x2, 0x2, 
    0x2, 0x12c, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12e, 0x5, 0x2c, 0x17, 
    0x2, 0x12e, 0x12f, 0x5, 0x48, 0x25, 0x2, 0x12f, 0x130, 0x7, 0x39, 0x2, 
    0x2, 0x130, 0x135, 0x5, 0x2e, 0x18, 0x2, 0x131, 0x132, 0x7, 0x30, 0x2, 
    0x2, 0x132, 0x133, 0x5, 0x32, 0x1a, 0x2, 0x133, 0x134, 0x7, 0x31, 0x2, 
    0x2, 0x134, 0x136, 0x3, 0x2, 0x2, 0x2, 0x135, 0x131, 0x3, 0x2, 0x2, 
    0x2, 0x135, 0x136, 0x3, 0x2, 0x2, 0x2, 0x136, 0x137, 0x3, 0x2, 0x2, 
    0x2, 0x137, 0x138, 0x7, 0x34, 0x2, 0x2, 0x138, 0x31, 0x3, 0x2, 0x2, 
    0x2, 0x139, 0x13e, 0x5, 0x34, 0x1b, 0x2, 0x13a, 0x13b, 0x7, 0x35, 0x2, 
    0x2, 0x13b, 0x13d, 0x5, 0x34, 0x1b, 0x2, 0x13c, 0x13a, 0x3, 0x2, 0x2, 
    0x2, 0x13d, 0x140, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x13c, 0x3, 0x2, 0x2, 
    0x2, 0x13e, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0x140, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x141, 0x142, 0x5, 0xc, 0x7, 0x2, 
    0x142, 0x143, 0x7, 0x39, 0x2, 0x2, 0x143, 0x144, 0x5, 0x58, 0x2d, 0x2, 
    0x144, 0x35, 0x3, 0x2, 0x2, 0x2, 0x145, 0x146, 0x7, 0x10, 0x2, 0x2, 
    0x146, 0x147, 0x5, 0x4a, 0x26, 0x2, 0x147, 0x14c, 0x7, 0x2e, 0x2, 0x2, 
    0x148, 0x14b, 0x5, 0x38, 0x1d, 0x2, 0x149, 0x14b, 0x5, 0x56, 0x2c, 0x2, 
    0x14a, 0x148, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x149, 0x3, 0x2, 0x2, 0x2, 
    0x14b, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14a, 0x3, 0x2, 0x2, 0x2, 
    0x14c, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14f, 0x3, 0x2, 0x2, 0x2, 
    0x14e, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x150, 0x7, 0x2f, 0x2, 0x2, 
    0x150, 0x37, 0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 0x5, 0x2c, 0x17, 0x2, 
    0x152, 0x153, 0x5, 0x48, 0x25, 0x2, 0x153, 0x154, 0x7, 0x39, 0x2, 0x2, 
    0x154, 0x159, 0x5, 0x2e, 0x18, 0x2, 0x155, 0x156, 0x7, 0x30, 0x2, 0x2, 
    0x156, 0x157, 0x5, 0x32, 0x1a, 0x2, 0x157, 0x158, 0x7, 0x31, 0x2, 0x2, 
    0x158, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x159, 0x155, 0x3, 0x2, 0x2, 0x2, 
    0x159, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x15b, 0x3, 0x2, 0x2, 0x2, 
    0x15b, 0x15c, 0x7, 0x34, 0x2, 0x2, 0x15c, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0x15d, 0x15e, 0x7, 0xe, 0x2, 0x2, 0x15e, 0x15f, 0x7, 0x32, 0x2, 0x2, 
    0x15f, 0x160, 0x5, 0x3c, 0x1f, 0x2, 0x160, 0x161, 0x7, 0x35, 0x2, 0x2, 
    0x161, 0x162, 0x5, 0x2c, 0x17, 0x2, 0x162, 0x163, 0x7, 0x33, 0x2, 0x2, 
    0x163, 0x164, 0x5, 0x4c, 0x27, 0x2, 0x164, 0x165, 0x7, 0x39, 0x2, 0x2, 
    0x165, 0x16a, 0x5, 0x2e, 0x18, 0x2, 0x166, 0x167, 0x7, 0x30, 0x2, 0x2, 
    0x167, 0x168, 0x5, 0x32, 0x1a, 0x2, 0x168, 0x169, 0x7, 0x31, 0x2, 0x2, 
    0x169, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x166, 0x3, 0x2, 0x2, 0x2, 
    0x16a, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16c, 0x3, 0x2, 0x2, 0x2, 
    0x16c, 0x16d, 0x7, 0x34, 0x2, 0x2, 0x16d, 0x3b, 0x3, 0x2, 0x2, 0x2, 
    0x16e, 0x16f, 0x9, 0x5, 0x2, 0x2, 0x16f, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x170, 
    0x171, 0x9, 0x6, 0x2, 0x2, 0x171, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x172, 0x177, 
    0x7, 0x26, 0x2, 0x2, 0x173, 0x174, 0x7, 0x36, 0x2, 0x2, 0x174, 0x176, 
    0x7, 0x26, 0x2, 0x2, 0x175, 0x173, 0x3, 0x2, 0x2, 0x2, 0x176, 0x179, 
    0x3, 0x2, 0x2, 0x2, 0x177, 0x175, 0x3, 0x2, 0x2, 0x2, 0x177, 0x178, 
    0x3, 0x2, 0x2, 0x2, 0x178, 0x41, 0x3, 0x2, 0x2, 0x2, 0x179, 0x177, 0x3, 
    0x2, 0x2, 0x2, 0x17a, 0x17b, 0x7, 0x26, 0x2, 0x2, 0x17b, 0x43, 0x3, 
    0x2, 0x2, 0x2, 0x17c, 0x17d, 0x7, 0x26, 0x2, 0x2, 0x17d, 0x45, 0x3, 
    0x2, 0x2, 0x2, 0x17e, 0x17f, 0x7, 0x26, 0x2, 0x2, 0x17f, 0x47, 0x3, 
    0x2, 0x2, 0x2, 0x180, 0x183, 0x7, 0x26, 0x2, 0x2, 0x181, 0x183, 0x5, 
    0x3e, 0x20, 0x2, 0x182, 0x180, 0x3, 0x2, 0x2, 0x2, 0x182, 0x181, 0x3, 
    0x2, 0x2, 0x2, 0x183, 0x49, 0x3, 0x2, 0x2, 0x2, 0x184, 0x185, 0x7, 0x26, 
    0x2, 0x2, 0x185, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x186, 0x187, 0x7, 0x26, 
    0x2, 0x2, 0x187, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x188, 0x189, 0x7, 0x26, 
    0x2, 0x2, 0x189, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x18b, 0x7, 0x26, 
    0x2, 0x2, 0x18b, 0x51, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18e, 0x7, 0x36, 
    0x2, 0x2, 0x18d, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18e, 0x3, 0x2, 
    0x2, 0x2, 0x18e, 0x193, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x190, 0x7, 0x26, 
    0x2, 0x2, 0x190, 0x192, 0x7, 0x36, 0x2, 0x2, 0x191, 0x18f, 0x3, 0x2, 
    0x2, 0x2, 0x192, 0x195, 0x3, 0x2, 0x2, 0x2, 0x193, 0x191, 0x3, 0x2, 
    0x2, 0x2, 0x193, 0x194, 0x3, 0x2, 0x2, 0x2, 0x194, 0x196, 0x3, 0x2, 
    0x2, 0x2, 0x195, 0x193, 0x3, 0x2, 0x2, 0x2, 0x196, 0x197, 0x5, 0x42, 
    0x22, 0x2, 0x197, 0x53, 0x3, 0x2, 0x2, 0x2, 0x198, 0x19a, 0x7, 0x36, 
    0x2, 0x2, 0x199, 0x198, 0x3, 0x2, 0x2, 0x2, 0x199, 0x19a, 0x3, 0x2, 
    0x2, 0x2, 0x19a, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x19e, 0x7, 0x26, 
    0x2, 0x2, 0x19c, 0x19e, 0x5, 0x3e, 0x20, 0x2, 0x19d, 0x19b, 0x3, 0x2, 
    0x2, 0x2, 0x19d, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x19f, 0x3, 0x2, 
    0x2, 0x2, 0x19f, 0x1a1, 0x7, 0x36, 0x2, 0x2, 0x1a0, 0x19d, 0x3, 0x2, 
    0x2, 0x2, 0x1a1, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a0, 0x3, 0x2, 
    0x2, 0x2, 0x1a2, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a5, 0x3, 0x2, 
    0x2, 0x2, 0x1a4, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a6, 0x5, 0x46, 
    0x24, 0x2, 0x1a6, 0x55, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a8, 0x7, 0x34, 
    0x2, 0x2, 0x1a8, 0x57, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1b4, 0x5, 0x40, 
    0x21, 0x2, 0x1aa, 0x1ac, 0x9, 0x7, 0x2, 0x2, 0x1ab, 0x1aa, 0x3, 0x2, 
    0x2, 0x2, 0x1ab, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1ad, 0x3, 0x2, 
    0x2, 0x2, 0x1ad, 0x1b4, 0x7, 0x27, 0x2, 0x2, 0x1ae, 0x1b0, 0x9, 0x7, 
    0x2, 0x2, 0x1af, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b0, 0x3, 0x2, 
    0x2, 0x2, 0x1b0, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b4, 0x7, 0x28, 
    0x2, 0x2, 0x1b2, 0x1b4, 0x9, 0x8, 0x2, 0x2, 0x1b3, 0x1a9, 0x3, 0x2, 
    0x2, 0x2, 0x1b3, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1af, 0x3, 0x2, 
    0x2, 0x2, 0x1b3, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x59, 0x3, 0x2, 0x2, 
    0x2, 0x2f, 0x60, 0x62, 0x6e, 0x7c, 0x85, 0x8a, 0x8e, 0x95, 0xa1, 0xb0, 
    0xb2, 0xbf, 0xc1, 0xc9, 0xd2, 0xd7, 0xe5, 0xe7, 0xf0, 0xf7, 0xfe, 0x100, 
    0x105, 0x10a, 0x113, 0x11a, 0x121, 0x126, 0x12b, 0x135, 0x13e, 0x14a, 
    0x14c, 0x159, 0x16a, 0x177, 0x182, 0x18d, 0x193, 0x199, 0x19d, 0x1a2, 
    0x1ab, 0x1af, 0x1b3, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

entdlrParser::Initializer entdlrParser::_init;
