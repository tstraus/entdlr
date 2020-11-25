
// Generated from FlatBuffers.g4 by ANTLR 4.7.2


#include "FlatBuffersListener.h"
#include "FlatBuffersVisitor.h"

#include "FlatBuffers.h"


using namespace antlrcpp;
using namespace antlr4;

FlatBuffers::FlatBuffers(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

FlatBuffers::~FlatBuffers() {
  delete _interpreter;
}

std::string FlatBuffers::getGrammarFileName() const {
  return "FlatBuffers.g4";
}

const std::vector<std::string>& FlatBuffers::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& FlatBuffers::getVocabulary() const {
  return _vocabulary;
}


//----------------- SchemaContext ------------------------------------------------------------------

FlatBuffers::SchemaContext::SchemaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FlatBuffers::IncludeContext *> FlatBuffers::SchemaContext::include() {
  return getRuleContexts<FlatBuffers::IncludeContext>();
}

FlatBuffers::IncludeContext* FlatBuffers::SchemaContext::include(size_t i) {
  return getRuleContext<FlatBuffers::IncludeContext>(i);
}

std::vector<FlatBuffers::Namespace_declContext *> FlatBuffers::SchemaContext::namespace_decl() {
  return getRuleContexts<FlatBuffers::Namespace_declContext>();
}

FlatBuffers::Namespace_declContext* FlatBuffers::SchemaContext::namespace_decl(size_t i) {
  return getRuleContext<FlatBuffers::Namespace_declContext>(i);
}

std::vector<FlatBuffers::Type_declContext *> FlatBuffers::SchemaContext::type_decl() {
  return getRuleContexts<FlatBuffers::Type_declContext>();
}

FlatBuffers::Type_declContext* FlatBuffers::SchemaContext::type_decl(size_t i) {
  return getRuleContext<FlatBuffers::Type_declContext>(i);
}

std::vector<FlatBuffers::Enum_declContext *> FlatBuffers::SchemaContext::enum_decl() {
  return getRuleContexts<FlatBuffers::Enum_declContext>();
}

FlatBuffers::Enum_declContext* FlatBuffers::SchemaContext::enum_decl(size_t i) {
  return getRuleContext<FlatBuffers::Enum_declContext>(i);
}

std::vector<FlatBuffers::Union_declContext *> FlatBuffers::SchemaContext::union_decl() {
  return getRuleContexts<FlatBuffers::Union_declContext>();
}

FlatBuffers::Union_declContext* FlatBuffers::SchemaContext::union_decl(size_t i) {
  return getRuleContext<FlatBuffers::Union_declContext>(i);
}

std::vector<FlatBuffers::Root_declContext *> FlatBuffers::SchemaContext::root_decl() {
  return getRuleContexts<FlatBuffers::Root_declContext>();
}

FlatBuffers::Root_declContext* FlatBuffers::SchemaContext::root_decl(size_t i) {
  return getRuleContext<FlatBuffers::Root_declContext>(i);
}

std::vector<FlatBuffers::File_extension_declContext *> FlatBuffers::SchemaContext::file_extension_decl() {
  return getRuleContexts<FlatBuffers::File_extension_declContext>();
}

FlatBuffers::File_extension_declContext* FlatBuffers::SchemaContext::file_extension_decl(size_t i) {
  return getRuleContext<FlatBuffers::File_extension_declContext>(i);
}

std::vector<FlatBuffers::File_identifier_declContext *> FlatBuffers::SchemaContext::file_identifier_decl() {
  return getRuleContexts<FlatBuffers::File_identifier_declContext>();
}

FlatBuffers::File_identifier_declContext* FlatBuffers::SchemaContext::file_identifier_decl(size_t i) {
  return getRuleContext<FlatBuffers::File_identifier_declContext>(i);
}

std::vector<FlatBuffers::Attribute_declContext *> FlatBuffers::SchemaContext::attribute_decl() {
  return getRuleContexts<FlatBuffers::Attribute_declContext>();
}

FlatBuffers::Attribute_declContext* FlatBuffers::SchemaContext::attribute_decl(size_t i) {
  return getRuleContext<FlatBuffers::Attribute_declContext>(i);
}

std::vector<FlatBuffers::Rpc_declContext *> FlatBuffers::SchemaContext::rpc_decl() {
  return getRuleContexts<FlatBuffers::Rpc_declContext>();
}

FlatBuffers::Rpc_declContext* FlatBuffers::SchemaContext::rpc_decl(size_t i) {
  return getRuleContext<FlatBuffers::Rpc_declContext>(i);
}

std::vector<FlatBuffers::Interface_declContext *> FlatBuffers::SchemaContext::interface_decl() {
  return getRuleContexts<FlatBuffers::Interface_declContext>();
}

FlatBuffers::Interface_declContext* FlatBuffers::SchemaContext::interface_decl(size_t i) {
  return getRuleContext<FlatBuffers::Interface_declContext>(i);
}

std::vector<FlatBuffers::ObjectContext *> FlatBuffers::SchemaContext::object() {
  return getRuleContexts<FlatBuffers::ObjectContext>();
}

FlatBuffers::ObjectContext* FlatBuffers::SchemaContext::object(size_t i) {
  return getRuleContext<FlatBuffers::ObjectContext>(i);
}


size_t FlatBuffers::SchemaContext::getRuleIndex() const {
  return FlatBuffers::RuleSchema;
}

void FlatBuffers::SchemaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSchema(this);
}

void FlatBuffers::SchemaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSchema(this);
}


antlrcpp::Any FlatBuffers::SchemaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitSchema(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::SchemaContext* FlatBuffers::schema() {
  SchemaContext *_localctx = _tracker.createInstance<SchemaContext>(_ctx, getState());
  enterRule(_localctx, 0, FlatBuffers::RuleSchema);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FlatBuffers::INCLUDE) {
      setState(78);
      include();
      setState(83);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(97);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << FlatBuffers::NAMESPACE)
      | (1ULL << FlatBuffers::ATTRIBUTE)
      | (1ULL << FlatBuffers::TABLE)
      | (1ULL << FlatBuffers::STRUCT)
      | (1ULL << FlatBuffers::ENUM)
      | (1ULL << FlatBuffers::UNION)
      | (1ULL << FlatBuffers::INTERFACE)
      | (1ULL << FlatBuffers::ROOT_TYPE)
      | (1ULL << FlatBuffers::RPC_SERVICE)
      | (1ULL << FlatBuffers::FILE_EXTENSION)
      | (1ULL << FlatBuffers::FILE_IDENTIFIER)
      | (1ULL << FlatBuffers::DOC_COMMENT)
      | (1ULL << FlatBuffers::OPEN_BRACE))) != 0)) {
      setState(95);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
      case 1: {
        setState(84);
        namespace_decl();
        break;
      }

      case 2: {
        setState(85);
        type_decl();
        break;
      }

      case 3: {
        setState(86);
        enum_decl();
        break;
      }

      case 4: {
        setState(87);
        union_decl();
        break;
      }

      case 5: {
        setState(88);
        root_decl();
        break;
      }

      case 6: {
        setState(89);
        file_extension_decl();
        break;
      }

      case 7: {
        setState(90);
        file_identifier_decl();
        break;
      }

      case 8: {
        setState(91);
        attribute_decl();
        break;
      }

      case 9: {
        setState(92);
        rpc_decl();
        break;
      }

      case 10: {
        setState(93);
        interface_decl();
        break;
      }

      case 11: {
        setState(94);
        object();
        break;
      }

      }
      setState(99);
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

FlatBuffers::IncludeContext::IncludeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffers::IncludeContext::INCLUDE() {
  return getToken(FlatBuffers::INCLUDE, 0);
}

tree::TerminalNode* FlatBuffers::IncludeContext::STRING_CONSTANT() {
  return getToken(FlatBuffers::STRING_CONSTANT, 0);
}

tree::TerminalNode* FlatBuffers::IncludeContext::SEMICOLON() {
  return getToken(FlatBuffers::SEMICOLON, 0);
}


size_t FlatBuffers::IncludeContext::getRuleIndex() const {
  return FlatBuffers::RuleInclude;
}

void FlatBuffers::IncludeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInclude(this);
}

void FlatBuffers::IncludeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInclude(this);
}


