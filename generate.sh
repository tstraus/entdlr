#!/bin/bash 

pushd src/grammar &> /dev/null
antlr4 -o ../generated -Dlanguage=Cpp entdlr.g4 
