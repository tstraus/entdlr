
// Generated from FlatBuffersParser.g4 by ANTLR 4.7.2


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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FlatBuffersParser::INCLUDE) {
      setState(78);
      include();
      setState(83);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(98);
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
      | (1ULL << FlatBuffersParser::ROOT_TYPE)
      | (1ULL << FlatBuffersParser::RPC_SERVICE)
      | (1ULL << FlatBuffersParser::FILE_EXTENSION)
      | (1ULL << FlatBuffersParser::FILE_IDENTIFIER)
      | (1ULL << FlatBuffersParser::BLOCK_COMMENT)
      | (1ULL << FlatBuffersParser::DOC_COMMENT)
      | (1ULL << FlatBuffersParser::OPEN_BRACE))) != 0)) {
      setState(96);
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

      case 12: {
        setState(95);
        match(FlatBuffersParser::BLOCK_COMMENT);
        break;
      }

      }
      setState(100);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    match(FlatBuffersParser::INCLUDE);
    setState(102);
    match(FlatBuffersParser::STRING_CONSTANT);
    setState(103);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    match(FlatBuffersParser::NAMESPACE);
    setState(106);
    match(FlatBuffersParser::IDENT);
    setState(111);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FlatBuffersParser::PERIOD) {
      setState(107);
      match(FlatBuffersParser::PERIOD);
      setState(108);
      match(FlatBuffersParser::IDENT);
      setState(113);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(114);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    match(FlatBuffersParser::ATTRIBUTE);
    setState(117);
    match(FlatBuffersParser::STRING_CONSTANT);
    setState(118);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::BLOCK_COMMENT) {
      setState(120);
      match(FlatBuffersParser::BLOCK_COMMENT);
    }
    setState(124);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::DOC_COMMENT) {
      setState(123);
      match(FlatBuffersParser::DOC_COMMENT);
    }
    setState(126);
    _la = _input->LA(1);
    if (!(_la == FlatBuffersParser::TABLE

    || _la == FlatBuffersParser::STRUCT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(127);
    match(FlatBuffersParser::IDENT);
    setState(128);
    metadata();
    setState(129);
    match(FlatBuffersParser::OPEN_BRACE);
    setState(134);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << FlatBuffersParser::MUTABLE)
      | (1ULL << FlatBuffersParser::STATIC)
      | (1ULL << FlatBuffersParser::IDENT)
      | (1ULL << FlatBuffersParser::BLOCK_COMMENT))) != 0)) {
      setState(132);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
      case 1: {
        setState(130);
        field_decl();
        break;
      }

      case 2: {
        setState(131);
        method_decl();
        break;
      }

      }
      setState(136);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(137);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(140);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::BLOCK_COMMENT) {
      setState(139);
      match(FlatBuffersParser::BLOCK_COMMENT);
    }
    setState(143);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::DOC_COMMENT) {
      setState(142);
      match(FlatBuffersParser::DOC_COMMENT);
    }
    setState(145);
    match(FlatBuffersParser::ENUM);
    setState(146);
    match(FlatBuffersParser::IDENT);
    setState(149);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::COLON) {
      setState(147);
      match(FlatBuffersParser::COLON);
      setState(148);
      type();
    }
    setState(151);
    metadata();
    setState(152);
    match(FlatBuffersParser::OPEN_BRACE);
    setState(153);
    commasep_enumval_decl();
    setState(154);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::BLOCK_COMMENT) {
      setState(156);
      match(FlatBuffersParser::BLOCK_COMMENT);
    }
    setState(160);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::DOC_COMMENT) {
      setState(159);
      match(FlatBuffersParser::DOC_COMMENT);
    }
    setState(162);
    match(FlatBuffersParser::UNION);
    setState(163);
    match(FlatBuffersParser::IDENT);
    setState(164);
    metadata();
    setState(165);
    match(FlatBuffersParser::OPEN_BRACE);
    setState(166);
    commasep_uniontype_decl();
    setState(167);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    match(FlatBuffersParser::ROOT_TYPE);
    setState(170);
    match(FlatBuffersParser::IDENT);
    setState(171);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(174);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::BLOCK_COMMENT) {
      setState(173);
      match(FlatBuffersParser::BLOCK_COMMENT);
    }
    setState(176);
    match(FlatBuffersParser::IDENT);
    setState(177);
    match(FlatBuffersParser::COLON);
    setState(178);
    type();
    setState(181);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::EQUAL) {
      setState(179);
      match(FlatBuffersParser::EQUAL);
      setState(180);
      scalar();
    }
    setState(183);
    metadata();
    setState(184);
    match(FlatBuffersParser::SEMICOLON);
    setState(186);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::DOC_COMMENT) {
      setState(185);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    match(FlatBuffersParser::RPC_SERVICE);
    setState(189);
    match(FlatBuffersParser::IDENT);
    setState(190);
    match(FlatBuffersParser::OPEN_BRACE);
    setState(192); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(191);
      rpc_method();
      setState(194); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == FlatBuffersParser::IDENT);
    setState(196);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(198);
    match(FlatBuffersParser::IDENT);
    setState(199);
    match(FlatBuffersParser::OPEN_PAREN);
    setState(200);
    match(FlatBuffersParser::IDENT);
    setState(201);
    match(FlatBuffersParser::CLOSE_PAREN);
    setState(202);
    match(FlatBuffersParser::COLON);
    setState(203);
    match(FlatBuffersParser::IDENT);
    setState(204);
    metadata();
    setState(205);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::BLOCK_COMMENT) {
      setState(207);
      match(FlatBuffersParser::BLOCK_COMMENT);
    }
    setState(211);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::DOC_COMMENT) {
      setState(210);
      match(FlatBuffersParser::DOC_COMMENT);
    }
    setState(213);
    match(FlatBuffersParser::INTERFACE);
    setState(214);
    match(FlatBuffersParser::IDENT);
    setState(215);
    match(FlatBuffersParser::OPEN_BRACE);
    setState(217); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(216);
      method_decl();
      setState(219); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << FlatBuffersParser::MUTABLE)
      | (1ULL << FlatBuffersParser::STATIC)
      | (1ULL << FlatBuffersParser::IDENT)
      | (1ULL << FlatBuffersParser::BLOCK_COMMENT))) != 0));
    setState(221);
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

