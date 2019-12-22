#!/bin/bash 

pushd ./src/entdlr/grammar &> /dev/null
antlr4 -o ../generated -Dlanguage=Cpp entdlr.g4 
