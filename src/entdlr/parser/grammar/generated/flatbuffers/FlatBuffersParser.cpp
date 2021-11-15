
// Generated from FlatBuffersParser.g4 by ANTLR 4.9.3


#include "FlatBuffersParserListener.h"
#include "FlatBuffersParserVisitor.h"

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
  return "FlatBuffersParser.g4";
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

std::vector<FlatBuffersParser::Interface_declContext *> FlatBuffersParser::SchemaContext::interface_decl() {
  return getRuleContexts<FlatBuffersParser::Interface_declContext>();
}

FlatBuffersParser::Interface_declContext* FlatBuffersParser::SchemaContext::interface_decl(size_t i) {
  return getRuleContext<FlatBuffersParser::Interface_declContext>(i);
}

std::vector<FlatBuffersParser::Service_declContext *> FlatBuffersParser::SchemaContext::service_decl() {
  return getRuleContexts<FlatBuffersParser::Service_declContext>();
}

FlatBuffersParser::Service_declContext* FlatBuffersParser::SchemaContext::service_decl(size_t i) {
  return getRuleContext<FlatBuffersParser::Service_declContext>(i);
}

std::vector<FlatBuffersParser::ObjectContext *> FlatBuffersParser::SchemaContext::object() {
  return getRuleContexts<FlatBuffersParser::ObjectContext>();
}

FlatBuffersParser::ObjectContext* FlatBuffersParser::SchemaContext::object(size_t i) {
  return getRuleContext<FlatBuffersParser::ObjectContext>(i);
}

std::vector<tree::TerminalNode *> FlatBuffersParser::SchemaContext::BLOCK_COMMENT() {
  return getTokens(FlatBuffersParser::BLOCK_COMMENT);
}

tree::TerminalNode* FlatBuffersParser::SchemaContext::BLOCK_COMMENT(size_t i) {
  return getToken(FlatBuffersParser::BLOCK_COMMENT, i);
}


size_t FlatBuffersParser::SchemaContext::getRuleIndex() const {
  return FlatBuffersParser::RuleSchema;
}

void FlatBuffersParser::SchemaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSchema(this);
}

void FlatBuffersParser::SchemaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSchema(this);
}


antlrcpp::Any FlatBuffersParser::SchemaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitSchema(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::SchemaContext* FlatBuffersParser::schema() {
  SchemaContext *_localctx = _tracker.createInstance<SchemaContext>(_ctx, getState());
  enterRule(_localctx, 0, FlatBuffersParser::RuleSchema);
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
    setState(77);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FlatBuffersParser::INCLUDE) {
      setState(74);
      include();
      setState(79);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(95);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << FlatBuffersParser::NAMESPACE)
      | (1ULL << FlatBuffersParser::ATTRIBUTE)
      | (1ULL << FlatBuffersParser::TABLE)
      | (1ULL << FlatBuffersParser::STRUCT)
      | (1ULL << FlatBuffersParser::ENUM)
      | (1ULL << FlatBuffersParser::UNION)
      | (1ULL << FlatBuffersParser::INTERFACE)
      | (1ULL << FlatBuffersParser::SERVICE)
      | (1ULL << FlatBuffersParser::ROOT_TYPE)
      | (1ULL << FlatBuffersParser::RPC_SERVICE)
      | (1ULL << FlatBuffersParser::FILE_EXTENSION)
      | (1ULL << FlatBuffersParser::FILE_IDENTIFIER)
      | (1ULL << FlatBuffersParser::BLOCK_COMMENT)
      | (1ULL << FlatBuffersParser::DOC_COMMENT)
      | (1ULL << FlatBuffersParser::OPEN_BRACE))) != 0)) {
      setState(93);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
      case 1: {
        setState(80);
        namespace_decl();
        break;
      }

      case 2: {
        setState(81);
        type_decl();
        break;
      }

      case 3: {
        setState(82);
        enum_decl();
        break;
      }

      case 4: {
        setState(83);
        union_decl();
        break;
      }

      case 5: {
        setState(84);
        root_decl();
        break;
      }

      case 6: {
        setState(85);
        file_extension_decl();
        break;
      }

      case 7: {
        setState(86);
        file_identifier_decl();
        break;
      }

      case 8: {
        setState(87);
        attribute_decl();
        break;
      }

      case 9: {
        setState(88);
        rpc_decl();
        break;
      }

      case 10: {
        setState(89);
        interface_decl();
        break;
      }

      case 11: {
        setState(90);
        service_decl();
        break;
      }

      case 12: {
        setState(91);
        object();
        break;
      }

      case 13: {
        setState(92);
        match(FlatBuffersParser::BLOCK_COMMENT);
        break;
      }

      default:
        break;
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

tree::TerminalNode* FlatBuffersParser::IncludeContext::INCLUDE() {
  return getToken(FlatBuffersParser::INCLUDE, 0);
}

tree::TerminalNode* FlatBuffersParser::IncludeContext::STRING_CONSTANT() {
  return getToken(FlatBuffersParser::STRING_CONSTANT, 0);
}

tree::TerminalNode* FlatBuffersParser::IncludeContext::SEMICOLON() {
  return getToken(FlatBuffersParser::SEMICOLON, 0);
}


size_t FlatBuffersParser::IncludeContext::getRuleIndex() const {
  return FlatBuffersParser::RuleInclude;
}

void FlatBuffersParser::IncludeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInclude(this);
}

void FlatBuffersParser::IncludeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInclude(this);
}


antlrcpp::Any FlatBuffersParser::IncludeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitInclude(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::IncludeContext* FlatBuffersParser::include() {
  IncludeContext *_localctx = _tracker.createInstance<IncludeContext>(_ctx, getState());
  enterRule(_localctx, 2, FlatBuffersParser::RuleInclude);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    match(FlatBuffersParser::INCLUDE);
    setState(99);
    match(FlatBuffersParser::STRING_CONSTANT);
    setState(100);
    match(FlatBuffersParser::SEMICOLON);
   
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

tree::TerminalNode* FlatBuffersParser::Namespace_declContext::NAMESPACE() {
  return getToken(FlatBuffersParser::NAMESPACE, 0);
}

std::vector<tree::TerminalNode *> FlatBuffersParser::Namespace_declContext::IDENT() {
  return getTokens(FlatBuffersParser::IDENT);
}

tree::TerminalNode* FlatBuffersParser::Namespace_declContext::IDENT(size_t i) {
  return getToken(FlatBuffersParser::IDENT, i);
}

tree::TerminalNode* FlatBuffersParser::Namespace_declContext::SEMICOLON() {
  return getToken(FlatBuffersParser::SEMICOLON, 0);
}

std::vector<tree::TerminalNode *> FlatBuffersParser::Namespace_declContext::PERIOD() {
  return getTokens(FlatBuffersParser::PERIOD);
}

tree::TerminalNode* FlatBuffersParser::Namespace_declContext::PERIOD(size_t i) {
  return getToken(FlatBuffersParser::PERIOD, i);
}


size_t FlatBuffersParser::Namespace_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleNamespace_decl;
}

void FlatBuffersParser::Namespace_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespace_decl(this);
}

void FlatBuffersParser::Namespace_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespace_decl(this);
}


antlrcpp::Any FlatBuffersParser::Namespace_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitNamespace_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Namespace_declContext* FlatBuffersParser::namespace_decl() {
  Namespace_declContext *_localctx = _tracker.createInstance<Namespace_declContext>(_ctx, getState());
  enterRule(_localctx, 4, FlatBuffersParser::RuleNamespace_decl);
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
    setState(102);
    match(FlatBuffersParser::NAMESPACE);
    setState(103);
    match(FlatBuffersParser::IDENT);
    setState(108);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FlatBuffersParser::PERIOD) {
      setState(104);
      match(FlatBuffersParser::PERIOD);
      setState(105);
      match(FlatBuffersParser::IDENT);
      setState(110);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(111);
    match(FlatBuffersParser::SEMICOLON);
   
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

tree::TerminalNode* FlatBuffersParser::Attribute_declContext::ATTRIBUTE() {
  return getToken(FlatBuffersParser::ATTRIBUTE, 0);
}

tree::TerminalNode* FlatBuffersParser::Attribute_declContext::STRING_CONSTANT() {
  return getToken(FlatBuffersParser::STRING_CONSTANT, 0);
}

tree::TerminalNode* FlatBuffersParser::Attribute_declContext::SEMICOLON() {
  return getToken(FlatBuffersParser::SEMICOLON, 0);
}


size_t FlatBuffersParser::Attribute_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleAttribute_decl;
}

void FlatBuffersParser::Attribute_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute_decl(this);
}

void FlatBuffersParser::Attribute_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute_decl(this);
}


antlrcpp::Any FlatBuffersParser::Attribute_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitAttribute_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Attribute_declContext* FlatBuffersParser::attribute_decl() {
  Attribute_declContext *_localctx = _tracker.createInstance<Attribute_declContext>(_ctx, getState());
  enterRule(_localctx, 6, FlatBuffersParser::RuleAttribute_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    match(FlatBuffersParser::ATTRIBUTE);
    setState(114);
    match(FlatBuffersParser::STRING_CONSTANT);
    setState(115);
    match(FlatBuffersParser::SEMICOLON);
   
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

tree::TerminalNode* FlatBuffersParser::Type_declContext::OPEN_BRACE() {
  return getToken(FlatBuffersParser::OPEN_BRACE, 0);
}

tree::TerminalNode* FlatBuffersParser::Type_declContext::CLOSE_BRACE() {
  return getToken(FlatBuffersParser::CLOSE_BRACE, 0);
}

tree::TerminalNode* FlatBuffersParser::Type_declContext::TABLE() {
  return getToken(FlatBuffersParser::TABLE, 0);
}

tree::TerminalNode* FlatBuffersParser::Type_declContext::STRUCT() {
  return getToken(FlatBuffersParser::STRUCT, 0);
}

tree::TerminalNode* FlatBuffersParser::Type_declContext::BLOCK_COMMENT() {
  return getToken(FlatBuffersParser::BLOCK_COMMENT, 0);
}

tree::TerminalNode* FlatBuffersParser::Type_declContext::DOC_COMMENT() {
  return getToken(FlatBuffersParser::DOC_COMMENT, 0);
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
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_decl(this);
}

void FlatBuffersParser::Type_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_decl(this);
}


antlrcpp::Any FlatBuffersParser::Type_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitType_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Type_declContext* FlatBuffersParser::type_decl() {
  Type_declContext *_localctx = _tracker.createInstance<Type_declContext>(_ctx, getState());
  enterRule(_localctx, 8, FlatBuffersParser::RuleType_decl);
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
    setState(118);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::BLOCK_COMMENT) {
      setState(117);
      match(FlatBuffersParser::BLOCK_COMMENT);
    }
    setState(121);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::DOC_COMMENT) {
      setState(120);
      match(FlatBuffersParser::DOC_COMMENT);
    }
    setState(123);
    _la = _input->LA(1);
    if (!(_la == FlatBuffersParser::TABLE

    || _la == FlatBuffersParser::STRUCT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(124);
    match(FlatBuffersParser::IDENT);
    setState(125);
    metadata();
    setState(126);
    match(FlatBuffersParser::OPEN_BRACE);
    setState(131);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << FlatBuffersParser::STATIC)
      | (1ULL << FlatBuffersParser::MUTABLE)
      | (1ULL << FlatBuffersParser::IDENT)
      | (1ULL << FlatBuffersParser::BLOCK_COMMENT))) != 0)) {
      setState(129);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
      case 1: {
        setState(127);
        field_decl();
        break;
      }

      case 2: {
        setState(128);
        method_decl();
        break;
      }

      default:
        break;
      }
      setState(133);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(134);
    match(FlatBuffersParser::CLOSE_BRACE);
   
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

tree::TerminalNode* FlatBuffersParser::Enum_declContext::ENUM() {
  return getToken(FlatBuffersParser::ENUM, 0);
}

