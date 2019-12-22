
// Generated from entdlr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "entdlrParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by entdlrParser.
 */
class  entdlrListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProto(entdlrParser::ProtoContext *ctx) = 0;
  virtual void exitProto(entdlrParser::ProtoContext *ctx) = 0;

  virtual void enterSyntax(entdlrParser::SyntaxContext *ctx) = 0;
  virtual void exitSyntax(entdlrParser::SyntaxContext *ctx) = 0;

  virtual void enterImportStatement(entdlrParser::ImportStatementContext *ctx) = 0;
  virtual void exitImportStatement(entdlrParser::ImportStatementContext *ctx) = 0;

  virtual void enterPackageStatement(entdlrParser::PackageStatementContext *ctx) = 0;
  virtual void exitPackageStatement(entdlrParser::PackageStatementContext *ctx) = 0;

  virtual void enterOption(entdlrParser::OptionContext *ctx) = 0;
  virtual void exitOption(entdlrParser::OptionContext *ctx) = 0;

  virtual void enterOptionName(entdlrParser::OptionNameContext *ctx) = 0;
  virtual void exitOptionName(entdlrParser::OptionNameContext *ctx) = 0;

  virtual void enterOptionBody(entdlrParser::OptionBodyContext *ctx) = 0;
  virtual void exitOptionBody(entdlrParser::OptionBodyContext *ctx) = 0;

  virtual void enterOptionBodyVariable(entdlrParser::OptionBodyVariableContext *ctx) = 0;
  virtual void exitOptionBodyVariable(entdlrParser::OptionBodyVariableContext *ctx) = 0;

  virtual void enterTopLevelDef(entdlrParser::TopLevelDefContext *ctx) = 0;
  virtual void exitTopLevelDef(entdlrParser::TopLevelDefContext *ctx) = 0;

  virtual void enterMessage(entdlrParser::MessageContext *ctx) = 0;
  virtual void exitMessage(entdlrParser::MessageContext *ctx) = 0;

  virtual void enterMessageBody(entdlrParser::MessageBodyContext *ctx) = 0;
  virtual void exitMessageBody(entdlrParser::MessageBodyContext *ctx) = 0;

  virtual void enterEnumDefinition(entdlrParser::EnumDefinitionContext *ctx) = 0;
  virtual void exitEnumDefinition(entdlrParser::EnumDefinitionContext *ctx) = 0;

  virtual void enterEnumBody(entdlrParser::EnumBodyContext *ctx) = 0;
  virtual void exitEnumBody(entdlrParser::EnumBodyContext *ctx) = 0;

  virtual void enterEnumField(entdlrParser::EnumFieldContext *ctx) = 0;
  virtual void exitEnumField(entdlrParser::EnumFieldContext *ctx) = 0;

  virtual void enterEnumValueOption(entdlrParser::EnumValueOptionContext *ctx) = 0;
  virtual void exitEnumValueOption(entdlrParser::EnumValueOptionContext *ctx) = 0;

  virtual void enterService(entdlrParser::ServiceContext *ctx) = 0;
  virtual void exitService(entdlrParser::ServiceContext *ctx) = 0;

  virtual void enterRpc(entdlrParser::RpcContext *ctx) = 0;
  virtual void exitRpc(entdlrParser::RpcContext *ctx) = 0;

  virtual void enterReserved(entdlrParser::ReservedContext *ctx) = 0;
  virtual void exitReserved(entdlrParser::ReservedContext *ctx) = 0;

  virtual void enterRanges(entdlrParser::RangesContext *ctx) = 0;
  virtual void exitRanges(entdlrParser::RangesContext *ctx) = 0;

  virtual void enterRange(entdlrParser::RangeContext *ctx) = 0;
  virtual void exitRange(entdlrParser::RangeContext *ctx) = 0;

  virtual void enterFieldNames(entdlrParser::FieldNamesContext *ctx) = 0;
  virtual void exitFieldNames(entdlrParser::FieldNamesContext *ctx) = 0;

  virtual void enterType(entdlrParser::TypeContext *ctx) = 0;
  virtual void exitType(entdlrParser::TypeContext *ctx) = 0;

  virtual void enterFieldNumber(entdlrParser::FieldNumberContext *ctx) = 0;
  virtual void exitFieldNumber(entdlrParser::FieldNumberContext *ctx) = 0;

  virtual void enterField(entdlrParser::FieldContext *ctx) = 0;
  virtual void exitField(entdlrParser::FieldContext *ctx) = 0;

  virtual void enterFieldOptions(entdlrParser::FieldOptionsContext *ctx) = 0;
  virtual void exitFieldOptions(entdlrParser::FieldOptionsContext *ctx) = 0;

  virtual void enterFieldOption(entdlrParser::FieldOptionContext *ctx) = 0;
  virtual void exitFieldOption(entdlrParser::FieldOptionContext *ctx) = 0;

  virtual void enterOneof(entdlrParser::OneofContext *ctx) = 0;
  virtual void exitOneof(entdlrParser::OneofContext *ctx) = 0;

  virtual void enterOneofField(entdlrParser::OneofFieldContext *ctx) = 0;
  virtual void exitOneofField(entdlrParser::OneofFieldContext *ctx) = 0;

  virtual void enterMapField(entdlrParser::MapFieldContext *ctx) = 0;
  virtual void exitMapField(entdlrParser::MapFieldContext *ctx) = 0;

  virtual void enterKeyType(entdlrParser::KeyTypeContext *ctx) = 0;
  virtual void exitKeyType(entdlrParser::KeyTypeContext *ctx) = 0;

  virtual void enterReservedWord(entdlrParser::ReservedWordContext *ctx) = 0;
  virtual void exitReservedWord(entdlrParser::ReservedWordContext *ctx) = 0;

  virtual void enterFullIdent(entdlrParser::FullIdentContext *ctx) = 0;
  virtual void exitFullIdent(entdlrParser::FullIdentContext *ctx) = 0;

  virtual void enterMessageName(entdlrParser::MessageNameContext *ctx) = 0;
  virtual void exitMessageName(entdlrParser::MessageNameContext *ctx) = 0;

  virtual void enterEnumName(entdlrParser::EnumNameContext *ctx) = 0;
  virtual void exitEnumName(entdlrParser::EnumNameContext *ctx) = 0;

  virtual void enterMessageOrEnumName(entdlrParser::MessageOrEnumNameContext *ctx) = 0;
  virtual void exitMessageOrEnumName(entdlrParser::MessageOrEnumNameContext *ctx) = 0;

  virtual void enterFieldName(entdlrParser::FieldNameContext *ctx) = 0;
  virtual void exitFieldName(entdlrParser::FieldNameContext *ctx) = 0;

  virtual void enterOneofName(entdlrParser::OneofNameContext *ctx) = 0;
  virtual void exitOneofName(entdlrParser::OneofNameContext *ctx) = 0;

  virtual void enterMapName(entdlrParser::MapNameContext *ctx) = 0;
  virtual void exitMapName(entdlrParser::MapNameContext *ctx) = 0;

  virtual void enterServiceName(entdlrParser::ServiceNameContext *ctx) = 0;
  virtual void exitServiceName(entdlrParser::ServiceNameContext *ctx) = 0;

  virtual void enterRpcName(entdlrParser::RpcNameContext *ctx) = 0;
  virtual void exitRpcName(entdlrParser::RpcNameContext *ctx) = 0;

  virtual void enterMessageType(entdlrParser::MessageTypeContext *ctx) = 0;
  virtual void exitMessageType(entdlrParser::MessageTypeContext *ctx) = 0;

  virtual void enterMessageOrEnumType(entdlrParser::MessageOrEnumTypeContext *ctx) = 0;
  virtual void exitMessageOrEnumType(entdlrParser::MessageOrEnumTypeContext *ctx) = 0;

  virtual void enterEmptyStatement(entdlrParser::EmptyStatementContext *ctx) = 0;
  virtual void exitEmptyStatement(entdlrParser::EmptyStatementContext *ctx) = 0;

  virtual void enterConstant(entdlrParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(entdlrParser::ConstantContext *ctx) = 0;


};

