
// Generated from FlatBuffers.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "FlatBuffers.h"


/**
 * This interface defines an abstract listener for a parse tree produced by FlatBuffers.
 */
class  FlatBuffersListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterSchema(FlatBuffers::SchemaContext *ctx) = 0;
  virtual void exitSchema(FlatBuffers::SchemaContext *ctx) = 0;

  virtual void enterInclude(FlatBuffers::IncludeContext *ctx) = 0;
  virtual void exitInclude(FlatBuffers::IncludeContext *ctx) = 0;

  virtual void enterNamespace_decl(FlatBuffers::Namespace_declContext *ctx) = 0;
  virtual void exitNamespace_decl(FlatBuffers::Namespace_declContext *ctx) = 0;

  virtual void enterAttribute_decl(FlatBuffers::Attribute_declContext *ctx) = 0;
  virtual void exitAttribute_decl(FlatBuffers::Attribute_declContext *ctx) = 0;

  virtual void enterType_decl(FlatBuffers::Type_declContext *ctx) = 0;
  virtual void exitType_decl(FlatBuffers::Type_declContext *ctx) = 0;

  virtual void enterEnum_decl(FlatBuffers::Enum_declContext *ctx) = 0;
  virtual void exitEnum_decl(FlatBuffers::Enum_declContext *ctx) = 0;

  virtual void enterUnion_decl(FlatBuffers::Union_declContext *ctx) = 0;
  virtual void exitUnion_decl(FlatBuffers::Union_declContext *ctx) = 0;

  virtual void enterRoot_decl(FlatBuffers::Root_declContext *ctx) = 0;
  virtual void exitRoot_decl(FlatBuffers::Root_declContext *ctx) = 0;

  virtual void enterField_decl(FlatBuffers::Field_declContext *ctx) = 0;
  virtual void exitField_decl(FlatBuffers::Field_declContext *ctx) = 0;

  virtual void enterRpc_decl(FlatBuffers::Rpc_declContext *ctx) = 0;
  virtual void exitRpc_decl(FlatBuffers::Rpc_declContext *ctx) = 0;

  virtual void enterRpc_method(FlatBuffers::Rpc_methodContext *ctx) = 0;
  virtual void exitRpc_method(FlatBuffers::Rpc_methodContext *ctx) = 0;

  virtual void enterInterface_decl(FlatBuffers::Interface_declContext *ctx) = 0;
  virtual void exitInterface_decl(FlatBuffers::Interface_declContext *ctx) = 0;

  virtual void enterMethod_decl(FlatBuffers::Method_declContext *ctx) = 0;
  virtual void exitMethod_decl(FlatBuffers::Method_declContext *ctx) = 0;

  virtual void enterMethod_parameters(FlatBuffers::Method_parametersContext *ctx) = 0;
  virtual void exitMethod_parameters(FlatBuffers::Method_parametersContext *ctx) = 0;

  virtual void enterMethod_parameter(FlatBuffers::Method_parameterContext *ctx) = 0;
  virtual void exitMethod_parameter(FlatBuffers::Method_parameterContext *ctx) = 0;

  virtual void enterMethod_return_type(FlatBuffers::Method_return_typeContext *ctx) = 0;
  virtual void exitMethod_return_type(FlatBuffers::Method_return_typeContext *ctx) = 0;

  virtual void enterMethod_type(FlatBuffers::Method_typeContext *ctx) = 0;
  virtual void exitMethod_type(FlatBuffers::Method_typeContext *ctx) = 0;

  virtual void enterMutable_decl(FlatBuffers::Mutable_declContext *ctx) = 0;
  virtual void exitMutable_decl(FlatBuffers::Mutable_declContext *ctx) = 0;

  virtual void enterStatic_decl(FlatBuffers::Static_declContext *ctx) = 0;
  virtual void exitStatic_decl(FlatBuffers::Static_declContext *ctx) = 0;

  virtual void enterReference_decl(FlatBuffers::Reference_declContext *ctx) = 0;
  virtual void exitReference_decl(FlatBuffers::Reference_declContext *ctx) = 0;

  virtual void enterType(FlatBuffers::TypeContext *ctx) = 0;
  virtual void exitType(FlatBuffers::TypeContext *ctx) = 0;

  virtual void enterUniontype_decl(FlatBuffers::Uniontype_declContext *ctx) = 0;
  virtual void exitUniontype_decl(FlatBuffers::Uniontype_declContext *ctx) = 0;

  virtual void enterCommasep_uniontype_decl(FlatBuffers::Commasep_uniontype_declContext *ctx) = 0;
  virtual void exitCommasep_uniontype_decl(FlatBuffers::Commasep_uniontype_declContext *ctx) = 0;

  virtual void enterEnumval_decl(FlatBuffers::Enumval_declContext *ctx) = 0;
  virtual void exitEnumval_decl(FlatBuffers::Enumval_declContext *ctx) = 0;

  virtual void enterCommasep_enumval_decl(FlatBuffers::Commasep_enumval_declContext *ctx) = 0;
  virtual void exitCommasep_enumval_decl(FlatBuffers::Commasep_enumval_declContext *ctx) = 0;

  virtual void enterIdent_with_opt_single_value(FlatBuffers::Ident_with_opt_single_valueContext *ctx) = 0;
  virtual void exitIdent_with_opt_single_value(FlatBuffers::Ident_with_opt_single_valueContext *ctx) = 0;

  virtual void enterCommasep_ident_with_opt_single_value(FlatBuffers::Commasep_ident_with_opt_single_valueContext *ctx) = 0;
  virtual void exitCommasep_ident_with_opt_single_value(FlatBuffers::Commasep_ident_with_opt_single_valueContext *ctx) = 0;

  virtual void enterMetadata(FlatBuffers::MetadataContext *ctx) = 0;
  virtual void exitMetadata(FlatBuffers::MetadataContext *ctx) = 0;

  virtual void enterScalar(FlatBuffers::ScalarContext *ctx) = 0;
  virtual void exitScalar(FlatBuffers::ScalarContext *ctx) = 0;

  virtual void enterObject(FlatBuffers::ObjectContext *ctx) = 0;
  virtual void exitObject(FlatBuffers::ObjectContext *ctx) = 0;

  virtual void enterIdent_with_value(FlatBuffers::Ident_with_valueContext *ctx) = 0;
  virtual void exitIdent_with_value(FlatBuffers::Ident_with_valueContext *ctx) = 0;

  virtual void enterCommasep_ident_with_value(FlatBuffers::Commasep_ident_with_valueContext *ctx) = 0;
  virtual void exitCommasep_ident_with_value(FlatBuffers::Commasep_ident_with_valueContext *ctx) = 0;

  virtual void enterSingle_value(FlatBuffers::Single_valueContext *ctx) = 0;
  virtual void exitSingle_value(FlatBuffers::Single_valueContext *ctx) = 0;

  virtual void enterValue(FlatBuffers::ValueContext *ctx) = 0;
  virtual void exitValue(FlatBuffers::ValueContext *ctx) = 0;

  virtual void enterCommasep_value(FlatBuffers::Commasep_valueContext *ctx) = 0;
  virtual void exitCommasep_value(FlatBuffers::Commasep_valueContext *ctx) = 0;

  virtual void enterFile_extension_decl(FlatBuffers::File_extension_declContext *ctx) = 0;
  virtual void exitFile_extension_decl(FlatBuffers::File_extension_declContext *ctx) = 0;

  virtual void enterFile_identifier_decl(FlatBuffers::File_identifier_declContext *ctx) = 0;
  virtual void exitFile_identifier_decl(FlatBuffers::File_identifier_declContext *ctx) = 0;

  virtual void enterNs_ident(FlatBuffers::Ns_identContext *ctx) = 0;
  virtual void exitNs_ident(FlatBuffers::Ns_identContext *ctx) = 0;

  virtual void enterInteger_const(FlatBuffers::Integer_constContext *ctx) = 0;
  virtual void exitInteger_const(FlatBuffers::Integer_constContext *ctx) = 0;


};

