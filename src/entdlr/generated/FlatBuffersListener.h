
// Generated from FlatBuffers.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "FlatBuffersParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by FlatBuffersParser.
 */
class  FlatBuffersListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterSchema(FlatBuffersParser::SchemaContext *ctx) = 0;
  virtual void exitSchema(FlatBuffersParser::SchemaContext *ctx) = 0;

  virtual void enterInclude(FlatBuffersParser::IncludeContext *ctx) = 0;
  virtual void exitInclude(FlatBuffersParser::IncludeContext *ctx) = 0;

  virtual void enterNamespace_decl(FlatBuffersParser::Namespace_declContext *ctx) = 0;
  virtual void exitNamespace_decl(FlatBuffersParser::Namespace_declContext *ctx) = 0;

  virtual void enterAttribute_decl(FlatBuffersParser::Attribute_declContext *ctx) = 0;
  virtual void exitAttribute_decl(FlatBuffersParser::Attribute_declContext *ctx) = 0;

  virtual void enterType_decl(FlatBuffersParser::Type_declContext *ctx) = 0;
  virtual void exitType_decl(FlatBuffersParser::Type_declContext *ctx) = 0;

  virtual void enterEnum_decl(FlatBuffersParser::Enum_declContext *ctx) = 0;
  virtual void exitEnum_decl(FlatBuffersParser::Enum_declContext *ctx) = 0;

  virtual void enterRoot_decl(FlatBuffersParser::Root_declContext *ctx) = 0;
  virtual void exitRoot_decl(FlatBuffersParser::Root_declContext *ctx) = 0;

  virtual void enterField_decl(FlatBuffersParser::Field_declContext *ctx) = 0;
  virtual void exitField_decl(FlatBuffersParser::Field_declContext *ctx) = 0;

  virtual void enterRpc_decl(FlatBuffersParser::Rpc_declContext *ctx) = 0;
  virtual void exitRpc_decl(FlatBuffersParser::Rpc_declContext *ctx) = 0;

  virtual void enterRpc_method(FlatBuffersParser::Rpc_methodContext *ctx) = 0;
  virtual void exitRpc_method(FlatBuffersParser::Rpc_methodContext *ctx) = 0;

  virtual void enterType(FlatBuffersParser::TypeContext *ctx) = 0;
  virtual void exitType(FlatBuffersParser::TypeContext *ctx) = 0;

  virtual void enterEnumval_decl(FlatBuffersParser::Enumval_declContext *ctx) = 0;
  virtual void exitEnumval_decl(FlatBuffersParser::Enumval_declContext *ctx) = 0;

  virtual void enterCommasep_enumval_decl(FlatBuffersParser::Commasep_enumval_declContext *ctx) = 0;
  virtual void exitCommasep_enumval_decl(FlatBuffersParser::Commasep_enumval_declContext *ctx) = 0;

  virtual void enterIdent_with_opt_single_value(FlatBuffersParser::Ident_with_opt_single_valueContext *ctx) = 0;
  virtual void exitIdent_with_opt_single_value(FlatBuffersParser::Ident_with_opt_single_valueContext *ctx) = 0;

  virtual void enterCommasep_ident_with_opt_single_value(FlatBuffersParser::Commasep_ident_with_opt_single_valueContext *ctx) = 0;
  virtual void exitCommasep_ident_with_opt_single_value(FlatBuffersParser::Commasep_ident_with_opt_single_valueContext *ctx) = 0;

  virtual void enterMetadata(FlatBuffersParser::MetadataContext *ctx) = 0;
  virtual void exitMetadata(FlatBuffersParser::MetadataContext *ctx) = 0;

  virtual void enterScalar(FlatBuffersParser::ScalarContext *ctx) = 0;
  virtual void exitScalar(FlatBuffersParser::ScalarContext *ctx) = 0;

  virtual void enterObject(FlatBuffersParser::ObjectContext *ctx) = 0;
  virtual void exitObject(FlatBuffersParser::ObjectContext *ctx) = 0;

  virtual void enterIdent_with_value(FlatBuffersParser::Ident_with_valueContext *ctx) = 0;
  virtual void exitIdent_with_value(FlatBuffersParser::Ident_with_valueContext *ctx) = 0;

  virtual void enterCommasep_ident_with_value(FlatBuffersParser::Commasep_ident_with_valueContext *ctx) = 0;
  virtual void exitCommasep_ident_with_value(FlatBuffersParser::Commasep_ident_with_valueContext *ctx) = 0;

  virtual void enterSingle_value(FlatBuffersParser::Single_valueContext *ctx) = 0;
  virtual void exitSingle_value(FlatBuffersParser::Single_valueContext *ctx) = 0;

  virtual void enterValue(FlatBuffersParser::ValueContext *ctx) = 0;
  virtual void exitValue(FlatBuffersParser::ValueContext *ctx) = 0;

  virtual void enterCommasep_value(FlatBuffersParser::Commasep_valueContext *ctx) = 0;
  virtual void exitCommasep_value(FlatBuffersParser::Commasep_valueContext *ctx) = 0;

  virtual void enterFile_extension_decl(FlatBuffersParser::File_extension_declContext *ctx) = 0;
  virtual void exitFile_extension_decl(FlatBuffersParser::File_extension_declContext *ctx) = 0;

  virtual void enterFile_identifier_decl(FlatBuffersParser::File_identifier_declContext *ctx) = 0;
  virtual void exitFile_identifier_decl(FlatBuffersParser::File_identifier_declContext *ctx) = 0;

  virtual void enterNs_ident(FlatBuffersParser::Ns_identContext *ctx) = 0;
  virtual void exitNs_ident(FlatBuffersParser::Ns_identContext *ctx) = 0;

  virtual void enterInteger_const(FlatBuffersParser::Integer_constContext *ctx) = 0;
  virtual void exitInteger_const(FlatBuffersParser::Integer_constContext *ctx) = 0;


};