tree::TerminalNode* FlatBuffersParser::Enum_declContext::IDENT() {
  return getToken(FlatBuffersParser::IDENT, 0);
}

FlatBuffersParser::MetadataContext* FlatBuffersParser::Enum_declContext::metadata() {
  return getRuleContext<FlatBuffersParser::MetadataContext>(0);
}

tree::TerminalNode* FlatBuffersParser::Enum_declContext::OPEN_BRACE() {
  return getToken(FlatBuffersParser::OPEN_BRACE, 0);
}

FlatBuffersParser::Commasep_enumval_declContext* FlatBuffersParser::Enum_declContext::commasep_enumval_decl() {
  return getRuleContext<FlatBuffersParser::Commasep_enumval_declContext>(0);
}

tree::TerminalNode* FlatBuffersParser::Enum_declContext::CLOSE_BRACE() {
  return getToken(FlatBuffersParser::CLOSE_BRACE, 0);
}

tree::TerminalNode* FlatBuffersParser::Enum_declContext::BLOCK_COMMENT() {
  return getToken(FlatBuffersParser::BLOCK_COMMENT, 0);
}

tree::TerminalNode* FlatBuffersParser::Enum_declContext::DOC_COMMENT() {
  return getToken(FlatBuffersParser::DOC_COMMENT, 0);
}

tree::TerminalNode* FlatBuffersParser::Enum_declContext::COLON() {
  return getToken(FlatBuffersParser::COLON, 0);
}

FlatBuffersParser::TypeContext* FlatBuffersParser::Enum_declContext::type() {
  return getRuleContext<FlatBuffersParser::TypeContext>(0);
}


size_t FlatBuffersParser::Enum_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleEnum_decl;
}

void FlatBuffersParser::Enum_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnum_decl(this);
}

void FlatBuffersParser::Enum_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnum_decl(this);
}


antlrcpp::Any FlatBuffersParser::Enum_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitEnum_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Enum_declContext* FlatBuffersParser::enum_decl() {
  Enum_declContext *_localctx = _tracker.createInstance<Enum_declContext>(_ctx, getState());
  enterRule(_localctx, 10, FlatBuffersParser::RuleEnum_decl);
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
    setState(137);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::BLOCK_COMMENT) {
      setState(136);
      match(FlatBuffersParser::BLOCK_COMMENT);
    }
    setState(140);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::DOC_COMMENT) {
      setState(139);
      match(FlatBuffersParser::DOC_COMMENT);
    }
    setState(142);
    match(FlatBuffersParser::ENUM);
    setState(143);
    match(FlatBuffersParser::IDENT);
    setState(146);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::COLON) {
      setState(144);
      match(FlatBuffersParser::COLON);
      setState(145);
      type();
    }
    setState(148);
    metadata();
    setState(149);
    match(FlatBuffersParser::OPEN_BRACE);
    setState(150);
    commasep_enumval_decl();
    setState(151);
    match(FlatBuffersParser::CLOSE_BRACE);
   
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

tree::TerminalNode* FlatBuffersParser::Union_declContext::UNION() {
  return getToken(FlatBuffersParser::UNION, 0);
}

tree::TerminalNode* FlatBuffersParser::Union_declContext::IDENT() {
  return getToken(FlatBuffersParser::IDENT, 0);
}

FlatBuffersParser::MetadataContext* FlatBuffersParser::Union_declContext::metadata() {
  return getRuleContext<FlatBuffersParser::MetadataContext>(0);
}

tree::TerminalNode* FlatBuffersParser::Union_declContext::OPEN_BRACE() {
  return getToken(FlatBuffersParser::OPEN_BRACE, 0);
}

FlatBuffersParser::Commasep_uniontype_declContext* FlatBuffersParser::Union_declContext::commasep_uniontype_decl() {
  return getRuleContext<FlatBuffersParser::Commasep_uniontype_declContext>(0);
}

tree::TerminalNode* FlatBuffersParser::Union_declContext::CLOSE_BRACE() {
  return getToken(FlatBuffersParser::CLOSE_BRACE, 0);
}

tree::TerminalNode* FlatBuffersParser::Union_declContext::BLOCK_COMMENT() {
  return getToken(FlatBuffersParser::BLOCK_COMMENT, 0);
}

tree::TerminalNode* FlatBuffersParser::Union_declContext::DOC_COMMENT() {
  return getToken(FlatBuffersParser::DOC_COMMENT, 0);
}


size_t FlatBuffersParser::Union_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleUnion_decl;
}

void FlatBuffersParser::Union_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnion_decl(this);
}

void FlatBuffersParser::Union_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnion_decl(this);
}


antlrcpp::Any FlatBuffersParser::Union_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitUnion_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Union_declContext* FlatBuffersParser::union_decl() {
  Union_declContext *_localctx = _tracker.createInstance<Union_declContext>(_ctx, getState());
  enterRule(_localctx, 12, FlatBuffersParser::RuleUnion_decl);
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
    setState(154);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::BLOCK_COMMENT) {
      setState(153);
      match(FlatBuffersParser::BLOCK_COMMENT);
    }
    setState(157);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::DOC_COMMENT) {
      setState(156);
      match(FlatBuffersParser::DOC_COMMENT);
    }
    setState(159);
    match(FlatBuffersParser::UNION);
    setState(160);
    match(FlatBuffersParser::IDENT);
    setState(161);
    metadata();
    setState(162);
    match(FlatBuffersParser::OPEN_BRACE);
    setState(163);
    commasep_uniontype_decl();
    setState(164);
    match(FlatBuffersParser::CLOSE_BRACE);
   
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

tree::TerminalNode* FlatBuffersParser::Root_declContext::ROOT_TYPE() {
  return getToken(FlatBuffersParser::ROOT_TYPE, 0);
}

tree::TerminalNode* FlatBuffersParser::Root_declContext::IDENT() {
  return getToken(FlatBuffersParser::IDENT, 0);
}

tree::TerminalNode* FlatBuffersParser::Root_declContext::SEMICOLON() {
  return getToken(FlatBuffersParser::SEMICOLON, 0);
}


size_t FlatBuffersParser::Root_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleRoot_decl;
}

void FlatBuffersParser::Root_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRoot_decl(this);
}

void FlatBuffersParser::Root_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRoot_decl(this);
}


antlrcpp::Any FlatBuffersParser::Root_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitRoot_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Root_declContext* FlatBuffersParser::root_decl() {
  Root_declContext *_localctx = _tracker.createInstance<Root_declContext>(_ctx, getState());
  enterRule(_localctx, 14, FlatBuffersParser::RuleRoot_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(166);
    match(FlatBuffersParser::ROOT_TYPE);
    setState(167);
    match(FlatBuffersParser::IDENT);
    setState(168);
    match(FlatBuffersParser::SEMICOLON);
   
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

tree::TerminalNode* FlatBuffersParser::Field_declContext::COLON() {
  return getToken(FlatBuffersParser::COLON, 0);
}

FlatBuffersParser::TypeContext* FlatBuffersParser::Field_declContext::type() {
  return getRuleContext<FlatBuffersParser::TypeContext>(0);
}

FlatBuffersParser::MetadataContext* FlatBuffersParser::Field_declContext::metadata() {
  return getRuleContext<FlatBuffersParser::MetadataContext>(0);
}

tree::TerminalNode* FlatBuffersParser::Field_declContext::SEMICOLON() {
  return getToken(FlatBuffersParser::SEMICOLON, 0);
}

tree::TerminalNode* FlatBuffersParser::Field_declContext::BLOCK_COMMENT() {
  return getToken(FlatBuffersParser::BLOCK_COMMENT, 0);
}

tree::TerminalNode* FlatBuffersParser::Field_declContext::EQUAL() {
  return getToken(FlatBuffersParser::EQUAL, 0);
}

FlatBuffersParser::ScalarContext* FlatBuffersParser::Field_declContext::scalar() {
  return getRuleContext<FlatBuffersParser::ScalarContext>(0);
}

tree::TerminalNode* FlatBuffersParser::Field_declContext::DOC_COMMENT() {
  return getToken(FlatBuffersParser::DOC_COMMENT, 0);
}


size_t FlatBuffersParser::Field_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleField_decl;
}

void FlatBuffersParser::Field_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterField_decl(this);
}

void FlatBuffersParser::Field_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitField_decl(this);
}


antlrcpp::Any FlatBuffersParser::Field_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitField_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Field_declContext* FlatBuffersParser::field_decl() {
  Field_declContext *_localctx = _tracker.createInstance<Field_declContext>(_ctx, getState());
  enterRule(_localctx, 16, FlatBuffersParser::RuleField_decl);
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
    setState(171);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::BLOCK_COMMENT) {
      setState(170);
      match(FlatBuffersParser::BLOCK_COMMENT);
    }
    setState(173);
    match(FlatBuffersParser::IDENT);
    setState(174);
    match(FlatBuffersParser::COLON);
    setState(175);
    type();
    setState(178);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::EQUAL) {
      setState(176);
      match(FlatBuffersParser::EQUAL);
      setState(177);
      scalar();
    }
    setState(180);
    metadata();
    setState(181);
    match(FlatBuffersParser::SEMICOLON);
    setState(183);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::DOC_COMMENT) {
      setState(182);
      match(FlatBuffersParser::DOC_COMMENT);
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

FlatBuffersParser::Rpc_declContext::Rpc_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffersParser::Rpc_declContext::RPC_SERVICE() {
  return getToken(FlatBuffersParser::RPC_SERVICE, 0);
}

tree::TerminalNode* FlatBuffersParser::Rpc_declContext::IDENT() {
  return getToken(FlatBuffersParser::IDENT, 0);
}

tree::TerminalNode* FlatBuffersParser::Rpc_declContext::OPEN_BRACE() {
  return getToken(FlatBuffersParser::OPEN_BRACE, 0);
}

tree::TerminalNode* FlatBuffersParser::Rpc_declContext::CLOSE_BRACE() {
  return getToken(FlatBuffersParser::CLOSE_BRACE, 0);
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
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRpc_decl(this);
}

void FlatBuffersParser::Rpc_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRpc_decl(this);
}


antlrcpp::Any FlatBuffersParser::Rpc_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitRpc_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Rpc_declContext* FlatBuffersParser::rpc_decl() {
  Rpc_declContext *_localctx = _tracker.createInstance<Rpc_declContext>(_ctx, getState());
  enterRule(_localctx, 18, FlatBuffersParser::RuleRpc_decl);
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
    setState(185);
    match(FlatBuffersParser::RPC_SERVICE);
    setState(186);
    match(FlatBuffersParser::IDENT);
    setState(187);
    match(FlatBuffersParser::OPEN_BRACE);
    setState(189); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(188);
      rpc_method();
      setState(191); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == FlatBuffersParser::IDENT);
    setState(193);
    match(FlatBuffersParser::CLOSE_BRACE);
   
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

tree::TerminalNode* FlatBuffersParser::Rpc_methodContext::OPEN_PAREN() {
  return getToken(FlatBuffersParser::OPEN_PAREN, 0);
}

tree::TerminalNode* FlatBuffersParser::Rpc_methodContext::CLOSE_PAREN() {
  return getToken(FlatBuffersParser::CLOSE_PAREN, 0);
}

tree::TerminalNode* FlatBuffersParser::Rpc_methodContext::COLON() {
  return getToken(FlatBuffersParser::COLON, 0);
}

FlatBuffersParser::MetadataContext* FlatBuffersParser::Rpc_methodContext::metadata() {
  return getRuleContext<FlatBuffersParser::MetadataContext>(0);
}

tree::TerminalNode* FlatBuffersParser::Rpc_methodContext::SEMICOLON() {
  return getToken(FlatBuffersParser::SEMICOLON, 0);
}


size_t FlatBuffersParser::Rpc_methodContext::getRuleIndex() const {
  return FlatBuffersParser::RuleRpc_method;
}

void FlatBuffersParser::Rpc_methodContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRpc_method(this);
}

void FlatBuffersParser::Rpc_methodContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRpc_method(this);
}


