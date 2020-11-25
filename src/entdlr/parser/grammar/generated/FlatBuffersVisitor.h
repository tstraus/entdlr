
// Generated from FlatBuffers.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "FlatBuffers.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by FlatBuffers.
 */
class  FlatBuffersVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by FlatBuffers.
   */
    virtual antlrcpp::Any visitSchema(FlatBuffers::SchemaContext *context) = 0;

    virtual antlrcpp::Any visitInclude(FlatBuffers::IncludeContext *context) = 0;

    virtual antlrcpp::Any visitNamespace_decl(FlatBuffers::Namespace_declContext *context) = 0;

    virtual antlrcpp::Any visitAttribute_decl(FlatBuffers::Attribute_declContext *context) = 0;

    virtual antlrcpp::Any visitType_decl(FlatBuffers::Type_declContext *context) = 0;

    virtual antlrcpp::Any visitEnum_decl(FlatBuffers::Enum_declContext *context) = 0;

    virtual antlrcpp::Any visitUnion_decl(FlatBuffers::Union_declContext *context) = 0;

    virtual antlrcpp::Any visitRoot_decl(FlatBuffers::Root_declContext *context) = 0;

    virtual antlrcpp::Any visitField_decl(FlatBuffers::Field_declContext *context) = 0;

    virtual antlrcpp::Any visitRpc_decl(FlatBuffers::Rpc_declContext *context) = 0;

    virtual antlrcpp::Any visitRpc_method(FlatBuffers::Rpc_methodContext *context) = 0;

    virtual antlrcpp::Any visitInterface_decl(FlatBuffers::Interface_declContext *context) = 0;

    virtual antlrcpp::Any visitMethod_decl(FlatBuffers::Method_declContext *context) = 0;

    virtual antlrcpp::Any visitMethod_parameters(FlatBuffers::Method_parametersContext *context) = 0;

    virtual antlrcpp::Any visitMethod_parameter(FlatBuffers::Method_parameterContext *context) = 0;

    virtual antlrcpp::Any visitMethod_return_type(FlatBuffers::Method_return_typeContext *context) = 0;

    virtual antlrcpp::Any visitMethod_type(FlatBuffers::Method_typeContext *context) = 0;

    virtual antlrcpp::Any visitMutable_decl(FlatBuffers::Mutable_declContext *context) = 0;

    virtual antlrcpp::Any visitStatic_decl(FlatBuffers::Static_declContext *context) = 0;

    virtual antlrcpp::Any visitReference_decl(FlatBuffers::Reference_declContext *context) = 0;

    virtual antlrcpp::Any visitType(FlatBuffers::TypeContext *context) = 0;

    virtual antlrcpp::Any visitUniontype_decl(FlatBuffers::Uniontype_declContext *context) = 0;

    virtual antlrcpp::Any visitCommasep_uniontype_decl(FlatBuffers::Commasep_uniontype_declContext *context) = 0;

    virtual antlrcpp::Any visitEnumval_decl(FlatBuffers::Enumval_declContext *context) = 0;

    virtual antlrcpp::Any visitCommasep_enumval_decl(FlatBuffers::Commasep_enumval_declContext *context) = 0;

    virtual antlrcpp::Any visitIdent_with_opt_single_value(FlatBuffers::Ident_with_opt_single_valueContext *context) = 0;

    virtual antlrcpp::Any visitCommasep_ident_with_opt_single_value(FlatBuffers::Commasep_ident_with_opt_single_valueContext *context) = 0;

    virtual antlrcpp::Any visitMetadata(FlatBuffers::MetadataContext *context) = 0;

    virtual antlrcpp::Any visitScalar(FlatBuffers::ScalarContext *context) = 0;

    virtual antlrcpp::Any visitObject(FlatBuffers::ObjectContext *context) = 0;

    virtual antlrcpp::Any visitIdent_with_value(FlatBuffers::Ident_with_valueContext *context) = 0;

    virtual antlrcpp::Any visitCommasep_ident_with_value(FlatBuffers::Commasep_ident_with_valueContext *context) = 0;

    virtual antlrcpp::Any visitSingle_value(FlatBuffers::Single_valueContext *context) = 0;

    virtual antlrcpp::Any visitValue(FlatBuffers::ValueContext *context) = 0;

    virtual antlrcpp::Any visitCommasep_value(FlatBuffers::Commasep_valueContext *context) = 0;

    virtual antlrcpp::Any visitFile_extension_decl(FlatBuffers::File_extension_declContext *context) = 0;

    virtual antlrcpp::Any visitFile_identifier_decl(FlatBuffers::File_identifier_declContext *context) = 0;

    virtual antlrcpp::Any visitNs_ident(FlatBuffers::Ns_identContext *context) = 0;

    virtual antlrcpp::Any visitInteger_const(FlatBuffers::Integer_constContext *context) = 0;


};

