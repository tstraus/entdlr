
// Generated from FlatBuffers.g4 by ANTLR 4.7.2


#include "FlatBuffersListener.h"
#include "FlatBuffersVisitor.h"

#include "FlatBuffersParser.h"


using namespace antlrcpp;
using namespace antlr4;

FlatBuffersParser::FlatBuffersParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

FlatBuffersParser::~FlatBuffersParser() {
  delete _interpreter;
}

std::string FlatBuffersParser::getGrammarFileName() const {
  return "FlatBuffers.g4";
}

const std::vector<std::string>& FlatBuffersParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& FlatBuffersParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- SchemaContext ------------------------------------------------------------------

FlatBuffersParser::SchemaContext::SchemaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FlatBuffersParser::IncludeContext *> FlatBuffersParser::SchemaContext::include() {
  return getRuleContexts<FlatBuffersParser::IncludeContext>();
}

FlatBuffersParser::IncludeContext* FlatBuffersParser::SchemaContext::include(size_t i) {
  return getRuleContext<FlatBuffersParser::IncludeContext>(i);
}

std::vector<FlatBuffersParser::Namespace_declContext *> FlatBuffersParser::SchemaContext::namespace_decl() {
  return getRuleContexts<FlatBuffersParser::Namespace_declContext>();
}

FlatBuffersParser::Namespace_declContext* FlatBuffersParser::SchemaContext::namespace_decl(size_t i) {
  return getRuleContext<FlatBuffersParser::Namespace_declContext>(i);
}

std::vector<FlatBuffersParser::Type_declContext *> FlatBuffersParser::SchemaContext::type_decl() {
  return getRuleContexts<FlatBuffersParser::Type_declContext>();
}

FlatBuffersParser::Type_declContext* FlatBuffersParser::SchemaContext::type_decl(size_t i) {
  return getRuleContext<FlatBuffersParser::Type_declContext>(i);
}

std::vector<FlatBuffersParser::Enum_declContext *> FlatBuffersParser::SchemaContext::enum_decl() {
  return getRuleContexts<FlatBuffersParser::Enum_declContext>();
}

FlatBuffersParser::Enum_declContext* FlatBuffersParser::SchemaContext::enum_decl(size_t i) {
  return getRuleContext<FlatBuffersParser::Enum_declContext>(i);
}

std::vector<FlatBuffersParser::Union_declContext *> FlatBuffersParser::SchemaContext::union_decl() {
  return getRuleContexts<FlatBuffersParser::Union_declContext>();
}

FlatBuffersParser::Union_declContext* FlatBuffersParser::SchemaContext::union_decl(size_t i) {
  return getRuleContext<FlatBuffersParser::Union_declContext>(i);
}

std::vector<FlatBuffersParser::Root_declContext *> FlatBuffersParser::SchemaContext::root_decl() {
  return getRuleContexts<FlatBuffersParser::Root_declContext>();
}

FlatBuffersParser::Root_declContext* FlatBuffersParser::SchemaContext::root_decl(size_t i) {
  return getRuleContext<FlatBuffersParser::Root_declContext>(i);
}

std::vector<FlatBuffersParser::File_extension_declContext *> FlatBuffersParser::SchemaContext::file_extension_decl() {
  return getRuleContexts<FlatBuffersParser::File_extension_declContext>();
}

FlatBuffersParser::File_extension_declContext* FlatBuffersParser::SchemaContext::file_extension_decl(size_t i) {
  return getRuleContext<FlatBuffersParser::File_extension_declContext>(i);
}

std::vector<FlatBuffersParser::File_identifier_declContext *> FlatBuffersParser::SchemaContext::file_identifier_decl() {
  return getRuleContexts<FlatBuffersParser::File_identifier_declContext>();
}

FlatBuffersParser::File_identifier_declContext* FlatBuffersParser::SchemaContext::file_identifier_decl(size_t i) {
  return getRuleContext<FlatBuffersParser::File_identifier_declContext>(i);
}

std::vector<FlatBuffersParser::Attribute_declContext *> FlatBuffersParser::SchemaContext::attribute_decl() {
  return getRuleContexts<FlatBuffersParser::Attribute_declContext>();
}

FlatBuffersParser::Attribute_declContext* FlatBuffersParser::SchemaContext::attribute_decl(size_t i) {
  return getRuleContext<FlatBuffersParser::Attribute_declContext>(i);
}

std::vector<FlatBuffersParser::Rpc_declContext *> FlatBuffersParser::SchemaContext::rpc_decl() {
  return getRuleContexts<FlatBuffersParser::Rpc_declContext>();
}

FlatBuffersParser::Rpc_declContext* FlatBuffersParser::SchemaContext::rpc_decl(size_t i) {
  return getRuleContext<FlatBuffersParser::Rpc_declContext>(i);
}

std::vector<FlatBuffersParser::ObjectContext *> FlatBuffersParser::SchemaContext::object() {
  return getRuleContexts<FlatBuffersParser::ObjectContext>();
}

FlatBuffersParser::ObjectContext* FlatBuffersParser::SchemaContext::object(size_t i) {
  return getRuleContext<FlatBuffersParser::ObjectContext>(i);
}


size_t FlatBuffersParser::SchemaContext::getRuleIndex() const {
  return FlatBuffersParser::RuleSchema;
}

void FlatBuffersParser::SchemaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSchema(this);
}

void FlatBuffersParser::SchemaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSchema(this);
}


antlrcpp::Any FlatBuffersParser::SchemaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitSchema(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::SchemaContext* FlatBuffersParser::schema() {
  SchemaContext *_localctx = _tracker.createInstance<SchemaContext>(_ctx, getState());
  enterRule(_localctx, 0, FlatBuffersParser::RuleSchema);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FlatBuffersParser::T__0) {
      setState(60);
      include();
      setState(65);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(78);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << FlatBuffersParser::T__2)
      | (1ULL << FlatBuffersParser::T__4)
      | (1ULL << FlatBuffersParser::T__5)
      | (1ULL << FlatBuffersParser::T__6)
      | (1ULL << FlatBuffersParser::T__7)
      | (1ULL << FlatBuffersParser::T__9)
      | (1ULL << FlatBuffersParser::T__11)
      | (1ULL << FlatBuffersParser::T__12)
      | (1ULL << FlatBuffersParser::T__14)
      | (1ULL << FlatBuffersParser::T__20)
      | (1ULL << FlatBuffersParser::T__21))) != 0)) {
      setState(76);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case FlatBuffersParser::T__2: {
          setState(66);
          namespace_decl();
          break;
        }

        case FlatBuffersParser::T__5:
        case FlatBuffersParser::T__6: {
          setState(67);
          type_decl();
          break;
        }

        case FlatBuffersParser::T__9: {
          setState(68);
          enum_decl();
          break;
        }

        case FlatBuffersParser::T__11: {
          setState(69);
          union_decl();
          break;
        }

        case FlatBuffersParser::T__12: {
          setState(70);
          root_decl();
          break;
        }

        case FlatBuffersParser::T__20: {
          setState(71);
          file_extension_decl();
          break;
        }

        case FlatBuffersParser::T__21: {
          setState(72);
          file_identifier_decl();
          break;
        }

        case FlatBuffersParser::T__4: {
          setState(73);
          attribute_decl();
          break;
        }

        case FlatBuffersParser::T__14: {
          setState(74);
          rpc_decl();
          break;
        }

        case FlatBuffersParser::T__7: {
          setState(75);
          object();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(80);
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

//----------------- IncludeContext ------------------------------------------------------------------

FlatBuffersParser::IncludeContext::IncludeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffersParser::IncludeContext::STRING_CONSTANT() {
  return getToken(FlatBuffersParser::STRING_CONSTANT, 0);
}


size_t FlatBuffersParser::IncludeContext::getRuleIndex() const {
  return FlatBuffersParser::RuleInclude;
}

void FlatBuffersParser::IncludeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInclude(this);
}

void FlatBuffersParser::IncludeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInclude(this);
}