antlrcpp::Any FlatBuffers::IncludeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitInclude(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::IncludeContext* FlatBuffers::include() {
  IncludeContext *_localctx = _tracker.createInstance<IncludeContext>(_ctx, getState());
  enterRule(_localctx, 2, FlatBuffers::RuleInclude);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    match(FlatBuffers::INCLUDE);
    setState(101);
    match(FlatBuffers::STRING_CONSTANT);
    setState(102);
    match(FlatBuffers::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Namespace_declContext ------------------------------------------------------------------

FlatBuffers::Namespace_declContext::Namespace_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffers::Namespace_declContext::NAMESPACE() {
  return getToken(FlatBuffers::NAMESPACE, 0);
}

std::vector<tree::TerminalNode *> FlatBuffers::Namespace_declContext::IDENT() {
  return getTokens(FlatBuffers::IDENT);
}

tree::TerminalNode* FlatBuffers::Namespace_declContext::IDENT(size_t i) {
  return getToken(FlatBuffers::IDENT, i);
}

tree::TerminalNode* FlatBuffers::Namespace_declContext::SEMICOLON() {
  return getToken(FlatBuffers::SEMICOLON, 0);
}

std::vector<tree::TerminalNode *> FlatBuffers::Namespace_declContext::PERIOD() {
  return getTokens(FlatBuffers::PERIOD);
}

tree::TerminalNode* FlatBuffers::Namespace_declContext::PERIOD(size_t i) {
  return getToken(FlatBuffers::PERIOD, i);
}


size_t FlatBuffers::Namespace_declContext::getRuleIndex() const {
  return FlatBuffers::RuleNamespace_decl;
}

void FlatBuffers::Namespace_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespace_decl(this);
}

void FlatBuffers::Namespace_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespace_decl(this);
}


antlrcpp::Any FlatBuffers::Namespace_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitNamespace_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Namespace_declContext* FlatBuffers::namespace_decl() {
  Namespace_declContext *_localctx = _tracker.createInstance<Namespace_declContext>(_ctx, getState());
  enterRule(_localctx, 4, FlatBuffers::RuleNamespace_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    match(FlatBuffers::NAMESPACE);
    setState(105);
    match(FlatBuffers::IDENT);
    setState(110);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FlatBuffers::PERIOD) {
      setState(106);
      match(FlatBuffers::PERIOD);
      setState(107);
      match(FlatBuffers::IDENT);
      setState(112);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(113);
    match(FlatBuffers::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attribute_declContext ------------------------------------------------------------------

FlatBuffers::Attribute_declContext::Attribute_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffers::Attribute_declContext::ATTRIBUTE() {
  return getToken(FlatBuffers::ATTRIBUTE, 0);
}

tree::TerminalNode* FlatBuffers::Attribute_declContext::STRING_CONSTANT() {
  return getToken(FlatBuffers::STRING_CONSTANT, 0);
}

tree::TerminalNode* FlatBuffers::Attribute_declContext::SEMICOLON() {
  return getToken(FlatBuffers::SEMICOLON, 0);
}


size_t FlatBuffers::Attribute_declContext::getRuleIndex() const {
  return FlatBuffers::RuleAttribute_decl;
}

void FlatBuffers::Attribute_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute_decl(this);
}

void FlatBuffers::Attribute_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute_decl(this);
}


antlrcpp::Any FlatBuffers::Attribute_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitAttribute_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Attribute_declContext* FlatBuffers::attribute_decl() {
  Attribute_declContext *_localctx = _tracker.createInstance<Attribute_declContext>(_ctx, getState());
  enterRule(_localctx, 6, FlatBuffers::RuleAttribute_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    match(FlatBuffers::ATTRIBUTE);
    setState(116);
    match(FlatBuffers::STRING_CONSTANT);
    setState(117);
    match(FlatBuffers::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_declContext ------------------------------------------------------------------

FlatBuffers::Type_declContext::Type_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffers::Type_declContext::IDENT() {
  return getToken(FlatBuffers::IDENT, 0);
}

FlatBuffers::MetadataContext* FlatBuffers::Type_declContext::metadata() {
  return getRuleContext<FlatBuffers::MetadataContext>(0);
}

tree::TerminalNode* FlatBuffers::Type_declContext::OPEN_BRACE() {
  return getToken(FlatBuffers::OPEN_BRACE, 0);
}

tree::TerminalNode* FlatBuffers::Type_declContext::CLOSE_BRACE() {
  return getToken(FlatBuffers::CLOSE_BRACE, 0);
}

tree::TerminalNode* FlatBuffers::Type_declContext::TABLE() {
  return getToken(FlatBuffers::TABLE, 0);
}

tree::TerminalNode* FlatBuffers::Type_declContext::STRUCT() {
  return getToken(FlatBuffers::STRUCT, 0);
}

tree::TerminalNode* FlatBuffers::Type_declContext::DOC_COMMENT() {
  return getToken(FlatBuffers::DOC_COMMENT, 0);
}

std::vector<FlatBuffers::Field_declContext *> FlatBuffers::Type_declContext::field_decl() {
  return getRuleContexts<FlatBuffers::Field_declContext>();
}

FlatBuffers::Field_declContext* FlatBuffers::Type_declContext::field_decl(size_t i) {
  return getRuleContext<FlatBuffers::Field_declContext>(i);
}

std::vector<FlatBuffers::Method_declContext *> FlatBuffers::Type_declContext::method_decl() {
  return getRuleContexts<FlatBuffers::Method_declContext>();
}

FlatBuffers::Method_declContext* FlatBuffers::Type_declContext::method_decl(size_t i) {
  return getRuleContext<FlatBuffers::Method_declContext>(i);
}


size_t FlatBuffers::Type_declContext::getRuleIndex() const {
  return FlatBuffers::RuleType_decl;
}

void FlatBuffers::Type_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_decl(this);
}

void FlatBuffers::Type_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_decl(this);
}


antlrcpp::Any FlatBuffers::Type_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitType_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Type_declContext* FlatBuffers::type_decl() {
  Type_declContext *_localctx = _tracker.createInstance<Type_declContext>(_ctx, getState());
  enterRule(_localctx, 8, FlatBuffers::RuleType_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffers::DOC_COMMENT) {
      setState(119);
      match(FlatBuffers::DOC_COMMENT);
    }
    setState(122);
    _la = _input->LA(1);
    if (!(_la == FlatBuffers::TABLE

    || _la == FlatBuffers::STRUCT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(123);
    match(FlatBuffers::IDENT);
    setState(124);
    metadata();
    setState(125);
    match(FlatBuffers::OPEN_BRACE);
    setState(130);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << FlatBuffers::MUTABLE)
      | (1ULL << FlatBuffers::STATIC)
      | (1ULL << FlatBuffers::IDENT))) != 0)) {
      setState(128);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
      case 1: {
        setState(126);
        field_decl();
        break;
      }

      case 2: {
        setState(127);
        method_decl();
        break;
      }

      }
      setState(132);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(133);
    match(FlatBuffers::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Enum_declContext ------------------------------------------------------------------

FlatBuffers::Enum_declContext::Enum_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffers::Enum_declContext::ENUM() {
  return getToken(FlatBuffers::ENUM, 0);
}

tree::TerminalNode* FlatBuffers::Enum_declContext::IDENT() {
  return getToken(FlatBuffers::IDENT, 0);
}

FlatBuffers::MetadataContext* FlatBuffers::Enum_declContext::metadata() {
  return getRuleContext<FlatBuffers::MetadataContext>(0);
}

tree::TerminalNode* FlatBuffers::Enum_declContext::OPEN_BRACE() {
  return getToken(FlatBuffers::OPEN_BRACE, 0);
}

FlatBuffers::Commasep_enumval_declContext* FlatBuffers::Enum_declContext::commasep_enumval_decl() {
  return getRuleContext<FlatBuffers::Commasep_enumval_declContext>(0);
}

tree::TerminalNode* FlatBuffers::Enum_declContext::CLOSE_BRACE() {
  return getToken(FlatBuffers::CLOSE_BRACE, 0);
}

tree::TerminalNode* FlatBuffers::Enum_declContext::DOC_COMMENT() {
  return getToken(FlatBuffers::DOC_COMMENT, 0);
}

tree::TerminalNode* FlatBuffers::Enum_declContext::COLON() {
  return getToken(FlatBuffers::COLON, 0);
}

FlatBuffers::TypeContext* FlatBuffers::Enum_declContext::type() {
  return getRuleContext<FlatBuffers::TypeContext>(0);
}


size_t FlatBuffers::Enum_declContext::getRuleIndex() const {
  return FlatBuffers::RuleEnum_decl;
}

void FlatBuffers::Enum_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnum_decl(this);
}

void FlatBuffers::Enum_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnum_decl(this);
}


antlrcpp::Any FlatBuffers::Enum_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitEnum_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Enum_declContext* FlatBuffers::enum_decl() {
  Enum_declContext *_localctx = _tracker.createInstance<Enum_declContext>(_ctx, getState());
  enterRule(_localctx, 10, FlatBuffers::RuleEnum_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(136);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffers::DOC_COMMENT) {
      setState(135);
      match(FlatBuffers::DOC_COMMENT);
    }
    setState(138);
    match(FlatBuffers::ENUM);
    setState(139);
    match(FlatBuffers::IDENT);
    setState(142);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffers::COLON) {
      setState(140);
      match(FlatBuffers::COLON);
      setState(141);
      type();
    }
    setState(144);
    metadata();
    setState(145);
    match(FlatBuffers::OPEN_BRACE);
    setState(146);
    commasep_enumval_decl();
    setState(147);
    match(FlatBuffers::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Union_declContext ------------------------------------------------------------------

FlatBuffers::Union_declContext::Union_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffers::Union_declContext::UNION() {
  return getToken(FlatBuffers::UNION, 0);
}

tree::TerminalNode* FlatBuffers::Union_declContext::IDENT() {
  return getToken(FlatBuffers::IDENT, 0);
}

FlatBuffers::MetadataContext* FlatBuffers::Union_declContext::metadata() {
  return getRuleContext<FlatBuffers::MetadataContext>(0);
}

tree::TerminalNode* FlatBuffers::Union_declContext::OPEN_BRACE() {
  return getToken(FlatBuffers::OPEN_BRACE, 0);
}

FlatBuffers::Commasep_uniontype_declContext* FlatBuffers::Union_declContext::commasep_uniontype_decl() {
  return getRuleContext<FlatBuffers::Commasep_uniontype_declContext>(0);
}

tree::TerminalNode* FlatBuffers::Union_declContext::CLOSE_BRACE() {
  return getToken(FlatBuffers::CLOSE_BRACE, 0);
}

tree::TerminalNode* FlatBuffers::Union_declContext::DOC_COMMENT() {
  return getToken(FlatBuffers::DOC_COMMENT, 0);
}


size_t FlatBuffers::Union_declContext::getRuleIndex() const {
  return FlatBuffers::RuleUnion_decl;
}

void FlatBuffers::Union_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnion_decl(this);
}

void FlatBuffers::Union_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnion_decl(this);
}


antlrcpp::Any FlatBuffers::Union_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitUnion_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Union_declContext* FlatBuffers::union_decl() {
  Union_declContext *_localctx = _tracker.createInstance<Union_declContext>(_ctx, getState());
  enterRule(_localctx, 12, FlatBuffers::RuleUnion_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffers::DOC_COMMENT) {
      setState(149);
      match(FlatBuffers::DOC_COMMENT);
    }
    setState(152);
    match(FlatBuffers::UNION);
    setState(153);
    match(FlatBuffers::IDENT);
    setState(154);
    metadata();
    setState(155);
    match(FlatBuffers::OPEN_BRACE);
    setState(156);
    commasep_uniontype_decl();
    setState(157);
    match(FlatBuffers::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Root_declContext ------------------------------------------------------------------

FlatBuffers::Root_declContext::Root_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffers::Root_declContext::ROOT_TYPE() {
  return getToken(FlatBuffers::ROOT_TYPE, 0);
}

tree::TerminalNode* FlatBuffers::Root_declContext::IDENT() {
  return getToken(FlatBuffers::IDENT, 0);
}

tree::TerminalNode* FlatBuffers::Root_declContext::SEMICOLON() {
  return getToken(FlatBuffers::SEMICOLON, 0);
}


size_t FlatBuffers::Root_declContext::getRuleIndex() const {
  return FlatBuffers::RuleRoot_decl;
}

void FlatBuffers::Root_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRoot_decl(this);
}

void FlatBuffers::Root_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRoot_decl(this);
}


antlrcpp::Any FlatBuffers::Root_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitRoot_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Root_declContext* FlatBuffers::root_decl() {
  Root_declContext *_localctx = _tracker.createInstance<Root_declContext>(_ctx, getState());
  enterRule(_localctx, 14, FlatBuffers::RuleRoot_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    match(FlatBuffers::ROOT_TYPE);
    setState(160);
    match(FlatBuffers::IDENT);
    setState(161);
    match(FlatBuffers::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Field_declContext ------------------------------------------------------------------

FlatBuffers::Field_declContext::Field_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffers::Field_declContext::IDENT() {
  return getToken(FlatBuffers::IDENT, 0);
}

tree::TerminalNode* FlatBuffers::Field_declContext::COLON() {
  return getToken(FlatBuffers::COLON, 0);
}

FlatBuffers::TypeContext* FlatBuffers::Field_declContext::type() {
  return getRuleContext<FlatBuffers::TypeContext>(0);
}

FlatBuffers::MetadataContext* FlatBuffers::Field_declContext::metadata() {
  return getRuleContext<FlatBuffers::MetadataContext>(0);
}

tree::TerminalNode* FlatBuffers::Field_declContext::SEMICOLON() {
  return getToken(FlatBuffers::SEMICOLON, 0);
}

tree::TerminalNode* FlatBuffers::Field_declContext::EQUAL() {
  return getToken(FlatBuffers::EQUAL, 0);
}

FlatBuffers::ScalarContext* FlatBuffers::Field_declContext::scalar() {
  return getRuleContext<FlatBuffers::ScalarContext>(0);
}

tree::TerminalNode* FlatBuffers::Field_declContext::DOC_COMMENT() {
  return getToken(FlatBuffers::DOC_COMMENT, 0);
}


size_t FlatBuffers::Field_declContext::getRuleIndex() const {
  return FlatBuffers::RuleField_decl;
}

void FlatBuffers::Field_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterField_decl(this);
}

void FlatBuffers::Field_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitField_decl(this);
}


antlrcpp::Any FlatBuffers::Field_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitField_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Field_declContext* FlatBuffers::field_decl() {
  Field_declContext *_localctx = _tracker.createInstance<Field_declContext>(_ctx, getState());
  enterRule(_localctx, 16, FlatBuffers::RuleField_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    match(FlatBuffers::IDENT);
    setState(164);
    match(FlatBuffers::COLON);
    setState(165);
    type();
    setState(168);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffers::EQUAL) {
      setState(166);
      match(FlatBuffers::EQUAL);
      setState(167);
      scalar();
    }
    setState(170);
    metadata();
    setState(171);
    match(FlatBuffers::SEMICOLON);
    setState(173);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffers::DOC_COMMENT) {
      setState(172);
      match(FlatBuffers::DOC_COMMENT);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rpc_declContext ------------------------------------------------------------------

FlatBuffers::Rpc_declContext::Rpc_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffers::Rpc_declContext::RPC_SERVICE() {
  return getToken(FlatBuffers::RPC_SERVICE, 0);
}

tree::TerminalNode* FlatBuffers::Rpc_declContext::IDENT() {
  return getToken(FlatBuffers::IDENT, 0);
}

tree::TerminalNode* FlatBuffers::Rpc_declContext::OPEN_BRACE() {
  return getToken(FlatBuffers::OPEN_BRACE, 0);
}

tree::TerminalNode* FlatBuffers::Rpc_declContext::CLOSE_BRACE() {
  return getToken(FlatBuffers::CLOSE_BRACE, 0);
}

std::vector<FlatBuffers::Rpc_methodContext *> FlatBuffers::Rpc_declContext::rpc_method() {
  return getRuleContexts<FlatBuffers::Rpc_methodContext>();
}

FlatBuffers::Rpc_methodContext* FlatBuffers::Rpc_declContext::rpc_method(size_t i) {
  return getRuleContext<FlatBuffers::Rpc_methodContext>(i);
}


size_t FlatBuffers::Rpc_declContext::getRuleIndex() const {
  return FlatBuffers::RuleRpc_decl;
}

void FlatBuffers::Rpc_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRpc_decl(this);
}

void FlatBuffers::Rpc_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRpc_decl(this);
}