antlrcpp::Any FlatBuffersParser::Rpc_methodContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitRpc_method(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Rpc_methodContext* FlatBuffersParser::rpc_method() {
  Rpc_methodContext *_localctx = _tracker.createInstance<Rpc_methodContext>(_ctx, getState());
  enterRule(_localctx, 20, FlatBuffersParser::RuleRpc_method);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(195);
    match(FlatBuffersParser::IDENT);
    setState(196);
    match(FlatBuffersParser::OPEN_PAREN);
    setState(197);
    match(FlatBuffersParser::IDENT);
    setState(198);
    match(FlatBuffersParser::CLOSE_PAREN);
    setState(199);
    match(FlatBuffersParser::COLON);
    setState(200);
    match(FlatBuffersParser::IDENT);
    setState(201);
    metadata();
    setState(202);
    match(FlatBuffersParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Interface_declContext ------------------------------------------------------------------

FlatBuffersParser::Interface_declContext::Interface_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffersParser::Interface_declContext::INTERFACE() {
  return getToken(FlatBuffersParser::INTERFACE, 0);
}

tree::TerminalNode* FlatBuffersParser::Interface_declContext::IDENT() {
  return getToken(FlatBuffersParser::IDENT, 0);
}

FlatBuffersParser::MetadataContext* FlatBuffersParser::Interface_declContext::metadata() {
  return getRuleContext<FlatBuffersParser::MetadataContext>(0);
}

tree::TerminalNode* FlatBuffersParser::Interface_declContext::OPEN_BRACE() {
  return getToken(FlatBuffersParser::OPEN_BRACE, 0);
}

tree::TerminalNode* FlatBuffersParser::Interface_declContext::CLOSE_BRACE() {
  return getToken(FlatBuffersParser::CLOSE_BRACE, 0);
}

tree::TerminalNode* FlatBuffersParser::Interface_declContext::BLOCK_COMMENT() {
  return getToken(FlatBuffersParser::BLOCK_COMMENT, 0);
}

tree::TerminalNode* FlatBuffersParser::Interface_declContext::DOC_COMMENT() {
  return getToken(FlatBuffersParser::DOC_COMMENT, 0);
}

std::vector<FlatBuffersParser::Method_declContext *> FlatBuffersParser::Interface_declContext::method_decl() {
  return getRuleContexts<FlatBuffersParser::Method_declContext>();
}

FlatBuffersParser::Method_declContext* FlatBuffersParser::Interface_declContext::method_decl(size_t i) {
  return getRuleContext<FlatBuffersParser::Method_declContext>(i);
}


size_t FlatBuffersParser::Interface_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleInterface_decl;
}

void FlatBuffersParser::Interface_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterface_decl(this);
}

void FlatBuffersParser::Interface_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterface_decl(this);
}


antlrcpp::Any FlatBuffersParser::Interface_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitInterface_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Interface_declContext* FlatBuffersParser::interface_decl() {
  Interface_declContext *_localctx = _tracker.createInstance<Interface_declContext>(_ctx, getState());
  enterRule(_localctx, 22, FlatBuffersParser::RuleInterface_decl);
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
    setState(205);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::BLOCK_COMMENT) {
      setState(204);
      match(FlatBuffersParser::BLOCK_COMMENT);
    }
    setState(208);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::DOC_COMMENT) {
      setState(207);
      match(FlatBuffersParser::DOC_COMMENT);
    }
    setState(210);
    match(FlatBuffersParser::INTERFACE);
    setState(211);
    match(FlatBuffersParser::IDENT);
    setState(212);
    metadata();
    setState(213);
    match(FlatBuffersParser::OPEN_BRACE);
    setState(215); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(214);
      method_decl();
      setState(217); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << FlatBuffersParser::STATIC)
      | (1ULL << FlatBuffersParser::MUTABLE)
      | (1ULL << FlatBuffersParser::IDENT)
      | (1ULL << FlatBuffersParser::BLOCK_COMMENT))) != 0));
    setState(219);
    match(FlatBuffersParser::CLOSE_BRACE);
   
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

tree::TerminalNode* FlatBuffersParser::Method_declContext::OPEN_PAREN() {
  return getToken(FlatBuffersParser::OPEN_PAREN, 0);
}

FlatBuffersParser::Method_parametersContext* FlatBuffersParser::Method_declContext::method_parameters() {
  return getRuleContext<FlatBuffersParser::Method_parametersContext>(0);
}

tree::TerminalNode* FlatBuffersParser::Method_declContext::CLOSE_PAREN() {
  return getToken(FlatBuffersParser::CLOSE_PAREN, 0);
}

FlatBuffersParser::MetadataContext* FlatBuffersParser::Method_declContext::metadata() {
  return getRuleContext<FlatBuffersParser::MetadataContext>(0);
}

tree::TerminalNode* FlatBuffersParser::Method_declContext::SEMICOLON() {
  return getToken(FlatBuffersParser::SEMICOLON, 0);
}

tree::TerminalNode* FlatBuffersParser::Method_declContext::BLOCK_COMMENT() {
  return getToken(FlatBuffersParser::BLOCK_COMMENT, 0);
}

tree::TerminalNode* FlatBuffersParser::Method_declContext::COLON() {
  return getToken(FlatBuffersParser::COLON, 0);
}

FlatBuffersParser::TypeContext* FlatBuffersParser::Method_declContext::type() {
  return getRuleContext<FlatBuffersParser::TypeContext>(0);
}

tree::TerminalNode* FlatBuffersParser::Method_declContext::DOC_COMMENT() {
  return getToken(FlatBuffersParser::DOC_COMMENT, 0);
}

tree::TerminalNode* FlatBuffersParser::Method_declContext::STATIC() {
  return getToken(FlatBuffersParser::STATIC, 0);
}

tree::TerminalNode* FlatBuffersParser::Method_declContext::MUTABLE() {
  return getToken(FlatBuffersParser::MUTABLE, 0);
}


size_t FlatBuffersParser::Method_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleMethod_decl;
}

void FlatBuffersParser::Method_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_decl(this);
}

void FlatBuffersParser::Method_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_decl(this);
}


antlrcpp::Any FlatBuffersParser::Method_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitMethod_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Method_declContext* FlatBuffersParser::method_decl() {
  Method_declContext *_localctx = _tracker.createInstance<Method_declContext>(_ctx, getState());
  enterRule(_localctx, 24, FlatBuffersParser::RuleMethod_decl);
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
    setState(222);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::BLOCK_COMMENT) {
      setState(221);
      match(FlatBuffersParser::BLOCK_COMMENT);
    }
    setState(225);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::STATIC

    || _la == FlatBuffersParser::MUTABLE) {
      setState(224);
      _la = _input->LA(1);
      if (!(_la == FlatBuffersParser::STATIC

      || _la == FlatBuffersParser::MUTABLE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(227);
    match(FlatBuffersParser::IDENT);
    setState(228);
    match(FlatBuffersParser::OPEN_PAREN);
    setState(229);
    method_parameters();
    setState(230);
    match(FlatBuffersParser::CLOSE_PAREN);
    setState(233);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::COLON) {
      setState(231);
      match(FlatBuffersParser::COLON);
      setState(232);
      type();
    }
    setState(235);
    metadata();
    setState(236);
    match(FlatBuffersParser::SEMICOLON);
    setState(238);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::DOC_COMMENT) {
      setState(237);
      match(FlatBuffersParser::DOC_COMMENT);
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

FlatBuffersParser::Method_parametersContext::Method_parametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FlatBuffersParser::Method_parameterContext *> FlatBuffersParser::Method_parametersContext::method_parameter() {
  return getRuleContexts<FlatBuffersParser::Method_parameterContext>();
}

FlatBuffersParser::Method_parameterContext* FlatBuffersParser::Method_parametersContext::method_parameter(size_t i) {
  return getRuleContext<FlatBuffersParser::Method_parameterContext>(i);
}

std::vector<tree::TerminalNode *> FlatBuffersParser::Method_parametersContext::COMMA() {
  return getTokens(FlatBuffersParser::COMMA);
}

tree::TerminalNode* FlatBuffersParser::Method_parametersContext::COMMA(size_t i) {
  return getToken(FlatBuffersParser::COMMA, i);
}


size_t FlatBuffersParser::Method_parametersContext::getRuleIndex() const {
  return FlatBuffersParser::RuleMethod_parameters;
}

void FlatBuffersParser::Method_parametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_parameters(this);
}

void FlatBuffersParser::Method_parametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_parameters(this);
}


antlrcpp::Any FlatBuffersParser::Method_parametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitMethod_parameters(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Method_parametersContext* FlatBuffersParser::method_parameters() {
  Method_parametersContext *_localctx = _tracker.createInstance<Method_parametersContext>(_ctx, getState());
  enterRule(_localctx, 26, FlatBuffersParser::RuleMethod_parameters);
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
    setState(241);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::IDENT) {
      setState(240);
      method_parameter();
    }
    setState(247);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FlatBuffersParser::COMMA) {
      setState(243);
      match(FlatBuffersParser::COMMA);
      setState(244);
      method_parameter();
      setState(249);
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

tree::TerminalNode* FlatBuffersParser::Method_parameterContext::COLON() {
  return getToken(FlatBuffersParser::COLON, 0);
}

FlatBuffersParser::Method_typeContext* FlatBuffersParser::Method_parameterContext::method_type() {
  return getRuleContext<FlatBuffersParser::Method_typeContext>(0);
}


size_t FlatBuffersParser::Method_parameterContext::getRuleIndex() const {
  return FlatBuffersParser::RuleMethod_parameter;
}

void FlatBuffersParser::Method_parameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_parameter(this);
}

void FlatBuffersParser::Method_parameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_parameter(this);
}


antlrcpp::Any FlatBuffersParser::Method_parameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitMethod_parameter(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Method_parameterContext* FlatBuffersParser::method_parameter() {
  Method_parameterContext *_localctx = _tracker.createInstance<Method_parameterContext>(_ctx, getState());
  enterRule(_localctx, 28, FlatBuffersParser::RuleMethod_parameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(250);
    match(FlatBuffersParser::IDENT);
    setState(251);
    match(FlatBuffersParser::COLON);
    setState(252);
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

FlatBuffersParser::TypeContext* FlatBuffersParser::Method_typeContext::type() {
  return getRuleContext<FlatBuffersParser::TypeContext>(0);
}

tree::TerminalNode* FlatBuffersParser::Method_typeContext::IN() {
  return getToken(FlatBuffersParser::IN, 0);
}

tree::TerminalNode* FlatBuffersParser::Method_typeContext::OUT() {
  return getToken(FlatBuffersParser::OUT, 0);
}


size_t FlatBuffersParser::Method_typeContext::getRuleIndex() const {
  return FlatBuffersParser::RuleMethod_type;
}

void FlatBuffersParser::Method_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_type(this);
}

void FlatBuffersParser::Method_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_type(this);
}


antlrcpp::Any FlatBuffersParser::Method_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitMethod_type(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Method_typeContext* FlatBuffersParser::method_type() {
  Method_typeContext *_localctx = _tracker.createInstance<Method_typeContext>(_ctx, getState());
  enterRule(_localctx, 30, FlatBuffersParser::RuleMethod_type);
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
    setState(255);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::IN) {
      setState(254);
      match(FlatBuffersParser::IN);
    }
    setState(258);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::OUT) {
      setState(257);
      match(FlatBuffersParser::OUT);
    }
    setState(260);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Service_component_declContext ------------------------------------------------------------------

FlatBuffersParser::Service_component_declContext::Service_component_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

FlatBuffersParser::TypeContext* FlatBuffersParser::Service_component_declContext::type() {
  return getRuleContext<FlatBuffersParser::TypeContext>(0);
}

tree::TerminalNode* FlatBuffersParser::Service_component_declContext::COLON() {
  return getToken(FlatBuffersParser::COLON, 0);
}

tree::TerminalNode* FlatBuffersParser::Service_component_declContext::IDENT() {
  return getToken(FlatBuffersParser::IDENT, 0);
}

FlatBuffersParser::MetadataContext* FlatBuffersParser::Service_component_declContext::metadata() {
  return getRuleContext<FlatBuffersParser::MetadataContext>(0);
}

tree::TerminalNode* FlatBuffersParser::Service_component_declContext::SEMICOLON() {
  return getToken(FlatBuffersParser::SEMICOLON, 0);
}

tree::TerminalNode* FlatBuffersParser::Service_component_declContext::BLOCK_COMMENT() {
  return getToken(FlatBuffersParser::BLOCK_COMMENT, 0);
}

tree::TerminalNode* FlatBuffersParser::Service_component_declContext::DOC_COMMENT() {
  return getToken(FlatBuffersParser::DOC_COMMENT, 0);
}


size_t FlatBuffersParser::Service_component_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleService_component_decl;
}

