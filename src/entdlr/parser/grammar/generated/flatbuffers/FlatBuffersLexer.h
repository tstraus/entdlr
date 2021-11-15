
// Generated from FlatBuffersLexer.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  FlatBuffersLexer : public antlr4::Lexer {
public:
  enum {
    INCLUDE = 1, NAMESPACE = 2, ATTRIBUTE = 3, TABLE = 4, STRUCT = 5, ENUM = 6, 
    UNION = 7, INTERFACE = 8, SERVICE = 9, STATIC = 10, MUTABLE = 11, IN = 12, 
    OUT = 13, ROOT_TYPE = 14, RPC_SERVICE = 15, FILE_EXTENSION = 16, FILE_IDENTIFIER = 17, 
    STRING_CONSTANT = 18, BASE_TYPE_NAME = 19, IDENT = 20, HEX_INTEGER_CONSTANT = 21, 
    INTEGER_CONSTANT = 22, FLOAT_CONSTANT = 23, BLOCK_COMMENT = 24, DOC_COMMENT = 25, 
    COMMENT = 26, SEMICOLON = 27, COLON = 28, PERIOD = 29, COMMA = 30, EQUAL = 31, 
    OPEN_BRACE = 32, CLOSE_BRACE = 33, OPEN_BRACKET = 34, CLOSE_BRACKET = 35, 
    OPEN_PAREN = 36, CLOSE_PAREN = 37, WHITESPACE = 38
  };

  explicit FlatBuffersLexer(antlr4::CharStream *input);
  ~FlatBuffersLexer();

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