antlrcpp::Any FlatBuffersParser::IncludeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitInclude(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::IncludeContext* FlatBuffersParser::include() {
  IncludeContext *_localctx = _tracker.createInstance<IncludeContext>(_ctx, getState());
  enterRule(_localctx, 2, FlatBuffersParser::RuleInclude);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    match(FlatBuffersParser::T__0);
    setState(82);
    match(FlatBuffersParser::STRING_CONSTANT);
    setState(83);
    match(FlatBuffersParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Namespace_declContext ------------------------------------------------------------------

FlatBuffersParser::Namespace_declContext::Namespace_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> FlatBuffersParser::Namespace_declContext::IDENT() {
  return getTokens(FlatBuffersParser::IDENT);
}

tree::TerminalNode* FlatBuffersParser::Namespace_declContext::IDENT(size_t i) {
  return getToken(FlatBuffersParser::IDENT, i);
}


size_t FlatBuffersParser::Namespace_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleNamespace_decl;
}

void FlatBuffersParser::Namespace_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespace_decl(this);
}

void FlatBuffersParser::Namespace_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespace_decl(this);
}


antlrcpp::Any FlatBuffersParser::Namespace_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitNamespace_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Namespace_declContext* FlatBuffersParser::namespace_decl() {
  Namespace_declContext *_localctx = _tracker.createInstance<Namespace_declContext>(_ctx, getState());
  enterRule(_localctx, 4, FlatBuffersParser::RuleNamespace_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    match(FlatBuffersParser::T__2);
    setState(86);
    match(FlatBuffersParser::IDENT);
    setState(91);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FlatBuffersParser::T__3) {
      setState(87);
      match(FlatBuffersParser::T__3);
      setState(88);
      match(FlatBuffersParser::IDENT);
      setState(93);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(94);
    match(FlatBuffersParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attribute_declContext ------------------------------------------------------------------

FlatBuffersParser::Attribute_declContext::Attribute_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffersParser::Attribute_declContext::STRING_CONSTANT() {
  return getToken(FlatBuffersParser::STRING_CONSTANT, 0);
}


size_t FlatBuffersParser::Attribute_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleAttribute_decl;
}

void FlatBuffersParser::Attribute_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute_decl(this);
}

void FlatBuffersParser::Attribute_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute_decl(this);
}


antlrcpp::Any FlatBuffersParser::Attribute_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitAttribute_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Attribute_declContext* FlatBuffersParser::attribute_decl() {
  Attribute_declContext *_localctx = _tracker.createInstance<Attribute_declContext>(_ctx, getState());
  enterRule(_localctx, 6, FlatBuffersParser::RuleAttribute_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    match(FlatBuffersParser::T__4);
    setState(97);
    match(FlatBuffersParser::STRING_CONSTANT);
    setState(98);
    match(FlatBuffersParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_declContext ------------------------------------------------------------------

FlatBuffersParser::Type_declContext::Type_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffersParser::Type_declContext::IDENT() {
  return getToken(FlatBuffersParser::IDENT, 0);
}

FlatBuffersParser::MetadataContext* FlatBuffersParser::Type_declContext::metadata() {
  return getRuleContext<FlatBuffersParser::MetadataContext>(0);
}

std::vector<FlatBuffersParser::Field_declContext *> FlatBuffersParser::Type_declContext::field_decl() {
  return getRuleContexts<FlatBuffersParser::Field_declContext>();
}

FlatBuffersParser::Field_declContext* FlatBuffersParser::Type_declContext::field_decl(size_t i) {
  return getRuleContext<FlatBuffersParser::Field_declContext>(i);
}


size_t FlatBuffersParser::Type_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleType_decl;
}

void FlatBuffersParser::Type_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_decl(this);
}

void FlatBuffersParser::Type_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_decl(this);
}


antlrcpp::Any FlatBuffersParser::Type_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitType_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Type_declContext* FlatBuffersParser::type_decl() {
  Type_declContext *_localctx = _tracker.createInstance<Type_declContext>(_ctx, getState());
  enterRule(_localctx, 8, FlatBuffersParser::RuleType_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    _la = _input->LA(1);
    if (!(_la == FlatBuffersParser::T__5

    || _la == FlatBuffersParser::T__6)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(101);
    match(FlatBuffersParser::IDENT);
    setState(102);
    metadata();
    setState(103);
    match(FlatBuffersParser::T__7);
    setState(107);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FlatBuffersParser::IDENT) {
      setState(104);
      field_decl();
      setState(109);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(110);
    match(FlatBuffersParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Enum_declContext ------------------------------------------------------------------

FlatBuffersParser::Enum_declContext::Enum_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffersParser::Enum_declContext::IDENT() {
  return getToken(FlatBuffersParser::IDENT, 0);
}

FlatBuffersParser::MetadataContext* FlatBuffersParser::Enum_declContext::metadata() {
  return getRuleContext<FlatBuffersParser::MetadataContext>(0);
}

FlatBuffersParser::Commasep_enumval_declContext* FlatBuffersParser::Enum_declContext::commasep_enumval_decl() {
  return getRuleContext<FlatBuffersParser::Commasep_enumval_declContext>(0);
}

FlatBuffersParser::TypeContext* FlatBuffersParser::Enum_declContext::type() {
  return getRuleContext<FlatBuffersParser::TypeContext>(0);
}


size_t FlatBuffersParser::Enum_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleEnum_decl;
}

void FlatBuffersParser::Enum_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnum_decl(this);
}

void FlatBuffersParser::Enum_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnum_decl(this);
}


antlrcpp::Any FlatBuffersParser::Enum_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitEnum_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Enum_declContext* FlatBuffersParser::enum_decl() {
  Enum_declContext *_localctx = _tracker.createInstance<Enum_declContext>(_ctx, getState());
  enterRule(_localctx, 10, FlatBuffersParser::RuleEnum_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    match(FlatBuffersParser::T__9);
    setState(113);
    match(FlatBuffersParser::IDENT);
    setState(116);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::T__10) {
      setState(114);
      match(FlatBuffersParser::T__10);
      setState(115);
      type();
    }
    setState(118);
    metadata();
    setState(119);
    match(FlatBuffersParser::T__7);
    setState(120);
    commasep_enumval_decl();
    setState(121);
    match(FlatBuffersParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Union_declContext ------------------------------------------------------------------

FlatBuffersParser::Union_declContext::Union_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffersParser::Union_declContext::IDENT() {
  return getToken(FlatBuffersParser::IDENT, 0);
}

FlatBuffersParser::MetadataContext* FlatBuffersParser::Union_declContext::metadata() {
  return getRuleContext<FlatBuffersParser::MetadataContext>(0);
}

FlatBuffersParser::Commasep_uniontype_declContext* FlatBuffersParser::Union_declContext::commasep_uniontype_decl() {
  return getRuleContext<FlatBuffersParser::Commasep_uniontype_declContext>(0);
}


size_t FlatBuffersParser::Union_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleUnion_decl;
}

void FlatBuffersParser::Union_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnion_decl(this);
}

void FlatBuffersParser::Union_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnion_decl(this);
}


antlrcpp::Any FlatBuffersParser::Union_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitUnion_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Union_declContext* FlatBuffersParser::union_decl() {
  Union_declContext *_localctx = _tracker.createInstance<Union_declContext>(_ctx, getState());
  enterRule(_localctx, 12, FlatBuffersParser::RuleUnion_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    match(FlatBuffersParser::T__11);
    setState(124);
    match(FlatBuffersParser::IDENT);
    setState(125);
    metadata();
    setState(126);
    match(FlatBuffersParser::T__7);
    setState(127);
    commasep_uniontype_decl();
    setState(128);
    match(FlatBuffersParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Root_declContext ------------------------------------------------------------------

FlatBuffersParser::Root_declContext::Root_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffersParser::Root_declContext::IDENT() {
  return getToken(FlatBuffersParser::IDENT, 0);
}


size_t FlatBuffersParser::Root_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleRoot_decl;
}

void FlatBuffersParser::Root_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRoot_decl(this);
}

void FlatBuffersParser::Root_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRoot_decl(this);
}


antlrcpp::Any FlatBuffersParser::Root_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitRoot_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Root_declContext* FlatBuffersParser::root_decl() {
  Root_declContext *_localctx = _tracker.createInstance<Root_declContext>(_ctx, getState());
  enterRule(_localctx, 14, FlatBuffersParser::RuleRoot_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    match(FlatBuffersParser::T__12);
    setState(131);
    match(FlatBuffersParser::IDENT);
    setState(132);
    match(FlatBuffersParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Field_declContext ------------------------------------------------------------------

FlatBuffersParser::Field_declContext::Field_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffersParser::Field_declContext::IDENT() {
  return getToken(FlatBuffersParser::IDENT, 0);
}

FlatBuffersParser::TypeContext* FlatBuffersParser::Field_declContext::type() {
  return getRuleContext<FlatBuffersParser::TypeContext>(0);
}

FlatBuffersParser::MetadataContext* FlatBuffersParser::Field_declContext::metadata() {
  return getRuleContext<FlatBuffersParser::MetadataContext>(0);
}

FlatBuffersParser::ScalarContext* FlatBuffersParser::Field_declContext::scalar() {
  return getRuleContext<FlatBuffersParser::ScalarContext>(0);
}


size_t FlatBuffersParser::Field_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleField_decl;
}

void FlatBuffersParser::Field_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterField_decl(this);
}

void FlatBuffersParser::Field_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitField_decl(this);
}


