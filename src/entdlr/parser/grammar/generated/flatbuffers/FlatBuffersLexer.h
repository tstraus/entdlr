
// Generated from FlatBuffersLexer.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  FlatBuffersLexer : public antlr4::Lexer {
public:
  enum {
    INCLUDE = 1, NAMESPACE = 2, ATTRIBUTE = 3, TABLE = 4, STRUCT = 5, ENUM = 6, 
    UNION = 7, INTERFACE = 8, MUTABLE = 9, STATIC = 10, REFERENCE = 11, 
    ROOT_TYPE = 12, RPC_SERVICE = 13, FILE_EXTENSION = 14, FILE_IDENTIFIER = 15, 
    STRING_CONSTANT = 16, BASE_TYPE_NAME = 17, IDENT = 18, HEX_INTEGER_CONSTANT = 19, 
    INTEGER_CONSTANT = 20, FLOAT_CONSTANT = 21, BLOCK_COMMENT = 22, DOC_COMMENT = 23, 
    COMMENT = 24, SEMICOLON = 25, COLON = 26, PERIOD = 27, COMMA = 28, EQUAL = 29, 
    OPEN_BRACE = 30, CLOSE_BRACE = 31, OPEN_BRACKET = 32, CLOSE_BRACKET = 33, 
    OPEN_PAREN = 34, CLOSE_PAREN = 35, WHITESPACE = 36
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

