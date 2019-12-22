
// Generated from entdlr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  entdlrLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, BOOL = 2, BYTES = 3, DOUBLE = 4, ENUM = 5, FIXED32 = 6, FIXED64 = 7, 
    FLOAT = 8, IMPORT = 9, INT32 = 10, INT64 = 11, MAP = 12, MESSAGE = 13, 
    ONEOF = 14, OPTION = 15, PACKAGE = 16, PROTO3_DOUBLE = 17, PROTO3_SINGLE = 18, 
    PUBLIC = 19, REPEATED = 20, RESERVED = 21, RETURNS = 22, RPC = 23, SERVICE = 24, 
    SFIXED32 = 25, SFIXED64 = 26, SINT32 = 27, SINT64 = 28, STREAM = 29, 
    STRING = 30, SYNTAX = 31, TO = 32, UINT32 = 33, UINT64 = 34, WEAK = 35, 
    Ident = 36, IntLit = 37, FloatLit = 38, BoolLit = 39, StrLit = 40, Quote = 41, 
    LPAREN = 42, RPAREN = 43, LBRACE = 44, RBRACE = 45, LBRACK = 46, RBRACK = 47, 
    LCHEVR = 48, RCHEVR = 49, SEMI = 50, COMMA = 51, DOT = 52, MINUS = 53, 
    PLUS = 54, ASSIGN = 55, WS = 56, COMMENT = 57, LINE_COMMENT = 58
  };

  entdlrLexer(antlr4::CharStream *input);
  ~entdlrLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