antlrcpp::Any FlatBuffersParser::Field_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitField_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Field_declContext* FlatBuffersParser::field_decl() {
  Field_declContext *_localctx = _tracker.createInstance<Field_declContext>(_ctx, getState());
  enterRule(_localctx, 16, FlatBuffersParser::RuleField_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    match(FlatBuffersParser::IDENT);
    setState(135);
    match(FlatBuffersParser::T__10);
    setState(136);
    type();
    setState(139);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::T__13) {
      setState(137);
      match(FlatBuffersParser::T__13);
      setState(138);
      scalar();
    }
    setState(141);
    metadata();
    setState(142);
    match(FlatBuffersParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rpc_declContext ------------------------------------------------------------------

FlatBuffersParser::Rpc_declContext::Rpc_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffersParser::Rpc_declContext::IDENT() {
  return getToken(FlatBuffersParser::IDENT, 0);
}

std::vector<FlatBuffersParser::Rpc_methodContext *> FlatBuffersParser::Rpc_declContext::rpc_method() {
  return getRuleContexts<FlatBuffersParser::Rpc_methodContext>();
}

FlatBuffersParser::Rpc_methodContext* FlatBuffersParser::Rpc_declContext::rpc_method(size_t i) {
  return getRuleContext<FlatBuffersParser::Rpc_methodContext>(i);
}


size_t FlatBuffersParser::Rpc_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleRpc_decl;
}

void FlatBuffersParser::Rpc_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRpc_decl(this);
}

void FlatBuffersParser::Rpc_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRpc_decl(this);
}


antlrcpp::Any FlatBuffersParser::Rpc_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitRpc_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Rpc_declContext* FlatBuffersParser::rpc_decl() {
  Rpc_declContext *_localctx = _tracker.createInstance<Rpc_declContext>(_ctx, getState());
  enterRule(_localctx, 18, FlatBuffersParser::RuleRpc_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    match(FlatBuffersParser::T__14);
    setState(145);
    match(FlatBuffersParser::IDENT);
    setState(146);
    match(FlatBuffersParser::T__7);
    setState(148); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(147);
      rpc_method();
      setState(150); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == FlatBuffersParser::IDENT);
    setState(152);
    match(FlatBuffersParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rpc_methodContext ------------------------------------------------------------------

FlatBuffersParser::Rpc_methodContext::Rpc_methodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> FlatBuffersParser::Rpc_methodContext::IDENT() {
  return getTokens(FlatBuffersParser::IDENT);
}

tree::TerminalNode* FlatBuffersParser::Rpc_methodContext::IDENT(size_t i) {
  return getToken(FlatBuffersParser::IDENT, i);
}

FlatBuffersParser::MetadataContext* FlatBuffersParser::Rpc_methodContext::metadata() {
  return getRuleContext<FlatBuffersParser::MetadataContext>(0);
}


size_t FlatBuffersParser::Rpc_methodContext::getRuleIndex() const {
  return FlatBuffersParser::RuleRpc_method;
}

void FlatBuffersParser::Rpc_methodContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRpc_method(this);
}

void FlatBuffersParser::Rpc_methodContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRpc_method(this);
}


antlrcpp::Any FlatBuffersParser::Rpc_methodContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitRpc_method(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Rpc_methodContext* FlatBuffersParser::rpc_method() {
  Rpc_methodContext *_localctx = _tracker.createInstance<Rpc_methodContext>(_ctx, getState());
  enterRule(_localctx, 20, FlatBuffersParser::RuleRpc_method);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    match(FlatBuffersParser::IDENT);
    setState(155);
    match(FlatBuffersParser::T__15);
    setState(156);
    match(FlatBuffersParser::IDENT);
    setState(157);
    match(FlatBuffersParser::T__16);
    setState(158);
    match(FlatBuffersParser::T__10);
    setState(159);
    match(FlatBuffersParser::IDENT);
    setState(160);
    metadata();
    setState(161);
    match(FlatBuffersParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

FlatBuffersParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FlatBuffersParser::TypeContext* FlatBuffersParser::TypeContext::type() {
  return getRuleContext<FlatBuffersParser::TypeContext>(0);
}

FlatBuffersParser::Integer_constContext* FlatBuffersParser::TypeContext::integer_const() {
  return getRuleContext<FlatBuffersParser::Integer_constContext>(0);
}

tree::TerminalNode* FlatBuffersParser::TypeContext::BASE_TYPE_NAME() {
  return getToken(FlatBuffersParser::BASE_TYPE_NAME, 0);
}

FlatBuffersParser::Ns_identContext* FlatBuffersParser::TypeContext::ns_ident() {
  return getRuleContext<FlatBuffersParser::Ns_identContext>(0);
}


size_t FlatBuffersParser::TypeContext::getRuleIndex() const {
  return FlatBuffersParser::RuleType;
}

void FlatBuffersParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void FlatBuffersParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


antlrcpp::Any FlatBuffersParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::TypeContext* FlatBuffersParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 22, FlatBuffersParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(173);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FlatBuffersParser::T__17: {
        enterOuterAlt(_localctx, 1);
        setState(163);
        match(FlatBuffersParser::T__17);
        setState(164);
        type();
        setState(167);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == FlatBuffersParser::T__10) {
          setState(165);
          match(FlatBuffersParser::T__10);
          setState(166);
          integer_const();
        }
        setState(169);
        match(FlatBuffersParser::T__18);
        break;
      }

      case FlatBuffersParser::BASE_TYPE_NAME: {
        enterOuterAlt(_localctx, 2);
        setState(171);
        match(FlatBuffersParser::BASE_TYPE_NAME);
        break;
      }

      case FlatBuffersParser::IDENT: {
        enterOuterAlt(_localctx, 3);
        setState(172);
        ns_ident();
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

//----------------- Uniontype_declContext ------------------------------------------------------------------

FlatBuffersParser::Uniontype_declContext::Uniontype_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FlatBuffersParser::TypeContext* FlatBuffersParser::Uniontype_declContext::type() {
  return getRuleContext<FlatBuffersParser::TypeContext>(0);
}


size_t FlatBuffersParser::Uniontype_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleUniontype_decl;
}

void FlatBuffersParser::Uniontype_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUniontype_decl(this);
}

void FlatBuffersParser::Uniontype_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUniontype_decl(this);
}


antlrcpp::Any FlatBuffersParser::Uniontype_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitUniontype_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Uniontype_declContext* FlatBuffersParser::uniontype_decl() {
  Uniontype_declContext *_localctx = _tracker.createInstance<Uniontype_declContext>(_ctx, getState());
  enterRule(_localctx, 24, FlatBuffersParser::RuleUniontype_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Commasep_uniontype_declContext ------------------------------------------------------------------

FlatBuffersParser::Commasep_uniontype_declContext::Commasep_uniontype_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FlatBuffersParser::Uniontype_declContext *> FlatBuffersParser::Commasep_uniontype_declContext::uniontype_decl() {
  return getRuleContexts<FlatBuffersParser::Uniontype_declContext>();
}

FlatBuffersParser::Uniontype_declContext* FlatBuffersParser::Commasep_uniontype_declContext::uniontype_decl(size_t i) {
  return getRuleContext<FlatBuffersParser::Uniontype_declContext>(i);
}


size_t FlatBuffersParser::Commasep_uniontype_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleCommasep_uniontype_decl;
}

void FlatBuffersParser::Commasep_uniontype_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommasep_uniontype_decl(this);
}

void FlatBuffersParser::Commasep_uniontype_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommasep_uniontype_decl(this);
}


