#!/bin/bash 

pushd ./src/entdlr/parser/grammar &> /dev/null
antlr4 -visitor -o ./generated/flatbuffers -Dlanguage=Cpp FlatBuffersLexer.g4 FlatBuffersParser.g4
antlr4 -visitor -o ./generated/javadoc -Dlanguage=Cpp JavadocLexer.g4 JavadocParser.g4