antlrcpp::Any FlatBuffers::Rpc_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitRpc_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Rpc_declContext* FlatBuffers::rpc_decl() {
  Rpc_declContext *_localctx = _tracker.createInstance<Rpc_declContext>(_ctx, getState());
  enterRule(_localctx, 18, FlatBuffers::RuleRpc_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    match(FlatBuffers::RPC_SERVICE);
    setState(176);
    match(FlatBuffers::IDENT);
    setState(177);
    match(FlatBuffers::OPEN_BRACE);
    setState(179); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(178);
      rpc_method();
      setState(181); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == FlatBuffers::IDENT);
    setState(183);
    match(FlatBuffers::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rpc_methodContext ------------------------------------------------------------------

FlatBuffers::Rpc_methodContext::Rpc_methodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> FlatBuffers::Rpc_methodContext::IDENT() {
  return getTokens(FlatBuffers::IDENT);
}

tree::TerminalNode* FlatBuffers::Rpc_methodContext::IDENT(size_t i) {
  return getToken(FlatBuffers::IDENT, i);
}

tree::TerminalNode* FlatBuffers::Rpc_methodContext::OPEN_PAREN() {
  return getToken(FlatBuffers::OPEN_PAREN, 0);
}

tree::TerminalNode* FlatBuffers::Rpc_methodContext::CLOSE_PAREN() {
  return getToken(FlatBuffers::CLOSE_PAREN, 0);
}

tree::TerminalNode* FlatBuffers::Rpc_methodContext::COLON() {
  return getToken(FlatBuffers::COLON, 0);
}

FlatBuffers::MetadataContext* FlatBuffers::Rpc_methodContext::metadata() {
  return getRuleContext<FlatBuffers::MetadataContext>(0);
}

tree::TerminalNode* FlatBuffers::Rpc_methodContext::SEMICOLON() {
  return getToken(FlatBuffers::SEMICOLON, 0);
}


size_t FlatBuffers::Rpc_methodContext::getRuleIndex() const {
  return FlatBuffers::RuleRpc_method;
}

void FlatBuffers::Rpc_methodContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRpc_method(this);
}

void FlatBuffers::Rpc_methodContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRpc_method(this);
}


antlrcpp::Any FlatBuffers::Rpc_methodContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitRpc_method(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Rpc_methodContext* FlatBuffers::rpc_method() {
  Rpc_methodContext *_localctx = _tracker.createInstance<Rpc_methodContext>(_ctx, getState());
  enterRule(_localctx, 20, FlatBuffers::RuleRpc_method);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    match(FlatBuffers::IDENT);
    setState(186);
    match(FlatBuffers::OPEN_PAREN);
    setState(187);
    match(FlatBuffers::IDENT);
    setState(188);
    match(FlatBuffers::CLOSE_PAREN);
    setState(189);
    match(FlatBuffers::COLON);
    setState(190);
    match(FlatBuffers::IDENT);
    setState(191);
    metadata();
    setState(192);
    match(FlatBuffers::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interface_declContext ------------------------------------------------------------------

FlatBuffers::Interface_declContext::Interface_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffers::Interface_declContext::INTERFACE() {
  return getToken(FlatBuffers::INTERFACE, 0);
}

tree::TerminalNode* FlatBuffers::Interface_declContext::IDENT() {
  return getToken(FlatBuffers::IDENT, 0);
}

tree::TerminalNode* FlatBuffers::Interface_declContext::OPEN_BRACE() {
  return getToken(FlatBuffers::OPEN_BRACE, 0);
}

tree::TerminalNode* FlatBuffers::Interface_declContext::CLOSE_BRACE() {
  return getToken(FlatBuffers::CLOSE_BRACE, 0);
}

tree::TerminalNode* FlatBuffers::Interface_declContext::DOC_COMMENT() {
  return getToken(FlatBuffers::DOC_COMMENT, 0);
}

std::vector<FlatBuffers::Method_declContext *> FlatBuffers::Interface_declContext::method_decl() {
  return getRuleContexts<FlatBuffers::Method_declContext>();
}

FlatBuffers::Method_declContext* FlatBuffers::Interface_declContext::method_decl(size_t i) {
  return getRuleContext<FlatBuffers::Method_declContext>(i);
}


size_t FlatBuffers::Interface_declContext::getRuleIndex() const {
  return FlatBuffers::RuleInterface_decl;
}

void FlatBuffers::Interface_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterface_decl(this);
}

void FlatBuffers::Interface_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterface_decl(this);
}


antlrcpp::Any FlatBuffers::Interface_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitInterface_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Interface_declContext* FlatBuffers::interface_decl() {
  Interface_declContext *_localctx = _tracker.createInstance<Interface_declContext>(_ctx, getState());
  enterRule(_localctx, 22, FlatBuffers::RuleInterface_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(195);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffers::DOC_COMMENT) {
      setState(194);
      match(FlatBuffers::DOC_COMMENT);
    }
    setState(197);
    match(FlatBuffers::INTERFACE);
    setState(198);
    match(FlatBuffers::IDENT);
    setState(199);
    match(FlatBuffers::OPEN_BRACE);
    setState(201); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(200);
      method_decl();
      setState(203); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << FlatBuffers::MUTABLE)
      | (1ULL << FlatBuffers::STATIC)
      | (1ULL << FlatBuffers::IDENT))) != 0));
    setState(205);
    match(FlatBuffers::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Method_declContext ------------------------------------------------------------------

FlatBuffers::Method_declContext::Method_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffers::Method_declContext::IDENT() {
  return getToken(FlatBuffers::IDENT, 0);
}

tree::TerminalNode* FlatBuffers::Method_declContext::OPEN_PAREN() {
  return getToken(FlatBuffers::OPEN_PAREN, 0);
}

FlatBuffers::Method_parametersContext* FlatBuffers::Method_declContext::method_parameters() {
  return getRuleContext<FlatBuffers::Method_parametersContext>(0);
}

tree::TerminalNode* FlatBuffers::Method_declContext::CLOSE_PAREN() {
  return getToken(FlatBuffers::CLOSE_PAREN, 0);
}

FlatBuffers::MetadataContext* FlatBuffers::Method_declContext::metadata() {
  return getRuleContext<FlatBuffers::MetadataContext>(0);
}

tree::TerminalNode* FlatBuffers::Method_declContext::SEMICOLON() {
  return getToken(FlatBuffers::SEMICOLON, 0);
}

FlatBuffers::Static_declContext* FlatBuffers::Method_declContext::static_decl() {
  return getRuleContext<FlatBuffers::Static_declContext>(0);
}

FlatBuffers::Mutable_declContext* FlatBuffers::Method_declContext::mutable_decl() {
  return getRuleContext<FlatBuffers::Mutable_declContext>(0);
}

tree::TerminalNode* FlatBuffers::Method_declContext::COLON() {
  return getToken(FlatBuffers::COLON, 0);
}

FlatBuffers::Method_return_typeContext* FlatBuffers::Method_declContext::method_return_type() {
  return getRuleContext<FlatBuffers::Method_return_typeContext>(0);
}

tree::TerminalNode* FlatBuffers::Method_declContext::DOC_COMMENT() {
  return getToken(FlatBuffers::DOC_COMMENT, 0);
}


size_t FlatBuffers::Method_declContext::getRuleIndex() const {
  return FlatBuffers::RuleMethod_decl;
}

void FlatBuffers::Method_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_decl(this);
}

void FlatBuffers::Method_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_decl(this);
}


antlrcpp::Any FlatBuffers::Method_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitMethod_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Method_declContext* FlatBuffers::method_decl() {
  Method_declContext *_localctx = _tracker.createInstance<Method_declContext>(_ctx, getState());
  enterRule(_localctx, 24, FlatBuffers::RuleMethod_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(209);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FlatBuffers::STATIC: {
        setState(207);
        static_decl();
        break;
      }

      case FlatBuffers::MUTABLE: {
        setState(208);
        mutable_decl();
        break;
      }

      case FlatBuffers::IDENT: {
        break;
      }

    default:
      break;
    }
    setState(211);
    match(FlatBuffers::IDENT);
    setState(212);
    match(FlatBuffers::OPEN_PAREN);
    setState(213);
    method_parameters();
    setState(214);
    match(FlatBuffers::CLOSE_PAREN);
    setState(217);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffers::COLON) {
      setState(215);
      match(FlatBuffers::COLON);
      setState(216);
      method_return_type();
    }
    setState(219);
    metadata();
    setState(220);
    match(FlatBuffers::SEMICOLON);
    setState(222);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffers::DOC_COMMENT) {
      setState(221);
      match(FlatBuffers::DOC_COMMENT);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Method_parametersContext ------------------------------------------------------------------

FlatBuffers::Method_parametersContext::Method_parametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FlatBuffers::Method_parameterContext *> FlatBuffers::Method_parametersContext::method_parameter() {
  return getRuleContexts<FlatBuffers::Method_parameterContext>();
}

FlatBuffers::Method_parameterContext* FlatBuffers::Method_parametersContext::method_parameter(size_t i) {
  return getRuleContext<FlatBuffers::Method_parameterContext>(i);
}

std::vector<tree::TerminalNode *> FlatBuffers::Method_parametersContext::COMMA() {
  return getTokens(FlatBuffers::COMMA);
}

tree::TerminalNode* FlatBuffers::Method_parametersContext::COMMA(size_t i) {
  return getToken(FlatBuffers::COMMA, i);
}


size_t FlatBuffers::Method_parametersContext::getRuleIndex() const {
  return FlatBuffers::RuleMethod_parameters;
}

void FlatBuffers::Method_parametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_parameters(this);
}

void FlatBuffers::Method_parametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_parameters(this);
}


antlrcpp::Any FlatBuffers::Method_parametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitMethod_parameters(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Method_parametersContext* FlatBuffers::method_parameters() {
  Method_parametersContext *_localctx = _tracker.createInstance<Method_parametersContext>(_ctx, getState());
  enterRule(_localctx, 26, FlatBuffers::RuleMethod_parameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(225);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffers::IDENT) {
      setState(224);
      method_parameter();
    }
    setState(231);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FlatBuffers::COMMA) {
      setState(227);
      match(FlatBuffers::COMMA);
      setState(228);
      method_parameter();
      setState(233);
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

FlatBuffers::Method_parameterContext::Method_parameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffers::Method_parameterContext::IDENT() {
  return getToken(FlatBuffers::IDENT, 0);
}

tree::TerminalNode* FlatBuffers::Method_parameterContext::COLON() {
  return getToken(FlatBuffers::COLON, 0);
}

FlatBuffers::Method_typeContext* FlatBuffers::Method_parameterContext::method_type() {
  return getRuleContext<FlatBuffers::Method_typeContext>(0);
}

FlatBuffers::Reference_declContext* FlatBuffers::Method_parameterContext::reference_decl() {
  return getRuleContext<FlatBuffers::Reference_declContext>(0);
}

FlatBuffers::Mutable_declContext* FlatBuffers::Method_parameterContext::mutable_decl() {
  return getRuleContext<FlatBuffers::Mutable_declContext>(0);
}


size_t FlatBuffers::Method_parameterContext::getRuleIndex() const {
  return FlatBuffers::RuleMethod_parameter;
}

void FlatBuffers::Method_parameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_parameter(this);
}

void FlatBuffers::Method_parameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_parameter(this);
}


antlrcpp::Any FlatBuffers::Method_parameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitMethod_parameter(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Method_parameterContext* FlatBuffers::method_parameter() {
  Method_parameterContext *_localctx = _tracker.createInstance<Method_parameterContext>(_ctx, getState());
  enterRule(_localctx, 28, FlatBuffers::RuleMethod_parameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(234);
    match(FlatBuffers::IDENT);
    setState(235);
    match(FlatBuffers::COLON);
    setState(237);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      setState(236);
      reference_decl();
      break;
    }

    }
    setState(240);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffers::MUTABLE) {
      setState(239);
      mutable_decl();
    }
    setState(242);
    method_type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Method_return_typeContext ------------------------------------------------------------------

FlatBuffers::Method_return_typeContext::Method_return_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FlatBuffers::Method_typeContext* FlatBuffers::Method_return_typeContext::method_type() {
  return getRuleContext<FlatBuffers::Method_typeContext>(0);
}


size_t FlatBuffers::Method_return_typeContext::getRuleIndex() const {
  return FlatBuffers::RuleMethod_return_type;
}

void FlatBuffers::Method_return_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_return_type(this);
}

