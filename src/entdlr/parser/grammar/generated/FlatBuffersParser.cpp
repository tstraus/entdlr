
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

std::vector<FlatBuffersParser::Facility_declContext *> FlatBuffersParser::SchemaContext::facility_decl() {
  return getRuleContexts<FlatBuffersParser::Facility_declContext>();
}

FlatBuffersParser::Facility_declContext* FlatBuffersParser::SchemaContext::facility_decl(size_t i) {
  return getRuleContext<FlatBuffersParser::Facility_declContext>(i);
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
    setState(79);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FlatBuffersParser::T__0) {
      setState(76);
      include();
      setState(81);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(95);
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
      | (1ULL << FlatBuffersParser::T__17)
      | (1ULL << FlatBuffersParser::T__23)
      | (1ULL << FlatBuffersParser::T__24))) != 0)) {
      setState(93);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case FlatBuffersParser::T__2: {
          setState(82);
          namespace_decl();
          break;
        }

        case FlatBuffersParser::T__5:
        case FlatBuffersParser::T__6: {
          setState(83);
          type_decl();
          break;
        }

        case FlatBuffersParser::T__9: {
          setState(84);
          enum_decl();
          break;
        }

        case FlatBuffersParser::T__11: {
          setState(85);
          union_decl();
          break;
        }

        case FlatBuffersParser::T__12: {
          setState(86);
          root_decl();
          break;
        }

        case FlatBuffersParser::T__23: {
          setState(87);
          file_extension_decl();
          break;
        }

        case FlatBuffersParser::T__24: {
          setState(88);
          file_identifier_decl();
          break;
        }

        case FlatBuffersParser::T__4: {
          setState(89);
          attribute_decl();
          break;
        }

        case FlatBuffersParser::T__14: {
          setState(90);
          rpc_decl();
          break;
        }

        case FlatBuffersParser::T__17: {
          setState(91);
          facility_decl();
          break;
        }

        case FlatBuffersParser::T__7: {
          setState(92);
          object();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(97);
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
    setState(98);
    match(FlatBuffersParser::T__0);
    setState(99);
    match(FlatBuffersParser::STRING_CONSTANT);
    setState(100);
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
    setState(102);
    match(FlatBuffersParser::T__2);
    setState(103);
    match(FlatBuffersParser::IDENT);
    setState(108);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FlatBuffersParser::T__3) {
      setState(104);
      match(FlatBuffersParser::T__3);
      setState(105);
      match(FlatBuffersParser::IDENT);
      setState(110);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(111);
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
    setState(113);
    match(FlatBuffersParser::T__4);
    setState(114);
    match(FlatBuffersParser::STRING_CONSTANT);
    setState(115);
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

std::vector<FlatBuffersParser::Method_declContext *> FlatBuffersParser::Type_declContext::method_decl() {
  return getRuleContexts<FlatBuffersParser::Method_declContext>();
}

FlatBuffersParser::Method_declContext* FlatBuffersParser::Type_declContext::method_decl(size_t i) {
  return getRuleContext<FlatBuffersParser::Method_declContext>(i);
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
    setState(117);
    _la = _input->LA(1);
    if (!(_la == FlatBuffersParser::T__5

    || _la == FlatBuffersParser::T__6)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(118);
    match(FlatBuffersParser::IDENT);
    setState(119);
    metadata();
    setState(120);
    match(FlatBuffersParser::T__7);
    setState(125);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FlatBuffersParser::T__20

    || _la == FlatBuffersParser::IDENT) {
      setState(123);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
      case 1: {
        setState(121);
        field_decl();
        break;
      }

      case 2: {
        setState(122);
        method_decl();
        break;
      }

      }
      setState(127);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
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
    setState(130);
    match(FlatBuffersParser::T__9);
    setState(131);
    match(FlatBuffersParser::IDENT);
    setState(134);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::T__10) {
      setState(132);
      match(FlatBuffersParser::T__10);
      setState(133);
      type();
    }
    setState(136);
    metadata();
    setState(137);
    match(FlatBuffersParser::T__7);
    setState(138);
    commasep_enumval_decl();
    setState(139);
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
    setState(141);
    match(FlatBuffersParser::T__11);
    setState(142);
    match(FlatBuffersParser::IDENT);
    setState(143);
    metadata();
    setState(144);
    match(FlatBuffersParser::T__7);
    setState(145);
    commasep_uniontype_decl();
    setState(146);
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
    setState(148);
    match(FlatBuffersParser::T__12);
    setState(149);
    match(FlatBuffersParser::IDENT);
    setState(150);
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
    setState(152);
    match(FlatBuffersParser::IDENT);
    setState(153);
    match(FlatBuffersParser::T__10);
    setState(154);
    type();
    setState(157);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::T__13) {
      setState(155);
      match(FlatBuffersParser::T__13);
      setState(156);
      scalar();
    }
    setState(159);
    metadata();
    setState(160);
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
    setState(162);
    match(FlatBuffersParser::T__14);
    setState(163);
    match(FlatBuffersParser::IDENT);
    setState(164);
    match(FlatBuffersParser::T__7);
    setState(166); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(165);
      rpc_method();
      setState(168); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == FlatBuffersParser::IDENT);
    setState(170);
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
    setState(172);
    match(FlatBuffersParser::IDENT);
    setState(173);
    match(FlatBuffersParser::T__15);
    setState(174);
    match(FlatBuffersParser::IDENT);
    setState(175);
    match(FlatBuffersParser::T__16);
    setState(176);
    match(FlatBuffersParser::T__10);
    setState(177);
    match(FlatBuffersParser::IDENT);
    setState(178);
    metadata();
    setState(179);
    match(FlatBuffersParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Facility_declContext ------------------------------------------------------------------

FlatBuffersParser::Facility_declContext::Facility_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffersParser::Facility_declContext::IDENT() {
  return getToken(FlatBuffersParser::IDENT, 0);
}

std::vector<FlatBuffersParser::Method_declContext *> FlatBuffersParser::Facility_declContext::method_decl() {
  return getRuleContexts<FlatBuffersParser::Method_declContext>();
}

FlatBuffersParser::Method_declContext* FlatBuffersParser::Facility_declContext::method_decl(size_t i) {
  return getRuleContext<FlatBuffersParser::Method_declContext>(i);
}


size_t FlatBuffersParser::Facility_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleFacility_decl;
}

