
// Generated from entdlr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "entdlrVisitor.h"


/**
 * This class provides an empty implementation of entdlrVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  entdlrBaseVisitor : public entdlrVisitor {
public:

  virtual antlrcpp::Any visitProto(entdlrParser::ProtoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSyntax(entdlrParser::SyntaxContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImportStatement(entdlrParser::ImportStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPackageStatement(entdlrParser::PackageStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOption(entdlrParser::OptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptionName(entdlrParser::OptionNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptionBody(entdlrParser::OptionBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptionBodyVariable(entdlrParser::OptionBodyVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTopLevelDef(entdlrParser::TopLevelDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMessage(entdlrParser::MessageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMessageBody(entdlrParser::MessageBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumDefinition(entdlrParser::EnumDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumBody(entdlrParser::EnumBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumField(entdlrParser::EnumFieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumValueOption(entdlrParser::EnumValueOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitService(entdlrParser::ServiceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRpc(entdlrParser::RpcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReserved(entdlrParser::ReservedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRanges(entdlrParser::RangesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRange(entdlrParser::RangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldNames(entdlrParser::FieldNamesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(entdlrParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldNumber(entdlrParser::FieldNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitField(entdlrParser::FieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldOptions(entdlrParser::FieldOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldOption(entdlrParser::FieldOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOneof(entdlrParser::OneofContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOneofField(entdlrParser::OneofFieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMapField(entdlrParser::MapFieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyType(entdlrParser::KeyTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReservedWord(entdlrParser::ReservedWordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFullIdent(entdlrParser::FullIdentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMessageName(entdlrParser::MessageNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumName(entdlrParser::EnumNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMessageOrEnumName(entdlrParser::MessageOrEnumNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldName(entdlrParser::FieldNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOneofName(entdlrParser::OneofNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMapName(entdlrParser::MapNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitServiceName(entdlrParser::ServiceNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRpcName(entdlrParser::RpcNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMessageType(entdlrParser::MessageTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMessageOrEnumType(entdlrParser::MessageOrEnumTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmptyStatement(entdlrParser::EmptyStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(entdlrParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }


};