void FlatBuffers::Method_return_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_return_type(this);
}


antlrcpp::Any FlatBuffers::Method_return_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitMethod_return_type(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Method_return_typeContext* FlatBuffers::method_return_type() {
  Method_return_typeContext *_localctx = _tracker.createInstance<Method_return_typeContext>(_ctx, getState());
  enterRule(_localctx, 30, FlatBuffers::RuleMethod_return_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(244);
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

FlatBuffers::Method_typeContext::Method_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffers::Method_typeContext::BASE_TYPE_NAME() {
  return getToken(FlatBuffers::BASE_TYPE_NAME, 0);
}

FlatBuffers::Ns_identContext* FlatBuffers::Method_typeContext::ns_ident() {
  return getRuleContext<FlatBuffers::Ns_identContext>(0);
}

FlatBuffers::Reference_declContext* FlatBuffers::Method_typeContext::reference_decl() {
  return getRuleContext<FlatBuffers::Reference_declContext>(0);
}


size_t FlatBuffers::Method_typeContext::getRuleIndex() const {
  return FlatBuffers::RuleMethod_type;
}

void FlatBuffers::Method_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_type(this);
}

void FlatBuffers::Method_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_type(this);
}


antlrcpp::Any FlatBuffers::Method_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitMethod_type(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Method_typeContext* FlatBuffers::method_type() {
  Method_typeContext *_localctx = _tracker.createInstance<Method_typeContext>(_ctx, getState());
  enterRule(_localctx, 32, FlatBuffers::RuleMethod_type);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(247);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffers::REFERENCE) {
      setState(246);
      reference_decl();
    }
    setState(251);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FlatBuffers::BASE_TYPE_NAME: {
        setState(249);
        match(FlatBuffers::BASE_TYPE_NAME);
        break;
      }

      case FlatBuffers::IDENT: {
        setState(250);
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

//----------------- Mutable_declContext ------------------------------------------------------------------

FlatBuffers::Mutable_declContext::Mutable_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffers::Mutable_declContext::MUTABLE() {
  return getToken(FlatBuffers::MUTABLE, 0);
}


size_t FlatBuffers::Mutable_declContext::getRuleIndex() const {
  return FlatBuffers::RuleMutable_decl;
}

void FlatBuffers::Mutable_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMutable_decl(this);
}

void FlatBuffers::Mutable_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMutable_decl(this);
}


antlrcpp::Any FlatBuffers::Mutable_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitMutable_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Mutable_declContext* FlatBuffers::mutable_decl() {
  Mutable_declContext *_localctx = _tracker.createInstance<Mutable_declContext>(_ctx, getState());
  enterRule(_localctx, 34, FlatBuffers::RuleMutable_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(253);
    match(FlatBuffers::MUTABLE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Static_declContext ------------------------------------------------------------------

FlatBuffers::Static_declContext::Static_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffers::Static_declContext::STATIC() {
  return getToken(FlatBuffers::STATIC, 0);
}


size_t FlatBuffers::Static_declContext::getRuleIndex() const {
  return FlatBuffers::RuleStatic_decl;
}

void FlatBuffers::Static_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatic_decl(this);
}

void FlatBuffers::Static_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatic_decl(this);
}


antlrcpp::Any FlatBuffers::Static_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitStatic_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Static_declContext* FlatBuffers::static_decl() {
  Static_declContext *_localctx = _tracker.createInstance<Static_declContext>(_ctx, getState());
  enterRule(_localctx, 36, FlatBuffers::RuleStatic_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(255);
    match(FlatBuffers::STATIC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Reference_declContext ------------------------------------------------------------------

FlatBuffers::Reference_declContext::Reference_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffers::Reference_declContext::REFERENCE() {
  return getToken(FlatBuffers::REFERENCE, 0);
}


size_t FlatBuffers::Reference_declContext::getRuleIndex() const {
  return FlatBuffers::RuleReference_decl;
}

void FlatBuffers::Reference_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReference_decl(this);
}

void FlatBuffers::Reference_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReference_decl(this);
}


antlrcpp::Any FlatBuffers::Reference_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitReference_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Reference_declContext* FlatBuffers::reference_decl() {
  Reference_declContext *_localctx = _tracker.createInstance<Reference_declContext>(_ctx, getState());
  enterRule(_localctx, 38, FlatBuffers::RuleReference_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(257);
    match(FlatBuffers::REFERENCE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

FlatBuffers::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffers::TypeContext::OPEN_BRACKET() {
  return getToken(FlatBuffers::OPEN_BRACKET, 0);
}

FlatBuffers::TypeContext* FlatBuffers::TypeContext::type() {
  return getRuleContext<FlatBuffers::TypeContext>(0);
}

tree::TerminalNode* FlatBuffers::TypeContext::CLOSE_BRACKET() {
  return getToken(FlatBuffers::CLOSE_BRACKET, 0);
}

tree::TerminalNode* FlatBuffers::TypeContext::COLON() {
  return getToken(FlatBuffers::COLON, 0);
}

FlatBuffers::Integer_constContext* FlatBuffers::TypeContext::integer_const() {
  return getRuleContext<FlatBuffers::Integer_constContext>(0);
}

tree::TerminalNode* FlatBuffers::TypeContext::BASE_TYPE_NAME() {
  return getToken(FlatBuffers::BASE_TYPE_NAME, 0);
}

FlatBuffers::Ns_identContext* FlatBuffers::TypeContext::ns_ident() {
  return getRuleContext<FlatBuffers::Ns_identContext>(0);
}


size_t FlatBuffers::TypeContext::getRuleIndex() const {
  return FlatBuffers::RuleType;
}

void FlatBuffers::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void FlatBuffers::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


antlrcpp::Any FlatBuffers::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::TypeContext* FlatBuffers::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 40, FlatBuffers::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(269);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FlatBuffers::OPEN_BRACKET: {
        enterOuterAlt(_localctx, 1);
        setState(259);
        match(FlatBuffers::OPEN_BRACKET);
        setState(260);
        type();
        setState(263);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == FlatBuffers::COLON) {
          setState(261);
          match(FlatBuffers::COLON);
          setState(262);
          integer_const();
        }
        setState(265);
        match(FlatBuffers::CLOSE_BRACKET);
        break;
      }

      case FlatBuffers::BASE_TYPE_NAME: {
        enterOuterAlt(_localctx, 2);
        setState(267);
        match(FlatBuffers::BASE_TYPE_NAME);
        break;
      }

      case FlatBuffers::IDENT: {
        enterOuterAlt(_localctx, 3);
        setState(268);
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

FlatBuffers::Uniontype_declContext::Uniontype_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FlatBuffers::TypeContext* FlatBuffers::Uniontype_declContext::type() {
  return getRuleContext<FlatBuffers::TypeContext>(0);
}


size_t FlatBuffers::Uniontype_declContext::getRuleIndex() const {
  return FlatBuffers::RuleUniontype_decl;
}

void FlatBuffers::Uniontype_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUniontype_decl(this);
}

void FlatBuffers::Uniontype_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUniontype_decl(this);
}


antlrcpp::Any FlatBuffers::Uniontype_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitUniontype_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Uniontype_declContext* FlatBuffers::uniontype_decl() {
  Uniontype_declContext *_localctx = _tracker.createInstance<Uniontype_declContext>(_ctx, getState());
  enterRule(_localctx, 42, FlatBuffers::RuleUniontype_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(271);
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

FlatBuffers::Commasep_uniontype_declContext::Commasep_uniontype_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FlatBuffers::Uniontype_declContext *> FlatBuffers::Commasep_uniontype_declContext::uniontype_decl() {
  return getRuleContexts<FlatBuffers::Uniontype_declContext>();
}

FlatBuffers::Uniontype_declContext* FlatBuffers::Commasep_uniontype_declContext::uniontype_decl(size_t i) {
  return getRuleContext<FlatBuffers::Uniontype_declContext>(i);
}

std::vector<tree::TerminalNode *> FlatBuffers::Commasep_uniontype_declContext::COMMA() {
  return getTokens(FlatBuffers::COMMA);
}

tree::TerminalNode* FlatBuffers::Commasep_uniontype_declContext::COMMA(size_t i) {
  return getToken(FlatBuffers::COMMA, i);
}


size_t FlatBuffers::Commasep_uniontype_declContext::getRuleIndex() const {
  return FlatBuffers::RuleCommasep_uniontype_decl;
}

void FlatBuffers::Commasep_uniontype_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommasep_uniontype_decl(this);
}

void FlatBuffers::Commasep_uniontype_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommasep_uniontype_decl(this);
}


antlrcpp::Any FlatBuffers::Commasep_uniontype_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitCommasep_uniontype_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Commasep_uniontype_declContext* FlatBuffers::commasep_uniontype_decl() {
  Commasep_uniontype_declContext *_localctx = _tracker.createInstance<Commasep_uniontype_declContext>(_ctx, getState());
  enterRule(_localctx, 44, FlatBuffers::RuleCommasep_uniontype_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(273);
    uniontype_decl();
    setState(278);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(274);
        match(FlatBuffers::COMMA);
        setState(275);
        uniontype_decl(); 
      }
      setState(280);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    }
    setState(282);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffers::COMMA) {
      setState(281);
      match(FlatBuffers::COMMA);
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

FlatBuffers::Enumval_declContext::Enumval_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FlatBuffers::Ns_identContext* FlatBuffers::Enumval_declContext::ns_ident() {
  return getRuleContext<FlatBuffers::Ns_identContext>(0);
}

tree::TerminalNode* FlatBuffers::Enumval_declContext::EQUAL() {
  return getToken(FlatBuffers::EQUAL, 0);
}

FlatBuffers::Integer_constContext* FlatBuffers::Enumval_declContext::integer_const() {
  return getRuleContext<FlatBuffers::Integer_constContext>(0);
}


size_t FlatBuffers::Enumval_declContext::getRuleIndex() const {
  return FlatBuffers::RuleEnumval_decl;
}

void FlatBuffers::Enumval_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumval_decl(this);
}

void FlatBuffers::Enumval_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumval_decl(this);
}


antlrcpp::Any FlatBuffers::Enumval_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitEnumval_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Enumval_declContext* FlatBuffers::enumval_decl() {
  Enumval_declContext *_localctx = _tracker.createInstance<Enumval_declContext>(_ctx, getState());
  enterRule(_localctx, 46, FlatBuffers::RuleEnumval_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
    ns_ident();
    setState(287);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffers::EQUAL) {
      setState(285);
      match(FlatBuffers::EQUAL);
      setState(286);
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

FlatBuffers::Commasep_enumval_declContext::Commasep_enumval_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FlatBuffers::Enumval_declContext *> FlatBuffers::Commasep_enumval_declContext::enumval_decl() {
  return getRuleContexts<FlatBuffers::Enumval_declContext>();
}

FlatBuffers::Enumval_declContext* FlatBuffers::Commasep_enumval_declContext::enumval_decl(size_t i) {
  return getRuleContext<FlatBuffers::Enumval_declContext>(i);
}

std::vector<tree::TerminalNode *> FlatBuffers::Commasep_enumval_declContext::COMMA() {
  return getTokens(FlatBuffers::COMMA);
}

tree::TerminalNode* FlatBuffers::Commasep_enumval_declContext::COMMA(size_t i) {
  return getToken(FlatBuffers::COMMA, i);
}


size_t FlatBuffers::Commasep_enumval_declContext::getRuleIndex() const {
  return FlatBuffers::RuleCommasep_enumval_decl;
}

void FlatBuffers::Commasep_enumval_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommasep_enumval_decl(this);
}

void FlatBuffers::Commasep_enumval_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommasep_enumval_decl(this);
}


antlrcpp::Any FlatBuffers::Commasep_enumval_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitCommasep_enumval_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Commasep_enumval_declContext* FlatBuffers::commasep_enumval_decl() {
  Commasep_enumval_declContext *_localctx = _tracker.createInstance<Commasep_enumval_declContext>(_ctx, getState());
  enterRule(_localctx, 48, FlatBuffers::RuleCommasep_enumval_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(289);
    enumval_decl();
    setState(294);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(290);
        match(FlatBuffers::COMMA);
        setState(291);
        enumval_decl(); 
      }
      setState(296);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    }
    setState(298);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffers::COMMA) {
      setState(297);
      match(FlatBuffers::COMMA);
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

FlatBuffers::Ident_with_opt_single_valueContext::Ident_with_opt_single_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffers::Ident_with_opt_single_valueContext::IDENT() {
  return getToken(FlatBuffers::IDENT, 0);
}

tree::TerminalNode* FlatBuffers::Ident_with_opt_single_valueContext::COLON() {
  return getToken(FlatBuffers::COLON, 0);
}

FlatBuffers::Single_valueContext* FlatBuffers::Ident_with_opt_single_valueContext::single_value() {
  return getRuleContext<FlatBuffers::Single_valueContext>(0);
}


size_t FlatBuffers::Ident_with_opt_single_valueContext::getRuleIndex() const {
  return FlatBuffers::RuleIdent_with_opt_single_value;
}

void FlatBuffers::Ident_with_opt_single_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdent_with_opt_single_value(this);
}

void FlatBuffers::Ident_with_opt_single_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdent_with_opt_single_value(this);
}


