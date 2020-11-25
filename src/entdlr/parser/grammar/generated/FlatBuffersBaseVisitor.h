
// Generated from FlatBuffers.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "FlatBuffersVisitor.h"


/**
 * This class provides an empty implementation of FlatBuffersVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  FlatBuffersBaseVisitor : public FlatBuffersVisitor {
public:

  virtual antlrcpp::Any visitSchema(FlatBuffers::SchemaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInclude(FlatBuffers::IncludeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamespace_decl(FlatBuffers::Namespace_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttribute_decl(FlatBuffers::Attribute_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_decl(FlatBuffers::Type_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnum_decl(FlatBuffers::Enum_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnion_decl(FlatBuffers::Union_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoot_decl(FlatBuffers::Root_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitField_decl(FlatBuffers::Field_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRpc_decl(FlatBuffers::Rpc_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRpc_method(FlatBuffers::Rpc_methodContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterface_decl(FlatBuffers::Interface_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethod_decl(FlatBuffers::Method_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethod_parameters(FlatBuffers::Method_parametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethod_parameter(FlatBuffers::Method_parameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethod_return_type(FlatBuffers::Method_return_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethod_type(FlatBuffers::Method_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMutable_decl(FlatBuffers::Mutable_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatic_decl(FlatBuffers::Static_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReference_decl(FlatBuffers::Reference_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(FlatBuffers::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUniontype_decl(FlatBuffers::Uniontype_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommasep_uniontype_decl(FlatBuffers::Commasep_uniontype_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumval_decl(FlatBuffers::Enumval_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommasep_enumval_decl(FlatBuffers::Commasep_enumval_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdent_with_opt_single_value(FlatBuffers::Ident_with_opt_single_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommasep_ident_with_opt_single_value(FlatBuffers::Commasep_ident_with_opt_single_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMetadata(FlatBuffers::MetadataContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScalar(FlatBuffers::ScalarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitObject(FlatBuffers::ObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdent_with_value(FlatBuffers::Ident_with_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommasep_ident_with_value(FlatBuffers::Commasep_ident_with_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingle_value(FlatBuffers::Single_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue(FlatBuffers::ValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommasep_value(FlatBuffers::Commasep_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFile_extension_decl(FlatBuffers::File_extension_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFile_identifier_decl(FlatBuffers::File_identifier_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNs_ident(FlatBuffers::Ns_identContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInteger_const(FlatBuffers::Integer_constContext *ctx) override {
    return visitChildren(ctx);
  }


};