void FlatBuffersParser::Service_component_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterService_component_decl(this);
}

void FlatBuffersParser::Service_component_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitService_component_decl(this);
}


antlrcpp::Any FlatBuffersParser::Service_component_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitService_component_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Service_component_declContext* FlatBuffersParser::service_component_decl() {
  Service_component_declContext *_localctx = _tracker.createInstance<Service_component_declContext>(_ctx, getState());
  enterRule(_localctx, 32, FlatBuffersParser::RuleService_component_decl);
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
    setState(263);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::BLOCK_COMMENT) {
      setState(262);
      match(FlatBuffersParser::BLOCK_COMMENT);
    }
    setState(265);
    type();
    setState(266);
    match(FlatBuffersParser::COLON);
    setState(267);
    match(FlatBuffersParser::IDENT);
    setState(268);
    metadata();
    setState(269);
    match(FlatBuffersParser::SEMICOLON);
    setState(271);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::DOC_COMMENT) {
      setState(270);
      match(FlatBuffersParser::DOC_COMMENT);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Service_declContext ------------------------------------------------------------------

FlatBuffersParser::Service_declContext::Service_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffersParser::Service_declContext::SERVICE() {
  return getToken(FlatBuffersParser::SERVICE, 0);
}

tree::TerminalNode* FlatBuffersParser::Service_declContext::IDENT() {
  return getToken(FlatBuffersParser::IDENT, 0);
}

FlatBuffersParser::MetadataContext* FlatBuffersParser::Service_declContext::metadata() {
  return getRuleContext<FlatBuffersParser::MetadataContext>(0);
}

tree::TerminalNode* FlatBuffersParser::Service_declContext::OPEN_BRACE() {
  return getToken(FlatBuffersParser::OPEN_BRACE, 0);
}

tree::TerminalNode* FlatBuffersParser::Service_declContext::CLOSE_BRACE() {
  return getToken(FlatBuffersParser::CLOSE_BRACE, 0);
}

tree::TerminalNode* FlatBuffersParser::Service_declContext::BLOCK_COMMENT() {
  return getToken(FlatBuffersParser::BLOCK_COMMENT, 0);
}

tree::TerminalNode* FlatBuffersParser::Service_declContext::DOC_COMMENT() {
  return getToken(FlatBuffersParser::DOC_COMMENT, 0);
}

std::vector<FlatBuffersParser::Service_component_declContext *> FlatBuffersParser::Service_declContext::service_component_decl() {
  return getRuleContexts<FlatBuffersParser::Service_component_declContext>();
}

FlatBuffersParser::Service_component_declContext* FlatBuffersParser::Service_declContext::service_component_decl(size_t i) {
  return getRuleContext<FlatBuffersParser::Service_component_declContext>(i);
}


size_t FlatBuffersParser::Service_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleService_decl;
}

void FlatBuffersParser::Service_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterService_decl(this);
}

void FlatBuffersParser::Service_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitService_decl(this);
}


antlrcpp::Any FlatBuffersParser::Service_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitService_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Service_declContext* FlatBuffersParser::service_decl() {
  Service_declContext *_localctx = _tracker.createInstance<Service_declContext>(_ctx, getState());
  enterRule(_localctx, 34, FlatBuffersParser::RuleService_decl);
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
    setState(274);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::BLOCK_COMMENT) {
      setState(273);
      match(FlatBuffersParser::BLOCK_COMMENT);
    }
    setState(277);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::DOC_COMMENT) {
      setState(276);
      match(FlatBuffersParser::DOC_COMMENT);
    }
    setState(279);
    match(FlatBuffersParser::SERVICE);
    setState(280);
    match(FlatBuffersParser::IDENT);
    setState(281);
    metadata();
    setState(282);
    match(FlatBuffersParser::OPEN_BRACE);
    setState(284); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(283);
      service_component_decl();
      setState(286); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << FlatBuffersParser::BASE_TYPE_NAME)
      | (1ULL << FlatBuffersParser::IDENT)
      | (1ULL << FlatBuffersParser::BLOCK_COMMENT)
      | (1ULL << FlatBuffersParser::OPEN_BRACKET))) != 0));
    setState(288);
    match(FlatBuffersParser::CLOSE_BRACE);
   
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

tree::TerminalNode* FlatBuffersParser::TypeContext::OPEN_BRACKET() {
  return getToken(FlatBuffersParser::OPEN_BRACKET, 0);
}

FlatBuffersParser::TypeContext* FlatBuffersParser::TypeContext::type() {
  return getRuleContext<FlatBuffersParser::TypeContext>(0);
}

tree::TerminalNode* FlatBuffersParser::TypeContext::CLOSE_BRACKET() {
  return getToken(FlatBuffersParser::CLOSE_BRACKET, 0);
}

tree::TerminalNode* FlatBuffersParser::TypeContext::COLON() {
  return getToken(FlatBuffersParser::COLON, 0);
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
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void FlatBuffersParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


antlrcpp::Any FlatBuffersParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::TypeContext* FlatBuffersParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 36, FlatBuffersParser::RuleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(300);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FlatBuffersParser::OPEN_BRACKET: {
        enterOuterAlt(_localctx, 1);
        setState(290);
        match(FlatBuffersParser::OPEN_BRACKET);
        setState(291);
        type();
        setState(294);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == FlatBuffersParser::COLON) {
          setState(292);
          match(FlatBuffersParser::COLON);
          setState(293);
          integer_const();
        }
        setState(296);
        match(FlatBuffersParser::CLOSE_BRACKET);
        break;
      }

      case FlatBuffersParser::BASE_TYPE_NAME: {
        enterOuterAlt(_localctx, 2);
        setState(298);
        match(FlatBuffersParser::BASE_TYPE_NAME);
        break;
      }

      case FlatBuffersParser::IDENT: {
        enterOuterAlt(_localctx, 3);
        setState(299);
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
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUniontype_decl(this);
}

void FlatBuffersParser::Uniontype_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUniontype_decl(this);
}


antlrcpp::Any FlatBuffersParser::Uniontype_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitUniontype_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Uniontype_declContext* FlatBuffersParser::uniontype_decl() {
  Uniontype_declContext *_localctx = _tracker.createInstance<Uniontype_declContext>(_ctx, getState());
  enterRule(_localctx, 38, FlatBuffersParser::RuleUniontype_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(302);
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

std::vector<tree::TerminalNode *> FlatBuffersParser::Commasep_uniontype_declContext::COMMA() {
  return getTokens(FlatBuffersParser::COMMA);
}

tree::TerminalNode* FlatBuffersParser::Commasep_uniontype_declContext::COMMA(size_t i) {
  return getToken(FlatBuffersParser::COMMA, i);
}


size_t FlatBuffersParser::Commasep_uniontype_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleCommasep_uniontype_decl;
}

void FlatBuffersParser::Commasep_uniontype_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommasep_uniontype_decl(this);
}

void FlatBuffersParser::Commasep_uniontype_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommasep_uniontype_decl(this);
}


antlrcpp::Any FlatBuffersParser::Commasep_uniontype_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitCommasep_uniontype_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Commasep_uniontype_declContext* FlatBuffersParser::commasep_uniontype_decl() {
  Commasep_uniontype_declContext *_localctx = _tracker.createInstance<Commasep_uniontype_declContext>(_ctx, getState());
  enterRule(_localctx, 40, FlatBuffersParser::RuleCommasep_uniontype_decl);
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
    setState(304);
    uniontype_decl();
    setState(309);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(305);
        match(FlatBuffersParser::COMMA);
        setState(306);
        uniontype_decl(); 
      }
      setState(311);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    }
    setState(313);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::COMMA) {
      setState(312);
      match(FlatBuffersParser::COMMA);
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

tree::TerminalNode* FlatBuffersParser::Enumval_declContext::EQUAL() {
  return getToken(FlatBuffersParser::EQUAL, 0);
}

FlatBuffersParser::Integer_constContext* FlatBuffersParser::Enumval_declContext::integer_const() {
  return getRuleContext<FlatBuffersParser::Integer_constContext>(0);
}


size_t FlatBuffersParser::Enumval_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleEnumval_decl;
}

void FlatBuffersParser::Enumval_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumval_decl(this);
}

void FlatBuffersParser::Enumval_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumval_decl(this);
}


antlrcpp::Any FlatBuffersParser::Enumval_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitEnumval_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Enumval_declContext* FlatBuffersParser::enumval_decl() {
  Enumval_declContext *_localctx = _tracker.createInstance<Enumval_declContext>(_ctx, getState());
  enterRule(_localctx, 42, FlatBuffersParser::RuleEnumval_decl);
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
    setState(315);
    ns_ident();
    setState(318);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::EQUAL) {
      setState(316);
      match(FlatBuffersParser::EQUAL);
      setState(317);
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

std::vector<tree::TerminalNode *> FlatBuffersParser::Commasep_enumval_declContext::COMMA() {
  return getTokens(FlatBuffersParser::COMMA);
}

tree::TerminalNode* FlatBuffersParser::Commasep_enumval_declContext::COMMA(size_t i) {
  return getToken(FlatBuffersParser::COMMA, i);
}


size_t FlatBuffersParser::Commasep_enumval_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleCommasep_enumval_decl;
}

void FlatBuffersParser::Commasep_enumval_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommasep_enumval_decl(this);
}

void FlatBuffersParser::Commasep_enumval_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommasep_enumval_decl(this);
}


antlrcpp::Any FlatBuffersParser::Commasep_enumval_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitCommasep_enumval_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Commasep_enumval_declContext* FlatBuffersParser::commasep_enumval_decl() {
  Commasep_enumval_declContext *_localctx = _tracker.createInstance<Commasep_enumval_declContext>(_ctx, getState());
  enterRule(_localctx, 44, FlatBuffersParser::RuleCommasep_enumval_decl);
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
    setState(320);
    enumval_decl();
    setState(325);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(321);
        match(FlatBuffersParser::COMMA);
        setState(322);
        enumval_decl(); 
      }
      setState(327);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    }
    setState(329);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::COMMA) {
      setState(328);
      match(FlatBuffersParser::COMMA);
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

tree::TerminalNode* FlatBuffersParser::Ident_with_opt_single_valueContext::COLON() {
  return getToken(FlatBuffersParser::COLON, 0);
}

FlatBuffersParser::Single_valueContext* FlatBuffersParser::Ident_with_opt_single_valueContext::single_value() {
  return getRuleContext<FlatBuffersParser::Single_valueContext>(0);
}


size_t FlatBuffersParser::Ident_with_opt_single_valueContext::getRuleIndex() const {
  return FlatBuffersParser::RuleIdent_with_opt_single_value;
}

void FlatBuffersParser::Ident_with_opt_single_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdent_with_opt_single_value(this);
}

void FlatBuffersParser::Ident_with_opt_single_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdent_with_opt_single_value(this);
}