void FlatBuffersParser::Facility_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFacility_decl(this);
}

void FlatBuffersParser::Facility_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFacility_decl(this);
}


antlrcpp::Any FlatBuffersParser::Facility_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitFacility_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Facility_declContext* FlatBuffersParser::facility_decl() {
  Facility_declContext *_localctx = _tracker.createInstance<Facility_declContext>(_ctx, getState());
  enterRule(_localctx, 22, FlatBuffersParser::RuleFacility_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(181);
    match(FlatBuffersParser::T__17);
    setState(182);
    match(FlatBuffersParser::IDENT);
    setState(183);
    match(FlatBuffersParser::T__7);
    setState(185); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(184);
      method_decl();
      setState(187); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == FlatBuffersParser::T__20

    || _la == FlatBuffersParser::IDENT);
    setState(189);
    match(FlatBuffersParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Method_declContext ------------------------------------------------------------------

FlatBuffersParser::Method_declContext::Method_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffersParser::Method_declContext::IDENT() {
  return getToken(FlatBuffersParser::IDENT, 0);
}

FlatBuffersParser::Method_parametersContext* FlatBuffersParser::Method_declContext::method_parameters() {
  return getRuleContext<FlatBuffersParser::Method_parametersContext>(0);
}

FlatBuffersParser::MetadataContext* FlatBuffersParser::Method_declContext::metadata() {
  return getRuleContext<FlatBuffersParser::MetadataContext>(0);
}

FlatBuffersParser::Static_declContext* FlatBuffersParser::Method_declContext::static_decl() {
  return getRuleContext<FlatBuffersParser::Static_declContext>(0);
}

FlatBuffersParser::Method_return_typeContext* FlatBuffersParser::Method_declContext::method_return_type() {
  return getRuleContext<FlatBuffersParser::Method_return_typeContext>(0);
}


size_t FlatBuffersParser::Method_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleMethod_decl;
}

void FlatBuffersParser::Method_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_decl(this);
}

void FlatBuffersParser::Method_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_decl(this);
}


antlrcpp::Any FlatBuffersParser::Method_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitMethod_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Method_declContext* FlatBuffersParser::method_decl() {
  Method_declContext *_localctx = _tracker.createInstance<Method_declContext>(_ctx, getState());
  enterRule(_localctx, 24, FlatBuffersParser::RuleMethod_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::T__20) {
      setState(191);
      static_decl();
    }
    setState(194);
    match(FlatBuffersParser::IDENT);
    setState(195);
    match(FlatBuffersParser::T__15);
    setState(196);
    method_parameters();
    setState(197);
    match(FlatBuffersParser::T__16);
    setState(200);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::T__10) {
      setState(198);
      match(FlatBuffersParser::T__10);
      setState(199);
      method_return_type();
    }
    setState(202);
    metadata();
    setState(203);
    match(FlatBuffersParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Method_parametersContext ------------------------------------------------------------------

FlatBuffersParser::Method_parametersContext::Method_parametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FlatBuffersParser::Method_parameterContext *> FlatBuffersParser::Method_parametersContext::method_parameter() {
  return getRuleContexts<FlatBuffersParser::Method_parameterContext>();
}

FlatBuffersParser::Method_parameterContext* FlatBuffersParser::Method_parametersContext::method_parameter(size_t i) {
  return getRuleContext<FlatBuffersParser::Method_parameterContext>(i);
}


size_t FlatBuffersParser::Method_parametersContext::getRuleIndex() const {
  return FlatBuffersParser::RuleMethod_parameters;
}

void FlatBuffersParser::Method_parametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_parameters(this);
}

void FlatBuffersParser::Method_parametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_parameters(this);
}


antlrcpp::Any FlatBuffersParser::Method_parametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitMethod_parameters(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Method_parametersContext* FlatBuffersParser::method_parameters() {
  Method_parametersContext *_localctx = _tracker.createInstance<Method_parametersContext>(_ctx, getState());
  enterRule(_localctx, 26, FlatBuffersParser::RuleMethod_parameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(206);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::T__19

    || _la == FlatBuffersParser::IDENT) {
      setState(205);
      method_parameter();
    }
    setState(212);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FlatBuffersParser::T__18) {
      setState(208);
      match(FlatBuffersParser::T__18);
      setState(209);
      method_parameter();
      setState(214);
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

//----------------- Method_parameterContext ------------------------------------------------------------------

FlatBuffersParser::Method_parameterContext::Method_parameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffersParser::Method_parameterContext::IDENT() {
  return getToken(FlatBuffersParser::IDENT, 0);
}

FlatBuffersParser::Method_typeContext* FlatBuffersParser::Method_parameterContext::method_type() {
  return getRuleContext<FlatBuffersParser::Method_typeContext>(0);
}

FlatBuffersParser::Mutable_declContext* FlatBuffersParser::Method_parameterContext::mutable_decl() {
  return getRuleContext<FlatBuffersParser::Mutable_declContext>(0);
}


size_t FlatBuffersParser::Method_parameterContext::getRuleIndex() const {
  return FlatBuffersParser::RuleMethod_parameter;
}

void FlatBuffersParser::Method_parameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_parameter(this);
}

void FlatBuffersParser::Method_parameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_parameter(this);
}