antlrcpp::Any FlatBuffers::Ident_with_opt_single_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitIdent_with_opt_single_value(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Ident_with_opt_single_valueContext* FlatBuffers::ident_with_opt_single_value() {
  Ident_with_opt_single_valueContext *_localctx = _tracker.createInstance<Ident_with_opt_single_valueContext>(_ctx, getState());
  enterRule(_localctx, 50, FlatBuffers::RuleIdent_with_opt_single_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(300);
    match(FlatBuffers::IDENT);
    setState(303);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffers::COLON) {
      setState(301);
      match(FlatBuffers::COLON);
      setState(302);
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

FlatBuffers::Commasep_ident_with_opt_single_valueContext::Commasep_ident_with_opt_single_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FlatBuffers::Ident_with_opt_single_valueContext *> FlatBuffers::Commasep_ident_with_opt_single_valueContext::ident_with_opt_single_value() {
  return getRuleContexts<FlatBuffers::Ident_with_opt_single_valueContext>();
}

FlatBuffers::Ident_with_opt_single_valueContext* FlatBuffers::Commasep_ident_with_opt_single_valueContext::ident_with_opt_single_value(size_t i) {
  return getRuleContext<FlatBuffers::Ident_with_opt_single_valueContext>(i);
}

std::vector<tree::TerminalNode *> FlatBuffers::Commasep_ident_with_opt_single_valueContext::COMMA() {
  return getTokens(FlatBuffers::COMMA);
}

tree::TerminalNode* FlatBuffers::Commasep_ident_with_opt_single_valueContext::COMMA(size_t i) {
  return getToken(FlatBuffers::COMMA, i);
}


size_t FlatBuffers::Commasep_ident_with_opt_single_valueContext::getRuleIndex() const {
  return FlatBuffers::RuleCommasep_ident_with_opt_single_value;
}

void FlatBuffers::Commasep_ident_with_opt_single_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommasep_ident_with_opt_single_value(this);
}

void FlatBuffers::Commasep_ident_with_opt_single_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommasep_ident_with_opt_single_value(this);
}


antlrcpp::Any FlatBuffers::Commasep_ident_with_opt_single_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitCommasep_ident_with_opt_single_value(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Commasep_ident_with_opt_single_valueContext* FlatBuffers::commasep_ident_with_opt_single_value() {
  Commasep_ident_with_opt_single_valueContext *_localctx = _tracker.createInstance<Commasep_ident_with_opt_single_valueContext>(_ctx, getState());
  enterRule(_localctx, 52, FlatBuffers::RuleCommasep_ident_with_opt_single_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(305);
    ident_with_opt_single_value();
    setState(310);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FlatBuffers::COMMA) {
      setState(306);
      match(FlatBuffers::COMMA);
      setState(307);
      ident_with_opt_single_value();
      setState(312);
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

FlatBuffers::MetadataContext::MetadataContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffers::MetadataContext::OPEN_PAREN() {
  return getToken(FlatBuffers::OPEN_PAREN, 0);
}

FlatBuffers::Commasep_ident_with_opt_single_valueContext* FlatBuffers::MetadataContext::commasep_ident_with_opt_single_value() {
  return getRuleContext<FlatBuffers::Commasep_ident_with_opt_single_valueContext>(0);
}

tree::TerminalNode* FlatBuffers::MetadataContext::CLOSE_PAREN() {
  return getToken(FlatBuffers::CLOSE_PAREN, 0);
}


size_t FlatBuffers::MetadataContext::getRuleIndex() const {
  return FlatBuffers::RuleMetadata;
}

void FlatBuffers::MetadataContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMetadata(this);
}

void FlatBuffers::MetadataContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMetadata(this);
}


antlrcpp::Any FlatBuffers::MetadataContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitMetadata(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::MetadataContext* FlatBuffers::metadata() {
  MetadataContext *_localctx = _tracker.createInstance<MetadataContext>(_ctx, getState());
  enterRule(_localctx, 54, FlatBuffers::RuleMetadata);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(317);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffers::OPEN_PAREN) {
      setState(313);
      match(FlatBuffers::OPEN_PAREN);
      setState(314);
      commasep_ident_with_opt_single_value();
      setState(315);
      match(FlatBuffers::CLOSE_PAREN);
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

FlatBuffers::ScalarContext::ScalarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffers::ScalarContext::INTEGER_CONSTANT() {
  return getToken(FlatBuffers::INTEGER_CONSTANT, 0);
}

tree::TerminalNode* FlatBuffers::ScalarContext::HEX_INTEGER_CONSTANT() {
  return getToken(FlatBuffers::HEX_INTEGER_CONSTANT, 0);
}

tree::TerminalNode* FlatBuffers::ScalarContext::FLOAT_CONSTANT() {
  return getToken(FlatBuffers::FLOAT_CONSTANT, 0);
}

tree::TerminalNode* FlatBuffers::ScalarContext::IDENT() {
  return getToken(FlatBuffers::IDENT, 0);
}


size_t FlatBuffers::ScalarContext::getRuleIndex() const {
  return FlatBuffers::RuleScalar;
}

void FlatBuffers::ScalarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScalar(this);
}

void FlatBuffers::ScalarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScalar(this);
}


antlrcpp::Any FlatBuffers::ScalarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitScalar(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::ScalarContext* FlatBuffers::scalar() {
  ScalarContext *_localctx = _tracker.createInstance<ScalarContext>(_ctx, getState());
  enterRule(_localctx, 56, FlatBuffers::RuleScalar);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(319);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << FlatBuffers::IDENT)
      | (1ULL << FlatBuffers::HEX_INTEGER_CONSTANT)
      | (1ULL << FlatBuffers::INTEGER_CONSTANT)
      | (1ULL << FlatBuffers::FLOAT_CONSTANT))) != 0))) {
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

FlatBuffers::ObjectContext::ObjectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffers::ObjectContext::OPEN_BRACE() {
  return getToken(FlatBuffers::OPEN_BRACE, 0);
}

FlatBuffers::Commasep_ident_with_valueContext* FlatBuffers::ObjectContext::commasep_ident_with_value() {
  return getRuleContext<FlatBuffers::Commasep_ident_with_valueContext>(0);
}

tree::TerminalNode* FlatBuffers::ObjectContext::CLOSE_BRACE() {
  return getToken(FlatBuffers::CLOSE_BRACE, 0);
}


size_t FlatBuffers::ObjectContext::getRuleIndex() const {
  return FlatBuffers::RuleObject;
}

void FlatBuffers::ObjectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObject(this);
}

void FlatBuffers::ObjectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObject(this);
}


