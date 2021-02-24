#!/bin/bash 

pushd ./src/entdlr/parser/grammar &> /dev/null

if [[ -e `command -v antlr4` ]]; then
    antlr4 -visitor -o ./generated/flatbuffers -Dlanguage=Cpp FlatBuffersLexer.g4 FlatBuffersParser.g4
    antlr4 -visitor -o ./generated/javadoc -Dlanguage=Cpp JavadocLexer.g4 JavadocParser.g4
elif [[ -e `command -v antlr` ]]; then
    antlr -visitor -o ./generated/flatbuffers -Dlanguage=Cpp FlatBuffersLexer.g4 FlatBuffersParser.g4
    antlr -visitor -o ./generated/javadoc -Dlanguage=Cpp JavadocLexer.g4 JavadocParser.g4
else
    echo "ERROR: Couldn't find ANTLR 4 executable"
fi
