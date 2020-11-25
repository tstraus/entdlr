#!/bin/bash 

pushd ./src/entdlr/parser/grammar &> /dev/null
antlr4 -visitor -o ./generated -Dlanguage=Cpp FlatBuffersLexer.g4 FlatBuffersParser.g4