antlrcpp::Any FlatBuffersParser::Ident_with_opt_single_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitIdent_with_opt_single_value(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Ident_with_opt_single_valueContext* FlatBuffersParser::ident_with_opt_single_value() {
  Ident_with_opt_single_valueContext *_localctx = _tracker.createInstance<Ident_with_opt_single_valueContext>(_ctx, getState());
  enterRule(_localctx, 46, FlatBuffersParser::RuleIdent_with_opt_single_value);
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
    setState(331);
    match(FlatBuffersParser::IDENT);
    setState(334);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::COLON) {
      setState(332);
      match(FlatBuffersParser::COLON);
      setState(333);
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

std::vector<tree::TerminalNode *> FlatBuffersParser::Commasep_ident_with_opt_single_valueContext::COMMA() {
  return getTokens(FlatBuffersParser::COMMA);
}

tree::TerminalNode* FlatBuffersParser::Commasep_ident_with_opt_single_valueContext::COMMA(size_t i) {
  return getToken(FlatBuffersParser::COMMA, i);
}


size_t FlatBuffersParser::Commasep_ident_with_opt_single_valueContext::getRuleIndex() const {
  return FlatBuffersParser::RuleCommasep_ident_with_opt_single_value;
}

void FlatBuffersParser::Commasep_ident_with_opt_single_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommasep_ident_with_opt_single_value(this);
}

void FlatBuffersParser::Commasep_ident_with_opt_single_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommasep_ident_with_opt_single_value(this);
}


antlrcpp::Any FlatBuffersParser::Commasep_ident_with_opt_single_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitCommasep_ident_with_opt_single_value(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Commasep_ident_with_opt_single_valueContext* FlatBuffersParser::commasep_ident_with_opt_single_value() {
  Commasep_ident_with_opt_single_valueContext *_localctx = _tracker.createInstance<Commasep_ident_with_opt_single_valueContext>(_ctx, getState());
  enterRule(_localctx, 48, FlatBuffersParser::RuleCommasep_ident_with_opt_single_value);
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
    setState(336);
    ident_with_opt_single_value();
    setState(341);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FlatBuffersParser::COMMA) {
      setState(337);
      match(FlatBuffersParser::COMMA);
      setState(338);
      ident_with_opt_single_value();
      setState(343);
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

tree::TerminalNode* FlatBuffersParser::MetadataContext::OPEN_PAREN() {
  return getToken(FlatBuffersParser::OPEN_PAREN, 0);
}

FlatBuffersParser::Commasep_ident_with_opt_single_valueContext* FlatBuffersParser::MetadataContext::commasep_ident_with_opt_single_value() {
  return getRuleContext<FlatBuffersParser::Commasep_ident_with_opt_single_valueContext>(0);
}

tree::TerminalNode* FlatBuffersParser::MetadataContext::CLOSE_PAREN() {
  return getToken(FlatBuffersParser::CLOSE_PAREN, 0);
}


size_t FlatBuffersParser::MetadataContext::getRuleIndex() const {
  return FlatBuffersParser::RuleMetadata;
}

void FlatBuffersParser::MetadataContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMetadata(this);
}

void FlatBuffersParser::MetadataContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMetadata(this);
}


antlrcpp::Any FlatBuffersParser::MetadataContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitMetadata(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::MetadataContext* FlatBuffersParser::metadata() {
  MetadataContext *_localctx = _tracker.createInstance<MetadataContext>(_ctx, getState());
  enterRule(_localctx, 50, FlatBuffersParser::RuleMetadata);
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
    setState(348);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::OPEN_PAREN) {
      setState(344);
      match(FlatBuffersParser::OPEN_PAREN);
      setState(345);
      commasep_ident_with_opt_single_value();
      setState(346);
      match(FlatBuffersParser::CLOSE_PAREN);
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
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScalar(this);
}

void FlatBuffersParser::ScalarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScalar(this);
}


antlrcpp::Any FlatBuffersParser::ScalarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitScalar(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::ScalarContext* FlatBuffersParser::scalar() {
  ScalarContext *_localctx = _tracker.createInstance<ScalarContext>(_ctx, getState());
  enterRule(_localctx, 52, FlatBuffersParser::RuleScalar);
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
    setState(350);
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

tree::TerminalNode* FlatBuffersParser::ObjectContext::OPEN_BRACE() {
  return getToken(FlatBuffersParser::OPEN_BRACE, 0);
}

FlatBuffersParser::Commasep_ident_with_valueContext* FlatBuffersParser::ObjectContext::commasep_ident_with_value() {
  return getRuleContext<FlatBuffersParser::Commasep_ident_with_valueContext>(0);
}

tree::TerminalNode* FlatBuffersParser::ObjectContext::CLOSE_BRACE() {
  return getToken(FlatBuffersParser::CLOSE_BRACE, 0);
}


size_t FlatBuffersParser::ObjectContext::getRuleIndex() const {
  return FlatBuffersParser::RuleObject;
}

void FlatBuffersParser::ObjectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObject(this);
}

void FlatBuffersParser::ObjectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObject(this);
}


antlrcpp::Any FlatBuffersParser::ObjectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitObject(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::ObjectContext* FlatBuffersParser::object() {
  ObjectContext *_localctx = _tracker.createInstance<ObjectContext>(_ctx, getState());
  enterRule(_localctx, 54, FlatBuffersParser::RuleObject);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(352);
    match(FlatBuffersParser::OPEN_BRACE);
    setState(353);
    commasep_ident_with_value();
    setState(354);
    match(FlatBuffersParser::CLOSE_BRACE);
   
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

tree::TerminalNode* FlatBuffersParser::Ident_with_valueContext::COLON() {
  return getToken(FlatBuffersParser::COLON, 0);
}

FlatBuffersParser::ValueContext* FlatBuffersParser::Ident_with_valueContext::value() {
  return getRuleContext<FlatBuffersParser::ValueContext>(0);
}


size_t FlatBuffersParser::Ident_with_valueContext::getRuleIndex() const {
  return FlatBuffersParser::RuleIdent_with_value;
}

void FlatBuffersParser::Ident_with_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdent_with_value(this);
}

void FlatBuffersParser::Ident_with_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdent_with_value(this);
}


antlrcpp::Any FlatBuffersParser::Ident_with_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitIdent_with_value(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Ident_with_valueContext* FlatBuffersParser::ident_with_value() {
  Ident_with_valueContext *_localctx = _tracker.createInstance<Ident_with_valueContext>(_ctx, getState());
  enterRule(_localctx, 56, FlatBuffersParser::RuleIdent_with_value);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(356);
    match(FlatBuffersParser::IDENT);
    setState(357);
    match(FlatBuffersParser::COLON);
    setState(358);
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

std::vector<tree::TerminalNode *> FlatBuffersParser::Commasep_ident_with_valueContext::COMMA() {
  return getTokens(FlatBuffersParser::COMMA);
}

tree::TerminalNode* FlatBuffersParser::Commasep_ident_with_valueContext::COMMA(size_t i) {
  return getToken(FlatBuffersParser::COMMA, i);
}


size_t FlatBuffersParser::Commasep_ident_with_valueContext::getRuleIndex() const {
  return FlatBuffersParser::RuleCommasep_ident_with_value;
}

void FlatBuffersParser::Commasep_ident_with_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommasep_ident_with_value(this);
}

void FlatBuffersParser::Commasep_ident_with_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommasep_ident_with_value(this);
}


antlrcpp::Any FlatBuffersParser::Commasep_ident_with_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitCommasep_ident_with_value(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Commasep_ident_with_valueContext* FlatBuffersParser::commasep_ident_with_value() {
  Commasep_ident_with_valueContext *_localctx = _tracker.createInstance<Commasep_ident_with_valueContext>(_ctx, getState());
  enterRule(_localctx, 58, FlatBuffersParser::RuleCommasep_ident_with_value);
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
    setState(360);
    ident_with_value();
    setState(365);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(361);
        match(FlatBuffersParser::COMMA);
        setState(362);
        ident_with_value(); 
      }
      setState(367);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    }
    setState(369);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::COMMA) {
      setState(368);
      match(FlatBuffersParser::COMMA);
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
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingle_value(this);
}

void FlatBuffersParser::Single_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingle_value(this);
}


antlrcpp::Any FlatBuffersParser::Single_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitSingle_value(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Single_valueContext* FlatBuffersParser::single_value() {
  Single_valueContext *_localctx = _tracker.createInstance<Single_valueContext>(_ctx, getState());
  enterRule(_localctx, 60, FlatBuffersParser::RuleSingle_value);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(373);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FlatBuffersParser::IDENT:
      case FlatBuffersParser::HEX_INTEGER_CONSTANT:
      case FlatBuffersParser::INTEGER_CONSTANT:
      case FlatBuffersParser::FLOAT_CONSTANT: {
        enterOuterAlt(_localctx, 1);
        setState(371);
        scalar();
        break;
      }

      case FlatBuffersParser::STRING_CONSTANT: {
        enterOuterAlt(_localctx, 2);
        setState(372);
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

tree::TerminalNode* FlatBuffersParser::ValueContext::OPEN_BRACKET() {
  return getToken(FlatBuffersParser::OPEN_BRACKET, 0);
}

FlatBuffersParser::Commasep_valueContext* FlatBuffersParser::ValueContext::commasep_value() {
  return getRuleContext<FlatBuffersParser::Commasep_valueContext>(0);
}

tree::TerminalNode* FlatBuffersParser::ValueContext::CLOSE_BRACKET() {
  return getToken(FlatBuffersParser::CLOSE_BRACKET, 0);
}


size_t FlatBuffersParser::ValueContext::getRuleIndex() const {
  return FlatBuffersParser::RuleValue;
}

void FlatBuffersParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void FlatBuffersParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}


antlrcpp::Any FlatBuffersParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::ValueContext* FlatBuffersParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 62, FlatBuffersParser::RuleValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(381);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FlatBuffersParser::STRING_CONSTANT:
      case FlatBuffersParser::IDENT:
      case FlatBuffersParser::HEX_INTEGER_CONSTANT:
      case FlatBuffersParser::INTEGER_CONSTANT:
      case FlatBuffersParser::FLOAT_CONSTANT: {
        enterOuterAlt(_localctx, 1);
        setState(375);
        single_value();
        break;
      }

      case FlatBuffersParser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 2);
        setState(376);
        object();
        break;
      }

      case FlatBuffersParser::OPEN_BRACKET: {
        enterOuterAlt(_localctx, 3);
        setState(377);
        match(FlatBuffersParser::OPEN_BRACKET);
        setState(378);
        commasep_value();
        setState(379);
        match(FlatBuffersParser::CLOSE_BRACKET);
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

std::vector<tree::TerminalNode *> FlatBuffersParser::Commasep_valueContext::COMMA() {
  return getTokens(FlatBuffersParser::COMMA);
}

tree::TerminalNode* FlatBuffersParser::Commasep_valueContext::COMMA(size_t i) {
  return getToken(FlatBuffersParser::COMMA, i);
}


size_t FlatBuffersParser::Commasep_valueContext::getRuleIndex() const {
  return FlatBuffersParser::RuleCommasep_value;
}

void FlatBuffersParser::Commasep_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommasep_value(this);
}

void FlatBuffersParser::Commasep_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommasep_value(this);
}


antlrcpp::Any FlatBuffersParser::Commasep_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitCommasep_value(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Commasep_valueContext* FlatBuffersParser::commasep_value() {
  Commasep_valueContext *_localctx = _tracker.createInstance<Commasep_valueContext>(_ctx, getState());
  enterRule(_localctx, 64, FlatBuffersParser::RuleCommasep_value);
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
    setState(383);
    value();
    setState(388);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(384);
        match(FlatBuffersParser::COMMA);
        setState(385);
        value(); 
      }
      setState(390);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
    }
    setState(392);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::COMMA) {
      setState(391);
      match(FlatBuffersParser::COMMA);
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

tree::TerminalNode* FlatBuffersParser::File_extension_declContext::FILE_EXTENSION() {
  return getToken(FlatBuffersParser::FILE_EXTENSION, 0);
}

tree::TerminalNode* FlatBuffersParser::File_extension_declContext::STRING_CONSTANT() {
  return getToken(FlatBuffersParser::STRING_CONSTANT, 0);
}


size_t FlatBuffersParser::File_extension_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleFile_extension_decl;
}

