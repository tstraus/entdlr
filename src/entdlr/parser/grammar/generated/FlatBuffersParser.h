
// Generated from FlatBuffers.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  FlatBuffersParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    STRING_CONSTANT = 27, BASE_TYPE_NAME = 28, IDENT = 29, HEX_INTEGER_CONSTANT = 30, 
    INTEGER_CONSTANT = 31, FLOAT_CONSTANT = 32, BLOCK_COMMENT = 33, DOC_COMMENT = 34, 
    COMMENT = 35, WHITESPACE = 36
  };

  enum {
    RuleSchema = 0, RuleInclude = 1, RuleNamespace_decl = 2, RuleAttribute_decl = 3, 
    RuleType_decl = 4, RuleEnum_decl = 5, RuleUnion_decl = 6, RuleRoot_decl = 7, 
    RuleField_decl = 8, RuleRpc_decl = 9, RuleRpc_method = 10, RuleInterface_decl = 11, 
    RuleMethod_decl = 12, RuleMethod_parameters = 13, RuleMethod_parameter = 14, 
    RuleMethod_return_type = 15, RuleMethod_type = 16, RuleMutable_decl = 17, 
    RuleStatic_decl = 18, RuleReference_decl = 19, RuleType = 20, RuleUniontype_decl = 21, 
    RuleCommasep_uniontype_decl = 22, RuleEnumval_decl = 23, RuleCommasep_enumval_decl = 24, 
    RuleIdent_with_opt_single_value = 25, RuleCommasep_ident_with_opt_single_value = 26, 
    RuleMetadata = 27, RuleScalar = 28, RuleObject = 29, RuleIdent_with_value = 30, 
    RuleCommasep_ident_with_value = 31, RuleSingle_value = 32, RuleValue = 33, 
    RuleCommasep_value = 34, RuleFile_extension_decl = 35, RuleFile_identifier_decl = 36, 
    RuleNs_ident = 37, RuleInteger_const = 38
  };

  FlatBuffersParser(antlr4::TokenStream *input);
  ~FlatBuffersParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class SchemaContext;
  class IncludeContext;
  class Namespace_declContext;
  class Attribute_declContext;
  class Type_declContext;
  class Enum_declContext;
  class Union_declContext;
  class Root_declContext;
  class Field_declContext;
  class Rpc_declContext;
  class Rpc_methodContext;
  class Interface_declContext;
  class Method_declContext;
  class Method_parametersContext;
  class Method_parameterContext;
  class Method_return_typeContext;
  class Method_typeContext;
  class Mutable_declContext;
  class Static_declContext;
  class Reference_declContext;
  class TypeContext;
  class Uniontype_declContext;
  class Commasep_uniontype_declContext;
  class Enumval_declContext;
  class Commasep_enumval_declContext;
  class Ident_with_opt_single_valueContext;
  class Commasep_ident_with_opt_single_valueContext;
  class MetadataContext;
  class ScalarContext;
  class ObjectContext;
  class Ident_with_valueContext;
  class Commasep_ident_with_valueContext;
  class Single_valueContext;
  class ValueContext;
  class Commasep_valueContext;
  class File_extension_declContext;
  class File_identifier_declContext;
  class Ns_identContext;
  class Integer_constContext; 

  class  SchemaContext : public antlr4::ParserRuleContext {
  public:
    SchemaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IncludeContext *> include();
    IncludeContext* include(size_t i);
    std::vector<Namespace_declContext *> namespace_decl();
    Namespace_declContext* namespace_decl(size_t i);
    std::vector<Type_declContext *> type_decl();
    Type_declContext* type_decl(size_t i);
    std::vector<Enum_declContext *> enum_decl();
    Enum_declContext* enum_decl(size_t i);
    std::vector<Union_declContext *> union_decl();
    Union_declContext* union_decl(size_t i);
    std::vector<Root_declContext *> root_decl();
    Root_declContext* root_decl(size_t i);
    std::vector<File_extension_declContext *> file_extension_decl();
    File_extension_declContext* file_extension_decl(size_t i);
    std::vector<File_identifier_declContext *> file_identifier_decl();
    File_identifier_declContext* file_identifier_decl(size_t i);
    std::vector<Attribute_declContext *> attribute_decl();
    Attribute_declContext* attribute_decl(size_t i);
    std::vector<Rpc_declContext *> rpc_decl();
    Rpc_declContext* rpc_decl(size_t i);
    std::vector<Interface_declContext *> interface_decl();
    Interface_declContext* interface_decl(size_t i);
    std::vector<ObjectContext *> object();
    ObjectContext* object(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SchemaContext* schema();

  class  IncludeContext : public antlr4::ParserRuleContext {
  public:
    IncludeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_CONSTANT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IncludeContext* include();

  class  Namespace_declContext : public antlr4::ParserRuleContext {
  public:
    Namespace_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENT();
    antlr4::tree::TerminalNode* IDENT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Namespace_declContext* namespace_decl();

  class  Attribute_declContext : public antlr4::ParserRuleContext {
  public:
    Attribute_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_CONSTANT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attribute_declContext* attribute_decl();

  class  Type_declContext : public antlr4::ParserRuleContext {
  public:
    Type_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();
    MetadataContext *metadata();
    antlr4::tree::TerminalNode *DOC_COMMENT();
    std::vector<Field_declContext *> field_decl();
    Field_declContext* field_decl(size_t i);
    std::vector<Method_declContext *> method_decl();
    Method_declContext* method_decl(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_declContext* type_decl();

  class  Enum_declContext : public antlr4::ParserRuleContext {
  public:
    Enum_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();
    MetadataContext *metadata();
    Commasep_enumval_declContext *commasep_enumval_decl();
    antlr4::tree::TerminalNode *DOC_COMMENT();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enum_declContext* enum_decl();

  class  Union_declContext : public antlr4::ParserRuleContext {
  public:
    Union_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();
    MetadataContext *metadata();
    Commasep_uniontype_declContext *commasep_uniontype_decl();
    antlr4::tree::TerminalNode *DOC_COMMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Union_declContext* union_decl();

  class  Root_declContext : public antlr4::ParserRuleContext {
  public:
    Root_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Root_declContext* root_decl();

  class  Field_declContext : public antlr4::ParserRuleContext {
  public:
    Field_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();
    TypeContext *type();
    MetadataContext *metadata();
    ScalarContext *scalar();
    antlr4::tree::TerminalNode *DOC_COMMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Field_declContext* field_decl();

  class  Rpc_declContext : public antlr4::ParserRuleContext {
  public:
    Rpc_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();
    std::vector<Rpc_methodContext *> rpc_method();
    Rpc_methodContext* rpc_method(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rpc_declContext* rpc_decl();

  class  Rpc_methodContext : public antlr4::ParserRuleContext {
  public:
    Rpc_methodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENT();
    antlr4::tree::TerminalNode* IDENT(size_t i);
    MetadataContext *metadata();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rpc_methodContext* rpc_method();

  class  Interface_declContext : public antlr4::ParserRuleContext {
  public:
    Interface_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();
    antlr4::tree::TerminalNode *DOC_COMMENT();
    std::vector<Method_declContext *> method_decl();
    Method_declContext* method_decl(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_declContext* interface_decl();

  class  Method_declContext : public antlr4::ParserRuleContext {
  public:
    Method_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();
    Method_parametersContext *method_parameters();
    MetadataContext *metadata();
    Static_declContext *static_decl();
    Mutable_declContext *mutable_decl();
    Method_return_typeContext *method_return_type();
    antlr4::tree::TerminalNode *DOC_COMMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_declContext* method_decl();

  class  Method_parametersContext : public antlr4::ParserRuleContext {
  public:
    Method_parametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Method_parameterContext *> method_parameter();
    Method_parameterContext* method_parameter(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_parametersContext* method_parameters();

  class  Method_parameterContext : public antlr4::ParserRuleContext {
  public:
    Method_parameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();
    Method_typeContext *method_type();
    Reference_declContext *reference_decl();
    Mutable_declContext *mutable_decl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_parameterContext* method_parameter();

  class  Method_return_typeContext : public antlr4::ParserRuleContext {
  public:
    Method_return_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Method_typeContext *method_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_return_typeContext* method_return_type();

  class  Method_typeContext : public antlr4::ParserRuleContext {
  public:
    Method_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BASE_TYPE_NAME();
    Ns_identContext *ns_ident();
    Reference_declContext *reference_decl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_typeContext* method_type();

  class  Mutable_declContext : public antlr4::ParserRuleContext {
  public:
    Mutable_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mutable_declContext* mutable_decl();

  class  Static_declContext : public antlr4::ParserRuleContext {
  public:
    Static_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Static_declContext* static_decl();

  class  Reference_declContext : public antlr4::ParserRuleContext {
  public:
    Reference_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reference_declContext* reference_decl();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    Integer_constContext *integer_const();
    antlr4::tree::TerminalNode *BASE_TYPE_NAME();
    Ns_identContext *ns_ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  Uniontype_declContext : public antlr4::ParserRuleContext {
  public:
    Uniontype_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Uniontype_declContext* uniontype_decl();

  class  Commasep_uniontype_declContext : public antlr4::ParserRuleContext {
  public:
    Commasep_uniontype_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Uniontype_declContext *> uniontype_decl();
    Uniontype_declContext* uniontype_decl(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Commasep_uniontype_declContext* commasep_uniontype_decl();

  class  Enumval_declContext : public antlr4::ParserRuleContext {
  public:
    Enumval_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ns_identContext *ns_ident();
    Integer_constContext *integer_const();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enumval_declContext* enumval_decl();

  class  Commasep_enumval_declContext : public antlr4::ParserRuleContext {
  public:
    Commasep_enumval_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Enumval_declContext *> enumval_decl();
    Enumval_declContext* enumval_decl(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Commasep_enumval_declContext* commasep_enumval_decl();

  class  Ident_with_opt_single_valueContext : public antlr4::ParserRuleContext {
  public:
    Ident_with_opt_single_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();
    Single_valueContext *single_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ident_with_opt_single_valueContext* ident_with_opt_single_value();

  class  Commasep_ident_with_opt_single_valueContext : public antlr4::ParserRuleContext {
  public:
    Commasep_ident_with_opt_single_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ident_with_opt_single_valueContext *> ident_with_opt_single_value();
    Ident_with_opt_single_valueContext* ident_with_opt_single_value(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Commasep_ident_with_opt_single_valueContext* commasep_ident_with_opt_single_value();

  class  MetadataContext : public antlr4::ParserRuleContext {
  public:
    MetadataContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Commasep_ident_with_opt_single_valueContext *commasep_ident_with_opt_single_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MetadataContext* metadata();

  class  ScalarContext : public antlr4::ParserRuleContext {
  public:
    ScalarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER_CONSTANT();
    antlr4::tree::TerminalNode *HEX_INTEGER_CONSTANT();
    antlr4::tree::TerminalNode *FLOAT_CONSTANT();
    antlr4::tree::TerminalNode *IDENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScalarContext* scalar();

  class  ObjectContext : public antlr4::ParserRuleContext {
  public:
    ObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Commasep_ident_with_valueContext *commasep_ident_with_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectContext* object();

  class  Ident_with_valueContext : public antlr4::ParserRuleContext {
  public:
    Ident_with_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENT();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ident_with_valueContext* ident_with_value();

  class  Commasep_ident_with_valueContext : public antlr4::ParserRuleContext {
  public:
    Commasep_ident_with_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ident_with_valueContext *> ident_with_value();
    Ident_with_valueContext* ident_with_value(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Commasep_ident_with_valueContext* commasep_ident_with_value();

  class  Single_valueContext : public antlr4::ParserRuleContext {
  public:
    Single_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ScalarContext *scalar();
    antlr4::tree::TerminalNode *STRING_CONSTANT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Single_valueContext* single_value();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Single_valueContext *single_value();
    ObjectContext *object();
    Commasep_valueContext *commasep_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueContext* value();

  class  Commasep_valueContext : public antlr4::ParserRuleContext {
  public:
    Commasep_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Commasep_valueContext* commasep_value();

  class  File_extension_declContext : public antlr4::ParserRuleContext {
  public:
    File_extension_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_CONSTANT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_extension_declContext* file_extension_decl();

  class  File_identifier_declContext : public antlr4::ParserRuleContext {
  public:
    File_identifier_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_CONSTANT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_identifier_declContext* file_identifier_decl();

  class  Ns_identContext : public antlr4::ParserRuleContext {
  public:
    Ns_identContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENT();
    antlr4::tree::TerminalNode* IDENT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ns_identContext* ns_ident();

  class  Integer_constContext : public antlr4::ParserRuleContext {
  public:
    Integer_constContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER_CONSTANT();
    antlr4::tree::TerminalNode *HEX_INTEGER_CONSTANT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integer_constContext* integer_const();


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

