
// Generated from entdlr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "entdlrListener.h"


/**
 * This class provides an empty implementation of entdlrListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  entdlrBaseListener : public entdlrListener {
public:

  virtual void enterProto(entdlrParser::ProtoContext * /*ctx*/) override { }
  virtual void exitProto(entdlrParser::ProtoContext * /*ctx*/) override { }

  virtual void enterSyntax(entdlrParser::SyntaxContext * /*ctx*/) override { }
  virtual void exitSyntax(entdlrParser::SyntaxContext * /*ctx*/) override { }

  virtual void enterImportStatement(entdlrParser::ImportStatementContext * /*ctx*/) override { }
  virtual void exitImportStatement(entdlrParser::ImportStatementContext * /*ctx*/) override { }

  virtual void enterPackageStatement(entdlrParser::PackageStatementContext * /*ctx*/) override { }
  virtual void exitPackageStatement(entdlrParser::PackageStatementContext * /*ctx*/) override { }

  virtual void enterOption(entdlrParser::OptionContext * /*ctx*/) override { }
  virtual void exitOption(entdlrParser::OptionContext * /*ctx*/) override { }

  virtual void enterOptionName(entdlrParser::OptionNameContext * /*ctx*/) override { }
  virtual void exitOptionName(entdlrParser::OptionNameContext * /*ctx*/) override { }

  virtual void enterOptionBody(entdlrParser::OptionBodyContext * /*ctx*/) override { }
  virtual void exitOptionBody(entdlrParser::OptionBodyContext * /*ctx*/) override { }

  virtual void enterOptionBodyVariable(entdlrParser::OptionBodyVariableContext * /*ctx*/) override { }
  virtual void exitOptionBodyVariable(entdlrParser::OptionBodyVariableContext * /*ctx*/) override { }

  virtual void enterTopLevelDef(entdlrParser::TopLevelDefContext * /*ctx*/) override { }
  virtual void exitTopLevelDef(entdlrParser::TopLevelDefContext * /*ctx*/) override { }

  virtual void enterMessage(entdlrParser::MessageContext * /*ctx*/) override { }
  virtual void exitMessage(entdlrParser::MessageContext * /*ctx*/) override { }

  virtual void enterMessageBody(entdlrParser::MessageBodyContext * /*ctx*/) override { }
  virtual void exitMessageBody(entdlrParser::MessageBodyContext * /*ctx*/) override { }

  virtual void enterEnumDefinition(entdlrParser::EnumDefinitionContext * /*ctx*/) override { }
  virtual void exitEnumDefinition(entdlrParser::EnumDefinitionContext * /*ctx*/) override { }

  virtual void enterEnumBody(entdlrParser::EnumBodyContext * /*ctx*/) override { }
  virtual void exitEnumBody(entdlrParser::EnumBodyContext * /*ctx*/) override { }

  virtual void enterEnumField(entdlrParser::EnumFieldContext * /*ctx*/) override { }
  virtual void exitEnumField(entdlrParser::EnumFieldContext * /*ctx*/) override { }

  virtual void enterEnumValueOption(entdlrParser::EnumValueOptionContext * /*ctx*/) override { }
  virtual void exitEnumValueOption(entdlrParser::EnumValueOptionContext * /*ctx*/) override { }

  virtual void enterService(entdlrParser::ServiceContext * /*ctx*/) override { }
  virtual void exitService(entdlrParser::ServiceContext * /*ctx*/) override { }

  virtual void enterRpc(entdlrParser::RpcContext * /*ctx*/) override { }
  virtual void exitRpc(entdlrParser::RpcContext * /*ctx*/) override { }

  virtual void enterReserved(entdlrParser::ReservedContext * /*ctx*/) override { }
  virtual void exitReserved(entdlrParser::ReservedContext * /*ctx*/) override { }

  virtual void enterRanges(entdlrParser::RangesContext * /*ctx*/) override { }
  virtual void exitRanges(entdlrParser::RangesContext * /*ctx*/) override { }

  virtual void enterRange(entdlrParser::RangeContext * /*ctx*/) override { }
  virtual void exitRange(entdlrParser::RangeContext * /*ctx*/) override { }

  virtual void enterFieldNames(entdlrParser::FieldNamesContext * /*ctx*/) override { }
  virtual void exitFieldNames(entdlrParser::FieldNamesContext * /*ctx*/) override { }

  virtual void enterType(entdlrParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(entdlrParser::TypeContext * /*ctx*/) override { }

  virtual void enterFieldNumber(entdlrParser::FieldNumberContext * /*ctx*/) override { }
  virtual void exitFieldNumber(entdlrParser::FieldNumberContext * /*ctx*/) override { }

  virtual void enterField(entdlrParser::FieldContext * /*ctx*/) override { }
  virtual void exitField(entdlrParser::FieldContext * /*ctx*/) override { }

  virtual void enterFieldOptions(entdlrParser::FieldOptionsContext * /*ctx*/) override { }
  virtual void exitFieldOptions(entdlrParser::FieldOptionsContext * /*ctx*/) override { }

  virtual void enterFieldOption(entdlrParser::FieldOptionContext * /*ctx*/) override { }
  virtual void exitFieldOption(entdlrParser::FieldOptionContext * /*ctx*/) override { }

  virtual void enterOneof(entdlrParser::OneofContext * /*ctx*/) override { }
  virtual void exitOneof(entdlrParser::OneofContext * /*ctx*/) override { }

  virtual void enterOneofField(entdlrParser::OneofFieldContext * /*ctx*/) override { }
  virtual void exitOneofField(entdlrParser::OneofFieldContext * /*ctx*/) override { }

  virtual void enterMapField(entdlrParser::MapFieldContext * /*ctx*/) override { }
  virtual void exitMapField(entdlrParser::MapFieldContext * /*ctx*/) override { }

  virtual void enterKeyType(entdlrParser::KeyTypeContext * /*ctx*/) override { }
  virtual void exitKeyType(entdlrParser::KeyTypeContext * /*ctx*/) override { }

  virtual void enterReservedWord(entdlrParser::ReservedWordContext * /*ctx*/) override { }
  virtual void exitReservedWord(entdlrParser::ReservedWordContext * /*ctx*/) override { }

  virtual void enterFullIdent(entdlrParser::FullIdentContext * /*ctx*/) override { }
  virtual void exitFullIdent(entdlrParser::FullIdentContext * /*ctx*/) override { }

  virtual void enterMessageName(entdlrParser::MessageNameContext * /*ctx*/) override { }
  virtual void exitMessageName(entdlrParser::MessageNameContext * /*ctx*/) override { }

  virtual void enterEnumName(entdlrParser::EnumNameContext * /*ctx*/) override { }
  virtual void exitEnumName(entdlrParser::EnumNameContext * /*ctx*/) override { }

  virtual void enterMessageOrEnumName(entdlrParser::MessageOrEnumNameContext * /*ctx*/) override { }
  virtual void exitMessageOrEnumName(entdlrParser::MessageOrEnumNameContext * /*ctx*/) override { }

  virtual void enterFieldName(entdlrParser::FieldNameContext * /*ctx*/) override { }
  virtual void exitFieldName(entdlrParser::FieldNameContext * /*ctx*/) override { }

  virtual void enterOneofName(entdlrParser::OneofNameContext * /*ctx*/) override { }
  virtual void exitOneofName(entdlrParser::OneofNameContext * /*ctx*/) override { }

  virtual void enterMapName(entdlrParser::MapNameContext * /*ctx*/) override { }
  virtual void exitMapName(entdlrParser::MapNameContext * /*ctx*/) override { }

  virtual void enterServiceName(entdlrParser::ServiceNameContext * /*ctx*/) override { }
  virtual void exitServiceName(entdlrParser::ServiceNameContext * /*ctx*/) override { }

  virtual void enterRpcName(entdlrParser::RpcNameContext * /*ctx*/) override { }
  virtual void exitRpcName(entdlrParser::RpcNameContext * /*ctx*/) override { }

  virtual void enterMessageType(entdlrParser::MessageTypeContext * /*ctx*/) override { }
  virtual void exitMessageType(entdlrParser::MessageTypeContext * /*ctx*/) override { }

  virtual void enterMessageOrEnumType(entdlrParser::MessageOrEnumTypeContext * /*ctx*/) override { }
  virtual void exitMessageOrEnumType(entdlrParser::MessageOrEnumTypeContext * /*ctx*/) override { }

  virtual void enterEmptyStatement(entdlrParser::EmptyStatementContext * /*ctx*/) override { }
  virtual void exitEmptyStatement(entdlrParser::EmptyStatementContext * /*ctx*/) override { }

  virtual void enterConstant(entdlrParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(entdlrParser::ConstantContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

