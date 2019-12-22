
// Generated from entdlr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "entdlrParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by entdlrParser.
 */
class  entdlrVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by entdlrParser.
   */
    virtual antlrcpp::Any visitProto(entdlrParser::ProtoContext *context) = 0;

    virtual antlrcpp::Any visitSyntax(entdlrParser::SyntaxContext *context) = 0;

    virtual antlrcpp::Any visitImportStatement(entdlrParser::ImportStatementContext *context) = 0;

    virtual antlrcpp::Any visitPackageStatement(entdlrParser::PackageStatementContext *context) = 0;

    virtual antlrcpp::Any visitOption(entdlrParser::OptionContext *context) = 0;

    virtual antlrcpp::Any visitOptionName(entdlrParser::OptionNameContext *context) = 0;

    virtual antlrcpp::Any visitOptionBody(entdlrParser::OptionBodyContext *context) = 0;

    virtual antlrcpp::Any visitOptionBodyVariable(entdlrParser::OptionBodyVariableContext *context) = 0;

    virtual antlrcpp::Any visitTopLevelDef(entdlrParser::TopLevelDefContext *context) = 0;

    virtual antlrcpp::Any visitMessage(entdlrParser::MessageContext *context) = 0;

    virtual antlrcpp::Any visitMessageBody(entdlrParser::MessageBodyContext *context) = 0;

    virtual antlrcpp::Any visitEnumDefinition(entdlrParser::EnumDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitEnumBody(entdlrParser::EnumBodyContext *context) = 0;

    virtual antlrcpp::Any visitEnumField(entdlrParser::EnumFieldContext *context) = 0;

    virtual antlrcpp::Any visitEnumValueOption(entdlrParser::EnumValueOptionContext *context) = 0;

    virtual antlrcpp::Any visitService(entdlrParser::ServiceContext *context) = 0;

    virtual antlrcpp::Any visitRpc(entdlrParser::RpcContext *context) = 0;

    virtual antlrcpp::Any visitReserved(entdlrParser::ReservedContext *context) = 0;

    virtual antlrcpp::Any visitRanges(entdlrParser::RangesContext *context) = 0;

    virtual antlrcpp::Any visitRange(entdlrParser::RangeContext *context) = 0;

    virtual antlrcpp::Any visitFieldNames(entdlrParser::FieldNamesContext *context) = 0;

    virtual antlrcpp::Any visitType(entdlrParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitFieldNumber(entdlrParser::FieldNumberContext *context) = 0;

    virtual antlrcpp::Any visitField(entdlrParser::FieldContext *context) = 0;

    virtual antlrcpp::Any visitFieldOptions(entdlrParser::FieldOptionsContext *context) = 0;

    virtual antlrcpp::Any visitFieldOption(entdlrParser::FieldOptionContext *context) = 0;

    virtual antlrcpp::Any visitOneof(entdlrParser::OneofContext *context) = 0;

    virtual antlrcpp::Any visitOneofField(entdlrParser::OneofFieldContext *context) = 0;

    virtual antlrcpp::Any visitMapField(entdlrParser::MapFieldContext *context) = 0;

    virtual antlrcpp::Any visitKeyType(entdlrParser::KeyTypeContext *context) = 0;

    virtual antlrcpp::Any visitReservedWord(entdlrParser::ReservedWordContext *context) = 0;

    virtual antlrcpp::Any visitFullIdent(entdlrParser::FullIdentContext *context) = 0;

    virtual antlrcpp::Any visitMessageName(entdlrParser::MessageNameContext *context) = 0;

    virtual antlrcpp::Any visitEnumName(entdlrParser::EnumNameContext *context) = 0;

    virtual antlrcpp::Any visitMessageOrEnumName(entdlrParser::MessageOrEnumNameContext *context) = 0;

    virtual antlrcpp::Any visitFieldName(entdlrParser::FieldNameContext *context) = 0;

    virtual antlrcpp::Any visitOneofName(entdlrParser::OneofNameContext *context) = 0;

    virtual antlrcpp::Any visitMapName(entdlrParser::MapNameContext *context) = 0;

    virtual antlrcpp::Any visitServiceName(entdlrParser::ServiceNameContext *context) = 0;

    virtual antlrcpp::Any visitRpcName(entdlrParser::RpcNameContext *context) = 0;

    virtual antlrcpp::Any visitMessageType(entdlrParser::MessageTypeContext *context) = 0;

    virtual antlrcpp::Any visitMessageOrEnumType(entdlrParser::MessageOrEnumTypeContext *context) = 0;

    virtual antlrcpp::Any visitEmptyStatement(entdlrParser::EmptyStatementContext *context) = 0;

    virtual antlrcpp::Any visitConstant(entdlrParser::ConstantContext *context) = 0;


};