antlrcpp::Any FlatBuffersParser::Commasep_uniontype_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitCommasep_uniontype_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Commasep_uniontype_declContext* FlatBuffersParser::commasep_uniontype_decl() {
  Commasep_uniontype_declContext *_localctx = _tracker.createInstance<Commasep_uniontype_declContext>(_ctx, getState());
  enterRule(_localctx, 26, FlatBuffersParser::RuleCommasep_uniontype_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(177);
    uniontype_decl();
    setState(182);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(178);
        match(FlatBuffersParser::T__19);
        setState(179);
        uniontype_decl(); 
      }
      setState(184);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
    setState(186);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::T__19) {
      setState(185);
      match(FlatBuffersParser::T__19);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Enumval_declContext ------------------------------------------------------------------

FlatBuffersParser::Enumval_declContext::Enumval_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FlatBuffersParser::Ns_identContext* FlatBuffersParser::Enumval_declContext::ns_ident() {
  return getRuleContext<FlatBuffersParser::Ns_identContext>(0);
}

FlatBuffersParser::Integer_constContext* FlatBuffersParser::Enumval_declContext::integer_const() {
  return getRuleContext<FlatBuffersParser::Integer_constContext>(0);
}


size_t FlatBuffersParser::Enumval_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleEnumval_decl;
}

void FlatBuffersParser::Enumval_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumval_decl(this);
}

void FlatBuffersParser::Enumval_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumval_decl(this);
}


antlrcpp::Any FlatBuffersParser::Enumval_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitEnumval_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Enumval_declContext* FlatBuffersParser::enumval_decl() {
  Enumval_declContext *_localctx = _tracker.createInstance<Enumval_declContext>(_ctx, getState());
  enterRule(_localctx, 28, FlatBuffersParser::RuleEnumval_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    ns_ident();
    setState(191);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::T__13) {
      setState(189);
      match(FlatBuffersParser::T__13);
      setState(190);
      integer_const();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Commasep_enumval_declContext ------------------------------------------------------------------

FlatBuffersParser::Commasep_enumval_declContext::Commasep_enumval_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FlatBuffersParser::Enumval_declContext *> FlatBuffersParser::Commasep_enumval_declContext::enumval_decl() {
  return getRuleContexts<FlatBuffersParser::Enumval_declContext>();
}

FlatBuffersParser::Enumval_declContext* FlatBuffersParser::Commasep_enumval_declContext::enumval_decl(size_t i) {
  return getRuleContext<FlatBuffersParser::Enumval_declContext>(i);
}


size_t FlatBuffersParser::Commasep_enumval_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleCommasep_enumval_decl;
}

void FlatBuffersParser::Commasep_enumval_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommasep_enumval_decl(this);
}

void FlatBuffersParser::Commasep_enumval_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommasep_enumval_decl(this);
}


antlrcpp::Any FlatBuffersParser::Commasep_enumval_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitCommasep_enumval_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Commasep_enumval_declContext* FlatBuffersParser::commasep_enumval_decl() {
  Commasep_enumval_declContext *_localctx = _tracker.createInstance<Commasep_enumval_declContext>(_ctx, getState());
  enterRule(_localctx, 30, FlatBuffersParser::RuleCommasep_enumval_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(193);
    enumval_decl();
    setState(198);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(194);
        match(FlatBuffersParser::T__19);
        setState(195);
        enumval_decl(); 
      }
      setState(200);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    }
    setState(202);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::T__19) {
      setState(201);
      match(FlatBuffersParser::T__19);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ident_with_opt_single_valueContext ------------------------------------------------------------------

FlatBuffersParser::Ident_with_opt_single_valueContext::Ident_with_opt_single_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffersParser::Ident_with_opt_single_valueContext::IDENT() {
  return getToken(FlatBuffersParser::IDENT, 0);
}

FlatBuffersParser::Single_valueContext* FlatBuffersParser::Ident_with_opt_single_valueContext::single_value() {
  return getRuleContext<FlatBuffersParser::Single_valueContext>(0);
}


size_t FlatBuffersParser::Ident_with_opt_single_valueContext::getRuleIndex() const {
  return FlatBuffersParser::RuleIdent_with_opt_single_value;
}

void FlatBuffersParser::Ident_with_opt_single_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdent_with_opt_single_value(this);
}

void FlatBuffersParser::Ident_with_opt_single_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdent_with_opt_single_value(this);
}


antlrcpp::Any FlatBuffersParser::Ident_with_opt_single_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitIdent_with_opt_single_value(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Ident_with_opt_single_valueContext* FlatBuffersParser::ident_with_opt_single_value() {
  Ident_with_opt_single_valueContext *_localctx = _tracker.createInstance<Ident_with_opt_single_valueContext>(_ctx, getState());
  enterRule(_localctx, 32, FlatBuffersParser::RuleIdent_with_opt_single_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    match(FlatBuffersParser::IDENT);
    setState(207);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::T__10) {
      setState(205);
      match(FlatBuffersParser::T__10);
      setState(206);
      single_value();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Commasep_ident_with_opt_single_valueContext ------------------------------------------------------------------

FlatBuffersParser::Commasep_ident_with_opt_single_valueContext::Commasep_ident_with_opt_single_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FlatBuffersParser::Ident_with_opt_single_valueContext *> FlatBuffersParser::Commasep_ident_with_opt_single_valueContext::ident_with_opt_single_value() {
  return getRuleContexts<FlatBuffersParser::Ident_with_opt_single_valueContext>();
}

FlatBuffersParser::Ident_with_opt_single_valueContext* FlatBuffersParser::Commasep_ident_with_opt_single_valueContext::ident_with_opt_single_value(size_t i) {
  return getRuleContext<FlatBuffersParser::Ident_with_opt_single_valueContext>(i);
}


size_t FlatBuffersParser::Commasep_ident_with_opt_single_valueContext::getRuleIndex() const {
  return FlatBuffersParser::RuleCommasep_ident_with_opt_single_value;
}

void FlatBuffersParser::Commasep_ident_with_opt_single_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommasep_ident_with_opt_single_value(this);
}

void FlatBuffersParser::Commasep_ident_with_opt_single_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommasep_ident_with_opt_single_value(this);
}


antlrcpp::Any FlatBuffersParser::Commasep_ident_with_opt_single_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitCommasep_ident_with_opt_single_value(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Commasep_ident_with_opt_single_valueContext* FlatBuffersParser::commasep_ident_with_opt_single_value() {
  Commasep_ident_with_opt_single_valueContext *_localctx = _tracker.createInstance<Commasep_ident_with_opt_single_valueContext>(_ctx, getState());
  enterRule(_localctx, 34, FlatBuffersParser::RuleCommasep_ident_with_opt_single_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(209);
    ident_with_opt_single_value();
    setState(214);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FlatBuffersParser::T__19) {
      setState(210);
      match(FlatBuffersParser::T__19);
      setState(211);
      ident_with_opt_single_value();
      setState(216);
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

//----------------- MetadataContext ------------------------------------------------------------------

FlatBuffersParser::MetadataContext::MetadataContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FlatBuffersParser::Commasep_ident_with_opt_single_valueContext* FlatBuffersParser::MetadataContext::commasep_ident_with_opt_single_value() {
  return getRuleContext<FlatBuffersParser::Commasep_ident_with_opt_single_valueContext>(0);
}


size_t FlatBuffersParser::MetadataContext::getRuleIndex() const {
  return FlatBuffersParser::RuleMetadata;
}

void FlatBuffersParser::MetadataContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMetadata(this);
}

void FlatBuffersParser::MetadataContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMetadata(this);
}


antlrcpp::Any FlatBuffersParser::MetadataContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitMetadata(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::MetadataContext* FlatBuffersParser::metadata() {
  MetadataContext *_localctx = _tracker.createInstance<MetadataContext>(_ctx, getState());
  enterRule(_localctx, 36, FlatBuffersParser::RuleMetadata);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(221);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::T__15) {
      setState(217);
      match(FlatBuffersParser::T__15);
      setState(218);
      commasep_ident_with_opt_single_value();
      setState(219);
      match(FlatBuffersParser::T__16);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScalarContext ------------------------------------------------------------------

FlatBuffersParser::ScalarContext::ScalarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffersParser::ScalarContext::INTEGER_CONSTANT() {
  return getToken(FlatBuffersParser::INTEGER_CONSTANT, 0);
}

tree::TerminalNode* FlatBuffersParser::ScalarContext::HEX_INTEGER_CONSTANT() {
  return getToken(FlatBuffersParser::HEX_INTEGER_CONSTANT, 0);
}

tree::TerminalNode* FlatBuffersParser::ScalarContext::FLOAT_CONSTANT() {
  return getToken(FlatBuffersParser::FLOAT_CONSTANT, 0);
}

tree::TerminalNode* FlatBuffersParser::ScalarContext::IDENT() {
  return getToken(FlatBuffersParser::IDENT, 0);
}


size_t FlatBuffersParser::ScalarContext::getRuleIndex() const {
  return FlatBuffersParser::RuleScalar;
}

void FlatBuffersParser::ScalarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScalar(this);
}

void FlatBuffersParser::ScalarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScalar(this);
}


antlrcpp::Any FlatBuffersParser::ScalarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitScalar(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::ScalarContext* FlatBuffersParser::scalar() {
  ScalarContext *_localctx = _tracker.createInstance<ScalarContext>(_ctx, getState());
  enterRule(_localctx, 38, FlatBuffersParser::RuleScalar);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << FlatBuffersParser::IDENT)
      | (1ULL << FlatBuffersParser::HEX_INTEGER_CONSTANT)
      | (1ULL << FlatBuffersParser::INTEGER_CONSTANT)
      | (1ULL << FlatBuffersParser::FLOAT_CONSTANT))) != 0))) {
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

//----------------- ObjectContext ------------------------------------------------------------------

FlatBuffersParser::ObjectContext::ObjectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FlatBuffersParser::Commasep_ident_with_valueContext* FlatBuffersParser::ObjectContext::commasep_ident_with_value() {
  return getRuleContext<FlatBuffersParser::Commasep_ident_with_valueContext>(0);
}


size_t FlatBuffersParser::ObjectContext::getRuleIndex() const {
  return FlatBuffersParser::RuleObject;
}

void FlatBuffersParser::ObjectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObject(this);
}