FlatBuffersParser::Static_declContext* FlatBuffersParser::Method_declContext::static_decl() {
  return getRuleContext<FlatBuffersParser::Static_declContext>(0);
}

FlatBuffersParser::Mutable_declContext* FlatBuffersParser::Method_declContext::mutable_decl() {
  return getRuleContext<FlatBuffersParser::Mutable_declContext>(0);
}

tree::TerminalNode* FlatBuffersParser::Method_declContext::COLON() {
  return getToken(FlatBuffersParser::COLON, 0);
}

FlatBuffersParser::Method_return_typeContext* FlatBuffersParser::Method_declContext::method_return_type() {
  return getRuleContext<FlatBuffersParser::Method_return_typeContext>(0);
}

tree::TerminalNode* FlatBuffersParser::Method_declContext::DOC_COMMENT() {
  return getToken(FlatBuffersParser::DOC_COMMENT, 0);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(224);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::BLOCK_COMMENT) {
      setState(223);
      match(FlatBuffersParser::BLOCK_COMMENT);
    }
    setState(228);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FlatBuffersParser::STATIC: {
        setState(226);
        static_decl();
        break;
      }

      case FlatBuffersParser::MUTABLE: {
        setState(227);
        mutable_decl();
        break;
      }

      case FlatBuffersParser::IDENT: {
        break;
      }

    default:
      break;
    }
    setState(230);
    match(FlatBuffersParser::IDENT);
    setState(231);
    match(FlatBuffersParser::OPEN_PAREN);
    setState(232);
    method_parameters();
    setState(233);
    match(FlatBuffersParser::CLOSE_PAREN);
    setState(236);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::COLON) {
      setState(234);
      match(FlatBuffersParser::COLON);
      setState(235);
      method_return_type();
    }
    setState(238);
    metadata();
    setState(239);
    match(FlatBuffersParser::SEMICOLON);
    setState(241);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::DOC_COMMENT) {
      setState(240);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(244);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::IDENT) {
      setState(243);
      method_parameter();
    }
    setState(250);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FlatBuffersParser::COMMA) {
      setState(246);
      match(FlatBuffersParser::COMMA);
      setState(247);
      method_parameter();
      setState(252);
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

FlatBuffersParser::Reference_declContext* FlatBuffersParser::Method_parameterContext::reference_decl() {
  return getRuleContext<FlatBuffersParser::Reference_declContext>(0);
}

FlatBuffersParser::Mutable_declContext* FlatBuffersParser::Method_parameterContext::mutable_decl() {
  return getRuleContext<FlatBuffersParser::Mutable_declContext>(0);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(253);
    match(FlatBuffersParser::IDENT);
    setState(254);
    match(FlatBuffersParser::COLON);
    setState(256);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      setState(255);
      reference_decl();
      break;
    }

    }
    setState(259);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::MUTABLE) {
      setState(258);
      mutable_decl();
    }
    setState(261);
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
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_return_type(this);
}

void FlatBuffersParser::Method_return_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_return_type(this);
}


antlrcpp::Any FlatBuffersParser::Method_return_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitMethod_return_type(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Method_return_typeContext* FlatBuffersParser::method_return_type() {
  Method_return_typeContext *_localctx = _tracker.createInstance<Method_return_typeContext>(_ctx, getState());
  enterRule(_localctx, 30, FlatBuffersParser::RuleMethod_return_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(263);
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

FlatBuffersParser::Reference_declContext* FlatBuffersParser::Method_typeContext::reference_decl() {
  return getRuleContext<FlatBuffersParser::Reference_declContext>(0);
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
  enterRule(_localctx, 32, FlatBuffersParser::RuleMethod_type);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(266);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::REFERENCE) {
      setState(265);
      reference_decl();
    }
    setState(270);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FlatBuffersParser::BASE_TYPE_NAME: {
        setState(268);
        match(FlatBuffersParser::BASE_TYPE_NAME);
        break;
      }

      case FlatBuffersParser::IDENT: {
        setState(269);
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

FlatBuffersParser::Mutable_declContext::Mutable_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffersParser::Mutable_declContext::MUTABLE() {
  return getToken(FlatBuffersParser::MUTABLE, 0);
}


size_t FlatBuffersParser::Mutable_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleMutable_decl;
}

void FlatBuffersParser::Mutable_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMutable_decl(this);
}

void FlatBuffersParser::Mutable_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMutable_decl(this);
}


antlrcpp::Any FlatBuffersParser::Mutable_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitMutable_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Mutable_declContext* FlatBuffersParser::mutable_decl() {
  Mutable_declContext *_localctx = _tracker.createInstance<Mutable_declContext>(_ctx, getState());
  enterRule(_localctx, 34, FlatBuffersParser::RuleMutable_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(272);
    match(FlatBuffersParser::MUTABLE);
   
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

tree::TerminalNode* FlatBuffersParser::Static_declContext::STATIC() {
  return getToken(FlatBuffersParser::STATIC, 0);
}


size_t FlatBuffersParser::Static_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleStatic_decl;
}

void FlatBuffersParser::Static_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatic_decl(this);
}

void FlatBuffersParser::Static_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatic_decl(this);
}


