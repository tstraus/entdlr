
// Generated from FlatBuffersParser.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "FlatBuffersParserListener.h"


/**
 * This class provides an empty implementation of FlatBuffersParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  FlatBuffersParserBaseListener : public FlatBuffersParserListener {
public:

  virtual void enterSchema(FlatBuffersParser::SchemaContext * /*ctx*/) override { }
  virtual void exitSchema(FlatBuffersParser::SchemaContext * /*ctx*/) override { }

  virtual void enterInclude(FlatBuffersParser::IncludeContext * /*ctx*/) override { }
  virtual void exitInclude(FlatBuffersParser::IncludeContext * /*ctx*/) override { }

  virtual void enterNamespace_decl(FlatBuffersParser::Namespace_declContext * /*ctx*/) override { }
  virtual void exitNamespace_decl(FlatBuffersParser::Namespace_declContext * /*ctx*/) override { }

  virtual void enterAttribute_decl(FlatBuffersParser::Attribute_declContext * /*ctx*/) override { }
  virtual void exitAttribute_decl(FlatBuffersParser::Attribute_declContext * /*ctx*/) override { }

  virtual void enterType_decl(FlatBuffersParser::Type_declContext * /*ctx*/) override { }
  virtual void exitType_decl(FlatBuffersParser::Type_declContext * /*ctx*/) override { }

  virtual void enterEnum_decl(FlatBuffersParser::Enum_declContext * /*ctx*/) override { }
  virtual void exitEnum_decl(FlatBuffersParser::Enum_declContext * /*ctx*/) override { }

  virtual void enterUnion_decl(FlatBuffersParser::Union_declContext * /*ctx*/) override { }
  virtual void exitUnion_decl(FlatBuffersParser::Union_declContext * /*ctx*/) override { }

  virtual void enterRoot_decl(FlatBuffersParser::Root_declContext * /*ctx*/) override { }
  virtual void exitRoot_decl(FlatBuffersParser::Root_declContext * /*ctx*/) override { }

  virtual void enterField_decl(FlatBuffersParser::Field_declContext * /*ctx*/) override { }
  virtual void exitField_decl(FlatBuffersParser::Field_declContext * /*ctx*/) override { }

  virtual void enterRpc_decl(FlatBuffersParser::Rpc_declContext * /*ctx*/) override { }
  virtual void exitRpc_decl(FlatBuffersParser::Rpc_declContext * /*ctx*/) override { }

  virtual void enterRpc_method(FlatBuffersParser::Rpc_methodContext * /*ctx*/) override { }
  virtual void exitRpc_method(FlatBuffersParser::Rpc_methodContext * /*ctx*/) override { }

  virtual void enterInterface_decl(FlatBuffersParser::Interface_declContext * /*ctx*/) override { }
  virtual void exitInterface_decl(FlatBuffersParser::Interface_declContext * /*ctx*/) override { }

  virtual void enterMethod_decl(FlatBuffersParser::Method_declContext * /*ctx*/) override { }
  virtual void exitMethod_decl(FlatBuffersParser::Method_declContext * /*ctx*/) override { }

  virtual void enterMethod_parameters(FlatBuffersParser::Method_parametersContext * /*ctx*/) override { }
  virtual void exitMethod_parameters(FlatBuffersParser::Method_parametersContext * /*ctx*/) override { }

  virtual void enterMethod_parameter(FlatBuffersParser::Method_parameterContext * /*ctx*/) override { }
  virtual void exitMethod_parameter(FlatBuffersParser::Method_parameterContext * /*ctx*/) override { }

  virtual void enterMethod_return_type(FlatBuffersParser::Method_return_typeContext * /*ctx*/) override { }
  virtual void exitMethod_return_type(FlatBuffersParser::Method_return_typeContext * /*ctx*/) override { }

  virtual void enterMethod_type(FlatBuffersParser::Method_typeContext * /*ctx*/) override { }
  virtual void exitMethod_type(FlatBuffersParser::Method_typeContext * /*ctx*/) override { }

  virtual void enterMutable_decl(FlatBuffersParser::Mutable_declContext * /*ctx*/) override { }
  virtual void exitMutable_decl(FlatBuffersParser::Mutable_declContext * /*ctx*/) override { }

  virtual void enterStatic_decl(FlatBuffersParser::Static_declContext * /*ctx*/) override { }
  virtual void exitStatic_decl(FlatBuffersParser::Static_declContext * /*ctx*/) override { }

  virtual void enterReference_decl(FlatBuffersParser::Reference_declContext * /*ctx*/) override { }
  virtual void exitReference_decl(FlatBuffersParser::Reference_declContext * /*ctx*/) override { }

  virtual void enterType(FlatBuffersParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(FlatBuffersParser::TypeContext * /*ctx*/) override { }

  virtual void enterUniontype_decl(FlatBuffersParser::Uniontype_declContext * /*ctx*/) override { }
  virtual void exitUniontype_decl(FlatBuffersParser::Uniontype_declContext * /*ctx*/) override { }

  virtual void enterCommasep_uniontype_decl(FlatBuffersParser::Commasep_uniontype_declContext * /*ctx*/) override { }
  virtual void exitCommasep_uniontype_decl(FlatBuffersParser::Commasep_uniontype_declContext * /*ctx*/) override { }

  virtual void enterEnumval_decl(FlatBuffersParser::Enumval_declContext * /*ctx*/) override { }
  virtual void exitEnumval_decl(FlatBuffersParser::Enumval_declContext * /*ctx*/) override { }

  virtual void enterCommasep_enumval_decl(FlatBuffersParser::Commasep_enumval_declContext * /*ctx*/) override { }
  virtual void exitCommasep_enumval_decl(FlatBuffersParser::Commasep_enumval_declContext * /*ctx*/) override { }

  virtual void enterIdent_with_opt_single_value(FlatBuffersParser::Ident_with_opt_single_valueContext * /*ctx*/) override { }
  virtual void exitIdent_with_opt_single_value(FlatBuffersParser::Ident_with_opt_single_valueContext * /*ctx*/) override { }

  virtual void enterCommasep_ident_with_opt_single_value(FlatBuffersParser::Commasep_ident_with_opt_single_valueContext * /*ctx*/) override { }
  virtual void exitCommasep_ident_with_opt_single_value(FlatBuffersParser::Commasep_ident_with_opt_single_valueContext * /*ctx*/) override { }

  virtual void enterMetadata(FlatBuffersParser::MetadataContext * /*ctx*/) override { }
  virtual void exitMetadata(FlatBuffersParser::MetadataContext * /*ctx*/) override { }

  virtual void enterScalar(FlatBuffersParser::ScalarContext * /*ctx*/) override { }
  virtual void exitScalar(FlatBuffersParser::ScalarContext * /*ctx*/) override { }

  virtual void enterObject(FlatBuffersParser::ObjectContext * /*ctx*/) override { }
  virtual void exitObject(FlatBuffersParser::ObjectContext * /*ctx*/) override { }

  virtual void enterIdent_with_value(FlatBuffersParser::Ident_with_valueContext * /*ctx*/) override { }
  virtual void exitIdent_with_value(FlatBuffersParser::Ident_with_valueContext * /*ctx*/) override { }

  virtual void enterCommasep_ident_with_value(FlatBuffersParser::Commasep_ident_with_valueContext * /*ctx*/) override { }
  virtual void exitCommasep_ident_with_value(FlatBuffersParser::Commasep_ident_with_valueContext * /*ctx*/) override { }

  virtual void enterSingle_value(FlatBuffersParser::Single_valueContext * /*ctx*/) override { }
  virtual void exitSingle_value(FlatBuffersParser::Single_valueContext * /*ctx*/) override { }

  virtual void enterValue(FlatBuffersParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(FlatBuffersParser::ValueContext * /*ctx*/) override { }

  virtual void enterCommasep_value(FlatBuffersParser::Commasep_valueContext * /*ctx*/) override { }
  virtual void exitCommasep_value(FlatBuffersParser::Commasep_valueContext * /*ctx*/) override { }

  virtual void enterFile_extension_decl(FlatBuffersParser::File_extension_declContext * /*ctx*/) override { }
  virtual void exitFile_extension_decl(FlatBuffersParser::File_extension_declContext * /*ctx*/) override { }

  virtual void enterFile_identifier_decl(FlatBuffersParser::File_identifier_declContext * /*ctx*/) override { }
  virtual void exitFile_identifier_decl(FlatBuffersParser::File_identifier_declContext * /*ctx*/) override { }

  virtual void enterNs_ident(FlatBuffersParser::Ns_identContext * /*ctx*/) override { }
  virtual void exitNs_ident(FlatBuffersParser::Ns_identContext * /*ctx*/) override { }

  virtual void enterInteger_const(FlatBuffersParser::Integer_constContext * /*ctx*/) override { }
  virtual void exitInteger_const(FlatBuffersParser::Integer_constContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

