
// Generated from FlatBuffersParser.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "FlatBuffersParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by FlatBuffersParser.
 */
class  FlatBuffersParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by FlatBuffersParser.
   */
    virtual antlrcpp::Any visitSchema(FlatBuffersParser::SchemaContext *context) = 0;

    virtual antlrcpp::Any visitInclude(FlatBuffersParser::IncludeContext *context) = 0;

    virtual antlrcpp::Any visitNamespace_decl(FlatBuffersParser::Namespace_declContext *context) = 0;

    virtual antlrcpp::Any visitAttribute_decl(FlatBuffersParser::Attribute_declContext *context) = 0;

    virtual antlrcpp::Any visitType_decl(FlatBuffersParser::Type_declContext *context) = 0;

    virtual antlrcpp::Any visitEnum_decl(FlatBuffersParser::Enum_declContext *context) = 0;

    virtual antlrcpp::Any visitUnion_decl(FlatBuffersParser::Union_declContext *context) = 0;

    virtual antlrcpp::Any visitRoot_decl(FlatBuffersParser::Root_declContext *context) = 0;

    virtual antlrcpp::Any visitField_decl(FlatBuffersParser::Field_declContext *context) = 0;

    virtual antlrcpp::Any visitRpc_decl(FlatBuffersParser::Rpc_declContext *context) = 0;

    virtual antlrcpp::Any visitRpc_method(FlatBuffersParser::Rpc_methodContext *context) = 0;

    virtual antlrcpp::Any visitInterface_decl(FlatBuffersParser::Interface_declContext *context) = 0;

    virtual antlrcpp::Any visitMethod_decl(FlatBuffersParser::Method_declContext *context) = 0;

    virtual antlrcpp::Any visitMethod_parameters(FlatBuffersParser::Method_parametersContext *context) = 0;

    virtual antlrcpp::Any visitMethod_parameter(FlatBuffersParser::Method_parameterContext *context) = 0;

    virtual antlrcpp::Any visitMethod_type(FlatBuffersParser::Method_typeContext *context) = 0;

    virtual antlrcpp::Any visitService_component_decl(FlatBuffersParser::Service_component_declContext *context) = 0;

    virtual antlrcpp::Any visitService_decl(FlatBuffersParser::Service_declContext *context) = 0;

    virtual antlrcpp::Any visitType(FlatBuffersParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitUniontype_decl(FlatBuffersParser::Uniontype_declContext *context) = 0;

    virtual antlrcpp::Any visitCommasep_uniontype_decl(FlatBuffersParser::Commasep_uniontype_declContext *context) = 0;

    virtual antlrcpp::Any visitEnumval_decl(FlatBuffersParser::Enumval_declContext *context) = 0;

    virtual antlrcpp::Any visitCommasep_enumval_decl(FlatBuffersParser::Commasep_enumval_declContext *context) = 0;

    virtual antlrcpp::Any visitIdent_with_opt_single_value(FlatBuffersParser::Ident_with_opt_single_valueContext *context) = 0;

    virtual antlrcpp::Any visitCommasep_ident_with_opt_single_value(FlatBuffersParser::Commasep_ident_with_opt_single_valueContext *context) = 0;

    virtual antlrcpp::Any visitMetadata(FlatBuffersParser::MetadataContext *context) = 0;

    virtual antlrcpp::Any visitScalar(FlatBuffersParser::ScalarContext *context) = 0;

    virtual antlrcpp::Any visitObject(FlatBuffersParser::ObjectContext *context) = 0;

    virtual antlrcpp::Any visitIdent_with_value(FlatBuffersParser::Ident_with_valueContext *context) = 0;

    virtual antlrcpp::Any visitCommasep_ident_with_value(FlatBuffersParser::Commasep_ident_with_valueContext *context) = 0;

    virtual antlrcpp::Any visitSingle_value(FlatBuffersParser::Single_valueContext *context) = 0;

    virtual antlrcpp::Any visitValue(FlatBuffersParser::ValueContext *context) = 0;

    virtual antlrcpp::Any visitCommasep_value(FlatBuffersParser::Commasep_valueContext *context) = 0;

    virtual antlrcpp::Any visitFile_extension_decl(FlatBuffersParser::File_extension_declContext *context) = 0;

    virtual antlrcpp::Any visitFile_identifier_decl(FlatBuffersParser::File_identifier_declContext *context) = 0;

    virtual antlrcpp::Any visitNs_ident(FlatBuffersParser::Ns_identContext *context) = 0;

    virtual antlrcpp::Any visitInteger_const(FlatBuffersParser::Integer_constContext *context) = 0;


};

