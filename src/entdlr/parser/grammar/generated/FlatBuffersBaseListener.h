
// Generated from FlatBuffers.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "FlatBuffersListener.h"


/**
 * This class provides an empty implementation of FlatBuffersListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  FlatBuffersBaseListener : public FlatBuffersListener {
public:

  virtual void enterSchema(FlatBuffers::SchemaContext * /*ctx*/) override { }
  virtual void exitSchema(FlatBuffers::SchemaContext * /*ctx*/) override { }

  virtual void enterInclude(FlatBuffers::IncludeContext * /*ctx*/) override { }
  virtual void exitInclude(FlatBuffers::IncludeContext * /*ctx*/) override { }

  virtual void enterNamespace_decl(FlatBuffers::Namespace_declContext * /*ctx*/) override { }
  virtual void exitNamespace_decl(FlatBuffers::Namespace_declContext * /*ctx*/) override { }

  virtual void enterAttribute_decl(FlatBuffers::Attribute_declContext * /*ctx*/) override { }
  virtual void exitAttribute_decl(FlatBuffers::Attribute_declContext * /*ctx*/) override { }

  virtual void enterType_decl(FlatBuffers::Type_declContext * /*ctx*/) override { }
  virtual void exitType_decl(FlatBuffers::Type_declContext * /*ctx*/) override { }

  virtual void enterEnum_decl(FlatBuffers::Enum_declContext * /*ctx*/) override { }
  virtual void exitEnum_decl(FlatBuffers::Enum_declContext * /*ctx*/) override { }

  virtual void enterUnion_decl(FlatBuffers::Union_declContext * /*ctx*/) override { }
  virtual void exitUnion_decl(FlatBuffers::Union_declContext * /*ctx*/) override { }

  virtual void enterRoot_decl(FlatBuffers::Root_declContext * /*ctx*/) override { }
  virtual void exitRoot_decl(FlatBuffers::Root_declContext * /*ctx*/) override { }

  virtual void enterField_decl(FlatBuffers::Field_declContext * /*ctx*/) override { }
  virtual void exitField_decl(FlatBuffers::Field_declContext * /*ctx*/) override { }

  virtual void enterRpc_decl(FlatBuffers::Rpc_declContext * /*ctx*/) override { }
  virtual void exitRpc_decl(FlatBuffers::Rpc_declContext * /*ctx*/) override { }

  virtual void enterRpc_method(FlatBuffers::Rpc_methodContext * /*ctx*/) override { }
  virtual void exitRpc_method(FlatBuffers::Rpc_methodContext * /*ctx*/) override { }

  virtual void enterInterface_decl(FlatBuffers::Interface_declContext * /*ctx*/) override { }
  virtual void exitInterface_decl(FlatBuffers::Interface_declContext * /*ctx*/) override { }

  virtual void enterMethod_decl(FlatBuffers::Method_declContext * /*ctx*/) override { }
  virtual void exitMethod_decl(FlatBuffers::Method_declContext * /*ctx*/) override { }

  virtual void enterMethod_parameters(FlatBuffers::Method_parametersContext * /*ctx*/) override { }
  virtual void exitMethod_parameters(FlatBuffers::Method_parametersContext * /*ctx*/) override { }

  virtual void enterMethod_parameter(FlatBuffers::Method_parameterContext * /*ctx*/) override { }
  virtual void exitMethod_parameter(FlatBuffers::Method_parameterContext * /*ctx*/) override { }

  virtual void enterMethod_return_type(FlatBuffers::Method_return_typeContext * /*ctx*/) override { }
  virtual void exitMethod_return_type(FlatBuffers::Method_return_typeContext * /*ctx*/) override { }

  virtual void enterMethod_type(FlatBuffers::Method_typeContext * /*ctx*/) override { }
  virtual void exitMethod_type(FlatBuffers::Method_typeContext * /*ctx*/) override { }

  virtual void enterMutable_decl(FlatBuffers::Mutable_declContext * /*ctx*/) override { }
  virtual void exitMutable_decl(FlatBuffers::Mutable_declContext * /*ctx*/) override { }

  virtual void enterStatic_decl(FlatBuffers::Static_declContext * /*ctx*/) override { }
  virtual void exitStatic_decl(FlatBuffers::Static_declContext * /*ctx*/) override { }

  virtual void enterReference_decl(FlatBuffers::Reference_declContext * /*ctx*/) override { }
  virtual void exitReference_decl(FlatBuffers::Reference_declContext * /*ctx*/) override { }

  virtual void enterType(FlatBuffers::TypeContext * /*ctx*/) override { }
  virtual void exitType(FlatBuffers::TypeContext * /*ctx*/) override { }

  virtual void enterUniontype_decl(FlatBuffers::Uniontype_declContext * /*ctx*/) override { }
  virtual void exitUniontype_decl(FlatBuffers::Uniontype_declContext * /*ctx*/) override { }

  virtual void enterCommasep_uniontype_decl(FlatBuffers::Commasep_uniontype_declContext * /*ctx*/) override { }
  virtual void exitCommasep_uniontype_decl(FlatBuffers::Commasep_uniontype_declContext * /*ctx*/) override { }

  virtual void enterEnumval_decl(FlatBuffers::Enumval_declContext * /*ctx*/) override { }
  virtual void exitEnumval_decl(FlatBuffers::Enumval_declContext * /*ctx*/) override { }

  virtual void enterCommasep_enumval_decl(FlatBuffers::Commasep_enumval_declContext * /*ctx*/) override { }
  virtual void exitCommasep_enumval_decl(FlatBuffers::Commasep_enumval_declContext * /*ctx*/) override { }

  virtual void enterIdent_with_opt_single_value(FlatBuffers::Ident_with_opt_single_valueContext * /*ctx*/) override { }
  virtual void exitIdent_with_opt_single_value(FlatBuffers::Ident_with_opt_single_valueContext * /*ctx*/) override { }

  virtual void enterCommasep_ident_with_opt_single_value(FlatBuffers::Commasep_ident_with_opt_single_valueContext * /*ctx*/) override { }
  virtual void exitCommasep_ident_with_opt_single_value(FlatBuffers::Commasep_ident_with_opt_single_valueContext * /*ctx*/) override { }

  virtual void enterMetadata(FlatBuffers::MetadataContext * /*ctx*/) override { }
  virtual void exitMetadata(FlatBuffers::MetadataContext * /*ctx*/) override { }

  virtual void enterScalar(FlatBuffers::ScalarContext * /*ctx*/) override { }
  virtual void exitScalar(FlatBuffers::ScalarContext * /*ctx*/) override { }

  virtual void enterObject(FlatBuffers::ObjectContext * /*ctx*/) override { }
  virtual void exitObject(FlatBuffers::ObjectContext * /*ctx*/) override { }

  virtual void enterIdent_with_value(FlatBuffers::Ident_with_valueContext * /*ctx*/) override { }
  virtual void exitIdent_with_value(FlatBuffers::Ident_with_valueContext * /*ctx*/) override { }

  virtual void enterCommasep_ident_with_value(FlatBuffers::Commasep_ident_with_valueContext * /*ctx*/) override { }
  virtual void exitCommasep_ident_with_value(FlatBuffers::Commasep_ident_with_valueContext * /*ctx*/) override { }

  virtual void enterSingle_value(FlatBuffers::Single_valueContext * /*ctx*/) override { }
  virtual void exitSingle_value(FlatBuffers::Single_valueContext * /*ctx*/) override { }

  virtual void enterValue(FlatBuffers::ValueContext * /*ctx*/) override { }
  virtual void exitValue(FlatBuffers::ValueContext * /*ctx*/) override { }

  virtual void enterCommasep_value(FlatBuffers::Commasep_valueContext * /*ctx*/) override { }
  virtual void exitCommasep_value(FlatBuffers::Commasep_valueContext * /*ctx*/) override { }

  virtual void enterFile_extension_decl(FlatBuffers::File_extension_declContext * /*ctx*/) override { }
  virtual void exitFile_extension_decl(FlatBuffers::File_extension_declContext * /*ctx*/) override { }

  virtual void enterFile_identifier_decl(FlatBuffers::File_identifier_declContext * /*ctx*/) override { }
  virtual void exitFile_identifier_decl(FlatBuffers::File_identifier_declContext * /*ctx*/) override { }

  virtual void enterNs_ident(FlatBuffers::Ns_identContext * /*ctx*/) override { }
  virtual void exitNs_ident(FlatBuffers::Ns_identContext * /*ctx*/) override { }

  virtual void enterInteger_const(FlatBuffers::Integer_constContext * /*ctx*/) override { }
  virtual void exitInteger_const(FlatBuffers::Integer_constContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