void FlatBuffersParser::File_extension_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFile_extension_decl(this);
}

void FlatBuffersParser::File_extension_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFile_extension_decl(this);
}


antlrcpp::Any FlatBuffersParser::File_extension_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitFile_extension_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::File_extension_declContext* FlatBuffersParser::file_extension_decl() {
  File_extension_declContext *_localctx = _tracker.createInstance<File_extension_declContext>(_ctx, getState());
  enterRule(_localctx, 66, FlatBuffersParser::RuleFile_extension_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(394);
    match(FlatBuffersParser::FILE_EXTENSION);
    setState(395);
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

tree::TerminalNode* FlatBuffersParser::File_identifier_declContext::FILE_IDENTIFIER() {
  return getToken(FlatBuffersParser::FILE_IDENTIFIER, 0);
}

tree::TerminalNode* FlatBuffersParser::File_identifier_declContext::STRING_CONSTANT() {
  return getToken(FlatBuffersParser::STRING_CONSTANT, 0);
}


size_t FlatBuffersParser::File_identifier_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleFile_identifier_decl;
}

void FlatBuffersParser::File_identifier_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFile_identifier_decl(this);
}

void FlatBuffersParser::File_identifier_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFile_identifier_decl(this);
}


antlrcpp::Any FlatBuffersParser::File_identifier_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitFile_identifier_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::File_identifier_declContext* FlatBuffersParser::file_identifier_decl() {
  File_identifier_declContext *_localctx = _tracker.createInstance<File_identifier_declContext>(_ctx, getState());
  enterRule(_localctx, 68, FlatBuffersParser::RuleFile_identifier_decl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(397);
    match(FlatBuffersParser::FILE_IDENTIFIER);
    setState(398);
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

std::vector<tree::TerminalNode *> FlatBuffersParser::Ns_identContext::PERIOD() {
  return getTokens(FlatBuffersParser::PERIOD);
}

tree::TerminalNode* FlatBuffersParser::Ns_identContext::PERIOD(size_t i) {
  return getToken(FlatBuffersParser::PERIOD, i);
}


size_t FlatBuffersParser::Ns_identContext::getRuleIndex() const {
  return FlatBuffersParser::RuleNs_ident;
}

void FlatBuffersParser::Ns_identContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNs_ident(this);
}

void FlatBuffersParser::Ns_identContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNs_ident(this);
}


antlrcpp::Any FlatBuffersParser::Ns_identContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitNs_ident(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Ns_identContext* FlatBuffersParser::ns_ident() {
  Ns_identContext *_localctx = _tracker.createInstance<Ns_identContext>(_ctx, getState());
  enterRule(_localctx, 70, FlatBuffersParser::RuleNs_ident);
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
    setState(400);
    match(FlatBuffersParser::IDENT);
    setState(405);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FlatBuffersParser::PERIOD) {
      setState(401);
      match(FlatBuffersParser::PERIOD);
      setState(402);
      match(FlatBuffersParser::IDENT);
      setState(407);
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
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInteger_const(this);
}

void FlatBuffersParser::Integer_constContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInteger_const(this);
}