antlrcpp::Any FlatBuffersParser::Method_parameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitMethod_parameter(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Method_parameterContext* FlatBuffersParser::method_parameter() {
  Method_parameterContext *_localctx = _tracker.createInstance<Method_parameterContext>(_ctx, getState());
  enterRule(_localctx, 28, FlatBuffersParser::RuleMethod_parameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::T__19) {
      setState(215);
      mutable_decl();
    }
    setState(218);
    match(FlatBuffersParser::IDENT);
    setState(219);
    match(FlatBuffersParser::T__10);
    setState(220);
    method_type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Mutable_declContext ------------------------------------------------------------------

FlatBuffersParser::Mutable_declContext::Mutable_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t FlatBuffersParser::Mutable_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleMutable_decl;
}

void FlatBuffersParser::Mutable_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMutable_decl(this);
}

void FlatBuffersParser::Mutable_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMutable_decl(this);
}


antlrcpp::Any FlatBuffersParser::Mutable_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitMutable_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Mutable_declContext* FlatBuffersParser::mutable_decl() {
  Mutable_declContext *_localctx = _tracker.createInstance<Mutable_declContext>(_ctx, getState());
  enterRule(_localctx, 30, FlatBuffersParser::RuleMutable_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    match(FlatBuffersParser::T__19);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Static_declContext ------------------------------------------------------------------

FlatBuffersParser::Static_declContext::Static_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t FlatBuffersParser::Static_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleStatic_decl;
}

void FlatBuffersParser::Static_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatic_decl(this);
}

void FlatBuffersParser::Static_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatic_decl(this);
}


antlrcpp::Any FlatBuffersParser::Static_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitStatic_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Static_declContext* FlatBuffersParser::static_decl() {
  Static_declContext *_localctx = _tracker.createInstance<Static_declContext>(_ctx, getState());
  enterRule(_localctx, 32, FlatBuffersParser::RuleStatic_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(224);
    match(FlatBuffersParser::T__20);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Method_return_typeContext ------------------------------------------------------------------

FlatBuffersParser::Method_return_typeContext::Method_return_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FlatBuffersParser::Method_typeContext* FlatBuffersParser::Method_return_typeContext::method_type() {
  return getRuleContext<FlatBuffersParser::Method_typeContext>(0);
}


size_t FlatBuffersParser::Method_return_typeContext::getRuleIndex() const {
  return FlatBuffersParser::RuleMethod_return_type;
}

void FlatBuffersParser::Method_return_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_return_type(this);
}

void FlatBuffersParser::Method_return_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_return_type(this);
}


