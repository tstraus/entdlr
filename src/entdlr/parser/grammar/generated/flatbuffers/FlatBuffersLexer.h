
// Generated from FlatBuffersLexer.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  FlatBuffersLexer : public antlr4::Lexer {
public:
  enum {
    INCLUDE = 1, NAMESPACE = 2, ATTRIBUTE = 3, TABLE = 4, STRUCT = 5, ENUM = 6, 
    UNION = 7, INTERFACE = 8, SERVICE = 9, MUTABLE = 10, STATIC = 11, REFERENCE = 12, 
    ROOT_TYPE = 13, RPC_SERVICE = 14, FILE_EXTENSION = 15, FILE_IDENTIFIER = 16, 
    STRING_CONSTANT = 17, BASE_TYPE_NAME = 18, IDENT = 19, HEX_INTEGER_CONSTANT = 20, 
    INTEGER_CONSTANT = 21, FLOAT_CONSTANT = 22, BLOCK_COMMENT = 23, DOC_COMMENT = 24, 
    COMMENT = 25, SEMICOLON = 26, COLON = 27, PERIOD = 28, COMMA = 29, EQUAL = 30, 
    OPEN_BRACE = 31, CLOSE_BRACE = 32, OPEN_BRACKET = 33, CLOSE_BRACKET = 34, 
    OPEN_PAREN = 35, CLOSE_PAREN = 36, WHITESPACE = 37
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