antlrcpp::Any FlatBuffersParser::Integer_constContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitInteger_const(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Integer_constContext* FlatBuffersParser::integer_const() {
  Integer_constContext *_localctx = _tracker.createInstance<Integer_constContext>(_ctx, getState());
  enterRule(_localctx, 72, FlatBuffersParser::RuleInteger_const);
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
    setState(408);
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
  "interface_decl", "method_decl", "method_parameters", "method_parameter", 
  "method_type", "service_component_decl", "service_decl", "type", "uniontype_decl", 
  "commasep_uniontype_decl", "enumval_decl", "commasep_enumval_decl", "ident_with_opt_single_value", 
  "commasep_ident_with_opt_single_value", "metadata", "scalar", "object", 
  "ident_with_value", "commasep_ident_with_value", "single_value", "value", 
  "commasep_value", "file_extension_decl", "file_identifier_decl", "ns_ident", 
  "integer_const"
};

std::vector<std::string> FlatBuffersParser::_literalNames = {
  "", "'include'", "'namespace'", "'attribute'", "'table'", "'struct'", 
  "'enum'", "'union'", "'interface'", "'service'", "'static'", "'mutable'", 
  "'in'", "'out'", "'root_type'", "'rpc_service'", "'file_extension'", "'file_indentifier'", 
  "", "", "", "", "", "", "", "", "", "';'", "':'", "'.'", "','", "'='", 
  "'{'", "'}'", "'['", "']'", "'('", "')'"
};

std::vector<std::string> FlatBuffersParser::_symbolicNames = {
  "", "INCLUDE", "NAMESPACE", "ATTRIBUTE", "TABLE", "STRUCT", "ENUM", "UNION", 
  "INTERFACE", "SERVICE", "STATIC", "MUTABLE", "IN", "OUT", "ROOT_TYPE", 
  "RPC_SERVICE", "FILE_EXTENSION", "FILE_IDENTIFIER", "STRING_CONSTANT", 
  "BASE_TYPE_NAME", "IDENT", "HEX_INTEGER_CONSTANT", "INTEGER_CONSTANT", 
  "FLOAT_CONSTANT", "BLOCK_COMMENT", "DOC_COMMENT", "COMMENT", "SEMICOLON", 
  "COLON", "PERIOD", "COMMA", "EQUAL", "OPEN_BRACE", "CLOSE_BRACE", "OPEN_BRACKET", 
  "CLOSE_BRACKET", "OPEN_PAREN", "CLOSE_PAREN", "WHITESPACE"
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

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x28, 0x19d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x3, 0x2, 0x7, 0x2, 0x4e, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 
       0x51, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
       0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
       0x2, 0x3, 0x2, 0x7, 0x2, 0x60, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x63, 
       0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
       0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x6d, 0xa, 0x4, 0xc, 0x4, 0xe, 
       0x4, 0x70, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x6, 0x5, 0x6, 0x79, 0xa, 0x6, 0x3, 0x6, 0x5, 
       0x6, 0x7c, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x7, 0x6, 0x84, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x87, 
       0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x5, 0x7, 0x8c, 0xa, 0x7, 
       0x3, 0x7, 0x5, 0x7, 0x8f, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x7, 0x5, 0x7, 0x95, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x5, 0x8, 0x9d, 0xa, 0x8, 0x3, 0x8, 
       0x5, 0x8, 0xa0, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x3, 0xa, 0x5, 0xa, 0xae, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
       0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xb5, 0xa, 0xa, 0x3, 0xa, 0x3, 
       0xa, 0x3, 0xa, 0x5, 0xa, 0xba, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 
       0xb, 0x3, 0xb, 0x6, 0xb, 0xc0, 0xa, 0xb, 0xd, 0xb, 0xe, 0xb, 0xc1, 
       0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
       0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x5, 0xd, 
       0xd0, 0xa, 0xd, 0x3, 0xd, 0x5, 0xd, 0xd3, 0xa, 0xd, 0x3, 0xd, 0x3, 
       0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x6, 0xd, 0xda, 0xa, 0xd, 0xd, 
       0xd, 0xe, 0xd, 0xdb, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x5, 0xe, 0xe1, 
       0xa, 0xe, 0x3, 0xe, 0x5, 0xe, 0xe4, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 
       0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xec, 0xa, 0xe, 
       0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xf1, 0xa, 0xe, 0x3, 0xf, 
       0x5, 0xf, 0xf4, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xf8, 0xa, 
       0xf, 0xc, 0xf, 0xe, 0xf, 0xfb, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 
       0x10, 0x3, 0x10, 0x3, 0x11, 0x5, 0x11, 0x102, 0xa, 0x11, 0x3, 0x11, 
       0x5, 0x11, 0x105, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x5, 
       0x12, 0x10a, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
       0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x112, 0xa, 0x12, 0x3, 0x13, 0x5, 
       0x13, 0x115, 0xa, 0x13, 0x3, 0x13, 0x5, 0x13, 0x118, 0xa, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x6, 0x13, 0x11f, 
       0xa, 0x13, 0xd, 0x13, 0xe, 0x13, 0x120, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x129, 0xa, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x12f, 0xa, 
       0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 
       0x16, 0x136, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x139, 0xb, 0x16, 0x3, 
       0x16, 0x5, 0x16, 0x13c, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
       0x5, 0x17, 0x141, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 
       0x18, 0x146, 0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x149, 0xb, 0x18, 0x3, 
       0x18, 0x5, 0x18, 0x14c, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x5, 0x19, 0x151, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 
       0x1a, 0x156, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x159, 0xb, 0x1a, 0x3, 
       0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x15f, 0xa, 0x1b, 
       0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 
       0x3, 0x1f, 0x7, 0x1f, 0x16e, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x171, 
       0xb, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x174, 0xa, 0x1f, 0x3, 0x20, 0x3, 
       0x20, 0x5, 0x20, 0x178, 0xa, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
       0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x180, 0xa, 0x21, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 0x185, 0xa, 0x22, 0xc, 0x22, 
       0xe, 0x22, 0x188, 0xb, 0x22, 0x3, 0x22, 0x5, 0x22, 0x18b, 0xa, 0x22, 
       0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
       0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x7, 0x25, 0x196, 0xa, 0x25, 0xc, 
       0x25, 0xe, 0x25, 0x199, 0xb, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
       0x2, 0x2, 0x27, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
       0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 
       0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 
       0x42, 0x44, 0x46, 0x48, 0x4a, 0x2, 0x6, 0x3, 0x2, 0x6, 0x7, 0x3, 
       0x2, 0xc, 0xd, 0x3, 0x2, 0x16, 0x19, 0x3, 0x2, 0x17, 0x18, 0x2, 0x1b6, 
       0x2, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4, 0x64, 0x3, 0x2, 0x2, 0x2, 0x6, 
       0x68, 0x3, 0x2, 0x2, 0x2, 0x8, 0x73, 0x3, 0x2, 0x2, 0x2, 0xa, 0x78, 
       0x3, 0x2, 0x2, 0x2, 0xc, 0x8b, 0x3, 0x2, 0x2, 0x2, 0xe, 0x9c, 0x3, 
       0x2, 0x2, 0x2, 0x10, 0xa8, 0x3, 0x2, 0x2, 0x2, 0x12, 0xad, 0x3, 0x2, 
       0x2, 0x2, 0x14, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x16, 0xc5, 0x3, 0x2, 0x2, 
       0x2, 0x18, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xe0, 0x3, 0x2, 0x2, 0x2, 
       0x1c, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x20, 
       0x101, 0x3, 0x2, 0x2, 0x2, 0x22, 0x109, 0x3, 0x2, 0x2, 0x2, 0x24, 
       0x114, 0x3, 0x2, 0x2, 0x2, 0x26, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x28, 
       0x130, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x132, 0x3, 0x2, 0x2, 0x2, 0x2c, 
       0x13d, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x142, 0x3, 0x2, 0x2, 0x2, 0x30, 
       0x14d, 0x3, 0x2, 0x2, 0x2, 0x32, 0x152, 0x3, 0x2, 0x2, 0x2, 0x34, 
       0x15e, 0x3, 0x2, 0x2, 0x2, 0x36, 0x160, 0x3, 0x2, 0x2, 0x2, 0x38, 
       0x162, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x166, 0x3, 0x2, 0x2, 0x2, 0x3c, 
       0x16a, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x177, 0x3, 0x2, 0x2, 0x2, 0x40, 
       0x17f, 0x3, 0x2, 0x2, 0x2, 0x42, 0x181, 0x3, 0x2, 0x2, 0x2, 0x44, 
       0x18c, 0x3, 0x2, 0x2, 0x2, 0x46, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x48, 
       0x192, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x4c, 
       0x4e, 0x5, 0x4, 0x3, 0x2, 0x4d, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x51, 
       0x3, 0x2, 0x2, 0x2, 0x4f, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x3, 
       0x2, 0x2, 0x2, 0x50, 0x61, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4f, 0x3, 0x2, 
       0x2, 0x2, 0x52, 0x60, 0x5, 0x6, 0x4, 0x2, 0x53, 0x60, 0x5, 0xa, 0x6, 
       0x2, 0x54, 0x60, 0x5, 0xc, 0x7, 0x2, 0x55, 0x60, 0x5, 0xe, 0x8, 0x2, 
       0x56, 0x60, 0x5, 0x10, 0x9, 0x2, 0x57, 0x60, 0x5, 0x44, 0x23, 0x2, 
       0x58, 0x60, 0x5, 0x46, 0x24, 0x2, 0x59, 0x60, 0x5, 0x8, 0x5, 0x2, 
       0x5a, 0x60, 0x5, 0x14, 0xb, 0x2, 0x5b, 0x60, 0x5, 0x18, 0xd, 0x2, 
       0x5c, 0x60, 0x5, 0x24, 0x13, 0x2, 0x5d, 0x60, 0x5, 0x38, 0x1d, 0x2, 
       0x5e, 0x60, 0x7, 0x1a, 0x2, 0x2, 0x5f, 0x52, 0x3, 0x2, 0x2, 0x2, 
       0x5f, 0x53, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x54, 0x3, 0x2, 0x2, 0x2, 0x5f, 
       0x55, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x56, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x57, 
       0x3, 0x2, 0x2, 0x2, 0x5f, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x59, 0x3, 
       0x2, 0x2, 0x2, 0x5f, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5b, 0x3, 0x2, 
       0x2, 0x2, 0x5f, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5d, 0x3, 0x2, 0x2, 
       0x2, 0x5f, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x60, 0x63, 0x3, 0x2, 0x2, 0x2, 
       0x61, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x3, 0x2, 0x2, 0x2, 0x62, 
       0x3, 0x3, 0x2, 0x2, 0x2, 0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 
       0x7, 0x3, 0x2, 0x2, 0x65, 0x66, 0x7, 0x14, 0x2, 0x2, 0x66, 0x67, 
       0x7, 0x1d, 0x2, 0x2, 0x67, 0x5, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x7, 
       0x4, 0x2, 0x2, 0x69, 0x6e, 0x7, 0x16, 0x2, 0x2, 0x6a, 0x6b, 0x7, 
       0x1f, 0x2, 0x2, 0x6b, 0x6d, 0x7, 0x16, 0x2, 0x2, 0x6c, 0x6a, 0x3, 
       0x2, 0x2, 0x2, 0x6d, 0x70, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6c, 0x3, 0x2, 
       0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x71, 0x3, 0x2, 0x2, 
       0x2, 0x70, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x7, 0x1d, 0x2, 
       0x2, 0x72, 0x7, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x7, 0x5, 0x2, 0x2, 
       0x74, 0x75, 0x7, 0x14, 0x2, 0x2, 0x75, 0x76, 0x7, 0x1d, 0x2, 0x2, 
       0x76, 0x9, 0x3, 0x2, 0x2, 0x2, 0x77, 0x79, 0x7, 0x1a, 0x2, 0x2, 0x78, 
       0x77, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7b, 
       0x3, 0x2, 0x2, 0x2, 0x7a, 0x7c, 0x7, 0x1b, 0x2, 0x2, 0x7b, 0x7a, 
       0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x3, 
       0x2, 0x2, 0x2, 0x7d, 0x7e, 0x9, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x7, 0x16, 
       0x2, 0x2, 0x7f, 0x80, 0x5, 0x34, 0x1b, 0x2, 0x80, 0x85, 0x7, 0x22, 
       0x2, 0x2, 0x81, 0x84, 0x5, 0x12, 0xa, 0x2, 0x82, 0x84, 0x5, 0x1a, 
       0xe, 0x2, 0x83, 0x81, 0x3, 0x2, 0x2, 0x2, 0x83, 0x82, 0x3, 0x2, 0x2, 
       0x2, 0x84, 0x87, 0x3, 0x2, 0x2, 0x2, 0x85, 0x83, 0x3, 0x2, 0x2, 0x2, 
       0x85, 0x86, 0x3, 0x2, 0x2, 0x2, 0x86, 0x88, 0x3, 0x2, 0x2, 0x2, 0x87, 
       0x85, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x7, 0x23, 0x2, 0x2, 0x89, 
       0xb, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8c, 0x7, 0x1a, 0x2, 0x2, 0x8b, 0x8a, 
       0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8e, 0x3, 
       0x2, 0x2, 0x2, 0x8d, 0x8f, 0x7, 0x1b, 0x2, 0x2, 0x8e, 0x8d, 0x3, 
       0x2, 0x2, 0x2, 0x8e, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x3, 0x2, 
       0x2, 0x2, 0x90, 0x91, 0x7, 0x8, 0x2, 0x2, 0x91, 0x94, 0x7, 0x16, 
       0x2, 0x2, 0x92, 0x93, 0x7, 0x1e, 0x2, 0x2, 0x93, 0x95, 0x5, 0x26, 
       0x14, 0x2, 0x94, 0x92, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x3, 0x2, 
       0x2, 0x2, 0x95, 0x96, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x5, 0x34, 
       0x1b, 0x2, 0x97, 0x98, 0x7, 0x22, 0x2, 0x2, 0x98, 0x99, 0x5, 0x2e, 
       0x18, 0x2, 0x99, 0x9a, 0x7, 0x23, 0x2, 0x2, 0x9a, 0xd, 0x3, 0x2, 
       0x2, 0x2, 0x9b, 0x9d, 0x7, 0x1a, 0x2, 0x2, 0x9c, 0x9b, 0x3, 0x2, 
       0x2, 0x2, 0x9c, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9f, 0x3, 0x2, 0x2, 
       0x2, 0x9e, 0xa0, 0x7, 0x1b, 0x2, 0x2, 0x9f, 0x9e, 0x3, 0x2, 0x2, 
       0x2, 0x9f, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x3, 0x2, 0x2, 0x2, 
       0xa1, 0xa2, 0x7, 0x9, 0x2, 0x2, 0xa2, 0xa3, 0x7, 0x16, 0x2, 0x2, 
       0xa3, 0xa4, 0x5, 0x34, 0x1b, 0x2, 0xa4, 0xa5, 0x7, 0x22, 0x2, 0x2, 
       0xa5, 0xa6, 0x5, 0x2a, 0x16, 0x2, 0xa6, 0xa7, 0x7, 0x23, 0x2, 0x2, 
       0xa7, 0xf, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x7, 0x10, 0x2, 0x2, 0xa9, 
       0xaa, 0x7, 0x16, 0x2, 0x2, 0xaa, 0xab, 0x7, 0x1d, 0x2, 0x2, 0xab, 
       0x11, 0x3, 0x2, 0x2, 0x2, 0xac, 0xae, 0x7, 0x1a, 0x2, 0x2, 0xad, 
       0xac, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 
       0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x7, 0x16, 0x2, 0x2, 0xb0, 0xb1, 
       0x7, 0x1e, 0x2, 0x2, 0xb1, 0xb4, 0x5, 0x26, 0x14, 0x2, 0xb2, 0xb3, 
       0x7, 0x21, 0x2, 0x2, 0xb3, 0xb5, 0x5, 0x36, 0x1c, 0x2, 0xb4, 0xb2, 
       0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 0x3, 
       0x2, 0x2, 0x2, 0xb6, 0xb7, 0x5, 0x34, 0x1b, 0x2, 0xb7, 0xb9, 0x7, 
       0x1d, 0x2, 0x2, 0xb8, 0xba, 0x7, 0x1b, 0x2, 0x2, 0xb9, 0xb8, 0x3, 
       0x2, 0x2, 0x2, 0xb9, 0xba, 0x3, 0x2, 0x2, 0x2, 0xba, 0x13, 0x3, 0x2, 
       0x2, 0x2, 0xbb, 0xbc, 0x7, 0x11, 0x2, 0x2, 0xbc, 0xbd, 0x7, 0x16, 
       0x2, 0x2, 0xbd, 0xbf, 0x7, 0x22, 0x2, 0x2, 0xbe, 0xc0, 0x5, 0x16, 
       0xc, 0x2, 0xbf, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x3, 0x2, 0x2, 
       0x2, 0xc1, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x3, 0x2, 0x2, 0x2, 
       0xc2, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x7, 0x23, 0x2, 0x2, 
       0xc4, 0x15, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x7, 0x16, 0x2, 0x2, 
       0xc6, 0xc7, 0x7, 0x26, 0x2, 0x2, 0xc7, 0xc8, 0x7, 0x16, 0x2, 0x2, 
       0xc8, 0xc9, 0x7, 0x27, 0x2, 0x2, 0xc9, 0xca, 0x7, 0x1e, 0x2, 0x2, 
       0xca, 0xcb, 0x7, 0x16, 0x2, 0x2, 0xcb, 0xcc, 0x5, 0x34, 0x1b, 0x2, 
       0xcc, 0xcd, 0x7, 0x1d, 0x2, 0x2, 0xcd, 0x17, 0x3, 0x2, 0x2, 0x2, 
       0xce, 0xd0, 0x7, 0x1a, 0x2, 0x2, 0xcf, 0xce, 0x3, 0x2, 0x2, 0x2, 
       0xcf, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd1, 
       0xd3, 0x7, 0x1b, 0x2, 0x2, 0xd2, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd2, 
       0xd3, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 
       0x7, 0xa, 0x2, 0x2, 0xd5, 0xd6, 0x7, 0x16, 0x2, 0x2, 0xd6, 0xd7, 
       0x5, 0x34, 0x1b, 0x2, 0xd7, 0xd9, 0x7, 0x22, 0x2, 0x2, 0xd8, 0xda, 
       0x5, 0x1a, 0xe, 0x2, 0xd9, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 
       0x3, 0x2, 0x2, 0x2, 0xdb, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x3, 
       0x2, 0x2, 0x2, 0xdc, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x7, 0x23, 
       0x2, 0x2, 0xde, 0x19, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe1, 0x7, 0x1a, 
       0x2, 0x2, 0xe0, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x3, 0x2, 0x2, 
       0x2, 0xe1, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe4, 0x9, 0x3, 0x2, 0x2, 
       0xe3, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe4, 
       0xe5, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0x7, 0x16, 0x2, 0x2, 0xe6, 
       0xe7, 0x7, 0x26, 0x2, 0x2, 0xe7, 0xe8, 0x5, 0x1c, 0xf, 0x2, 0xe8, 
       0xeb, 0x7, 0x27, 0x2, 0x2, 0xe9, 0xea, 0x7, 0x1e, 0x2, 0x2, 0xea, 
       0xec, 0x5, 0x26, 0x14, 0x2, 0xeb, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xeb, 
       0xec, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 
       0x5, 0x34, 0x1b, 0x2, 0xee, 0xf0, 0x7, 0x1d, 0x2, 0x2, 0xef, 0xf1, 
       0x7, 0x1b, 0x2, 0x2, 0xf0, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 
       0x3, 0x2, 0x2, 0x2, 0xf1, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf4, 0x5, 
       0x1e, 0x10, 0x2, 0xf3, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 0x3, 
       0x2, 0x2, 0x2, 0xf4, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0x7, 0x20, 
       0x2, 0x2, 0xf6, 0xf8, 0x5, 0x1e, 0x10, 0x2, 0xf7, 0xf5, 0x3, 0x2, 
       0x2, 0x2, 0xf8, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xf7, 0x3, 0x2, 0x2, 
       0x2, 0xf9, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfa, 0x1d, 0x3, 0x2, 0x2, 0x2, 
       0xfb, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x7, 0x16, 0x2, 0x2, 
       0xfd, 0xfe, 0x7, 0x1e, 0x2, 0x2, 0xfe, 0xff, 0x5, 0x20, 0x11, 0x2, 
       0xff, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x100, 0x102, 0x7, 0xe, 0x2, 0x2, 
       0x101, 0x100, 0x3, 0x2, 0x2, 0x2, 0x101, 0x102, 0x3, 0x2, 0x2, 0x2, 
       0x102, 0x104, 0x3, 0x2, 0x2, 0x2, 0x103, 0x105, 0x7, 0xf, 0x2, 0x2, 
       0x104, 0x103, 0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 0x3, 0x2, 0x2, 0x2, 
       0x105, 0x106, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 0x5, 0x26, 0x14, 
       0x2, 0x107, 0x21, 0x3, 0x2, 0x2, 0x2, 0x108, 0x10a, 0x7, 0x1a, 0x2, 
       0x2, 0x109, 0x108, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 0x3, 0x2, 0x2, 
       0x2, 0x10a, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10c, 0x5, 0x26, 0x14, 
       0x2, 0x10c, 0x10d, 0x7, 0x1e, 0x2, 0x2, 0x10d, 0x10e, 0x7, 0x16, 
       0x2, 0x2, 0x10e, 0x10f, 0x5, 0x34, 0x1b, 0x2, 0x10f, 0x111, 0x7, 
       0x1d, 0x2, 0x2, 0x110, 0x112, 0x7, 0x1b, 0x2, 0x2, 0x111, 0x110, 
       0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x3, 0x2, 0x2, 0x2, 0x112, 0x23, 
       0x3, 0x2, 0x2, 0x2, 0x113, 0x115, 0x7, 0x1a, 0x2, 0x2, 0x114, 0x113, 
       0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x3, 0x2, 0x2, 0x2, 0x115, 0x117, 
       0x3, 0x2, 0x2, 0x2, 0x116, 0x118, 0x7, 0x1b, 0x2, 0x2, 0x117, 0x116, 
       0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 
       0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 0x7, 0xb, 0x2, 0x2, 0x11a, 0x11b, 
       0x7, 0x16, 0x2, 0x2, 0x11b, 0x11c, 0x5, 0x34, 0x1b, 0x2, 0x11c, 0x11e, 
       0x7, 0x22, 0x2, 0x2, 0x11d, 0x11f, 0x5, 0x22, 0x12, 0x2, 0x11e, 0x11d, 
       0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 0x3, 0x2, 0x2, 0x2, 0x120, 0x11e, 
       0x3, 0x2, 0x2, 0x2, 0x120, 0x121, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 
       0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 0x7, 0x23, 0x2, 0x2, 0x123, 0x25, 
       0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 0x7, 0x24, 0x2, 0x2, 0x125, 0x128, 
       0x5, 0x26, 0x14, 0x2, 0x126, 0x127, 0x7, 0x1e, 0x2, 0x2, 0x127, 0x129, 
       0x5, 0x4a, 0x26, 0x2, 0x128, 0x126, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 
       0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12b, 
       0x7, 0x25, 0x2, 0x2, 0x12b, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12f, 
       0x7, 0x15, 0x2, 0x2, 0x12d, 0x12f, 0x5, 0x48, 0x25, 0x2, 0x12e, 0x124, 
       0x3, 0x2, 0x2, 0x2, 0x12e, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12d, 
       0x3, 0x2, 0x2, 0x2, 0x12f, 0x27, 0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 
       0x5, 0x26, 0x14, 0x2, 0x131, 0x29, 0x3, 0x2, 0x2, 0x2, 0x132, 0x137, 
       0x5, 0x28, 0x15, 0x2, 0x133, 0x134, 0x7, 0x20, 0x2, 0x2, 0x134, 0x136, 
       0x5, 0x28, 0x15, 0x2, 0x135, 0x133, 0x3, 0x2, 0x2, 0x2, 0x136, 0x139, 
       0x3, 0x2, 0x2, 0x2, 0x137, 0x135, 0x3, 0x2, 0x2, 0x2, 0x137, 0x138, 
       0x3, 0x2, 0x2, 0x2, 0x138, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x139, 0x137, 
       0x3, 0x2, 0x2, 0x2, 0x13a, 0x13c, 0x7, 0x20, 0x2, 0x2, 0x13b, 0x13a, 
       0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x2b, 
       0x3, 0x2, 0x2, 0x2, 0x13d, 0x140, 0x5, 0x48, 0x25, 0x2, 0x13e, 0x13f, 
       0x7, 0x21, 0x2, 0x2, 0x13f, 0x141, 0x5, 0x4a, 0x26, 0x2, 0x140, 0x13e, 
       0x3, 0x2, 0x2, 0x2, 0x140, 0x141, 0x3, 0x2, 0x2, 0x2, 0x141, 0x2d, 
       0x3, 0x2, 0x2, 0x2, 0x142, 0x147, 0x5, 0x2c, 0x17, 0x2, 0x143, 0x144, 
       0x7, 0x20, 0x2, 0x2, 0x144, 0x146, 0x5, 0x2c, 0x17, 0x2, 0x145, 0x143, 
       0x3, 0x2, 0x2, 0x2, 0x146, 0x149, 0x3, 0x2, 0x2, 0x2, 0x147, 0x145, 
       0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x3, 0x2, 0x2, 0x2, 0x148, 0x14b, 
       0x3, 0x2, 0x2, 0x2, 0x149, 0x147, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14c, 
       0x7, 0x20, 0x2, 0x2, 0x14b, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 
       0x3, 0x2, 0x2, 0x2, 0x14c, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x150, 
       0x7, 0x16, 0x2, 0x2, 0x14e, 0x14f, 0x7, 0x1e, 0x2, 0x2, 0x14f, 0x151, 
       0x5, 0x3e, 0x20, 0x2, 0x150, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x150, 0x151, 
       0x3, 0x2, 0x2, 0x2, 0x151, 0x31, 0x3, 0x2, 0x2, 0x2, 0x152, 0x157, 
       0x5, 0x30, 0x19, 0x2, 0x153, 0x154, 0x7, 0x20, 0x2, 0x2, 0x154, 0x156, 
       0x5, 0x30, 0x19, 0x2, 0x155, 0x153, 0x3, 0x2, 0x2, 0x2, 0x156, 0x159, 
       0x3, 0x2, 0x2, 0x2, 0x157, 0x155, 0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 
       0x3, 0x2, 0x2, 0x2, 0x158, 0x33, 0x3, 0x2, 0x2, 0x2, 0x159, 0x157, 
       0x3, 0x2, 0x2, 0x2, 0x15a, 0x15b, 0x7, 0x26, 0x2, 0x2, 0x15b, 0x15c, 
       0x5, 0x32, 0x1a, 0x2, 0x15c, 0x15d, 0x7, 0x27, 0x2, 0x2, 0x15d, 0x15f, 
       0x3, 0x2, 0x2, 0x2, 0x15e, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15f, 
       0x3, 0x2, 0x2, 0x2, 0x15f, 0x35, 0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 
       0x9, 0x4, 0x2, 0x2, 0x161, 0x37, 0x3, 0x2, 0x2, 0x2, 0x162, 0x163, 
       0x7, 0x22, 0x2, 0x2, 0x163, 0x164, 0x5, 0x3c, 0x1f, 0x2, 0x164, 0x165, 
       0x7, 0x23, 0x2, 0x2, 0x165, 0x39, 0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 
       0x7, 0x16, 0x2, 0x2, 0x167, 0x168, 0x7, 0x1e, 0x2, 0x2, 0x168, 0x169, 
       0x5, 0x40, 0x21, 0x2, 0x169, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16f, 
       0x5, 0x3a, 0x1e, 0x2, 0x16b, 0x16c, 0x7, 0x20, 0x2, 0x2, 0x16c, 0x16e, 
       0x5, 0x3a, 0x1e, 0x2, 0x16d, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x171, 
       0x3, 0x2, 0x2, 0x2, 0x16f, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x170, 
       0x3, 0x2, 0x2, 0x2, 0x170, 0x173, 0x3, 0x2, 0x2, 0x2, 0x171, 0x16f, 
       0x3, 0x2, 0x2, 0x2, 0x172, 0x174, 0x7, 0x20, 0x2, 0x2, 0x173, 0x172, 
       0x3, 0x2, 0x2, 0x2, 0x173, 0x174, 0x3, 0x2, 0x2, 0x2, 0x174, 0x3d, 
       0x3, 0x2, 0x2, 0x2, 0x175, 0x178, 0x5, 0x36, 0x1c, 0x2, 0x176, 0x178, 
       0x7, 0x14, 0x2, 0x2, 0x177, 0x175, 0x3, 0x2, 0x2, 0x2, 0x177, 0x176, 
       0x3, 0x2, 0x2, 0x2, 0x178, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x179, 0x180, 
       0x5, 0x3e, 0x20, 0x2, 0x17a, 0x180, 0x5, 0x38, 0x1d, 0x2, 0x17b, 
       0x17c, 0x7, 0x24, 0x2, 0x2, 0x17c, 0x17d, 0x5, 0x42, 0x22, 0x2, 0x17d, 
       0x17e, 0x7, 0x25, 0x2, 0x2, 0x17e, 0x180, 0x3, 0x2, 0x2, 0x2, 0x17f, 
       0x179, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17f, 
       0x17b, 0x3, 0x2, 0x2, 0x2, 0x180, 0x41, 0x3, 0x2, 0x2, 0x2, 0x181, 
       0x186, 0x5, 0x40, 0x21, 0x2, 0x182, 0x183, 0x7, 0x20, 0x2, 0x2, 0x183, 
       0x185, 0x5, 0x40, 0x21, 0x2, 0x184, 0x182, 0x3, 0x2, 0x2, 0x2, 0x185, 
       0x188, 0x3, 0x2, 0x2, 0x2, 0x186, 0x184, 0x3, 0x2, 0x2, 0x2, 0x186, 
       0x187, 0x3, 0x2, 0x2, 0x2, 0x187, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x188, 
       0x186, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18b, 0x7, 0x20, 0x2, 0x2, 0x18a, 
       0x189, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x18b, 
       0x43, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18d, 0x7, 0x12, 0x2, 0x2, 0x18d, 
       0x18e, 0x7, 0x14, 0x2, 0x2, 0x18e, 0x45, 0x3, 0x2, 0x2, 0x2, 0x18f, 
       0x190, 0x7, 0x13, 0x2, 0x2, 0x190, 0x191, 0x7, 0x14, 0x2, 0x2, 0x191, 
       0x47, 0x3, 0x2, 0x2, 0x2, 0x192, 0x197, 0x7, 0x16, 0x2, 0x2, 0x193, 
       0x194, 0x7, 0x1f, 0x2, 0x2, 0x194, 0x196, 0x7, 0x16, 0x2, 0x2, 0x195, 
       0x193, 0x3, 0x2, 0x2, 0x2, 0x196, 0x199, 0x3, 0x2, 0x2, 0x2, 0x197, 
       0x195, 0x3, 0x2, 0x2, 0x2, 0x197, 0x198, 0x3, 0x2, 0x2, 0x2, 0x198, 
       0x49, 0x3, 0x2, 0x2, 0x2, 0x199, 0x197, 0x3, 0x2, 0x2, 0x2, 0x19a, 
       0x19b, 0x9, 0x5, 0x2, 0x2, 0x19b, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x34, 
       0x4f, 0x5f, 0x61, 0x6e, 0x78, 0x7b, 0x83, 0x85, 0x8b, 0x8e, 0x94, 
       0x9c, 0x9f, 0xad, 0xb4, 0xb9, 0xc1, 0xcf, 0xd2, 0xdb, 0xe0, 0xe3, 
       0xeb, 0xf0, 0xf3, 0xf9, 0x101, 0x104, 0x109, 0x111, 0x114, 0x117, 
       0x120, 0x128, 0x12e, 0x137, 0x13b, 0x140, 0x147, 0x14b, 0x150, 0x157, 
       0x15e, 0x16f, 0x173, 0x177, 0x17f, 0x186, 0x18a, 0x197, 
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

FlatBuffersParser::Initializer FlatBuffersParser::_init;