antlrcpp::Any FlatBuffersParser::Static_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitStatic_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Static_declContext* FlatBuffersParser::static_decl() {
  Static_declContext *_localctx = _tracker.createInstance<Static_declContext>(_ctx, getState());
  enterRule(_localctx, 36, FlatBuffersParser::RuleStatic_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(274);
    match(FlatBuffersParser::STATIC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Reference_declContext ------------------------------------------------------------------

FlatBuffersParser::Reference_declContext::Reference_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlatBuffersParser::Reference_declContext::REFERENCE() {
  return getToken(FlatBuffersParser::REFERENCE, 0);
}


size_t FlatBuffersParser::Reference_declContext::getRuleIndex() const {
  return FlatBuffersParser::RuleReference_decl;
}

void FlatBuffersParser::Reference_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReference_decl(this);
}

void FlatBuffersParser::Reference_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlatBuffersParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReference_decl(this);
}


antlrcpp::Any FlatBuffersParser::Reference_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<FlatBuffersParserVisitor*>(visitor))
    return parserVisitor->visitReference_decl(this);
  else
    return visitor->visitChildren(this);
}

FlatBuffersParser::Reference_declContext* FlatBuffersParser::reference_decl() {
  Reference_declContext *_localctx = _tracker.createInstance<Reference_declContext>(_ctx, getState());
  enterRule(_localctx, 38, FlatBuffersParser::RuleReference_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(276);
    match(FlatBuffersParser::REFERENCE);
   
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
  enterRule(_localctx, 40, FlatBuffersParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(288);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FlatBuffersParser::OPEN_BRACKET: {
        enterOuterAlt(_localctx, 1);
        setState(278);
        match(FlatBuffersParser::OPEN_BRACKET);
        setState(279);
        type();
        setState(282);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == FlatBuffersParser::COLON) {
          setState(280);
          match(FlatBuffersParser::COLON);
          setState(281);
          integer_const();
        }
        setState(284);
        match(FlatBuffersParser::CLOSE_BRACKET);
        break;
      }

      case FlatBuffersParser::BASE_TYPE_NAME: {
        enterOuterAlt(_localctx, 2);
        setState(286);
        match(FlatBuffersParser::BASE_TYPE_NAME);
        break;
      }

      case FlatBuffersParser::IDENT: {
        enterOuterAlt(_localctx, 3);
        setState(287);
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
  enterRule(_localctx, 42, FlatBuffersParser::RuleUniontype_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(290);
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
  enterRule(_localctx, 44, FlatBuffersParser::RuleCommasep_uniontype_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(292);
    uniontype_decl();
    setState(297);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(293);
        match(FlatBuffersParser::COMMA);
        setState(294);
        uniontype_decl(); 
      }
      setState(299);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    }
    setState(301);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::COMMA) {
      setState(300);
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
  enterRule(_localctx, 46, FlatBuffersParser::RuleEnumval_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(303);
    ns_ident();
    setState(306);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::EQUAL) {
      setState(304);
      match(FlatBuffersParser::EQUAL);
      setState(305);
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
  enterRule(_localctx, 48, FlatBuffersParser::RuleCommasep_enumval_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(308);
    enumval_decl();
    setState(313);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(309);
        match(FlatBuffersParser::COMMA);
        setState(310);
        enumval_decl(); 
      }
      setState(315);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    }
    setState(317);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::COMMA) {
      setState(316);
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
  enterRule(_localctx, 50, FlatBuffersParser::RuleIdent_with_opt_single_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(319);
    match(FlatBuffersParser::IDENT);
    setState(322);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::COLON) {
      setState(320);
      match(FlatBuffersParser::COLON);
      setState(321);
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
  enterRule(_localctx, 52, FlatBuffersParser::RuleCommasep_ident_with_opt_single_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(324);
    ident_with_opt_single_value();
    setState(329);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FlatBuffersParser::COMMA) {
      setState(325);
      match(FlatBuffersParser::COMMA);
      setState(326);
      ident_with_opt_single_value();
      setState(331);
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
  enterRule(_localctx, 54, FlatBuffersParser::RuleMetadata);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(336);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::OPEN_PAREN) {
      setState(332);
      match(FlatBuffersParser::OPEN_PAREN);
      setState(333);
      commasep_ident_with_opt_single_value();
      setState(334);
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
  enterRule(_localctx, 56, FlatBuffersParser::RuleScalar);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(338);
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
  enterRule(_localctx, 58, FlatBuffersParser::RuleObject);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(340);
    match(FlatBuffersParser::OPEN_BRACE);
    setState(341);
    commasep_ident_with_value();
    setState(342);
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
  enterRule(_localctx, 60, FlatBuffersParser::RuleIdent_with_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(344);
    match(FlatBuffersParser::IDENT);
    setState(345);
    match(FlatBuffersParser::COLON);
    setState(346);
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
  enterRule(_localctx, 62, FlatBuffersParser::RuleCommasep_ident_with_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(348);
    ident_with_value();
    setState(353);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(349);
        match(FlatBuffersParser::COMMA);
        setState(350);
        ident_with_value(); 
      }
      setState(355);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    }
    setState(357);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::COMMA) {
      setState(356);
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
  enterRule(_localctx, 64, FlatBuffersParser::RuleSingle_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(361);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FlatBuffersParser::IDENT:
      case FlatBuffersParser::HEX_INTEGER_CONSTANT:
      case FlatBuffersParser::INTEGER_CONSTANT:
      case FlatBuffersParser::FLOAT_CONSTANT: {
        enterOuterAlt(_localctx, 1);
        setState(359);
        scalar();
        break;
      }

      case FlatBuffersParser::STRING_CONSTANT: {
        enterOuterAlt(_localctx, 2);
        setState(360);
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
  enterRule(_localctx, 66, FlatBuffersParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(369);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FlatBuffersParser::STRING_CONSTANT:
      case FlatBuffersParser::IDENT:
      case FlatBuffersParser::HEX_INTEGER_CONSTANT:
      case FlatBuffersParser::INTEGER_CONSTANT:
      case FlatBuffersParser::FLOAT_CONSTANT: {
        enterOuterAlt(_localctx, 1);
        setState(363);
        single_value();
        break;
      }

      case FlatBuffersParser::OPEN_BRACE: {
        enterOuterAlt(_localctx, 2);
        setState(364);
        object();
        break;
      }

      case FlatBuffersParser::OPEN_BRACKET: {
        enterOuterAlt(_localctx, 3);
        setState(365);
        match(FlatBuffersParser::OPEN_BRACKET);
        setState(366);
        commasep_value();
        setState(367);
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
  enterRule(_localctx, 68, FlatBuffersParser::RuleCommasep_value);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(371);
    value();
    setState(376);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(372);
        match(FlatBuffersParser::COMMA);
        setState(373);
        value(); 
      }
      setState(378);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
    }
    setState(380);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == FlatBuffersParser::COMMA) {
      setState(379);
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
  enterRule(_localctx, 70, FlatBuffersParser::RuleFile_extension_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(382);
    match(FlatBuffersParser::FILE_EXTENSION);
    setState(383);
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
  enterRule(_localctx, 72, FlatBuffersParser::RuleFile_identifier_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(385);
    match(FlatBuffersParser::FILE_IDENTIFIER);
    setState(386);
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
  enterRule(_localctx, 74, FlatBuffersParser::RuleNs_ident);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(388);
    match(FlatBuffersParser::IDENT);
    setState(393);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == FlatBuffersParser::PERIOD) {
      setState(389);
      match(FlatBuffersParser::PERIOD);
      setState(390);
      match(FlatBuffersParser::IDENT);
      setState(395);
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
  enterRule(_localctx, 76, FlatBuffersParser::RuleInteger_const);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(396);
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
  "method_return_type", "method_type", "mutable_decl", "static_decl", "reference_decl", 
  "type", "uniontype_decl", "commasep_uniontype_decl", "enumval_decl", "commasep_enumval_decl", 
  "ident_with_opt_single_value", "commasep_ident_with_opt_single_value", 
  "metadata", "scalar", "object", "ident_with_value", "commasep_ident_with_value", 
  "single_value", "value", "commasep_value", "file_extension_decl", "file_identifier_decl", 
  "ns_ident", "integer_const"
};

std::vector<std::string> FlatBuffersParser::_literalNames = {
  "", "'include'", "'namespace'", "'attribute'", "'table'", "'struct'", 
  "'enum'", "'union'", "'interface'", "'mut'", "'static'", "'ref'", "'root_type'", 
  "'rpc_service'", "'file_extension'", "'file_indentifier'", "", "", "", 
  "", "", "", "", "", "", "';'", "':'", "'.'", "','", "'='", "'{'", "'}'", 
  "'['", "']'", "'('", "')'"
};

std::vector<std::string> FlatBuffersParser::_symbolicNames = {
  "", "INCLUDE", "NAMESPACE", "ATTRIBUTE", "TABLE", "STRUCT", "ENUM", "UNION", 
  "INTERFACE", "MUTABLE", "STATIC", "REFERENCE", "ROOT_TYPE", "RPC_SERVICE", 
  "FILE_EXTENSION", "FILE_IDENTIFIER", "STRING_CONSTANT", "BASE_TYPE_NAME", 
  "IDENT", "HEX_INTEGER_CONSTANT", "INTEGER_CONSTANT", "FLOAT_CONSTANT", 
  "BLOCK_COMMENT", "DOC_COMMENT", "COMMENT", "SEMICOLON", "COLON", "PERIOD", 
  "COMMA", "EQUAL", "OPEN_BRACE", "CLOSE_BRACE", "OPEN_BRACKET", "CLOSE_BRACKET", 
  "OPEN_PAREN", "CLOSE_PAREN", "WHITESPACE"
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
    0x3, 0x26, 0x191, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x63, 0xa, 
    0x2, 0xc, 0x2, 0xe, 0x2, 0x66, 0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x70, 0xa, 
    0x4, 0xc, 0x4, 0xe, 0x4, 0x73, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x5, 0x6, 0x7c, 0xa, 0x6, 0x3, 
    0x6, 0x5, 0x6, 0x7f, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x87, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x8a, 
    0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x5, 0x7, 0x8f, 0xa, 0x7, 0x3, 
    0x7, 0x5, 0x7, 0x92, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x5, 0x7, 0x98, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x8, 0x5, 0x8, 0xa0, 0xa, 0x8, 0x3, 0x8, 0x5, 0x8, 0xa3, 0xa, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x5, 0xa, 0xb1, 
    0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 
    0xb8, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xbd, 0xa, 0xa, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x6, 0xb, 0xc3, 0xa, 0xb, 0xd, 
    0xb, 0xe, 0xb, 0xc4, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 
    0x5, 0xd, 0xd3, 0xa, 0xd, 0x3, 0xd, 0x5, 0xd, 0xd6, 0xa, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x6, 0xd, 0xdc, 0xa, 0xd, 0xd, 0xd, 0xe, 
    0xd, 0xdd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x5, 0xe, 0xe3, 0xa, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x5, 0xe, 0xe7, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xef, 0xa, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x5, 0xe, 0xf4, 0xa, 0xe, 0x3, 0xf, 0x5, 0xf, 0xf7, 0xa, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xfb, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 
    0xfe, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x103, 0xa, 
    0x10, 0x3, 0x10, 0x5, 0x10, 0x106, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x5, 0x12, 0x10d, 0xa, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x5, 0x12, 0x111, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x5, 0x16, 0x11d, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x5, 0x16, 0x123, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x12a, 0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 
    0x12d, 0xb, 0x18, 0x3, 0x18, 0x5, 0x18, 0x130, 0xa, 0x18, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x135, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x7, 0x1a, 0x13a, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x13d, 
    0xb, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x140, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x5, 0x1b, 0x145, 0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x7, 0x1c, 0x14a, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x14d, 0xb, 0x1c, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x153, 0xa, 0x1d, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x7, 0x21, 0x162, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x165, 0xb, 0x21, 
    0x3, 0x21, 0x5, 0x21, 0x168, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 
    0x16c, 0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x5, 0x23, 0x174, 0xa, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
    0x7, 0x24, 0x179, 0xa, 0x24, 0xc, 0x24, 0xe, 0x24, 0x17c, 0xb, 0x24, 
    0x3, 0x24, 0x5, 0x24, 0x17f, 0xa, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x7, 
    0x27, 0x18a, 0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 0x18d, 0xb, 0x27, 0x3, 
    0x28, 0x3, 0x28, 0x3, 0x28, 0x2, 0x2, 0x29, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
    0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 
    0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x2, 0x5, 
    0x3, 0x2, 0x6, 0x7, 0x3, 0x2, 0x14, 0x17, 0x3, 0x2, 0x15, 0x16, 0x2, 
    0x1a5, 0x2, 0x53, 0x3, 0x2, 0x2, 0x2, 0x4, 0x67, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x8, 0x76, 0x3, 0x2, 0x2, 0x2, 0xa, 0x7b, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x8e, 0x3, 0x2, 0x2, 0x2, 0xe, 0x9f, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0xab, 0x3, 0x2, 0x2, 0x2, 0x12, 0xb0, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0xbe, 0x3, 0x2, 0x2, 0x2, 0x16, 0xc8, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0xd2, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xe2, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0xf6, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xff, 0x3, 0x2, 0x2, 0x2, 0x20, 0x109, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x24, 0x112, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0x114, 0x3, 0x2, 0x2, 0x2, 0x28, 0x116, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0x122, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x124, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0x126, 0x3, 0x2, 0x2, 0x2, 0x30, 0x131, 0x3, 0x2, 0x2, 0x2, 
    0x32, 0x136, 0x3, 0x2, 0x2, 0x2, 0x34, 0x141, 0x3, 0x2, 0x2, 0x2, 0x36, 
    0x146, 0x3, 0x2, 0x2, 0x2, 0x38, 0x152, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x154, 
    0x3, 0x2, 0x2, 0x2, 0x3c, 0x156, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x15a, 0x3, 
    0x2, 0x2, 0x2, 0x40, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x42, 0x16b, 0x3, 0x2, 
    0x2, 0x2, 0x44, 0x173, 0x3, 0x2, 0x2, 0x2, 0x46, 0x175, 0x3, 0x2, 0x2, 
    0x2, 0x48, 0x180, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x183, 0x3, 0x2, 0x2, 0x2, 
    0x4c, 0x186, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x50, 
    0x52, 0x5, 0x4, 0x3, 0x2, 0x51, 0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 0x55, 
    0x3, 0x2, 0x2, 0x2, 0x53, 0x51, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x3, 
    0x2, 0x2, 0x2, 0x54, 0x64, 0x3, 0x2, 0x2, 0x2, 0x55, 0x53, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x63, 0x5, 0x6, 0x4, 0x2, 0x57, 0x63, 0x5, 0xa, 0x6, 
    0x2, 0x58, 0x63, 0x5, 0xc, 0x7, 0x2, 0x59, 0x63, 0x5, 0xe, 0x8, 0x2, 
    0x5a, 0x63, 0x5, 0x10, 0x9, 0x2, 0x5b, 0x63, 0x5, 0x48, 0x25, 0x2, 0x5c, 
    0x63, 0x5, 0x4a, 0x26, 0x2, 0x5d, 0x63, 0x5, 0x8, 0x5, 0x2, 0x5e, 0x63, 
    0x5, 0x14, 0xb, 0x2, 0x5f, 0x63, 0x5, 0x18, 0xd, 0x2, 0x60, 0x63, 0x5, 
    0x3c, 0x1f, 0x2, 0x61, 0x63, 0x7, 0x18, 0x2, 0x2, 0x62, 0x56, 0x3, 0x2, 
    0x2, 0x2, 0x62, 0x57, 0x3, 0x2, 0x2, 0x2, 0x62, 0x58, 0x3, 0x2, 0x2, 
    0x2, 0x62, 0x59, 0x3, 0x2, 0x2, 0x2, 0x62, 0x5a, 0x3, 0x2, 0x2, 0x2, 
    0x62, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x62, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x5d, 0x3, 0x2, 0x2, 0x2, 0x62, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x62, 0x5f, 
    0x3, 0x2, 0x2, 0x2, 0x62, 0x60, 0x3, 0x2, 0x2, 0x2, 0x62, 0x61, 0x3, 
    0x2, 0x2, 0x2, 0x63, 0x66, 0x3, 0x2, 0x2, 0x2, 0x64, 0x62, 0x3, 0x2, 
    0x2, 0x2, 0x64, 0x65, 0x3, 0x2, 0x2, 0x2, 0x65, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x66, 0x64, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x7, 0x3, 0x2, 0x2, 
    0x68, 0x69, 0x7, 0x12, 0x2, 0x2, 0x69, 0x6a, 0x7, 0x1b, 0x2, 0x2, 0x6a, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x7, 0x4, 0x2, 0x2, 0x6c, 0x71, 
    0x7, 0x14, 0x2, 0x2, 0x6d, 0x6e, 0x7, 0x1d, 0x2, 0x2, 0x6e, 0x70, 0x7, 
    0x14, 0x2, 0x2, 0x6f, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x70, 0x73, 0x3, 0x2, 
    0x2, 0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x3, 0x2, 0x2, 
    0x2, 0x72, 0x74, 0x3, 0x2, 0x2, 0x2, 0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 
    0x74, 0x75, 0x7, 0x1b, 0x2, 0x2, 0x75, 0x7, 0x3, 0x2, 0x2, 0x2, 0x76, 
    0x77, 0x7, 0x5, 0x2, 0x2, 0x77, 0x78, 0x7, 0x12, 0x2, 0x2, 0x78, 0x79, 
    0x7, 0x1b, 0x2, 0x2, 0x79, 0x9, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7c, 0x7, 
    0x18, 0x2, 0x2, 0x7b, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 
    0x2, 0x2, 0x7c, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7f, 0x7, 0x19, 0x2, 
    0x2, 0x7e, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x3, 0x2, 0x2, 0x2, 
    0x7f, 0x80, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x9, 0x2, 0x2, 0x2, 0x81, 
    0x82, 0x7, 0x14, 0x2, 0x2, 0x82, 0x83, 0x5, 0x38, 0x1d, 0x2, 0x83, 0x88, 
    0x7, 0x20, 0x2, 0x2, 0x84, 0x87, 0x5, 0x12, 0xa, 0x2, 0x85, 0x87, 0x5, 
    0x1a, 0xe, 0x2, 0x86, 0x84, 0x3, 0x2, 0x2, 0x2, 0x86, 0x85, 0x3, 0x2, 
    0x2, 0x2, 0x87, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x88, 0x86, 0x3, 0x2, 0x2, 
    0x2, 0x88, 0x89, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8b, 0x3, 0x2, 0x2, 0x2, 
    0x8a, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x7, 0x21, 0x2, 0x2, 0x8c, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8f, 0x7, 0x18, 0x2, 0x2, 0x8e, 0x8d, 
    0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x91, 0x3, 
    0x2, 0x2, 0x2, 0x90, 0x92, 0x7, 0x19, 0x2, 0x2, 0x91, 0x90, 0x3, 0x2, 
    0x2, 0x2, 0x91, 0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x3, 0x2, 0x2, 
    0x2, 0x93, 0x94, 0x7, 0x8, 0x2, 0x2, 0x94, 0x97, 0x7, 0x14, 0x2, 0x2, 
    0x95, 0x96, 0x7, 0x1c, 0x2, 0x2, 0x96, 0x98, 0x5, 0x2a, 0x16, 0x2, 0x97, 
    0x95, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 
    0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x5, 0x38, 0x1d, 0x2, 0x9a, 0x9b, 0x7, 
    0x20, 0x2, 0x2, 0x9b, 0x9c, 0x5, 0x32, 0x1a, 0x2, 0x9c, 0x9d, 0x7, 0x21, 
    0x2, 0x2, 0x9d, 0xd, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa0, 0x7, 0x18, 0x2, 
    0x2, 0x9f, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x3, 0x2, 0x2, 0x2, 
    0xa0, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa3, 0x7, 0x19, 0x2, 0x2, 0xa2, 
    0xa1, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 
    0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x7, 0x9, 0x2, 0x2, 0xa5, 0xa6, 0x7, 
    0x14, 0x2, 0x2, 0xa6, 0xa7, 0x5, 0x38, 0x1d, 0x2, 0xa7, 0xa8, 0x7, 0x20, 
    0x2, 0x2, 0xa8, 0xa9, 0x5, 0x2e, 0x18, 0x2, 0xa9, 0xaa, 0x7, 0x21, 0x2, 
    0x2, 0xaa, 0xf, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x7, 0xe, 0x2, 0x2, 
    0xac, 0xad, 0x7, 0x14, 0x2, 0x2, 0xad, 0xae, 0x7, 0x1b, 0x2, 0x2, 0xae, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb1, 0x7, 0x18, 0x2, 0x2, 0xb0, 0xaf, 
    0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 0x3, 
    0x2, 0x2, 0x2, 0xb2, 0xb3, 0x7, 0x14, 0x2, 0x2, 0xb3, 0xb4, 0x7, 0x1c, 
    0x2, 0x2, 0xb4, 0xb7, 0x5, 0x2a, 0x16, 0x2, 0xb5, 0xb6, 0x7, 0x1f, 0x2, 
    0x2, 0xb6, 0xb8, 0x5, 0x3a, 0x1e, 0x2, 0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 
    0xb7, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb9, 
    0xba, 0x5, 0x38, 0x1d, 0x2, 0xba, 0xbc, 0x7, 0x1b, 0x2, 0x2, 0xbb, 0xbd, 
    0x7, 0x19, 0x2, 0x2, 0xbc, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x3, 
    0x2, 0x2, 0x2, 0xbd, 0x13, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x7, 0xf, 
    0x2, 0x2, 0xbf, 0xc0, 0x7, 0x14, 0x2, 0x2, 0xc0, 0xc2, 0x7, 0x20, 0x2, 
    0x2, 0xc1, 0xc3, 0x5, 0x16, 0xc, 0x2, 0xc2, 0xc1, 0x3, 0x2, 0x2, 0x2, 
    0xc3, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc4, 
    0xc5, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 
    0x7, 0x21, 0x2, 0x2, 0xc7, 0x15, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x7, 
    0x14, 0x2, 0x2, 0xc9, 0xca, 0x7, 0x24, 0x2, 0x2, 0xca, 0xcb, 0x7, 0x14, 
    0x2, 0x2, 0xcb, 0xcc, 0x7, 0x25, 0x2, 0x2, 0xcc, 0xcd, 0x7, 0x1c, 0x2, 
    0x2, 0xcd, 0xce, 0x7, 0x14, 0x2, 0x2, 0xce, 0xcf, 0x5, 0x38, 0x1d, 0x2, 
    0xcf, 0xd0, 0x7, 0x1b, 0x2, 0x2, 0xd0, 0x17, 0x3, 0x2, 0x2, 0x2, 0xd1, 
    0xd3, 0x7, 0x18, 0x2, 0x2, 0xd2, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 
    0x3, 0x2, 0x2, 0x2, 0xd3, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd6, 0x7, 
    0x19, 0x2, 0x2, 0xd5, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x3, 0x2, 
    0x2, 0x2, 0xd6, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x7, 0xa, 0x2, 
    0x2, 0xd8, 0xd9, 0x7, 0x14, 0x2, 0x2, 0xd9, 0xdb, 0x7, 0x20, 0x2, 0x2, 
    0xda, 0xdc, 0x5, 0x1a, 0xe, 0x2, 0xdb, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdc, 
    0xdd, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 
    0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x7, 
    0x21, 0x2, 0x2, 0xe0, 0x19, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe3, 0x7, 0x18, 
    0x2, 0x2, 0xe2, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 0x3, 0x2, 0x2, 
    0x2, 0xe3, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe7, 0x5, 0x26, 0x14, 0x2, 
    0xe5, 0xe7, 0x5, 0x24, 0x13, 0x2, 0xe6, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe6, 
    0xe5, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 
    0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 0x7, 0x14, 0x2, 0x2, 0xe9, 0xea, 0x7, 
    0x24, 0x2, 0x2, 0xea, 0xeb, 0x5, 0x1c, 0xf, 0x2, 0xeb, 0xee, 0x7, 0x25, 
    0x2, 0x2, 0xec, 0xed, 0x7, 0x1c, 0x2, 0x2, 0xed, 0xef, 0x5, 0x20, 0x11, 
    0x2, 0xee, 0xec, 0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0x3, 0x2, 0x2, 0x2, 
    0xef, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x5, 0x38, 0x1d, 0x2, 0xf1, 
    0xf3, 0x7, 0x1b, 0x2, 0x2, 0xf2, 0xf4, 0x7, 0x19, 0x2, 0x2, 0xf3, 0xf2, 
    0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf4, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0xf5, 0xf7, 0x5, 0x1e, 0x10, 0x2, 0xf6, 0xf5, 0x3, 0x2, 
    0x2, 0x2, 0xf6, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xfc, 0x3, 0x2, 0x2, 
    0x2, 0xf8, 0xf9, 0x7, 0x1e, 0x2, 0x2, 0xf9, 0xfb, 0x5, 0x1e, 0x10, 0x2, 
    0xfa, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfc, 
    0xfa, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfd, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0xfe, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 0x7, 
    0x14, 0x2, 0x2, 0x100, 0x102, 0x7, 0x1c, 0x2, 0x2, 0x101, 0x103, 0x5, 
    0x28, 0x15, 0x2, 0x102, 0x101, 0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x3, 
    0x2, 0x2, 0x2, 0x103, 0x105, 0x3, 0x2, 0x2, 0x2, 0x104, 0x106, 0x5, 
    0x24, 0x13, 0x2, 0x105, 0x104, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x3, 
    0x2, 0x2, 0x2, 0x106, 0x107, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x5, 
    0x22, 0x12, 0x2, 0x108, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 0x5, 
    0x22, 0x12, 0x2, 0x10a, 0x21, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10d, 0x5, 
    0x28, 0x15, 0x2, 0x10c, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 0x3, 
    0x2, 0x2, 0x2, 0x10d, 0x110, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x111, 0x7, 
    0x13, 0x2, 0x2, 0x10f, 0x111, 0x5, 0x4c, 0x27, 0x2, 0x110, 0x10e, 0x3, 
    0x2, 0x2, 0x2, 0x110, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x111, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0x112, 0x113, 0x7, 0xb, 0x2, 0x2, 0x113, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0x114, 0x115, 0x7, 0xc, 0x2, 0x2, 0x115, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0x116, 0x117, 0x7, 0xd, 0x2, 0x2, 0x117, 0x29, 0x3, 0x2, 0x2, 0x2, 0x118, 
    0x119, 0x7, 0x22, 0x2, 0x2, 0x119, 0x11c, 0x5, 0x2a, 0x16, 0x2, 0x11a, 
    0x11b, 0x7, 0x1c, 0x2, 0x2, 0x11b, 0x11d, 0x5, 0x4e, 0x28, 0x2, 0x11c, 
    0x11a, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11d, 
    0x11e, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 0x7, 0x23, 0x2, 0x2, 0x11f, 
    0x123, 0x3, 0x2, 0x2, 0x2, 0x120, 0x123, 0x7, 0x13, 0x2, 0x2, 0x121, 
    0x123, 0x5, 0x4c, 0x27, 0x2, 0x122, 0x118, 0x3, 0x2, 0x2, 0x2, 0x122, 
    0x120, 0x3, 0x2, 0x2, 0x2, 0x122, 0x121, 0x3, 0x2, 0x2, 0x2, 0x123, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 0x5, 0x2a, 0x16, 0x2, 0x125, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0x126, 0x12b, 0x5, 0x2c, 0x17, 0x2, 0x127, 
    0x128, 0x7, 0x1e, 0x2, 0x2, 0x128, 0x12a, 0x5, 0x2c, 0x17, 0x2, 0x129, 
    0x127, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12b, 
    0x129, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12c, 
    0x12f, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12e, 
    0x130, 0x7, 0x1e, 0x2, 0x2, 0x12f, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x12f, 
    0x130, 0x3, 0x2, 0x2, 0x2, 0x130, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x131, 0x134, 
    0x5, 0x4c, 0x27, 0x2, 0x132, 0x133, 0x7, 0x1f, 0x2, 0x2, 0x133, 0x135, 
    0x5, 0x4e, 0x28, 0x2, 0x134, 0x132, 0x3, 0x2, 0x2, 0x2, 0x134, 0x135, 
    0x3, 0x2, 0x2, 0x2, 0x135, 0x31, 0x3, 0x2, 0x2, 0x2, 0x136, 0x13b, 0x5, 
    0x30, 0x19, 0x2, 0x137, 0x138, 0x7, 0x1e, 0x2, 0x2, 0x138, 0x13a, 0x5, 
    0x30, 0x19, 0x2, 0x139, 0x137, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13d, 0x3, 
    0x2, 0x2, 0x2, 0x13b, 0x139, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 0x3, 
    0x2, 0x2, 0x2, 0x13c, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13b, 0x3, 
    0x2, 0x2, 0x2, 0x13e, 0x140, 0x7, 0x1e, 0x2, 0x2, 0x13f, 0x13e, 0x3, 
    0x2, 0x2, 0x2, 0x13f, 0x140, 0x3, 0x2, 0x2, 0x2, 0x140, 0x33, 0x3, 0x2, 
    0x2, 0x2, 0x141, 0x144, 0x7, 0x14, 0x2, 0x2, 0x142, 0x143, 0x7, 0x1c, 
    0x2, 0x2, 0x143, 0x145, 0x5, 0x42, 0x22, 0x2, 0x144, 0x142, 0x3, 0x2, 
    0x2, 0x2, 0x144, 0x145, 0x3, 0x2, 0x2, 0x2, 0x145, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x146, 0x14b, 0x5, 0x34, 0x1b, 0x2, 0x147, 0x148, 0x7, 0x1e, 0x2, 
    0x2, 0x148, 0x14a, 0x5, 0x34, 0x1b, 0x2, 0x149, 0x147, 0x3, 0x2, 0x2, 
    0x2, 0x14a, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x149, 0x3, 0x2, 0x2, 
    0x2, 0x14b, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x37, 0x3, 0x2, 0x2, 0x2, 
    0x14d, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14f, 0x7, 0x24, 0x2, 0x2, 
    0x14f, 0x150, 0x5, 0x36, 0x1c, 0x2, 0x150, 0x151, 0x7, 0x25, 0x2, 0x2, 
    0x151, 0x153, 0x3, 0x2, 0x2, 0x2, 0x152, 0x14e, 0x3, 0x2, 0x2, 0x2, 
    0x152, 0x153, 0x3, 0x2, 0x2, 0x2, 0x153, 0x39, 0x3, 0x2, 0x2, 0x2, 0x154, 
    0x155, 0x9, 0x3, 0x2, 0x2, 0x155, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x156, 0x157, 
    0x7, 0x20, 0x2, 0x2, 0x157, 0x158, 0x5, 0x40, 0x21, 0x2, 0x158, 0x159, 
    0x7, 0x21, 0x2, 0x2, 0x159, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x15b, 
    0x7, 0x14, 0x2, 0x2, 0x15b, 0x15c, 0x7, 0x1c, 0x2, 0x2, 0x15c, 0x15d, 
    0x5, 0x44, 0x23, 0x2, 0x15d, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x163, 
    0x5, 0x3e, 0x20, 0x2, 0x15f, 0x160, 0x7, 0x1e, 0x2, 0x2, 0x160, 0x162, 
    0x5, 0x3e, 0x20, 0x2, 0x161, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x162, 0x165, 
    0x3, 0x2, 0x2, 0x2, 0x163, 0x161, 0x3, 0x2, 0x2, 0x2, 0x163, 0x164, 
    0x3, 0x2, 0x2, 0x2, 0x164, 0x167, 0x3, 0x2, 0x2, 0x2, 0x165, 0x163, 
    0x3, 0x2, 0x2, 0x2, 0x166, 0x168, 0x7, 0x1e, 0x2, 0x2, 0x167, 0x166, 
    0x3, 0x2, 0x2, 0x2, 0x167, 0x168, 0x3, 0x2, 0x2, 0x2, 0x168, 0x41, 0x3, 
    0x2, 0x2, 0x2, 0x169, 0x16c, 0x5, 0x3a, 0x1e, 0x2, 0x16a, 0x16c, 0x7, 
    0x12, 0x2, 0x2, 0x16b, 0x169, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16a, 0x3, 
    0x2, 0x2, 0x2, 0x16c, 0x43, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x174, 0x5, 0x42, 
    0x22, 0x2, 0x16e, 0x174, 0x5, 0x3c, 0x1f, 0x2, 0x16f, 0x170, 0x7, 0x22, 
    0x2, 0x2, 0x170, 0x171, 0x5, 0x46, 0x24, 0x2, 0x171, 0x172, 0x7, 0x23, 
    0x2, 0x2, 0x172, 0x174, 0x3, 0x2, 0x2, 0x2, 0x173, 0x16d, 0x3, 0x2, 
    0x2, 0x2, 0x173, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x173, 0x16f, 0x3, 0x2, 
    0x2, 0x2, 0x174, 0x45, 0x3, 0x2, 0x2, 0x2, 0x175, 0x17a, 0x5, 0x44, 
    0x23, 0x2, 0x176, 0x177, 0x7, 0x1e, 0x2, 0x2, 0x177, 0x179, 0x5, 0x44, 
    0x23, 0x2, 0x178, 0x176, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17c, 0x3, 0x2, 
    0x2, 0x2, 0x17a, 0x178, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17b, 0x3, 0x2, 
    0x2, 0x2, 0x17b, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17a, 0x3, 0x2, 
    0x2, 0x2, 0x17d, 0x17f, 0x7, 0x1e, 0x2, 0x2, 0x17e, 0x17d, 0x3, 0x2, 
    0x2, 0x2, 0x17e, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x47, 0x3, 0x2, 0x2, 
    0x2, 0x180, 0x181, 0x7, 0x10, 0x2, 0x2, 0x181, 0x182, 0x7, 0x12, 0x2, 
    0x2, 0x182, 0x49, 0x3, 0x2, 0x2, 0x2, 0x183, 0x184, 0x7, 0x11, 0x2, 
    0x2, 0x184, 0x185, 0x7, 0x12, 0x2, 0x2, 0x185, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x186, 0x18b, 0x7, 0x14, 0x2, 0x2, 0x187, 0x188, 0x7, 0x1d, 0x2, 
    0x2, 0x188, 0x18a, 0x7, 0x14, 0x2, 0x2, 0x189, 0x187, 0x3, 0x2, 0x2, 
    0x2, 0x18a, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x189, 0x3, 0x2, 0x2, 
    0x2, 0x18b, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x4d, 0x3, 0x2, 0x2, 0x2, 
    0x18d, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18f, 0x9, 0x4, 0x2, 0x2, 
    0x18f, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x31, 0x53, 0x62, 0x64, 0x71, 0x7b, 
    0x7e, 0x86, 0x88, 0x8e, 0x91, 0x97, 0x9f, 0xa2, 0xb0, 0xb7, 0xbc, 0xc4, 
    0xd2, 0xd5, 0xdd, 0xe2, 0xe6, 0xee, 0xf3, 0xf6, 0xfc, 0x102, 0x105, 
    0x10c, 0x110, 0x11c, 0x122, 0x12b, 0x12f, 0x134, 0x13b, 0x13f, 0x144, 
    0x14b, 0x152, 0x163, 0x167, 0x16b, 0x173, 0x17a, 0x17e, 0x18b, 
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
