
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

  virtual antlrcpp::Any visitSchema(FlatBuffersParser::SchemaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInclude(FlatBuffersParser::IncludeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamespace_decl(FlatBuffersParser::Namespace_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttribute_decl(FlatBuffersParser::Attribute_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_decl(FlatBuffersParser::Type_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnum_decl(FlatBuffersParser::Enum_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoot_decl(FlatBuffersParser::Root_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitField_decl(FlatBuffersParser::Field_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRpc_decl(FlatBuffersParser::Rpc_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRpc_method(FlatBuffersParser::Rpc_methodContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(FlatBuffersParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumval_decl(FlatBuffersParser::Enumval_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommasep_enumval_decl(FlatBuffersParser::Commasep_enumval_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdent_with_opt_single_value(FlatBuffersParser::Ident_with_opt_single_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommasep_ident_with_opt_single_value(FlatBuffersParser::Commasep_ident_with_opt_single_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMetadata(FlatBuffersParser::MetadataContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScalar(FlatBuffersParser::ScalarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitObject(FlatBuffersParser::ObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdent_with_value(FlatBuffersParser::Ident_with_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommasep_ident_with_value(FlatBuffersParser::Commasep_ident_with_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingle_value(FlatBuffersParser::Single_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue(FlatBuffersParser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommasep_value(FlatBuffersParser::Commasep_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFile_extension_decl(FlatBuffersParser::File_extension_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFile_identifier_decl(FlatBuffersParser::File_identifier_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNs_ident(FlatBuffersParser::Ns_identContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInteger_const(FlatBuffersParser::Integer_constContext *ctx) override {
    return visitChildren(ctx);
  }


};