void FlatBuffersParser::ObjectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObject(this);
}


antlrcpp::Any FlatBuffersParser::ObjectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitObject(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::ObjectContext* FlatBuffersParser::object() {
  ObjectContext *_localctx = _tracker.createInstance<ObjectContext>(_ctx, getState());
  enterRule(_localctx, 40, FlatBuffersParser::RuleObject);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(225);
    match(FlatBuffersParser::T__7);
    setState(226);
    commasep_ident_with_value();
    setState(227);
    match(FlatBuffersParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ident_with_valueContext ------------------------------------------------------------------

FlatBuffersParser::Ident_with_valueContext::Ident_with_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffersParser::Ident_with_valueContext::IDENT() {
  return getToken(FlatBuffersParser::IDENT, 0);
}

FlatBuffersParser::ValueContext* FlatBuffersParser::Ident_with_valueContext::value() {
  return getRuleContext<FlatBuffersParser::ValueContext>(0);
}


size_t FlatBuffersParser::Ident_with_valueContext::getRuleIndex() const {
  return FlatBuffersParser::RuleIdent_with_value;
}

void FlatBuffersParser::Ident_with_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdent_with_value(this);
}

void FlatBuffersParser::Ident_with_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdent_with_value(this);
}


antlrcpp::Any FlatBuffersParser::Ident_with_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitIdent_with_value(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Ident_with_valueContext* FlatBuffersParser::ident_with_value() {
  Ident_with_valueContext *_localctx = _tracker.createInstance<Ident_with_valueContext>(_ctx, getState());
  enterRule(_localctx, 42, FlatBuffersParser::RuleIdent_with_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    match(FlatBuffersParser::IDENT);
    setState(230);
    match(FlatBuffersParser::T__10);
    setState(231);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Commasep_ident_with_valueContext ------------------------------------------------------------------

FlatBuffersParser::Commasep_ident_with_valueContext::Commasep_ident_with_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FlatBuffersParser::Ident_with_valueContext *> FlatBuffersParser::Commasep_ident_with_valueContext::ident_with_value() {
  return getRuleContexts<FlatBuffersParser::Ident_with_valueContext>();
}

FlatBuffersParser::Ident_with_valueContext* FlatBuffersParser::Commasep_ident_with_valueContext::ident_with_value(size_t i) {
  return getRuleContext<FlatBuffersParser::Ident_with_valueContext>(i);
}


size_t FlatBuffersParser::Commasep_ident_with_valueContext::getRuleIndex() const {
  return FlatBuffersParser::RuleCommasep_ident_with_value;
}

void FlatBuffersParser::Commasep_ident_with_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommasep_ident_with_value(this);
}

void FlatBuffersParser::Commasep_ident_with_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommasep_ident_with_value(this);
}


antlrcpp::Any FlatBuffersParser::Commasep_ident_with_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitCommasep_ident_with_value(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Commasep_ident_with_valueContext* FlatBuffersParser::commasep_ident_with_value() {
  Commasep_ident_with_valueContext *_localctx = _tracker.createInstance<Commasep_ident_with_valueContext>(_ctx, getState());
  enterRule(_localctx, 44, FlatBuffersParser::RuleCommasep_ident_with_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(233);
    ident_with_value();
    setState(238);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(234);
        match(FlatBuffersParser::T__19);
        setState(235);
        ident_with_value(); 
      }
      setState(240);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
    setState(242);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::T__19) {
      setState(241);
      match(FlatBuffersParser::T__19);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Single_valueContext ------------------------------------------------------------------

FlatBuffersParser::Single_valueContext::Single_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FlatBuffersParser::ScalarContext* FlatBuffersParser::Single_valueContext::scalar() {
  return getRuleContext<FlatBuffersParser::ScalarContext>(0);
}

tree::TerminalNode* FlatBuffersParser::Single_valueContext::STRING_CONSTANT() {
  return getToken(FlatBuffersParser::STRING_CONSTANT, 0);
}


size_t FlatBuffersParser::Single_valueContext::getRuleIndex() const {
  return FlatBuffersParser::RuleSingle_value;
}

void FlatBuffersParser::Single_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingle_value(this);
}

void FlatBuffersParser::Single_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingle_value(this);
}


antlrcpp::Any FlatBuffersParser::Single_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitSingle_value(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Single_valueContext* FlatBuffersParser::single_value() {
  Single_valueContext *_localctx = _tracker.createInstance<Single_valueContext>(_ctx, getState());
  enterRule(_localctx, 46, FlatBuffersParser::RuleSingle_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(246);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FlatBuffersParser::IDENT:
      case FlatBuffersParser::HEX_INTEGER_CONSTANT:
      case FlatBuffersParser::INTEGER_CONSTANT:
      case FlatBuffersParser::FLOAT_CONSTANT: {
        enterOuterAlt(_localctx, 1);
        setState(244);
        scalar();
        break;
      }

      case FlatBuffersParser::STRING_CONSTANT: {
        enterOuterAlt(_localctx, 2);
        setState(245);
        match(FlatBuffersParser::STRING_CONSTANT);
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

//----------------- ValueContext ------------------------------------------------------------------

FlatBuffersParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FlatBuffersParser::Single_valueContext* FlatBuffersParser::ValueContext::single_value() {
  return getRuleContext<FlatBuffersParser::Single_valueContext>(0);
}

FlatBuffersParser::ObjectContext* FlatBuffersParser::ValueContext::object() {
  return getRuleContext<FlatBuffersParser::ObjectContext>(0);
}

FlatBuffersParser::Commasep_valueContext* FlatBuffersParser::ValueContext::commasep_value() {
  return getRuleContext<FlatBuffersParser::Commasep_valueContext>(0);
}


size_t FlatBuffersParser::ValueContext::getRuleIndex() const {
  return FlatBuffersParser::RuleValue;
}

void FlatBuffersParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void FlatBuffersParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}


antlrcpp::Any FlatBuffersParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::ValueContext* FlatBuffersParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 48, FlatBuffersParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(254);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FlatBuffersParser::STRING_CONSTANT:
      case FlatBuffersParser::IDENT:
      case FlatBuffersParser::HEX_INTEGER_CONSTANT:
      case FlatBuffersParser::INTEGER_CONSTANT:
      case FlatBuffersParser::FLOAT_CONSTANT: {
        enterOuterAlt(_localctx, 1);
        setState(248);
        single_value();
        break;
      }

      case FlatBuffersParser::T__7: {
        enterOuterAlt(_localctx, 2);
        setState(249);
        object();
        break;
      }

      case FlatBuffersParser::T__17: {
        enterOuterAlt(_localctx, 3);
        setState(250);
        match(FlatBuffersParser::T__17);
        setState(251);
        commasep_value();
        setState(252);
        match(FlatBuffersParser::T__18);
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

//----------------- Commasep_valueContext ------------------------------------------------------------------

FlatBuffersParser::Commasep_valueContext::Commasep_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FlatBuffersParser::ValueContext *> FlatBuffersParser::Commasep_valueContext::value() {
  return getRuleContexts<FlatBuffersParser::ValueContext>();
}

FlatBuffersParser::ValueContext* FlatBuffersParser::Commasep_valueContext::value(size_t i) {
  return getRuleContext<FlatBuffersParser::ValueContext>(i);
}


size_t FlatBuffersParser::Commasep_valueContext::getRuleIndex() const {
  return FlatBuffersParser::RuleCommasep_value;
}

void FlatBuffersParser::Commasep_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommasep_value(this);
}

void FlatBuffersParser::Commasep_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommasep_value(this);
}


antlrcpp::Any FlatBuffersParser::Commasep_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitCommasep_value(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Commasep_valueContext* FlatBuffersParser::commasep_value() {
  Commasep_valueContext *_localctx = _tracker.createInstance<Commasep_valueContext>(_ctx, getState());
  enterRule(_localctx, 50, FlatBuffersParser::RuleCommasep_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(256);
    value();
    setState(261);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(257);
        match(FlatBuffersParser::T__19);
        setState(258);
        value(); 
      }
      setState(263);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
    setState(265);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::T__19) {
      setState(264);
      match(FlatBuffersParser::T__19);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- File_extension_declContext ------------------------------------------------------------------

FlatBuffersParser::File_extension_declContext::File_extension_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffersParser::File_extension_declContext::STRING_CONSTANT() {
  return getToken(FlatBuffersParser::STRING_CONSTANT, 0);
}


size_t FlatBuffersParser::File_extension_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleFile_extension_decl;
}

void FlatBuffersParser::File_extension_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFile_extension_decl(this);
}

void FlatBuffersParser::File_extension_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFile_extension_decl(this);
}


antlrcpp::Any FlatBuffersParser::File_extension_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitFile_extension_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::File_extension_declContext* FlatBuffersParser::file_extension_decl() {
  File_extension_declContext *_localctx = _tracker.createInstance<File_extension_declContext>(_ctx, getState());
  enterRule(_localctx, 52, FlatBuffersParser::RuleFile_extension_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(267);
    match(FlatBuffersParser::T__20);
    setState(268);
    match(FlatBuffersParser::STRING_CONSTANT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- File_identifier_declContext ------------------------------------------------------------------

FlatBuffersParser::File_identifier_declContext::File_identifier_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffersParser::File_identifier_declContext::STRING_CONSTANT() {
  return getToken(FlatBuffersParser::STRING_CONSTANT, 0);
}


size_t FlatBuffersParser::File_identifier_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleFile_identifier_decl;
}

void FlatBuffersParser::File_identifier_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFile_identifier_decl(this);
}

void FlatBuffersParser::File_identifier_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFile_identifier_decl(this);
}


antlrcpp::Any FlatBuffersParser::File_identifier_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitFile_identifier_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::File_identifier_declContext* FlatBuffersParser::file_identifier_decl() {
  File_identifier_declContext *_localctx = _tracker.createInstance<File_identifier_declContext>(_ctx, getState());
  enterRule(_localctx, 54, FlatBuffersParser::RuleFile_identifier_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(270);
    match(FlatBuffersParser::T__21);
    setState(271);
    match(FlatBuffersParser::STRING_CONSTANT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ns_identContext ------------------------------------------------------------------

FlatBuffersParser::Ns_identContext::Ns_identContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> FlatBuffersParser::Ns_identContext::IDENT() {
  return getTokens(FlatBuffersParser::IDENT);
}

tree::TerminalNode* FlatBuffersParser::Ns_identContext::IDENT(size_t i) {
  return getToken(FlatBuffersParser::IDENT, i);
}


size_t FlatBuffersParser::Ns_identContext::getRuleIndex() const {
  return FlatBuffersParser::RuleNs_ident;
}

void FlatBuffersParser::Ns_identContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNs_ident(this);
}

void FlatBuffersParser::Ns_identContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNs_ident(this);
}


antlrcpp::Any FlatBuffersParser::Ns_identContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitNs_ident(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Ns_identContext* FlatBuffersParser::ns_ident() {
  Ns_identContext *_localctx = _tracker.createInstance<Ns_identContext>(_ctx, getState());
  enterRule(_localctx, 56, FlatBuffersParser::RuleNs_ident);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(273);
    match(FlatBuffersParser::IDENT);
    setState(278);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FlatBuffersParser::T__3) {
      setState(274);
      match(FlatBuffersParser::T__3);
      setState(275);
      match(FlatBuffersParser::IDENT);
      setState(280);
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

//----------------- Integer_constContext ------------------------------------------------------------------

FlatBuffersParser::Integer_constContext::Integer_constContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffersParser::Integer_constContext::INTEGER_CONSTANT() {
  return getToken(FlatBuffersParser::INTEGER_CONSTANT, 0);
}

tree::TerminalNode* FlatBuffersParser::Integer_constContext::HEX_INTEGER_CONSTANT() {
  return getToken(FlatBuffersParser::HEX_INTEGER_CONSTANT, 0);
}


size_t FlatBuffersParser::Integer_constContext::getRuleIndex() const {
  return FlatBuffersParser::RuleInteger_const;
}

void FlatBuffersParser::Integer_constContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInteger_const(this);
}

void FlatBuffersParser::Integer_constContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInteger_const(this);
}


antlrcpp::Any FlatBuffersParser::Integer_constContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitInteger_const(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Integer_constContext* FlatBuffersParser::integer_const() {
  Integer_constContext *_localctx = _tracker.createInstance<Integer_constContext>(_ctx, getState());
  enterRule(_localctx, 58, FlatBuffersParser::RuleInteger_const);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(281);
    _la = _input->LA(1);
    if (!(_la == FlatBuffersParser::HEX_INTEGER_CONSTANT

    || _la == FlatBuffersParser::INTEGER_CONSTANT)) {
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
std::vector<dfa::DFA> FlatBuffersParser::_decisionToDFA;
atn::PredictionContextCache FlatBuffersParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN FlatBuffersParser::_atn;
std::vector<uint16_t> FlatBuffersParser::_serializedATN;

std::vector<std::string> FlatBuffersParser::_ruleNames = {
  "schema", "include", "namespace_decl", "attribute_decl", "type_decl", 
  "enum_decl", "union_decl", "root_decl", "field_decl", "rpc_decl", "rpc_method", 
  "type", "uniontype_decl", "commasep_uniontype_decl", "enumval_decl", "commasep_enumval_decl", 
  "ident_with_opt_single_value", "commasep_ident_with_opt_single_value", 
  "metadata", "scalar", "object", "ident_with_value", "commasep_ident_with_value", 
  "single_value", "value", "commasep_value", "file_extension_decl", "file_identifier_decl", 
  "ns_ident", "integer_const"
};

std::vector<std::string> FlatBuffersParser::_literalNames = {
  "", "'include'", "';'", "'namespace'", "'.'", "'attribute'", "'table'", 
  "'struct'", "'{'", "'}'", "'enum'", "':'", "'union'", "'root_type'", "'='", 
  "'rpc_service'", "'('", "')'", "'['", "']'", "','", "'file_extension'", 
  "'file_identifier'"
};

std::vector<std::string> FlatBuffersParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "STRING_CONSTANT", "BASE_TYPE_NAME", "IDENT", "HEX_INTEGER_CONSTANT", 
  "INTEGER_CONSTANT", "FLOAT_CONSTANT", "BLOCK_COMMENT", "COMMENT", "WHITESPACE"
};

dfa::Vocabulary FlatBuffersParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> FlatBuffersParser::_tokenNames;

FlatBuffersParser::Initializer::Initializer() {
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
    0x3, 0x21, 0x11e, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x3, 0x2, 0x7, 0x2, 0x40, 0xa, 0x2, 0xc, 0x2, 0xe, 
    0x2, 0x43, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x4f, 0xa, 
    0x2, 0xc, 0x2, 0xe, 0x2, 0x52, 0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x5c, 0xa, 
    0x4, 0xc, 0x4, 0xe, 0x4, 0x5f, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x7, 0x6, 0x6c, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x6f, 0xb, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 
    0x77, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x5, 0xa, 0x8e, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x6, 0xb, 0x97, 0xa, 0xb, 0xd, 
    0xb, 0xe, 0xb, 0x98, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xaa, 0xa, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xb0, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xb7, 0xa, 0xf, 0xc, 0xf, 0xe, 
    0xf, 0xba, 0xb, 0xf, 0x3, 0xf, 0x5, 0xf, 0xbd, 0xa, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xc2, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x7, 0x11, 0xc7, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xca, 0xb, 
    0x11, 0x3, 0x11, 0x5, 0x11, 0xcd, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x5, 0x12, 0xd2, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 
    0x13, 0xd7, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0xda, 0xb, 0x13, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0xe0, 0xa, 0x14, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 
    0xef, 0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0xf2, 0xb, 0x18, 0x3, 0x18, 0x5, 
    0x18, 0xf5, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0xf9, 0xa, 0x19, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 
    0x1a, 0x101, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 
    0x106, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x109, 0xb, 0x1b, 0x3, 0x1b, 
    0x5, 0x1b, 0x10c, 0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x117, 
    0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x11a, 0xb, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x2, 0x2, 0x20, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
    0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x2, 0x5, 
    0x3, 0x2, 0x8, 0x9, 0x3, 0x2, 0x1b, 0x1e, 0x3, 0x2, 0x1c, 0x1d, 0x2, 
    0x122, 0x2, 0x41, 0x3, 0x2, 0x2, 0x2, 0x4, 0x53, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x57, 0x3, 0x2, 0x2, 0x2, 0x8, 0x62, 0x3, 0x2, 0x2, 0x2, 0xa, 0x66, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x72, 0x3, 0x2, 0x2, 0x2, 0xe, 0x7d, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x84, 0x3, 0x2, 0x2, 0x2, 0x12, 0x88, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x92, 0x3, 0x2, 0x2, 0x2, 0x16, 0x9c, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0xb3, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xbe, 0x3, 0x2, 0x2, 0x2, 0x20, 0xc3, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0xce, 0x3, 0x2, 0x2, 0x2, 0x24, 0xd3, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x28, 0xe1, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xe7, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x30, 0xf8, 0x3, 0x2, 0x2, 0x2, 
    0x32, 0x100, 0x3, 0x2, 0x2, 0x2, 0x34, 0x102, 0x3, 0x2, 0x2, 0x2, 0x36, 
    0x10d, 0x3, 0x2, 0x2, 0x2, 0x38, 0x110, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x113, 
    0x3, 0x2, 0x2, 0x2, 0x3c, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x40, 0x5, 
    0x4, 0x3, 0x2, 0x3f, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x40, 0x43, 0x3, 0x2, 
    0x2, 0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x3, 0x2, 0x2, 
    0x2, 0x42, 0x50, 0x3, 0x2, 0x2, 0x2, 0x43, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x4f, 0x5, 0x6, 0x4, 0x2, 0x45, 0x4f, 0x5, 0xa, 0x6, 0x2, 0x46, 
    0x4f, 0x5, 0xc, 0x7, 0x2, 0x47, 0x4f, 0x5, 0xe, 0x8, 0x2, 0x48, 0x4f, 
    0x5, 0x10, 0x9, 0x2, 0x49, 0x4f, 0x5, 0x36, 0x1c, 0x2, 0x4a, 0x4f, 0x5, 
    0x38, 0x1d, 0x2, 0x4b, 0x4f, 0x5, 0x8, 0x5, 0x2, 0x4c, 0x4f, 0x5, 0x14, 
    0xb, 0x2, 0x4d, 0x4f, 0x5, 0x2a, 0x16, 0x2, 0x4e, 0x44, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x45, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x46, 0x3, 0x2, 0x2, 0x2, 
    0x4e, 0x47, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4e, 
    0x49, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4b, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4d, 0x3, 
    0x2, 0x2, 0x2, 0x4f, 0x52, 0x3, 0x2, 0x2, 0x2, 0x50, 0x4e, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0x51, 0x3, 0x2, 0x2, 0x2, 0x51, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x7, 0x3, 0x2, 0x2, 
    0x54, 0x55, 0x7, 0x19, 0x2, 0x2, 0x55, 0x56, 0x7, 0x4, 0x2, 0x2, 0x56, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0x7, 0x5, 0x2, 0x2, 0x58, 0x5d, 
    0x7, 0x1b, 0x2, 0x2, 0x59, 0x5a, 0x7, 0x6, 0x2, 0x2, 0x5a, 0x5c, 0x7, 
    0x1b, 0x2, 0x2, 0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5f, 0x3, 0x2, 
    0x2, 0x2, 0x5d, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x3, 0x2, 0x2, 
    0x2, 0x5e, 0x60, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5d, 0x3, 0x2, 0x2, 0x2, 
    0x60, 0x61, 0x7, 0x4, 0x2, 0x2, 0x61, 0x7, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x63, 0x7, 0x7, 0x2, 0x2, 0x63, 0x64, 0x7, 0x19, 0x2, 0x2, 0x64, 0x65, 
    0x7, 0x4, 0x2, 0x2, 0x65, 0x9, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x9, 
    0x2, 0x2, 0x2, 0x67, 0x68, 0x7, 0x1b, 0x2, 0x2, 0x68, 0x69, 0x5, 0x26, 
    0x14, 0x2, 0x69, 0x6d, 0x7, 0xa, 0x2, 0x2, 0x6a, 0x6c, 0x5, 0x12, 0xa, 
    0x2, 0x6b, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6f, 0x3, 0x2, 0x2, 0x2, 
    0x6d, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6e, 
    0x70, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 
    0x7, 0xb, 0x2, 0x2, 0x71, 0xb, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x7, 
    0xc, 0x2, 0x2, 0x73, 0x76, 0x7, 0x1b, 0x2, 0x2, 0x74, 0x75, 0x7, 0xd, 
    0x2, 0x2, 0x75, 0x77, 0x5, 0x18, 0xd, 0x2, 0x76, 0x74, 0x3, 0x2, 0x2, 
    0x2, 0x76, 0x77, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x3, 0x2, 0x2, 0x2, 
    0x78, 0x79, 0x5, 0x26, 0x14, 0x2, 0x79, 0x7a, 0x7, 0xa, 0x2, 0x2, 0x7a, 
    0x7b, 0x5, 0x20, 0x11, 0x2, 0x7b, 0x7c, 0x7, 0xb, 0x2, 0x2, 0x7c, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0xe, 0x2, 0x2, 0x7e, 0x7f, 0x7, 
    0x1b, 0x2, 0x2, 0x7f, 0x80, 0x5, 0x26, 0x14, 0x2, 0x80, 0x81, 0x7, 0xa, 
    0x2, 0x2, 0x81, 0x82, 0x5, 0x1c, 0xf, 0x2, 0x82, 0x83, 0x7, 0xb, 0x2, 
    0x2, 0x83, 0xf, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 0x7, 0xf, 0x2, 0x2, 
    0x85, 0x86, 0x7, 0x1b, 0x2, 0x2, 0x86, 0x87, 0x7, 0x4, 0x2, 0x2, 0x87, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x7, 0x1b, 0x2, 0x2, 0x89, 0x8a, 
    0x7, 0xd, 0x2, 0x2, 0x8a, 0x8d, 0x5, 0x18, 0xd, 0x2, 0x8b, 0x8c, 0x7, 
    0x10, 0x2, 0x2, 0x8c, 0x8e, 0x5, 0x28, 0x15, 0x2, 0x8d, 0x8b, 0x3, 0x2, 
    0x2, 0x2, 0x8d, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x3, 0x2, 0x2, 
    0x2, 0x8f, 0x90, 0x5, 0x26, 0x14, 0x2, 0x90, 0x91, 0x7, 0x4, 0x2, 0x2, 
    0x91, 0x13, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x7, 0x11, 0x2, 0x2, 0x93, 
    0x94, 0x7, 0x1b, 0x2, 0x2, 0x94, 0x96, 0x7, 0xa, 0x2, 0x2, 0x95, 0x97, 
    0x5, 0x16, 0xc, 0x2, 0x96, 0x95, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x3, 
    0x2, 0x2, 0x2, 0x98, 0x96, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 
    0x2, 0x2, 0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x7, 0xb, 0x2, 
    0x2, 0x9b, 0x15, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x7, 0x1b, 0x2, 0x2, 
    0x9d, 0x9e, 0x7, 0x12, 0x2, 0x2, 0x9e, 0x9f, 0x7, 0x1b, 0x2, 0x2, 0x9f, 
    0xa0, 0x7, 0x13, 0x2, 0x2, 0xa0, 0xa1, 0x7, 0xd, 0x2, 0x2, 0xa1, 0xa2, 
    0x7, 0x1b, 0x2, 0x2, 0xa2, 0xa3, 0x5, 0x26, 0x14, 0x2, 0xa3, 0xa4, 0x7, 
    0x4, 0x2, 0x2, 0xa4, 0x17, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0x7, 0x14, 
    0x2, 0x2, 0xa6, 0xa9, 0x5, 0x18, 0xd, 0x2, 0xa7, 0xa8, 0x7, 0xd, 0x2, 
    0x2, 0xa8, 0xaa, 0x5, 0x3c, 0x1f, 0x2, 0xa9, 0xa7, 0x3, 0x2, 0x2, 0x2, 
    0xa9, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x3, 0x2, 0x2, 0x2, 0xab, 
    0xac, 0x7, 0x15, 0x2, 0x2, 0xac, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xad, 0xb0, 
    0x7, 0x1a, 0x2, 0x2, 0xae, 0xb0, 0x5, 0x3a, 0x1e, 0x2, 0xaf, 0xa5, 0x3, 
    0x2, 0x2, 0x2, 0xaf, 0xad, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xae, 0x3, 0x2, 
    0x2, 0x2, 0xb0, 0x19, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 0x5, 0x18, 0xd, 
    0x2, 0xb2, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb8, 0x5, 0x1a, 0xe, 0x2, 
    0xb4, 0xb5, 0x7, 0x16, 0x2, 0x2, 0xb5, 0xb7, 0x5, 0x1a, 0xe, 0x2, 0xb6, 
    0xb4, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xba, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb6, 
    0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xbc, 0x3, 
    0x2, 0x2, 0x2, 0xba, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbd, 0x7, 0x16, 
    0x2, 0x2, 0xbc, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x3, 0x2, 0x2, 
    0x2, 0xbd, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xc1, 0x5, 0x3a, 0x1e, 0x2, 
    0xbf, 0xc0, 0x7, 0x10, 0x2, 0x2, 0xc0, 0xc2, 0x5, 0x3c, 0x1f, 0x2, 0xc1, 
    0xbf, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0xc3, 0xc8, 0x5, 0x1e, 0x10, 0x2, 0xc4, 0xc5, 0x7, 
    0x16, 0x2, 0x2, 0xc5, 0xc7, 0x5, 0x1e, 0x10, 0x2, 0xc6, 0xc4, 0x3, 0x2, 
    0x2, 0x2, 0xc7, 0xca, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc6, 0x3, 0x2, 0x2, 
    0x2, 0xc8, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xcc, 0x3, 0x2, 0x2, 0x2, 
    0xca, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcd, 0x7, 0x16, 0x2, 0x2, 0xcc, 
    0xcb, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcd, 0x21, 
    0x3, 0x2, 0x2, 0x2, 0xce, 0xd1, 0x7, 0x1b, 0x2, 0x2, 0xcf, 0xd0, 0x7, 
    0xd, 0x2, 0x2, 0xd0, 0xd2, 0x5, 0x30, 0x19, 0x2, 0xd1, 0xcf, 0x3, 0x2, 
    0x2, 0x2, 0xd1, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x23, 0x3, 0x2, 0x2, 
    0x2, 0xd3, 0xd8, 0x5, 0x22, 0x12, 0x2, 0xd4, 0xd5, 0x7, 0x16, 0x2, 0x2, 
    0xd5, 0xd7, 0x5, 0x22, 0x12, 0x2, 0xd6, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd7, 
    0xda, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 
    0x3, 0x2, 0x2, 0x2, 0xd9, 0x25, 0x3, 0x2, 0x2, 0x2, 0xda, 0xd8, 0x3, 
    0x2, 0x2, 0x2, 0xdb, 0xdc, 0x7, 0x12, 0x2, 0x2, 0xdc, 0xdd, 0x5, 0x24, 
    0x13, 0x2, 0xdd, 0xde, 0x7, 0x13, 0x2, 0x2, 0xde, 0xe0, 0x3, 0x2, 0x2, 
    0x2, 0xdf, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x3, 0x2, 0x2, 0x2, 
    0xe0, 0x27, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x9, 0x3, 0x2, 0x2, 0xe2, 
    0x29, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x7, 0xa, 0x2, 0x2, 0xe4, 0xe5, 
    0x5, 0x2e, 0x18, 0x2, 0xe5, 0xe6, 0x7, 0xb, 0x2, 0x2, 0xe6, 0x2b, 0x3, 
    0x2, 0x2, 0x2, 0xe7, 0xe8, 0x7, 0x1b, 0x2, 0x2, 0xe8, 0xe9, 0x7, 0xd, 
    0x2, 0x2, 0xe9, 0xea, 0x5, 0x32, 0x1a, 0x2, 0xea, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0xeb, 0xf0, 0x5, 0x2c, 0x17, 0x2, 0xec, 0xed, 0x7, 0x16, 0x2, 0x2, 
    0xed, 0xef, 0x5, 0x2c, 0x17, 0x2, 0xee, 0xec, 0x3, 0x2, 0x2, 0x2, 0xef, 
    0xf2, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 
    0x3, 0x2, 0x2, 0x2, 0xf1, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf0, 0x3, 
    0x2, 0x2, 0x2, 0xf3, 0xf5, 0x7, 0x16, 0x2, 0x2, 0xf4, 0xf3, 0x3, 0x2, 
    0x2, 0x2, 0xf4, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf5, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0xf6, 0xf9, 0x5, 0x28, 0x15, 0x2, 0xf7, 0xf9, 0x7, 0x19, 0x2, 0x2, 
    0xf8, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf9, 
    0x31, 0x3, 0x2, 0x2, 0x2, 0xfa, 0x101, 0x5, 0x30, 0x19, 0x2, 0xfb, 0x101, 
    0x5, 0x2a, 0x16, 0x2, 0xfc, 0xfd, 0x7, 0x14, 0x2, 0x2, 0xfd, 0xfe, 0x5, 
    0x34, 0x1b, 0x2, 0xfe, 0xff, 0x7, 0x15, 0x2, 0x2, 0xff, 0x101, 0x3, 
    0x2, 0x2, 0x2, 0x100, 0xfa, 0x3, 0x2, 0x2, 0x2, 0x100, 0xfb, 0x3, 0x2, 
    0x2, 0x2, 0x100, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x101, 0x33, 0x3, 0x2, 0x2, 
    0x2, 0x102, 0x107, 0x5, 0x32, 0x1a, 0x2, 0x103, 0x104, 0x7, 0x16, 0x2, 
    0x2, 0x104, 0x106, 0x5, 0x32, 0x1a, 0x2, 0x105, 0x103, 0x3, 0x2, 0x2, 
    0x2, 0x106, 0x109, 0x3, 0x2, 0x2, 0x2, 0x107, 0x105, 0x3, 0x2, 0x2, 
    0x2, 0x107, 0x108, 0x3, 0x2, 0x2, 0x2, 0x108, 0x10b, 0x3, 0x2, 0x2, 
    0x2, 0x109, 0x107, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10c, 0x7, 0x16, 0x2, 
    0x2, 0x10b, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10c, 0x3, 0x2, 0x2, 
    0x2, 0x10c, 0x35, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 0x7, 0x17, 0x2, 
    0x2, 0x10e, 0x10f, 0x7, 0x19, 0x2, 0x2, 0x10f, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0x110, 0x111, 0x7, 0x18, 0x2, 0x2, 0x111, 0x112, 0x7, 0x19, 0x2, 
    0x2, 0x112, 0x39, 0x3, 0x2, 0x2, 0x2, 0x113, 0x118, 0x7, 0x1b, 0x2, 
    0x2, 0x114, 0x115, 0x7, 0x6, 0x2, 0x2, 0x115, 0x117, 0x7, 0x1b, 0x2, 
    0x2, 0x116, 0x114, 0x3, 0x2, 0x2, 0x2, 0x117, 0x11a, 0x3, 0x2, 0x2, 
    0x2, 0x118, 0x116, 0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 0x3, 0x2, 0x2, 
    0x2, 0x119, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x118, 0x3, 0x2, 0x2, 0x2, 
    0x11b, 0x11c, 0x9, 0x4, 0x2, 0x2, 0x11c, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x1b, 
    0x41, 0x4e, 0x50, 0x5d, 0x6d, 0x76, 0x8d, 0x98, 0xa9, 0xaf, 0xb8, 0xbc, 
    0xc1, 0xc8, 0xcc, 0xd1, 0xd8, 0xdf, 0xf0, 0xf4, 0xf8, 0x100, 0x107, 
    0x10b, 0x118, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

FlatBuffersParser::Initializer FlatBuffersParser::_init;
