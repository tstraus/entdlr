
// Generated from entdlr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  entdlrParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, BOOL = 2, BYTES = 3, DOUBLE = 4, ENUM = 5, FIXED32 = 6, FIXED64 = 7, 
    FLOAT = 8, IMPORT = 9, INT32 = 10, INT64 = 11, MAP = 12, MESSAGE = 13, 
    ONEOF = 14, OPTION = 15, PACKAGE = 16, PROTO3_DOUBLE = 17, PROTO3_SINGLE = 18, 
    PUBLIC = 19, REPEATED = 20, RESERVED = 21, RETURNS = 22, RPC = 23, SERVICE = 24, 
    SFIXED32 = 25, SFIXED64 = 26, SINT32 = 27, SINT64 = 28, STREAM = 29, 
    STRING = 30, SYNTAX = 31, TO = 32, UINT32 = 33, UINT64 = 34, WEAK = 35, 
    Ident = 36, IntLit = 37, FloatLit = 38, BoolLit = 39, StrLit = 40, Quote = 41, 
    LPAREN = 42, RPAREN = 43, LBRACE = 44, RBRACE = 45, LBRACK = 46, RBRACK = 47, 
    LCHEVR = 48, RCHEVR = 49, SEMI = 50, COMMA = 51, DOT = 52, MINUS = 53, 
    PLUS = 54, ASSIGN = 55, WS = 56, COMMENT = 57, LINE_COMMENT = 58
  };

  enum {
    RuleProto = 0, RuleSyntax = 1, RuleImportStatement = 2, RulePackageStatement = 3, 
    RuleOption = 4, RuleOptionName = 5, RuleOptionBody = 6, RuleOptionBodyVariable = 7, 
    RuleTopLevelDef = 8, RuleMessage = 9, RuleMessageBody = 10, RuleEnumDefinition = 11, 
    RuleEnumBody = 12, RuleEnumField = 13, RuleEnumValueOption = 14, RuleService = 15, 
    RuleRpc = 16, RuleReserved = 17, RuleRanges = 18, RuleRange = 19, RuleFieldNames = 20, 
    RuleType = 21, RuleFieldNumber = 22, RuleField = 23, RuleFieldOptions = 24, 
    RuleFieldOption = 25, RuleOneof = 26, RuleOneofField = 27, RuleMapField = 28, 
    RuleKeyType = 29, RuleReservedWord = 30, RuleFullIdent = 31, RuleMessageName = 32, 
    RuleEnumName = 33, RuleMessageOrEnumName = 34, RuleFieldName = 35, RuleOneofName = 36, 
    RuleMapName = 37, RuleServiceName = 38, RuleRpcName = 39, RuleMessageType = 40, 
    RuleMessageOrEnumType = 41, RuleEmptyStatement = 42, RuleConstant = 43
  };

  entdlrParser(antlr4::TokenStream *input);
  ~entdlrParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProtoContext;
  class SyntaxContext;
  class ImportStatementContext;
  class PackageStatementContext;
  class OptionContext;
  class OptionNameContext;
  class OptionBodyContext;
  class OptionBodyVariableContext;
  class TopLevelDefContext;
  class MessageContext;
  class MessageBodyContext;
  class EnumDefinitionContext;
  class EnumBodyContext;
  class EnumFieldContext;
  class EnumValueOptionContext;
  class ServiceContext;
  class RpcContext;
  class ReservedContext;
  class RangesContext;
  class RangeContext;
  class FieldNamesContext;
  class TypeContext;
  class FieldNumberContext;
  class FieldContext;
  class FieldOptionsContext;
  class FieldOptionContext;
  class OneofContext;
  class OneofFieldContext;
  class MapFieldContext;
  class KeyTypeContext;
  class ReservedWordContext;
  class FullIdentContext;
  class MessageNameContext;
  class EnumNameContext;
  class MessageOrEnumNameContext;
  class FieldNameContext;
  class OneofNameContext;
  class MapNameContext;
  class ServiceNameContext;
  class RpcNameContext;
  class MessageTypeContext;
  class MessageOrEnumTypeContext;
  class EmptyStatementContext;
  class ConstantContext; 

  class  ProtoContext : public antlr4::ParserRuleContext {
  public:
    ProtoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SyntaxContext *syntax();
    antlr4::tree::TerminalNode *EOF();
    std::vector<ImportStatementContext *> importStatement();
    ImportStatementContext* importStatement(size_t i);
    std::vector<PackageStatementContext *> packageStatement();
    PackageStatementContext* packageStatement(size_t i);
    std::vector<OptionContext *> option();
    OptionContext* option(size_t i);
    std::vector<TopLevelDefContext *> topLevelDef();
    TopLevelDefContext* topLevelDef(size_t i);
    std::vector<EmptyStatementContext *> emptyStatement();
    EmptyStatementContext* emptyStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProtoContext* proto();

  class  SyntaxContext : public antlr4::ParserRuleContext {
  public:
    SyntaxContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SYNTAX();
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *PROTO3_DOUBLE();
    antlr4::tree::TerminalNode *PROTO3_SINGLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SyntaxContext* syntax();

  class  ImportStatementContext : public antlr4::ParserRuleContext {
  public:
    ImportStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *StrLit();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *WEAK();
    antlr4::tree::TerminalNode *PUBLIC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportStatementContext* importStatement();

  class  PackageStatementContext : public antlr4::ParserRuleContext {
  public:
    PackageStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PACKAGE();
    FullIdentContext *fullIdent();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PackageStatementContext* packageStatement();

  class  OptionContext : public antlr4::ParserRuleContext {
  public:
    OptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTION();
    OptionNameContext *optionName();
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *SEMI();
    ConstantContext *constant();
    OptionBodyContext *optionBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionContext* option();

  class  OptionNameContext : public antlr4::ParserRuleContext {
  public:
    OptionNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Ident();
    antlr4::tree::TerminalNode* Ident(size_t i);
    antlr4::tree::TerminalNode *LPAREN();
    FullIdentContext *fullIdent();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<ReservedWordContext *> reservedWord();
    ReservedWordContext* reservedWord(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionNameContext* optionName();

  class  OptionBodyContext : public antlr4::ParserRuleContext {
  public:
    OptionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<OptionBodyVariableContext *> optionBodyVariable();
    OptionBodyVariableContext* optionBodyVariable(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionBodyContext* optionBody();

  class  OptionBodyVariableContext : public antlr4::ParserRuleContext {
  public:
    OptionBodyVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptionNameContext *optionName();
    ConstantContext *constant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionBodyVariableContext* optionBodyVariable();

  class  TopLevelDefContext : public antlr4::ParserRuleContext {
  public:
    TopLevelDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MessageContext *message();
    EnumDefinitionContext *enumDefinition();
    ServiceContext *service();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TopLevelDefContext* topLevelDef();

  class  MessageContext : public antlr4::ParserRuleContext {
  public:
    MessageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MESSAGE();
    MessageNameContext *messageName();
    MessageBodyContext *messageBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MessageContext* message();

  class  MessageBodyContext : public antlr4::ParserRuleContext {
  public:
    MessageBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<FieldContext *> field();
    FieldContext* field(size_t i);
    std::vector<EnumDefinitionContext *> enumDefinition();
    EnumDefinitionContext* enumDefinition(size_t i);
    std::vector<MessageContext *> message();
    MessageContext* message(size_t i);
    std::vector<OptionContext *> option();
    OptionContext* option(size_t i);
    std::vector<OneofContext *> oneof();
    OneofContext* oneof(size_t i);
    std::vector<MapFieldContext *> mapField();
    MapFieldContext* mapField(size_t i);
    std::vector<ReservedContext *> reserved();
    ReservedContext* reserved(size_t i);
    std::vector<EmptyStatementContext *> emptyStatement();
    EmptyStatementContext* emptyStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MessageBodyContext* messageBody();

  class  EnumDefinitionContext : public antlr4::ParserRuleContext {
  public:
    EnumDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENUM();
    EnumNameContext *enumName();
    EnumBodyContext *enumBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumDefinitionContext* enumDefinition();

  class  EnumBodyContext : public antlr4::ParserRuleContext {
  public:
    EnumBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<OptionContext *> option();
    OptionContext* option(size_t i);
    std::vector<EnumFieldContext *> enumField();
    EnumFieldContext* enumField(size_t i);
    std::vector<EmptyStatementContext *> emptyStatement();
    EmptyStatementContext* emptyStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumBodyContext* enumBody();

  class  EnumFieldContext : public antlr4::ParserRuleContext {
  public:
    EnumFieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *IntLit();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *LBRACK();
    std::vector<EnumValueOptionContext *> enumValueOption();
    EnumValueOptionContext* enumValueOption(size_t i);
    antlr4::tree::TerminalNode *RBRACK();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumFieldContext* enumField();

  class  EnumValueOptionContext : public antlr4::ParserRuleContext {
  public:
    EnumValueOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptionNameContext *optionName();
    antlr4::tree::TerminalNode *ASSIGN();
    ConstantContext *constant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumValueOptionContext* enumValueOption();

  class  ServiceContext : public antlr4::ParserRuleContext {
  public:
    ServiceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SERVICE();
    ServiceNameContext *serviceName();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<OptionContext *> option();
    OptionContext* option(size_t i);
    std::vector<RpcContext *> rpc();
    RpcContext* rpc(size_t i);
    std::vector<EmptyStatementContext *> emptyStatement();
    EmptyStatementContext* emptyStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ServiceContext* service();

  class  RpcContext : public antlr4::ParserRuleContext {
  public:
    RpcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RPC();
    RpcNameContext *rpcName();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<MessageTypeContext *> messageType();
    MessageTypeContext* messageType(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> STREAM();
    antlr4::tree::TerminalNode* STREAM(size_t i);
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<OptionContext *> option();
    OptionContext* option(size_t i);
    std::vector<EmptyStatementContext *> emptyStatement();
    EmptyStatementContext* emptyStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RpcContext* rpc();

  class  ReservedContext : public antlr4::ParserRuleContext {
  public:
    ReservedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESERVED();
    antlr4::tree::TerminalNode *SEMI();
    RangesContext *ranges();
    FieldNamesContext *fieldNames();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReservedContext* reserved();

  class  RangesContext : public antlr4::ParserRuleContext {
  public:
    RangesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RangeContext *> range();
    RangeContext* range(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RangesContext* ranges();

  class  RangeContext : public antlr4::ParserRuleContext {
  public:
    RangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IntLit();
    antlr4::tree::TerminalNode* IntLit(size_t i);
    antlr4::tree::TerminalNode *TO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RangeContext* range();

  class  FieldNamesContext : public antlr4::ParserRuleContext {
  public:
    FieldNamesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> StrLit();
    antlr4::tree::TerminalNode* StrLit(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FieldNamesContext* fieldNames();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *INT32();
    antlr4::tree::TerminalNode *INT64();
    antlr4::tree::TerminalNode *UINT32();
    antlr4::tree::TerminalNode *UINT64();
    antlr4::tree::TerminalNode *SINT32();
    antlr4::tree::TerminalNode *SINT64();
    antlr4::tree::TerminalNode *FIXED32();
    antlr4::tree::TerminalNode *FIXED64();
    antlr4::tree::TerminalNode *SFIXED32();
    antlr4::tree::TerminalNode *SFIXED64();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *BYTES();
    MessageOrEnumTypeContext *messageOrEnumType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeContext* type();

  class  FieldNumberContext : public antlr4::ParserRuleContext {
  public:
    FieldNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntLit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FieldNumberContext* fieldNumber();

  class  FieldContext : public antlr4::ParserRuleContext {
  public:
    FieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    FieldNameContext *fieldName();
    antlr4::tree::TerminalNode *ASSIGN();
    FieldNumberContext *fieldNumber();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *REPEATED();
    antlr4::tree::TerminalNode *LBRACK();
    FieldOptionsContext *fieldOptions();
    antlr4::tree::TerminalNode *RBRACK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FieldContext* field();

  class  FieldOptionsContext : public antlr4::ParserRuleContext {
  public:
    FieldOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FieldOptionContext *> fieldOption();
    FieldOptionContext* fieldOption(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FieldOptionsContext* fieldOptions();

  class  FieldOptionContext : public antlr4::ParserRuleContext {
  public:
    FieldOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptionNameContext *optionName();
    antlr4::tree::TerminalNode *ASSIGN();
    ConstantContext *constant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FieldOptionContext* fieldOption();

  class  OneofContext : public antlr4::ParserRuleContext {
  public:
    OneofContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ONEOF();
    OneofNameContext *oneofName();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<OneofFieldContext *> oneofField();
    OneofFieldContext* oneofField(size_t i);
    std::vector<EmptyStatementContext *> emptyStatement();
    EmptyStatementContext* emptyStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OneofContext* oneof();

  class  OneofFieldContext : public antlr4::ParserRuleContext {
  public:
    OneofFieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    FieldNameContext *fieldName();
    antlr4::tree::TerminalNode *ASSIGN();
    FieldNumberContext *fieldNumber();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *LBRACK();
    FieldOptionsContext *fieldOptions();
    antlr4::tree::TerminalNode *RBRACK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OneofFieldContext* oneofField();

  class  MapFieldContext : public antlr4::ParserRuleContext {
  public:
    MapFieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *LCHEVR();
    KeyTypeContext *keyType();
    antlr4::tree::TerminalNode *COMMA();
    TypeContext *type();
    antlr4::tree::TerminalNode *RCHEVR();
    MapNameContext *mapName();
    antlr4::tree::TerminalNode *ASSIGN();
    FieldNumberContext *fieldNumber();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *LBRACK();
    FieldOptionsContext *fieldOptions();
    antlr4::tree::TerminalNode *RBRACK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MapFieldContext* mapField();

  class  KeyTypeContext : public antlr4::ParserRuleContext {
  public:
    KeyTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT32();
    antlr4::tree::TerminalNode *INT64();
    antlr4::tree::TerminalNode *UINT32();
    antlr4::tree::TerminalNode *UINT64();
    antlr4::tree::TerminalNode *SINT32();
    antlr4::tree::TerminalNode *SINT64();
    antlr4::tree::TerminalNode *FIXED32();
    antlr4::tree::TerminalNode *FIXED64();
    antlr4::tree::TerminalNode *SFIXED32();
    antlr4::tree::TerminalNode *SFIXED64();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KeyTypeContext* keyType();

  class  ReservedWordContext : public antlr4::ParserRuleContext {
  public:
    ReservedWordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MESSAGE();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *PACKAGE();
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *STREAM();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *SYNTAX();
    antlr4::tree::TerminalNode *WEAK();
    antlr4::tree::TerminalNode *RPC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReservedWordContext* reservedWord();

  class  FullIdentContext : public antlr4::ParserRuleContext {
  public:
    FullIdentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Ident();
    antlr4::tree::TerminalNode* Ident(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FullIdentContext* fullIdent();

  class  MessageNameContext : public antlr4::ParserRuleContext {
  public:
    MessageNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MessageNameContext* messageName();

  class  EnumNameContext : public antlr4::ParserRuleContext {
  public:
    EnumNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumNameContext* enumName();

  class  MessageOrEnumNameContext : public antlr4::ParserRuleContext {
  public:
    MessageOrEnumNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MessageOrEnumNameContext* messageOrEnumName();

  class  FieldNameContext : public antlr4::ParserRuleContext {
  public:
    FieldNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ident();
    ReservedWordContext *reservedWord();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FieldNameContext* fieldName();

  class  OneofNameContext : public antlr4::ParserRuleContext {
  public:
    OneofNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OneofNameContext* oneofName();

  class  MapNameContext : public antlr4::ParserRuleContext {
  public:
    MapNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MapNameContext* mapName();

  class  ServiceNameContext : public antlr4::ParserRuleContext {
  public:
    ServiceNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ServiceNameContext* serviceName();

  class  RpcNameContext : public antlr4::ParserRuleContext {
  public:
    RpcNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RpcNameContext* rpcName();

  class  MessageTypeContext : public antlr4::ParserRuleContext {
  public:
    MessageTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MessageNameContext *messageName();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Ident();
    antlr4::tree::TerminalNode* Ident(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MessageTypeContext* messageType();

  class  MessageOrEnumTypeContext : public antlr4::ParserRuleContext {
  public:
    MessageOrEnumTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MessageOrEnumNameContext *messageOrEnumName();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Ident();
    antlr4::tree::TerminalNode* Ident(size_t i);
    std::vector<ReservedWordContext *> reservedWord();
    ReservedWordContext* reservedWord(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MessageOrEnumTypeContext* messageOrEnumType();

  class  EmptyStatementContext : public antlr4::ParserRuleContext {
  public:
    EmptyStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EmptyStatementContext* emptyStatement();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FullIdentContext *fullIdent();
    antlr4::tree::TerminalNode *IntLit();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *FloatLit();
    antlr4::tree::TerminalNode *StrLit();
    antlr4::tree::TerminalNode *BoolLit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstantContext* constant();


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

