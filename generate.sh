#!/bin/bash 

pushd ./src/entdlr/grammar &> /dev/null
antlr4 -visitor -o ./generated -Dlanguage=Cpp FlatBuffers.g4 