antlrcpp::Any FlatBuffers::ObjectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitObject(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::ObjectContext* FlatBuffers::object() {
  ObjectContext *_localctx = _tracker.createInstance<ObjectContext>(_ctx, getState());
  enterRule(_localctx, 58, FlatBuffers::RuleObject);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(321);
    match(FlatBuffers::OPEN_BRACE);
    setState(322);
    commasep_ident_with_value();
    setState(323);
    match(FlatBuffers::CLOSE_BRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ident_with_valueContext ------------------------------------------------------------------

FlatBuffers::Ident_with_valueContext::Ident_with_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffers::Ident_with_valueContext::IDENT() {
  return getToken(FlatBuffers::IDENT, 0);
}

tree::TerminalNode* FlatBuffers::Ident_with_valueContext::COLON() {
  return getToken(FlatBuffers::COLON, 0);
}

FlatBuffers::ValueContext* FlatBuffers::Ident_with_valueContext::value() {
  return getRuleContext<FlatBuffers::ValueContext>(0);
}


size_t FlatBuffers::Ident_with_valueContext::getRuleIndex() const {
  return FlatBuffers::RuleIdent_with_value;
}

void FlatBuffers::Ident_with_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdent_with_value(this);
}

void FlatBuffers::Ident_with_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdent_with_value(this);
}


antlrcpp::Any FlatBuffers::Ident_with_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitIdent_with_value(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Ident_with_valueContext* FlatBuffers::ident_with_value() {
  Ident_with_valueContext *_localctx = _tracker.createInstance<Ident_with_valueContext>(_ctx, getState());
  enterRule(_localctx, 60, FlatBuffers::RuleIdent_with_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(325);
    match(FlatBuffers::IDENT);
    setState(326);
    match(FlatBuffers::COLON);
    setState(327);
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

FlatBuffers::Commasep_ident_with_valueContext::Commasep_ident_with_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FlatBuffers::Ident_with_valueContext *> FlatBuffers::Commasep_ident_with_valueContext::ident_with_value() {
  return getRuleContexts<FlatBuffers::Ident_with_valueContext>();
}

FlatBuffers::Ident_with_valueContext* FlatBuffers::Commasep_ident_with_valueContext::ident_with_value(size_t i) {
  return getRuleContext<FlatBuffers::Ident_with_valueContext>(i);
}

std::vector<tree::TerminalNode *> FlatBuffers::Commasep_ident_with_valueContext::COMMA() {
  return getTokens(FlatBuffers::COMMA);
}

tree::TerminalNode* FlatBuffers::Commasep_ident_with_valueContext::COMMA(size_t i) {
  return getToken(FlatBuffers::COMMA, i);
}


size_t FlatBuffers::Commasep_ident_with_valueContext::getRuleIndex() const {
  return FlatBuffers::RuleCommasep_ident_with_value;
}

void FlatBuffers::Commasep_ident_with_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommasep_ident_with_value(this);
}

void FlatBuffers::Commasep_ident_with_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommasep_ident_with_value(this);
}


antlrcpp::Any FlatBuffers::Commasep_ident_with_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitCommasep_ident_with_value(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Commasep_ident_with_valueContext* FlatBuffers::commasep_ident_with_value() {
  Commasep_ident_with_valueContext *_localctx = _tracker.createInstance<Commasep_ident_with_valueContext>(_ctx, getState());
  enterRule(_localctx, 62, FlatBuffers::RuleCommasep_ident_with_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(329);
    ident_with_value();
    setState(334);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(330);
        match(FlatBuffers::COMMA);
        setState(331);
        ident_with_value(); 
      }
      setState(336);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    }
    setState(338);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffers::COMMA) {
      setState(337);
      match(FlatBuffers::COMMA);
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

FlatBuffers::Single_valueContext::Single_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FlatBuffers::ScalarContext* FlatBuffers::Single_valueContext::scalar() {
  return getRuleContext<FlatBuffers::ScalarContext>(0);
}

tree::TerminalNode* FlatBuffers::Single_valueContext::STRING_CONSTANT() {
  return getToken(FlatBuffers::STRING_CONSTANT, 0);
}


size_t FlatBuffers::Single_valueContext::getRuleIndex() const {
  return FlatBuffers::RuleSingle_value;
}

void FlatBuffers::Single_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingle_value(this);
}

void FlatBuffers::Single_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingle_value(this);
}


antlrcpp::Any FlatBuffers::Single_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitSingle_value(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Single_valueContext* FlatBuffers::single_value() {
  Single_valueContext *_localctx = _tracker.createInstance<Single_valueContext>(_ctx, getState());
  enterRule(_localctx, 64, FlatBuffers::RuleSingle_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(342);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FlatBuffers::IDENT:
      case FlatBuffers::HEX_INTEGER_CONSTANT:
      case FlatBuffers::INTEGER_CONSTANT:
      case FlatBuffers::FLOAT_CONSTANT: {
        enterOuterAlt(_localctx, 1);
        setState(340);
        scalar();
        break;
      }

      case FlatBuffers::STRING_CONSTANT: {
        enterOuterAlt(_localctx, 2);
        setState(341);
        match(FlatBuffers::STRING_CONSTANT);
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

FlatBuffers::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FlatBuffers::Single_valueContext* FlatBuffers::ValueContext::single_value() {
  return getRuleContext<FlatBuffers::Single_valueContext>(0);
}

FlatBuffers::ObjectContext* FlatBuffers::ValueContext::object() {
  return getRuleContext<FlatBuffers::ObjectContext>(0);
}

tree::TerminalNode* FlatBuffers::ValueContext::OPEN_BRACKET() {
  return getToken(FlatBuffers::OPEN_BRACKET, 0);
}

FlatBuffers::Commasep_valueContext* FlatBuffers::ValueContext::commasep_value() {
  return getRuleContext<FlatBuffers::Commasep_valueContext>(0);
}

tree::TerminalNode* FlatBuffers::ValueContext::CLOSE_BRACKET() {
  return getToken(FlatBuffers::CLOSE_BRACKET, 0);
}


size_t FlatBuffers::ValueContext::getRuleIndex() const {
  return FlatBuffers::RuleValue;
}

void FlatBuffers::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void FlatBuffers::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}


antlrcpp::Any FlatBuffers::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::ValueContext* FlatBuffers::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 66, FlatBuffers::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(350);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FlatBuffers::STRING_CONSTANT:
      case FlatBuffers::IDENT:
      case FlatBuffers::HEX_INTEGER_CONSTANT:
      case FlatBuffers::INTEGER_CONSTANT:
      case FlatBuffers::FLOAT_CONSTANT: {
        enterOuterAlt(_localctx, 1);
        setState(344);
        single_value();
        break;
      }

      case FlatBuffers::OPEN_BRACE: {
        enterOuterAlt(_localctx, 2);
        setState(345);
        object();
        break;
      }

      case FlatBuffers::OPEN_BRACKET: {
        enterOuterAlt(_localctx, 3);
        setState(346);
        match(FlatBuffers::OPEN_BRACKET);
        setState(347);
        commasep_value();
        setState(348);
        match(FlatBuffers::CLOSE_BRACKET);
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

FlatBuffers::Commasep_valueContext::Commasep_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FlatBuffers::ValueContext *> FlatBuffers::Commasep_valueContext::value() {
  return getRuleContexts<FlatBuffers::ValueContext>();
}

FlatBuffers::ValueContext* FlatBuffers::Commasep_valueContext::value(size_t i) {
  return getRuleContext<FlatBuffers::ValueContext>(i);
}

std::vector<tree::TerminalNode *> FlatBuffers::Commasep_valueContext::COMMA() {
  return getTokens(FlatBuffers::COMMA);
}

tree::TerminalNode* FlatBuffers::Commasep_valueContext::COMMA(size_t i) {
  return getToken(FlatBuffers::COMMA, i);
}


size_t FlatBuffers::Commasep_valueContext::getRuleIndex() const {
  return FlatBuffers::RuleCommasep_value;
}

void FlatBuffers::Commasep_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommasep_value(this);
}

void FlatBuffers::Commasep_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommasep_value(this);
}


antlrcpp::Any FlatBuffers::Commasep_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitCommasep_value(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Commasep_valueContext* FlatBuffers::commasep_value() {
  Commasep_valueContext *_localctx = _tracker.createInstance<Commasep_valueContext>(_ctx, getState());
  enterRule(_localctx, 68, FlatBuffers::RuleCommasep_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(352);
    value();
    setState(357);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(353);
        match(FlatBuffers::COMMA);
        setState(354);
        value(); 
      }
      setState(359);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    }
    setState(361);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffers::COMMA) {
      setState(360);
      match(FlatBuffers::COMMA);
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

FlatBuffers::File_extension_declContext::File_extension_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffers::File_extension_declContext::FILE_EXTENSION() {
  return getToken(FlatBuffers::FILE_EXTENSION, 0);
}

tree::TerminalNode* FlatBuffers::File_extension_declContext::STRING_CONSTANT() {
  return getToken(FlatBuffers::STRING_CONSTANT, 0);
}


size_t FlatBuffers::File_extension_declContext::getRuleIndex() const {
  return FlatBuffers::RuleFile_extension_decl;
}

void FlatBuffers::File_extension_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFile_extension_decl(this);
}

void FlatBuffers::File_extension_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFile_extension_decl(this);
}


antlrcpp::Any FlatBuffers::File_extension_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitFile_extension_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::File_extension_declContext* FlatBuffers::file_extension_decl() {
  File_extension_declContext *_localctx = _tracker.createInstance<File_extension_declContext>(_ctx, getState());
  enterRule(_localctx, 70, FlatBuffers::RuleFile_extension_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(363);
    match(FlatBuffers::FILE_EXTENSION);
    setState(364);
    match(FlatBuffers::STRING_CONSTANT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- File_identifier_declContext ------------------------------------------------------------------

FlatBuffers::File_identifier_declContext::File_identifier_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffers::File_identifier_declContext::FILE_IDENTIFIER() {
  return getToken(FlatBuffers::FILE_IDENTIFIER, 0);
}

tree::TerminalNode* FlatBuffers::File_identifier_declContext::STRING_CONSTANT() {
  return getToken(FlatBuffers::STRING_CONSTANT, 0);
}


size_t FlatBuffers::File_identifier_declContext::getRuleIndex() const {
  return FlatBuffers::RuleFile_identifier_decl;
}

void FlatBuffers::File_identifier_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFile_identifier_decl(this);
}

void FlatBuffers::File_identifier_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFile_identifier_decl(this);
}


antlrcpp::Any FlatBuffers::File_identifier_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitFile_identifier_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::File_identifier_declContext* FlatBuffers::file_identifier_decl() {
  File_identifier_declContext *_localctx = _tracker.createInstance<File_identifier_declContext>(_ctx, getState());
  enterRule(_localctx, 72, FlatBuffers::RuleFile_identifier_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(366);
    match(FlatBuffers::FILE_IDENTIFIER);
    setState(367);
    match(FlatBuffers::STRING_CONSTANT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ns_identContext ------------------------------------------------------------------

FlatBuffers::Ns_identContext::Ns_identContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> FlatBuffers::Ns_identContext::IDENT() {
  return getTokens(FlatBuffers::IDENT);
}

tree::TerminalNode* FlatBuffers::Ns_identContext::IDENT(size_t i) {
  return getToken(FlatBuffers::IDENT, i);
}

std::vector<tree::TerminalNode *> FlatBuffers::Ns_identContext::PERIOD() {
  return getTokens(FlatBuffers::PERIOD);
}

tree::TerminalNode* FlatBuffers::Ns_identContext::PERIOD(size_t i) {
  return getToken(FlatBuffers::PERIOD, i);
}


size_t FlatBuffers::Ns_identContext::getRuleIndex() const {
  return FlatBuffers::RuleNs_ident;
}

void FlatBuffers::Ns_identContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNs_ident(this);
}

void FlatBuffers::Ns_identContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNs_ident(this);
}


antlrcpp::Any FlatBuffers::Ns_identContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitNs_ident(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Ns_identContext* FlatBuffers::ns_ident() {
  Ns_identContext *_localctx = _tracker.createInstance<Ns_identContext>(_ctx, getState());
  enterRule(_localctx, 74, FlatBuffers::RuleNs_ident);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(369);
    match(FlatBuffers::IDENT);
    setState(374);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FlatBuffers::PERIOD) {
      setState(370);
      match(FlatBuffers::PERIOD);
      setState(371);
      match(FlatBuffers::IDENT);
      setState(376);
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

FlatBuffers::Integer_constContext::Integer_constContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffers::Integer_constContext::INTEGER_CONSTANT() {
  return getToken(FlatBuffers::INTEGER_CONSTANT, 0);
}

tree::TerminalNode* FlatBuffers::Integer_constContext::HEX_INTEGER_CONSTANT() {
  return getToken(FlatBuffers::HEX_INTEGER_CONSTANT, 0);
}


size_t FlatBuffers::Integer_constContext::getRuleIndex() const {
  return FlatBuffers::RuleInteger_const;
}

void FlatBuffers::Integer_constContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInteger_const(this);
}

void FlatBuffers::Integer_constContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInteger_const(this);
}


antlrcpp::Any FlatBuffers::Integer_constContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersVisitor*>(visitor))
    return parserVisitor->visitInteger_const(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffers::Integer_constContext* FlatBuffers::integer_const() {
  Integer_constContext *_localctx = _tracker.createInstance<Integer_constContext>(_ctx, getState());
  enterRule(_localctx, 76, FlatBuffers::RuleInteger_const);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(377);
    _la = _input->LA(1);
    if (!(_la == FlatBuffers::HEX_INTEGER_CONSTANT

    || _la == FlatBuffers::INTEGER_CONSTANT)) {
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
std::vector<dfa::DFA> FlatBuffers::_decisionToDFA;
atn::PredictionContextCache FlatBuffers::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN FlatBuffers::_atn;
std::vector<uint16_t> FlatBuffers::_serializedATN;

std::vector<std::string> FlatBuffers::_ruleNames = {
  "schema", "include", "namespace_decl", "attribute_decl", "type_decl", 
  "enum_decl", "union_decl", "root_decl", "field_decl", "rpc_decl", "rpc_method", 
  "interface_decl", "method_decl", "method_parameters", "method_parameter", 
  "method_return_type", "method_type", "mutable_decl", "static_decl", "reference_decl", 
  "type", "uniontype_decl", "commasep_uniontype_decl", "enumval_decl", "commasep_enumval_decl", 
  "ident_with_opt_single_value", "commasep_ident_with_opt_single_value", 
  "metadata", "scalar", "object", "ident_with_value", "commasep_ident_with_value", 
  "single_value", "value", "commasep_value", "file_extension_decl", "file_identifier_decl", 
  "ns_ident", "integer_const"
};

std::vector<std::string> FlatBuffers::_literalNames = {
  "", "'include'", "'namespace'", "'attribute'", "'table'", "'struct'", 
  "'enum'", "'union'", "'interface'", "'mut'", "'static'", "'ref'", "'root_type'", 
  "'rpc_service'", "'file_extension'", "'file_indentifier'", "", "", "", 
  "", "", "", "", "", "", "", "';'", "':'", "'.'", "','", "'='", "'{'", 
  "'}'", "'['", "']'", "'('", "')'"
};

std::vector<std::string> FlatBuffers::_symbolicNames = {
  "", "INCLUDE", "NAMESPACE", "ATTRIBUTE", "TABLE", "STRUCT", "ENUM", "UNION", 
  "INTERFACE", "MUTABLE", "STATIC", "REFERENCE", "ROOT_TYPE", "RPC_SERVICE", 
  "FILE_EXTENSION", "FILE_IDENTIFIER", "STRING_CONSTANT", "BASE_TYPE_NAME", 
  "IDENT", "HEX_INTEGER_CONSTANT", "INTEGER_CONSTANT", "FLOAT_CONSTANT", 
  "BLOCK_DOC_COMMENT", "BLOCK_COMMENT", "DOC_COMMENT", "COMMENT", "SEMICOLON", 
  "COLON", "PERIOD", "COMMA", "EQUAL", "OPEN_BRACE", "CLOSE_BRACE", "OPEN_BRACKET", 
  "CLOSE_BRACKET", "OPEN_PAREN", "CLOSE_PAREN", "WHITESPACE"
};

dfa::Vocabulary FlatBuffers::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> FlatBuffers::_tokenNames;

FlatBuffers::Initializer::Initializer() {
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
    0x3, 0x27, 0x17e, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x3, 0x2, 0x7, 0x2, 0x52, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x55, 0xb, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x62, 0xa, 0x2, 0xc, 
    0x2, 0xe, 0x2, 0x65, 0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x6f, 0xa, 0x4, 0xc, 
    0x4, 0xe, 0x4, 0x72, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x5, 0x6, 0x7b, 0xa, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x83, 0xa, 0x6, 
    0xc, 0x6, 0xe, 0x6, 0x86, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x5, 
    0x7, 0x8b, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 
    0x91, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x8, 0x5, 0x8, 0x99, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xab, 0xa, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xb0, 0xa, 0xa, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x6, 0xb, 0xb6, 0xa, 0xb, 0xd, 0xb, 0xe, 
    0xb, 0xb7, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x5, 0xd, 
    0xc6, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x6, 0xd, 0xcc, 
    0xa, 0xd, 0xd, 0xd, 0xe, 0xd, 0xcd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 
    0xe, 0x5, 0xe, 0xd4, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xdc, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x5, 0xe, 0xe1, 0xa, 0xe, 0x3, 0xf, 0x5, 0xf, 0xe4, 0xa, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x7, 0xf, 0xe8, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xeb, 0xb, 
    0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xf0, 0xa, 0x10, 0x3, 
    0x10, 0x5, 0x10, 0xf3, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x12, 0x5, 0x12, 0xfa, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 
    0x12, 0xfe, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 
    0x10a, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 
    0x110, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x7, 0x18, 0x117, 0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x11a, 0xb, 0x18, 
    0x3, 0x18, 0x5, 0x18, 0x11d, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x5, 0x19, 0x122, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 
    0x127, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x12a, 0xb, 0x1a, 0x3, 0x1a, 
    0x5, 0x1a, 0x12d, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 
    0x132, 0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x137, 
    0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x13a, 0xb, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x140, 0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x14f, 
    0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x152, 0xb, 0x21, 0x3, 0x21, 0x5, 0x21, 
    0x155, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x159, 0xa, 0x22, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 
    0x23, 0x161, 0xa, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x7, 0x24, 
    0x166, 0xa, 0x24, 0xc, 0x24, 0xe, 0x24, 0x169, 0xb, 0x24, 0x3, 0x24, 
    0x5, 0x24, 0x16c, 0xa, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 0x177, 
    0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 0x17a, 0xb, 0x27, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x2, 0x2, 0x29, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
    0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 
    0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x2, 0x5, 0x3, 0x2, 0x6, 0x7, 
    0x3, 0x2, 0x14, 0x17, 0x3, 0x2, 0x15, 0x16, 0x2, 0x18b, 0x2, 0x53, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x66, 0x3, 0x2, 0x2, 0x2, 0x6, 0x6a, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x75, 0x3, 0x2, 0x2, 0x2, 0xa, 0x7a, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0x8a, 0x3, 0x2, 0x2, 0x2, 0xe, 0x98, 0x3, 0x2, 0x2, 0x2, 0x10, 0xa1, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x14, 0xb1, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x18, 0xc5, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xe3, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0xec, 0x3, 0x2, 0x2, 0x2, 0x20, 0xf6, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x24, 0xff, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0x101, 0x3, 0x2, 0x2, 0x2, 0x28, 0x103, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x10f, 
    0x3, 0x2, 0x2, 0x2, 0x2c, 0x111, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x113, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x32, 0x123, 0x3, 0x2, 
    0x2, 0x2, 0x34, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x36, 0x133, 0x3, 0x2, 0x2, 
    0x2, 0x38, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x141, 0x3, 0x2, 0x2, 0x2, 
    0x3c, 0x143, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x147, 0x3, 0x2, 0x2, 0x2, 0x40, 
    0x14b, 0x3, 0x2, 0x2, 0x2, 0x42, 0x158, 0x3, 0x2, 0x2, 0x2, 0x44, 0x160, 
    0x3, 0x2, 0x2, 0x2, 0x46, 0x162, 0x3, 0x2, 0x2, 0x2, 0x48, 0x16d, 0x3, 
    0x2, 0x2, 0x2, 0x4a, 0x170, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x173, 0x3, 0x2, 
    0x2, 0x2, 0x4e, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x50, 0x52, 0x5, 0x4, 0x3, 
    0x2, 0x51, 0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 0x55, 0x3, 0x2, 0x2, 0x2, 
    0x53, 0x51, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x3, 0x2, 0x2, 0x2, 0x54, 
    0x63, 0x3, 0x2, 0x2, 0x2, 0x55, 0x53, 0x3, 0x2, 0x2, 0x2, 0x56, 0x62, 
    0x5, 0x6, 0x4, 0x2, 0x57, 0x62, 0x5, 0xa, 0x6, 0x2, 0x58, 0x62, 0x5, 
    0xc, 0x7, 0x2, 0x59, 0x62, 0x5, 0xe, 0x8, 0x2, 0x5a, 0x62, 0x5, 0x10, 
    0x9, 0x2, 0x5b, 0x62, 0x5, 0x48, 0x25, 0x2, 0x5c, 0x62, 0x5, 0x4a, 0x26, 
    0x2, 0x5d, 0x62, 0x5, 0x8, 0x5, 0x2, 0x5e, 0x62, 0x5, 0x14, 0xb, 0x2, 
    0x5f, 0x62, 0x5, 0x18, 0xd, 0x2, 0x60, 0x62, 0x5, 0x3c, 0x1f, 0x2, 0x61, 
    0x56, 0x3, 0x2, 0x2, 0x2, 0x61, 0x57, 0x3, 0x2, 0x2, 0x2, 0x61, 0x58, 
    0x3, 0x2, 0x2, 0x2, 0x61, 0x59, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5a, 0x3, 
    0x2, 0x2, 0x2, 0x61, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5c, 0x3, 0x2, 
    0x2, 0x2, 0x61, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5e, 0x3, 0x2, 0x2, 
    0x2, 0x61, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x61, 0x60, 0x3, 0x2, 0x2, 0x2, 
    0x62, 0x65, 0x3, 0x2, 0x2, 0x2, 0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 0x63, 
    0x64, 0x3, 0x2, 0x2, 0x2, 0x64, 0x3, 0x3, 0x2, 0x2, 0x2, 0x65, 0x63, 
    0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x7, 0x3, 0x2, 0x2, 0x67, 0x68, 0x7, 
    0x12, 0x2, 0x2, 0x68, 0x69, 0x7, 0x1c, 0x2, 0x2, 0x69, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x6a, 0x6b, 0x7, 0x4, 0x2, 0x2, 0x6b, 0x70, 0x7, 0x14, 0x2, 
    0x2, 0x6c, 0x6d, 0x7, 0x1e, 0x2, 0x2, 0x6d, 0x6f, 0x7, 0x14, 0x2, 0x2, 
    0x6e, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x72, 0x3, 0x2, 0x2, 0x2, 0x70, 
    0x6e, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x3, 0x2, 0x2, 0x2, 0x71, 0x73, 
    0x3, 0x2, 0x2, 0x2, 0x72, 0x70, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x7, 
    0x1c, 0x2, 0x2, 0x74, 0x7, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x7, 0x5, 
    0x2, 0x2, 0x76, 0x77, 0x7, 0x12, 0x2, 0x2, 0x77, 0x78, 0x7, 0x1c, 0x2, 
    0x2, 0x78, 0x9, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7b, 0x7, 0x1a, 0x2, 0x2, 
    0x7a, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7b, 
    0x7c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x9, 0x2, 0x2, 0x2, 0x7d, 0x7e, 
    0x7, 0x14, 0x2, 0x2, 0x7e, 0x7f, 0x5, 0x38, 0x1d, 0x2, 0x7f, 0x84, 0x7, 
    0x21, 0x2, 0x2, 0x80, 0x83, 0x5, 0x12, 0xa, 0x2, 0x81, 0x83, 0x5, 0x1a, 
    0xe, 0x2, 0x82, 0x80, 0x3, 0x2, 0x2, 0x2, 0x82, 0x81, 0x3, 0x2, 0x2, 
    0x2, 0x83, 0x86, 0x3, 0x2, 0x2, 0x2, 0x84, 0x82, 0x3, 0x2, 0x2, 0x2, 
    0x84, 0x85, 0x3, 0x2, 0x2, 0x2, 0x85, 0x87, 0x3, 0x2, 0x2, 0x2, 0x86, 
    0x84, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x7, 0x22, 0x2, 0x2, 0x88, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x89, 0x8b, 0x7, 0x1a, 0x2, 0x2, 0x8a, 0x89, 0x3, 
    0x2, 0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x3, 0x2, 
    0x2, 0x2, 0x8c, 0x8d, 0x7, 0x8, 0x2, 0x2, 0x8d, 0x90, 0x7, 0x14, 0x2, 
    0x2, 0x8e, 0x8f, 0x7, 0x1d, 0x2, 0x2, 0x8f, 0x91, 0x5, 0x2a, 0x16, 0x2, 
    0x90, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x3, 0x2, 0x2, 0x2, 0x91, 
    0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x5, 0x38, 0x1d, 0x2, 0x93, 0x94, 
    0x7, 0x21, 0x2, 0x2, 0x94, 0x95, 0x5, 0x32, 0x1a, 0x2, 0x95, 0x96, 0x7, 
    0x22, 0x2, 0x2, 0x96, 0xd, 0x3, 0x2, 0x2, 0x2, 0x97, 0x99, 0x7, 0x1a, 
    0x2, 0x2, 0x98, 0x97, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 0x2, 
    0x2, 0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x7, 0x9, 0x2, 0x2, 
    0x9b, 0x9c, 0x7, 0x14, 0x2, 0x2, 0x9c, 0x9d, 0x5, 0x38, 0x1d, 0x2, 0x9d, 
    0x9e, 0x7, 0x21, 0x2, 0x2, 0x9e, 0x9f, 0x5, 0x2e, 0x18, 0x2, 0x9f, 0xa0, 
    0x7, 0x22, 0x2, 0x2, 0xa0, 0xf, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa2, 0x7, 
    0xe, 0x2, 0x2, 0xa2, 0xa3, 0x7, 0x14, 0x2, 0x2, 0xa3, 0xa4, 0x7, 0x1c, 
    0x2, 0x2, 0xa4, 0x11, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0x7, 0x14, 0x2, 
    0x2, 0xa6, 0xa7, 0x7, 0x1d, 0x2, 0x2, 0xa7, 0xaa, 0x5, 0x2a, 0x16, 0x2, 
    0xa8, 0xa9, 0x7, 0x20, 0x2, 0x2, 0xa9, 0xab, 0x5, 0x3a, 0x1e, 0x2, 0xaa, 
    0xa8, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 
    0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x5, 0x38, 0x1d, 0x2, 0xad, 0xaf, 0x7, 
    0x1c, 0x2, 0x2, 0xae, 0xb0, 0x7, 0x1a, 0x2, 0x2, 0xaf, 0xae, 0x3, 0x2, 
    0x2, 0x2, 0xaf, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0xb1, 0xb2, 0x7, 0xf, 0x2, 0x2, 0xb2, 0xb3, 0x7, 0x14, 0x2, 0x2, 
    0xb3, 0xb5, 0x7, 0x21, 0x2, 0x2, 0xb4, 0xb6, 0x5, 0x16, 0xc, 0x2, 0xb5, 
    0xb4, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb5, 
    0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x3, 
    0x2, 0x2, 0x2, 0xb9, 0xba, 0x7, 0x22, 0x2, 0x2, 0xba, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0xbb, 0xbc, 0x7, 0x14, 0x2, 0x2, 0xbc, 0xbd, 0x7, 0x25, 0x2, 
    0x2, 0xbd, 0xbe, 0x7, 0x14, 0x2, 0x2, 0xbe, 0xbf, 0x7, 0x26, 0x2, 0x2, 
    0xbf, 0xc0, 0x7, 0x1d, 0x2, 0x2, 0xc0, 0xc1, 0x7, 0x14, 0x2, 0x2, 0xc1, 
    0xc2, 0x5, 0x38, 0x1d, 0x2, 0xc2, 0xc3, 0x7, 0x1c, 0x2, 0x2, 0xc3, 0x17, 
    0x3, 0x2, 0x2, 0x2, 0xc4, 0xc6, 0x7, 0x1a, 0x2, 0x2, 0xc5, 0xc4, 0x3, 
    0x2, 0x2, 0x2, 0xc5, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x3, 0x2, 
    0x2, 0x2, 0xc7, 0xc8, 0x7, 0xa, 0x2, 0x2, 0xc8, 0xc9, 0x7, 0x14, 0x2, 
    0x2, 0xc9, 0xcb, 0x7, 0x21, 0x2, 0x2, 0xca, 0xcc, 0x5, 0x1a, 0xe, 0x2, 
    0xcb, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcd, 
    0xcb, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 
    0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x7, 0x22, 0x2, 0x2, 0xd0, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0xd1, 0xd4, 0x5, 0x26, 0x14, 0x2, 0xd2, 0xd4, 0x5, 0x24, 
    0x13, 0x2, 0xd3, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd2, 0x3, 0x2, 0x2, 
    0x2, 0xd3, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x3, 0x2, 0x2, 0x2, 
    0xd5, 0xd6, 0x7, 0x14, 0x2, 0x2, 0xd6, 0xd7, 0x7, 0x25, 0x2, 0x2, 0xd7, 
    0xd8, 0x5, 0x1c, 0xf, 0x2, 0xd8, 0xdb, 0x7, 0x26, 0x2, 0x2, 0xd9, 0xda, 
    0x7, 0x1d, 0x2, 0x2, 0xda, 0xdc, 0x5, 0x20, 0x11, 0x2, 0xdb, 0xd9, 0x3, 
    0x2, 0x2, 0x2, 0xdb, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x3, 0x2, 
    0x2, 0x2, 0xdd, 0xde, 0x5, 0x38, 0x1d, 0x2, 0xde, 0xe0, 0x7, 0x1c, 0x2, 
    0x2, 0xdf, 0xe1, 0x7, 0x1a, 0x2, 0x2, 0xe0, 0xdf, 0x3, 0x2, 0x2, 0x2, 
    0xe0, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe1, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xe2, 
    0xe4, 0x5, 0x1e, 0x10, 0x2, 0xe3, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 
    0x3, 0x2, 0x2, 0x2, 0xe4, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0x7, 
    0x1f, 0x2, 0x2, 0xe6, 0xe8, 0x5, 0x1e, 0x10, 0x2, 0xe7, 0xe5, 0x3, 0x2, 
    0x2, 0x2, 0xe8, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xe7, 0x3, 0x2, 0x2, 
    0x2, 0xe9, 0xea, 0x3, 0x2, 0x2, 0x2, 0xea, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0xeb, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0x7, 0x14, 0x2, 0x2, 0xed, 
    0xef, 0x7, 0x1d, 0x2, 0x2, 0xee, 0xf0, 0x5, 0x28, 0x15, 0x2, 0xef, 0xee, 
    0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf2, 0x3, 
    0x2, 0x2, 0x2, 0xf1, 0xf3, 0x5, 0x24, 0x13, 0x2, 0xf2, 0xf1, 0x3, 0x2, 
    0x2, 0x2, 0xf2, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 0x3, 0x2, 0x2, 
    0x2, 0xf4, 0xf5, 0x5, 0x22, 0x12, 0x2, 0xf5, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0xf6, 0xf7, 0x5, 0x22, 0x12, 0x2, 0xf7, 0x21, 0x3, 0x2, 0x2, 0x2, 0xf8, 
    0xfa, 0x5, 0x28, 0x15, 0x2, 0xf9, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 
    0x3, 0x2, 0x2, 0x2, 0xfa, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfe, 0x7, 
    0x13, 0x2, 0x2, 0xfc, 0xfe, 0x5, 0x4c, 0x27, 0x2, 0xfd, 0xfb, 0x3, 0x2, 
    0x2, 0x2, 0xfd, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x23, 0x3, 0x2, 0x2, 
    0x2, 0xff, 0x100, 0x7, 0xb, 0x2, 0x2, 0x100, 0x25, 0x3, 0x2, 0x2, 0x2, 
    0x101, 0x102, 0x7, 0xc, 0x2, 0x2, 0x102, 0x27, 0x3, 0x2, 0x2, 0x2, 0x103, 
    0x104, 0x7, 0xd, 0x2, 0x2, 0x104, 0x29, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 
    0x7, 0x23, 0x2, 0x2, 0x106, 0x109, 0x5, 0x2a, 0x16, 0x2, 0x107, 0x108, 
    0x7, 0x1d, 0x2, 0x2, 0x108, 0x10a, 0x5, 0x4e, 0x28, 0x2, 0x109, 0x107, 
    0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 
    0x3, 0x2, 0x2, 0x2, 0x10b, 0x10c, 0x7, 0x24, 0x2, 0x2, 0x10c, 0x110, 
    0x3, 0x2, 0x2, 0x2, 0x10d, 0x110, 0x7, 0x13, 0x2, 0x2, 0x10e, 0x110, 
    0x5, 0x4c, 0x27, 0x2, 0x10f, 0x105, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x10d, 
    0x3, 0x2, 0x2, 0x2, 0x10f, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x110, 0x2b, 0x3, 
    0x2, 0x2, 0x2, 0x111, 0x112, 0x5, 0x2a, 0x16, 0x2, 0x112, 0x2d, 0x3, 
    0x2, 0x2, 0x2, 0x113, 0x118, 0x5, 0x2c, 0x17, 0x2, 0x114, 0x115, 0x7, 
    0x1f, 0x2, 0x2, 0x115, 0x117, 0x5, 0x2c, 0x17, 0x2, 0x116, 0x114, 0x3, 
    0x2, 0x2, 0x2, 0x117, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x118, 0x116, 0x3, 
    0x2, 0x2, 0x2, 0x118, 0x119, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11c, 0x3, 
    0x2, 0x2, 0x2, 0x11a, 0x118, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11d, 0x7, 
    0x1f, 0x2, 0x2, 0x11c, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11d, 0x3, 
    0x2, 0x2, 0x2, 0x11d, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x121, 0x5, 0x4c, 
    0x27, 0x2, 0x11f, 0x120, 0x7, 0x20, 0x2, 0x2, 0x120, 0x122, 0x5, 0x4e, 
    0x28, 0x2, 0x121, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 0x3, 0x2, 
    0x2, 0x2, 0x122, 0x31, 0x3, 0x2, 0x2, 0x2, 0x123, 0x128, 0x5, 0x30, 
    0x19, 0x2, 0x124, 0x125, 0x7, 0x1f, 0x2, 0x2, 0x125, 0x127, 0x5, 0x30, 
    0x19, 0x2, 0x126, 0x124, 0x3, 0x2, 0x2, 0x2, 0x127, 0x12a, 0x3, 0x2, 
    0x2, 0x2, 0x128, 0x126, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 
    0x2, 0x2, 0x129, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x128, 0x3, 0x2, 
    0x2, 0x2, 0x12b, 0x12d, 0x7, 0x1f, 0x2, 0x2, 0x12c, 0x12b, 0x3, 0x2, 
    0x2, 0x2, 0x12c, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x33, 0x3, 0x2, 0x2, 
    0x2, 0x12e, 0x131, 0x7, 0x14, 0x2, 0x2, 0x12f, 0x130, 0x7, 0x1d, 0x2, 
    0x2, 0x130, 0x132, 0x5, 0x42, 0x22, 0x2, 0x131, 0x12f, 0x3, 0x2, 0x2, 
    0x2, 0x131, 0x132, 0x3, 0x2, 0x2, 0x2, 0x132, 0x35, 0x3, 0x2, 0x2, 0x2, 
    0x133, 0x138, 0x5, 0x34, 0x1b, 0x2, 0x134, 0x135, 0x7, 0x1f, 0x2, 0x2, 
    0x135, 0x137, 0x5, 0x34, 0x1b, 0x2, 0x136, 0x134, 0x3, 0x2, 0x2, 0x2, 
    0x137, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x138, 0x136, 0x3, 0x2, 0x2, 0x2, 
    0x138, 0x139, 0x3, 0x2, 0x2, 0x2, 0x139, 0x37, 0x3, 0x2, 0x2, 0x2, 0x13a, 
    0x138, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 0x7, 0x25, 0x2, 0x2, 0x13c, 
    0x13d, 0x5, 0x36, 0x1c, 0x2, 0x13d, 0x13e, 0x7, 0x26, 0x2, 0x2, 0x13e, 
    0x140, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13f, 
    0x140, 0x3, 0x2, 0x2, 0x2, 0x140, 0x39, 0x3, 0x2, 0x2, 0x2, 0x141, 0x142, 
    0x9, 0x3, 0x2, 0x2, 0x142, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x143, 0x144, 0x7, 
    0x21, 0x2, 0x2, 0x144, 0x145, 0x5, 0x40, 0x21, 0x2, 0x145, 0x146, 0x7, 
    0x22, 0x2, 0x2, 0x146, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x7, 
    0x14, 0x2, 0x2, 0x148, 0x149, 0x7, 0x1d, 0x2, 0x2, 0x149, 0x14a, 0x5, 
    0x44, 0x23, 0x2, 0x14a, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x150, 0x5, 
    0x3e, 0x20, 0x2, 0x14c, 0x14d, 0x7, 0x1f, 0x2, 0x2, 0x14d, 0x14f, 0x5, 
    0x3e, 0x20, 0x2, 0x14e, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x152, 0x3, 
    0x2, 0x2, 0x2, 0x150, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x150, 0x151, 0x3, 
    0x2, 0x2, 0x2, 0x151, 0x154, 0x3, 0x2, 0x2, 0x2, 0x152, 0x150, 0x3, 
    0x2, 0x2, 0x2, 0x153, 0x155, 0x7, 0x1f, 0x2, 0x2, 0x154, 0x153, 0x3, 
    0x2, 0x2, 0x2, 0x154, 0x155, 0x3, 0x2, 0x2, 0x2, 0x155, 0x41, 0x3, 0x2, 
    0x2, 0x2, 0x156, 0x159, 0x5, 0x3a, 0x1e, 0x2, 0x157, 0x159, 0x7, 0x12, 
    0x2, 0x2, 0x158, 0x156, 0x3, 0x2, 0x2, 0x2, 0x158, 0x157, 0x3, 0x2, 
    0x2, 0x2, 0x159, 0x43, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x161, 0x5, 0x42, 
    0x22, 0x2, 0x15b, 0x161, 0x5, 0x3c, 0x1f, 0x2, 0x15c, 0x15d, 0x7, 0x23, 
    0x2, 0x2, 0x15d, 0x15e, 0x5, 0x46, 0x24, 0x2, 0x15e, 0x15f, 0x7, 0x24, 
    0x2, 0x2, 0x15f, 0x161, 0x3, 0x2, 0x2, 0x2, 0x160, 0x15a, 0x3, 0x2, 
    0x2, 0x2, 0x160, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x160, 0x15c, 0x3, 0x2, 
    0x2, 0x2, 0x161, 0x45, 0x3, 0x2, 0x2, 0x2, 0x162, 0x167, 0x5, 0x44, 
    0x23, 0x2, 0x163, 0x164, 0x7, 0x1f, 0x2, 0x2, 0x164, 0x166, 0x5, 0x44, 
    0x23, 0x2, 0x165, 0x163, 0x3, 0x2, 0x2, 0x2, 0x166, 0x169, 0x3, 0x2, 
    0x2, 0x2, 0x167, 0x165, 0x3, 0x2, 0x2, 0x2, 0x167, 0x168, 0x3, 0x2, 
    0x2, 0x2, 0x168, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x169, 0x167, 0x3, 0x2, 
    0x2, 0x2, 0x16a, 0x16c, 0x7, 0x1f, 0x2, 0x2, 0x16b, 0x16a, 0x3, 0x2, 
    0x2, 0x2, 0x16b, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x47, 0x3, 0x2, 0x2, 
    0x2, 0x16d, 0x16e, 0x7, 0x10, 0x2, 0x2, 0x16e, 0x16f, 0x7, 0x12, 0x2, 
    0x2, 0x16f, 0x49, 0x3, 0x2, 0x2, 0x2, 0x170, 0x171, 0x7, 0x11, 0x2, 
    0x2, 0x171, 0x172, 0x7, 0x12, 0x2, 0x2, 0x172, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x173, 0x178, 0x7, 0x14, 0x2, 0x2, 0x174, 0x175, 0x7, 0x1e, 0x2, 
    0x2, 0x175, 0x177, 0x7, 0x14, 0x2, 0x2, 0x176, 0x174, 0x3, 0x2, 0x2, 
    0x2, 0x177, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x178, 0x176, 0x3, 0x2, 0x2, 
    0x2, 0x178, 0x179, 0x3, 0x2, 0x2, 0x2, 0x179, 0x4d, 0x3, 0x2, 0x2, 0x2, 
    0x17a, 0x178, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17c, 0x9, 0x4, 0x2, 0x2, 
    0x17c, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x53, 0x61, 0x63, 0x70, 0x7a, 
    0x82, 0x84, 0x8a, 0x90, 0x98, 0xaa, 0xaf, 0xb7, 0xc5, 0xcd, 0xd3, 0xdb, 
    0xe0, 0xe3, 0xe9, 0xef, 0xf2, 0xf9, 0xfd, 0x109, 0x10f, 0x118, 0x11c, 
    0x121, 0x128, 0x12c, 0x131, 0x138, 0x13f, 0x150, 0x154, 0x158, 0x160, 
    0x167, 0x16b, 0x178, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

FlatBuffers::Initializer FlatBuffers::_init;