antlrcpp::Any FlatBuffersParser::Method_return_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitMethod_return_type(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Method_return_typeContext* FlatBuffersParser::method_return_type() {
  Method_return_typeContext *_localctx = _tracker.createInstance<Method_return_typeContext>(_ctx, getState());
  enterRule(_localctx, 34, FlatBuffersParser::RuleMethod_return_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(226);
    method_type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Method_typeContext ------------------------------------------------------------------

FlatBuffersParser::Method_typeContext::Method_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffersParser::Method_typeContext::BASE_TYPE_NAME() {
  return getToken(FlatBuffersParser::BASE_TYPE_NAME, 0);
}

FlatBuffersParser::Ns_identContext* FlatBuffersParser::Method_typeContext::ns_ident() {
  return getRuleContext<FlatBuffersParser::Ns_identContext>(0);
}


size_t FlatBuffersParser::Method_typeContext::getRuleIndex() const {
  return FlatBuffersParser::RuleMethod_type;
}

void FlatBuffersParser::Method_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_type(this);
}

void FlatBuffersParser::Method_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_type(this);
}


antlrcpp::Any FlatBuffersParser::Method_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitMethod_type(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Method_typeContext* FlatBuffersParser::method_type() {
  Method_typeContext *_localctx = _tracker.createInstance<Method_typeContext>(_ctx, getState());
  enterRule(_localctx, 36, FlatBuffersParser::RuleMethod_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(230);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FlatBuffersParser::BASE_TYPE_NAME: {
        enterOuterAlt(_localctx, 1);
        setState(228);
        match(FlatBuffersParser::BASE_TYPE_NAME);
        break;
      }

      case FlatBuffersParser::IDENT: {
        enterOuterAlt(_localctx, 2);
        setState(229);
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
  enterRule(_localctx, 38, FlatBuffersParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(242);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FlatBuffersParser::T__21: {
        enterOuterAlt(_localctx, 1);
        setState(232);
        match(FlatBuffersParser::T__21);
        setState(233);
        type();
        setState(236);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == FlatBuffersParser::T__10) {
          setState(234);
          match(FlatBuffersParser::T__10);
          setState(235);
          integer_const();
        }
        setState(238);
        match(FlatBuffersParser::T__22);
        break;
      }

      case FlatBuffersParser::BASE_TYPE_NAME: {
        enterOuterAlt(_localctx, 2);
        setState(240);
        match(FlatBuffersParser::BASE_TYPE_NAME);
        break;
      }

      case FlatBuffersParser::IDENT: {
        enterOuterAlt(_localctx, 3);
        setState(241);
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
  enterRule(_localctx, 40, FlatBuffersParser::RuleUniontype_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(244);
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
  enterRule(_localctx, 42, FlatBuffersParser::RuleCommasep_uniontype_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(246);
    uniontype_decl();
    setState(251);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(247);
        match(FlatBuffersParser::T__18);
        setState(248);
        uniontype_decl(); 
      }
      setState(253);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
    setState(255);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::T__18) {
      setState(254);
      match(FlatBuffersParser::T__18);
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
  enterRule(_localctx, 44, FlatBuffersParser::RuleEnumval_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(257);
    ns_ident();
    setState(260);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::T__13) {
      setState(258);
      match(FlatBuffersParser::T__13);
      setState(259);
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
  enterRule(_localctx, 46, FlatBuffersParser::RuleCommasep_enumval_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(262);
    enumval_decl();
    setState(267);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(263);
        match(FlatBuffersParser::T__18);
        setState(264);
        enumval_decl(); 
      }
      setState(269);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
    setState(271);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::T__18) {
      setState(270);
      match(FlatBuffersParser::T__18);
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
  enterRule(_localctx, 48, FlatBuffersParser::RuleIdent_with_opt_single_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(273);
    match(FlatBuffersParser::IDENT);
    setState(276);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::T__10) {
      setState(274);
      match(FlatBuffersParser::T__10);
      setState(275);
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
  enterRule(_localctx, 50, FlatBuffersParser::RuleCommasep_ident_with_opt_single_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(278);
    ident_with_opt_single_value();
    setState(283);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FlatBuffersParser::T__18) {
      setState(279);
      match(FlatBuffersParser::T__18);
      setState(280);
      ident_with_opt_single_value();
      setState(285);
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
  enterRule(_localctx, 52, FlatBuffersParser::RuleMetadata);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(290);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::T__15) {
      setState(286);
      match(FlatBuffersParser::T__15);
      setState(287);
      commasep_ident_with_opt_single_value();
      setState(288);
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
  enterRule(_localctx, 54, FlatBuffersParser::RuleScalar);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(292);
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
  enterRule(_localctx, 56, FlatBuffersParser::RuleObject);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(294);
    match(FlatBuffersParser::T__7);
    setState(295);
    commasep_ident_with_value();
    setState(296);
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
  enterRule(_localctx, 58, FlatBuffersParser::RuleIdent_with_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(298);
    match(FlatBuffersParser::IDENT);
    setState(299);
    match(FlatBuffersParser::T__10);
    setState(300);
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
  enterRule(_localctx, 60, FlatBuffersParser::RuleCommasep_ident_with_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(302);
    ident_with_value();
    setState(307);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(303);
        match(FlatBuffersParser::T__18);
        setState(304);
        ident_with_value(); 
      }
      setState(309);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    }
    setState(311);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::T__18) {
      setState(310);
      match(FlatBuffersParser::T__18);
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
  enterRule(_localctx, 62, FlatBuffersParser::RuleSingle_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(315);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FlatBuffersParser::IDENT:
      case FlatBuffersParser::HEX_INTEGER_CONSTANT:
      case FlatBuffersParser::INTEGER_CONSTANT:
      case FlatBuffersParser::FLOAT_CONSTANT: {
        enterOuterAlt(_localctx, 1);
        setState(313);
        scalar();
        break;
      }

      case FlatBuffersParser::STRING_CONSTANT: {
        enterOuterAlt(_localctx, 2);
        setState(314);
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
  enterRule(_localctx, 64, FlatBuffersParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(323);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FlatBuffersParser::STRING_CONSTANT:
      case FlatBuffersParser::IDENT:
      case FlatBuffersParser::HEX_INTEGER_CONSTANT:
      case FlatBuffersParser::INTEGER_CONSTANT:
      case FlatBuffersParser::FLOAT_CONSTANT: {
        enterOuterAlt(_localctx, 1);
        setState(317);
        single_value();
        break;
      }

      case FlatBuffersParser::T__7: {
        enterOuterAlt(_localctx, 2);
        setState(318);
        object();
        break;
      }

      case FlatBuffersParser::T__21: {
        enterOuterAlt(_localctx, 3);
        setState(319);
        match(FlatBuffersParser::T__21);
        setState(320);
        commasep_value();
        setState(321);
        match(FlatBuffersParser::T__22);
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
  enterRule(_localctx, 66, FlatBuffersParser::RuleCommasep_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(325);
    value();
    setState(330);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(326);
        match(FlatBuffersParser::T__18);
        setState(327);
        value(); 
      }
      setState(332);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    }
    setState(334);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::T__18) {
      setState(333);
      match(FlatBuffersParser::T__18);
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
  enterRule(_localctx, 68, FlatBuffersParser::RuleFile_extension_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(336);
    match(FlatBuffersParser::T__23);
    setState(337);
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
  enterRule(_localctx, 70, FlatBuffersParser::RuleFile_identifier_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(339);
    match(FlatBuffersParser::T__24);
    setState(340);
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
  enterRule(_localctx, 72, FlatBuffersParser::RuleNs_ident);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(342);
    match(FlatBuffersParser::IDENT);
    setState(347);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FlatBuffersParser::T__3) {
      setState(343);
      match(FlatBuffersParser::T__3);
      setState(344);
      match(FlatBuffersParser::IDENT);
      setState(349);
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
  enterRule(_localctx, 74, FlatBuffersParser::RuleInteger_const);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(350);
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
  "facility_decl", "method_decl", "method_parameters", "method_parameter", 
  "mutable_decl", "static_decl", "method_return_type", "method_type", "type", 
  "uniontype_decl", "commasep_uniontype_decl", "enumval_decl", "commasep_enumval_decl", 
  "ident_with_opt_single_value", "commasep_ident_with_opt_single_value", 
  "metadata", "scalar", "object", "ident_with_value", "commasep_ident_with_value", 
  "single_value", "value", "commasep_value", "file_extension_decl", "file_identifier_decl", 
  "ns_ident", "integer_const"
};

std::vector<std::string> FlatBuffersParser::_literalNames = {
  "", "'include'", "';'", "'namespace'", "'.'", "'attribute'", "'table'", 
  "'struct'", "'{'", "'}'", "'enum'", "':'", "'union'", "'root_type'", "'='", 
  "'rpc_service'", "'('", "')'", "'facility'", "','", "'mut'", "'static'", 
  "'['", "']'", "'file_extension'", "'file_identifier'"
};

std::vector<std::string> FlatBuffersParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "STRING_CONSTANT", "BASE_TYPE_NAME", "IDENT", 
  "HEX_INTEGER_CONSTANT", "INTEGER_CONSTANT", "FLOAT_CONSTANT", "BLOCK_COMMENT", 
  "COMMENT", "WHITESPACE"
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
    0x3, 0x24, 0x163, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x3, 0x2, 0x7, 0x2, 
    0x50, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x53, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x60, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x63, 
    0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x6d, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x70, 
    0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 
    0x7e, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x81, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x89, 0xa, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 
    0xa, 0xa0, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x6, 0xb, 0xa9, 0xa, 0xb, 0xd, 0xb, 0xe, 0xb, 0xaa, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x6, 0xd, 0xbc, 0xa, 0xd, 0xd, 0xd, 0xe, 0xd, 0xbd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xe, 0x5, 0xe, 0xc3, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xcb, 0xa, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x5, 0xf, 0xd1, 0xa, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x7, 0xf, 0xd5, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xd8, 0xb, 0xf, 0x3, 
    0x10, 0x5, 0x10, 0xdb, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0xe9, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0xef, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0xf5, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0xfc, 0xa, 0x17, 0xc, 0x17, 
    0xe, 0x17, 0xff, 0xb, 0x17, 0x3, 0x17, 0x5, 0x17, 0x102, 0xa, 0x17, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x107, 0xa, 0x18, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x10c, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 
    0x10f, 0xb, 0x19, 0x3, 0x19, 0x5, 0x19, 0x112, 0xa, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x117, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x7, 0x1b, 0x11c, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x11f, 
    0xb, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x125, 
    0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
    0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x7, 0x20, 0x134, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x137, 
    0xb, 0x20, 0x3, 0x20, 0x5, 0x20, 0x13a, 0xa, 0x20, 0x3, 0x21, 0x3, 0x21, 
    0x5, 0x21, 0x13e, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x146, 0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x7, 0x23, 0x14b, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x14e, 
    0xb, 0x23, 0x3, 0x23, 0x5, 0x23, 0x151, 0xa, 0x23, 0x3, 0x24, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 
    0x26, 0x7, 0x26, 0x15c, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 0x15f, 0xb, 
    0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x2, 0x2, 0x28, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
    0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x2, 
    0x5, 0x3, 0x2, 0x8, 0x9, 0x3, 0x2, 0x1e, 0x21, 0x3, 0x2, 0x1f, 0x20, 
    0x2, 0x168, 0x2, 0x51, 0x3, 0x2, 0x2, 0x2, 0x4, 0x64, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x68, 0x3, 0x2, 0x2, 0x2, 0x8, 0x73, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x77, 0x3, 0x2, 0x2, 0x2, 0xc, 0x84, 0x3, 0x2, 0x2, 0x2, 0xe, 0x8f, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x96, 0x3, 0x2, 0x2, 0x2, 0x12, 0x9a, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0xa4, 0x3, 0x2, 0x2, 0x2, 0x16, 0xae, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xc2, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0xd0, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xda, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0xe0, 0x3, 0x2, 0x2, 0x2, 0x22, 0xe2, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0xe4, 0x3, 0x2, 0x2, 0x2, 0x26, 0xe8, 0x3, 0x2, 0x2, 0x2, 0x28, 0xf4, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0xf6, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xf8, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x103, 0x3, 0x2, 0x2, 0x2, 0x30, 0x108, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x113, 0x3, 0x2, 0x2, 0x2, 0x34, 0x118, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x124, 0x3, 0x2, 0x2, 0x2, 0x38, 0x126, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x128, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x130, 0x3, 0x2, 0x2, 0x2, 0x40, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x42, 0x145, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x147, 0x3, 0x2, 0x2, 0x2, 0x46, 0x152, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0x155, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x158, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x160, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x50, 0x5, 0x4, 0x3, 
    0x2, 0x4f, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x50, 0x53, 0x3, 0x2, 0x2, 0x2, 
    0x51, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 0x2, 0x2, 0x2, 0x52, 
    0x61, 0x3, 0x2, 0x2, 0x2, 0x53, 0x51, 0x3, 0x2, 0x2, 0x2, 0x54, 0x60, 
    0x5, 0x6, 0x4, 0x2, 0x55, 0x60, 0x5, 0xa, 0x6, 0x2, 0x56, 0x60, 0x5, 
    0xc, 0x7, 0x2, 0x57, 0x60, 0x5, 0xe, 0x8, 0x2, 0x58, 0x60, 0x5, 0x10, 
    0x9, 0x2, 0x59, 0x60, 0x5, 0x46, 0x24, 0x2, 0x5a, 0x60, 0x5, 0x48, 0x25, 
    0x2, 0x5b, 0x60, 0x5, 0x8, 0x5, 0x2, 0x5c, 0x60, 0x5, 0x14, 0xb, 0x2, 
    0x5d, 0x60, 0x5, 0x18, 0xd, 0x2, 0x5e, 0x60, 0x5, 0x3a, 0x1e, 0x2, 0x5f, 
    0x54, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x55, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x56, 
    0x3, 0x2, 0x2, 0x2, 0x5f, 0x57, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x58, 0x3, 
    0x2, 0x2, 0x2, 0x5f, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5a, 0x3, 0x2, 
    0x2, 0x2, 0x5f, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5c, 0x3, 0x2, 0x2, 
    0x2, 0x5f, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5e, 0x3, 0x2, 0x2, 0x2, 
    0x60, 0x63, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x61, 
    0x62, 0x3, 0x2, 0x2, 0x2, 0x62, 0x3, 0x3, 0x2, 0x2, 0x2, 0x63, 0x61, 
    0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x7, 0x3, 0x2, 0x2, 0x65, 0x66, 0x7, 
    0x1c, 0x2, 0x2, 0x66, 0x67, 0x7, 0x4, 0x2, 0x2, 0x67, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x68, 0x69, 0x7, 0x5, 0x2, 0x2, 0x69, 0x6e, 0x7, 0x1e, 0x2, 
    0x2, 0x6a, 0x6b, 0x7, 0x6, 0x2, 0x2, 0x6b, 0x6d, 0x7, 0x1e, 0x2, 0x2, 
    0x6c, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x70, 0x3, 0x2, 0x2, 0x2, 0x6e, 
    0x6c, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x71, 
    0x3, 0x2, 0x2, 0x2, 0x70, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x7, 
    0x4, 0x2, 0x2, 0x72, 0x7, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x7, 0x7, 
    0x2, 0x2, 0x74, 0x75, 0x7, 0x1c, 0x2, 0x2, 0x75, 0x76, 0x7, 0x4, 0x2, 
    0x2, 0x76, 0x9, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x9, 0x2, 0x2, 0x2, 
    0x78, 0x79, 0x7, 0x1e, 0x2, 0x2, 0x79, 0x7a, 0x5, 0x36, 0x1c, 0x2, 0x7a, 
    0x7f, 0x7, 0xa, 0x2, 0x2, 0x7b, 0x7e, 0x5, 0x12, 0xa, 0x2, 0x7c, 0x7e, 
    0x5, 0x1a, 0xe, 0x2, 0x7d, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7c, 0x3, 
    0x2, 0x2, 0x2, 0x7e, 0x81, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7d, 0x3, 0x2, 
    0x2, 0x2, 0x7f, 0x80, 0x3, 0x2, 0x2, 0x2, 0x80, 0x82, 0x3, 0x2, 0x2, 
    0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x7, 0xb, 0x2, 0x2, 
    0x83, 0xb, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 0x7, 0xc, 0x2, 0x2, 0x85, 
    0x88, 0x7, 0x1e, 0x2, 0x2, 0x86, 0x87, 0x7, 0xd, 0x2, 0x2, 0x87, 0x89, 
    0x5, 0x28, 0x15, 0x2, 0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x3, 
    0x2, 0x2, 0x2, 0x89, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x5, 0x36, 
    0x1c, 0x2, 0x8b, 0x8c, 0x7, 0xa, 0x2, 0x2, 0x8c, 0x8d, 0x5, 0x30, 0x19, 
    0x2, 0x8d, 0x8e, 0x7, 0xb, 0x2, 0x2, 0x8e, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x8f, 0x90, 0x7, 0xe, 0x2, 0x2, 0x90, 0x91, 0x7, 0x1e, 0x2, 0x2, 0x91, 
    0x92, 0x5, 0x36, 0x1c, 0x2, 0x92, 0x93, 0x7, 0xa, 0x2, 0x2, 0x93, 0x94, 
    0x5, 0x2c, 0x17, 0x2, 0x94, 0x95, 0x7, 0xb, 0x2, 0x2, 0x95, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x96, 0x97, 0x7, 0xf, 0x2, 0x2, 0x97, 0x98, 0x7, 0x1e, 
    0x2, 0x2, 0x98, 0x99, 0x7, 0x4, 0x2, 0x2, 0x99, 0x11, 0x3, 0x2, 0x2, 
    0x2, 0x9a, 0x9b, 0x7, 0x1e, 0x2, 0x2, 0x9b, 0x9c, 0x7, 0xd, 0x2, 0x2, 
    0x9c, 0x9f, 0x5, 0x28, 0x15, 0x2, 0x9d, 0x9e, 0x7, 0x10, 0x2, 0x2, 0x9e, 
    0xa0, 0x5, 0x38, 0x1d, 0x2, 0x9f, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 
    0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa2, 0x5, 
    0x36, 0x1c, 0x2, 0xa2, 0xa3, 0x7, 0x4, 0x2, 0x2, 0xa3, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0xa4, 0xa5, 0x7, 0x11, 0x2, 0x2, 0xa5, 0xa6, 0x7, 0x1e, 0x2, 
    0x2, 0xa6, 0xa8, 0x7, 0xa, 0x2, 0x2, 0xa7, 0xa9, 0x5, 0x16, 0xc, 0x2, 
    0xa8, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xaa, 
    0xa8, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 
    0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x7, 0xb, 0x2, 0x2, 0xad, 0x15, 0x3, 
    0x2, 0x2, 0x2, 0xae, 0xaf, 0x7, 0x1e, 0x2, 0x2, 0xaf, 0xb0, 0x7, 0x12, 
    0x2, 0x2, 0xb0, 0xb1, 0x7, 0x1e, 0x2, 0x2, 0xb1, 0xb2, 0x7, 0x13, 0x2, 
    0x2, 0xb2, 0xb3, 0x7, 0xd, 0x2, 0x2, 0xb3, 0xb4, 0x7, 0x1e, 0x2, 0x2, 
    0xb4, 0xb5, 0x5, 0x36, 0x1c, 0x2, 0xb5, 0xb6, 0x7, 0x4, 0x2, 0x2, 0xb6, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x7, 0x14, 0x2, 0x2, 0xb8, 0xb9, 
    0x7, 0x1e, 0x2, 0x2, 0xb9, 0xbb, 0x7, 0xa, 0x2, 0x2, 0xba, 0xbc, 0x5, 
    0x1a, 0xe, 0x2, 0xbb, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x3, 0x2, 
    0x2, 0x2, 0xbd, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x3, 0x2, 0x2, 
    0x2, 0xbe, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x7, 0xb, 0x2, 0x2, 
    0xc0, 0x19, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc3, 0x5, 0x22, 0x12, 0x2, 0xc2, 
    0xc1, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 
    0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x7, 0x1e, 0x2, 0x2, 0xc5, 0xc6, 0x7, 
    0x12, 0x2, 0x2, 0xc6, 0xc7, 0x5, 0x1c, 0xf, 0x2, 0xc7, 0xca, 0x7, 0x13, 
    0x2, 0x2, 0xc8, 0xc9, 0x7, 0xd, 0x2, 0x2, 0xc9, 0xcb, 0x5, 0x24, 0x13, 
    0x2, 0xca, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x3, 0x2, 0x2, 0x2, 
    0xcb, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x5, 0x36, 0x1c, 0x2, 0xcd, 
    0xce, 0x7, 0x4, 0x2, 0x2, 0xce, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd1, 
    0x5, 0x1e, 0x10, 0x2, 0xd0, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 0x3, 
    0x2, 0x2, 0x2, 0xd1, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x7, 0x15, 
    0x2, 0x2, 0xd3, 0xd5, 0x5, 0x1e, 0x10, 0x2, 0xd4, 0xd2, 0x3, 0x2, 0x2, 
    0x2, 0xd5, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd4, 0x3, 0x2, 0x2, 0x2, 
    0xd6, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd7, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xd8, 
    0xd6, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xdb, 0x5, 0x20, 0x11, 0x2, 0xda, 0xd9, 
    0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x3, 
    0x2, 0x2, 0x2, 0xdc, 0xdd, 0x7, 0x1e, 0x2, 0x2, 0xdd, 0xde, 0x7, 0xd, 
    0x2, 0x2, 0xde, 0xdf, 0x5, 0x26, 0x14, 0x2, 0xdf, 0x1f, 0x3, 0x2, 0x2, 
    0x2, 0xe0, 0xe1, 0x7, 0x16, 0x2, 0x2, 0xe1, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0xe2, 0xe3, 0x7, 0x17, 0x2, 0x2, 0xe3, 0x23, 0x3, 0x2, 0x2, 0x2, 0xe4, 
    0xe5, 0x5, 0x26, 0x14, 0x2, 0xe5, 0x25, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe9, 
    0x7, 0x1d, 0x2, 0x2, 0xe7, 0xe9, 0x5, 0x4a, 0x26, 0x2, 0xe8, 0xe6, 0x3, 
    0x2, 0x2, 0x2, 0xe8, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe9, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0xea, 0xeb, 0x7, 0x18, 0x2, 0x2, 0xeb, 0xee, 0x5, 0x28, 0x15, 
    0x2, 0xec, 0xed, 0x7, 0xd, 0x2, 0x2, 0xed, 0xef, 0x5, 0x4c, 0x27, 0x2, 
    0xee, 0xec, 0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0x3, 0x2, 0x2, 0x2, 0xef, 
    0xf0, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x7, 0x19, 0x2, 0x2, 0xf1, 0xf5, 
    0x3, 0x2, 0x2, 0x2, 0xf2, 0xf5, 0x7, 0x1d, 0x2, 0x2, 0xf3, 0xf5, 0x5, 
    0x4a, 0x26, 0x2, 0xf4, 0xea, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf2, 0x3, 0x2, 
    0x2, 0x2, 0xf4, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf5, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0xf6, 0xf7, 0x5, 0x28, 0x15, 0x2, 0xf7, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0xf8, 0xfd, 0x5, 0x2a, 0x16, 0x2, 0xf9, 0xfa, 0x7, 0x15, 0x2, 0x2, 0xfa, 
    0xfc, 0x5, 0x2a, 0x16, 0x2, 0xfb, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xff, 
    0x3, 0x2, 0x2, 0x2, 0xfd, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x3, 
    0x2, 0x2, 0x2, 0xfe, 0x101, 0x3, 0x2, 0x2, 0x2, 0xff, 0xfd, 0x3, 0x2, 
    0x2, 0x2, 0x100, 0x102, 0x7, 0x15, 0x2, 0x2, 0x101, 0x100, 0x3, 0x2, 
    0x2, 0x2, 0x101, 0x102, 0x3, 0x2, 0x2, 0x2, 0x102, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x103, 0x106, 0x5, 0x4a, 0x26, 0x2, 0x104, 0x105, 0x7, 0x10, 0x2, 
    0x2, 0x105, 0x107, 0x5, 0x4c, 0x27, 0x2, 0x106, 0x104, 0x3, 0x2, 0x2, 
    0x2, 0x106, 0x107, 0x3, 0x2, 0x2, 0x2, 0x107, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0x108, 0x10d, 0x5, 0x2e, 0x18, 0x2, 0x109, 0x10a, 0x7, 0x15, 0x2, 0x2, 
    0x10a, 0x10c, 0x5, 0x2e, 0x18, 0x2, 0x10b, 0x109, 0x3, 0x2, 0x2, 0x2, 
    0x10c, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10b, 0x3, 0x2, 0x2, 0x2, 
    0x10d, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x111, 0x3, 0x2, 0x2, 0x2, 
    0x10f, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x110, 0x112, 0x7, 0x15, 0x2, 0x2, 
    0x111, 0x110, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x3, 0x2, 0x2, 0x2, 
    0x112, 0x31, 0x3, 0x2, 0x2, 0x2, 0x113, 0x116, 0x7, 0x1e, 0x2, 0x2, 
    0x114, 0x115, 0x7, 0xd, 0x2, 0x2, 0x115, 0x117, 0x5, 0x40, 0x21, 0x2, 
    0x116, 0x114, 0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 0x3, 0x2, 0x2, 0x2, 
    0x117, 0x33, 0x3, 0x2, 0x2, 0x2, 0x118, 0x11d, 0x5, 0x32, 0x1a, 0x2, 
    0x119, 0x11a, 0x7, 0x15, 0x2, 0x2, 0x11a, 0x11c, 0x5, 0x32, 0x1a, 0x2, 
    0x11b, 0x119, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11f, 0x3, 0x2, 0x2, 0x2, 
    0x11d, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x3, 0x2, 0x2, 0x2, 
    0x11e, 0x35, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x120, 
    0x121, 0x7, 0x12, 0x2, 0x2, 0x121, 0x122, 0x5, 0x34, 0x1b, 0x2, 0x122, 
    0x123, 0x7, 0x13, 0x2, 0x2, 0x123, 0x125, 0x3, 0x2, 0x2, 0x2, 0x124, 
    0x120, 0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 0x3, 0x2, 0x2, 0x2, 0x125, 
    0x37, 0x3, 0x2, 0x2, 0x2, 0x126, 0x127, 0x9, 0x3, 0x2, 0x2, 0x127, 0x39, 
    0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x7, 0xa, 0x2, 0x2, 0x129, 0x12a, 
    0x5, 0x3e, 0x20, 0x2, 0x12a, 0x12b, 0x7, 0xb, 0x2, 0x2, 0x12b, 0x3b, 
    0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 0x7, 0x1e, 0x2, 0x2, 0x12d, 0x12e, 
    0x7, 0xd, 0x2, 0x2, 0x12e, 0x12f, 0x5, 0x42, 0x22, 0x2, 0x12f, 0x3d, 
    0x3, 0x2, 0x2, 0x2, 0x130, 0x135, 0x5, 0x3c, 0x1f, 0x2, 0x131, 0x132, 
    0x7, 0x15, 0x2, 0x2, 0x132, 0x134, 0x5, 0x3c, 0x1f, 0x2, 0x133, 0x131, 
    0x3, 0x2, 0x2, 0x2, 0x134, 0x137, 0x3, 0x2, 0x2, 0x2, 0x135, 0x133, 
    0x3, 0x2, 0x2, 0x2, 0x135, 0x136, 0x3, 0x2, 0x2, 0x2, 0x136, 0x139, 
    0x3, 0x2, 0x2, 0x2, 0x137, 0x135, 0x3, 0x2, 0x2, 0x2, 0x138, 0x13a, 
    0x7, 0x15, 0x2, 0x2, 0x139, 0x138, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 
    0x3, 0x2, 0x2, 0x2, 0x13a, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13e, 0x5, 
    0x38, 0x1d, 0x2, 0x13c, 0x13e, 0x7, 0x1c, 0x2, 0x2, 0x13d, 0x13b, 0x3, 
    0x2, 0x2, 0x2, 0x13d, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x41, 0x3, 0x2, 
    0x2, 0x2, 0x13f, 0x146, 0x5, 0x40, 0x21, 0x2, 0x140, 0x146, 0x5, 0x3a, 
    0x1e, 0x2, 0x141, 0x142, 0x7, 0x18, 0x2, 0x2, 0x142, 0x143, 0x5, 0x44, 
    0x23, 0x2, 0x143, 0x144, 0x7, 0x19, 0x2, 0x2, 0x144, 0x146, 0x3, 0x2, 
    0x2, 0x2, 0x145, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x145, 0x140, 0x3, 0x2, 
    0x2, 0x2, 0x145, 0x141, 0x3, 0x2, 0x2, 0x2, 0x146, 0x43, 0x3, 0x2, 0x2, 
    0x2, 0x147, 0x14c, 0x5, 0x42, 0x22, 0x2, 0x148, 0x149, 0x7, 0x15, 0x2, 
    0x2, 0x149, 0x14b, 0x5, 0x42, 0x22, 0x2, 0x14a, 0x148, 0x3, 0x2, 0x2, 
    0x2, 0x14b, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14a, 0x3, 0x2, 0x2, 
    0x2, 0x14c, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x150, 0x3, 0x2, 0x2, 
    0x2, 0x14e, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x151, 0x7, 0x15, 0x2, 
    0x2, 0x150, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x150, 0x151, 0x3, 0x2, 0x2, 
    0x2, 0x151, 0x45, 0x3, 0x2, 0x2, 0x2, 0x152, 0x153, 0x7, 0x1a, 0x2, 
    0x2, 0x153, 0x154, 0x7, 0x1c, 0x2, 0x2, 0x154, 0x47, 0x3, 0x2, 0x2, 
    0x2, 0x155, 0x156, 0x7, 0x1b, 0x2, 0x2, 0x156, 0x157, 0x7, 0x1c, 0x2, 
    0x2, 0x157, 0x49, 0x3, 0x2, 0x2, 0x2, 0x158, 0x15d, 0x7, 0x1e, 0x2, 
    0x2, 0x159, 0x15a, 0x7, 0x6, 0x2, 0x2, 0x15a, 0x15c, 0x7, 0x1e, 0x2, 
    0x2, 0x15b, 0x159, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15f, 0x3, 0x2, 0x2, 
    0x2, 0x15d, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15e, 0x3, 0x2, 0x2, 
    0x2, 0x15e, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x15d, 0x3, 0x2, 0x2, 0x2, 
    0x160, 0x161, 0x9, 0x4, 0x2, 0x2, 0x161, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x23, 
    0x51, 0x5f, 0x61, 0x6e, 0x7d, 0x7f, 0x88, 0x9f, 0xaa, 0xbd, 0xc2, 0xca, 
    0xd0, 0xd6, 0xda, 0xe8, 0xee, 0xf4, 0xfd, 0x101, 0x106, 0x10d, 0x111, 
    0x116, 0x11d, 0x124, 0x135, 0x139, 0x13d, 0x145, 0x14c, 0x150, 0x15d, 
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
