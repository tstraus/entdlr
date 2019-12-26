#include <iostream>

#include "antlr4-runtime.h"
#include "FlatBuffersLexer.h"
#include "FlatBuffersParser.h"
#include "FlatBuffersVisitor.h"

#include "inja.hpp"

using std::cout; using std::endl;

int main(int argc, char** argv)
{
    cout << "entdlr" << endl;

    std::ifstream file;
    file.open("../samples/example.proto");

    antlr4::ANTLRInputStream input(file);
    FlatBuffersLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    FlatBuffersParser parser(&tokens);

    return 0;
}
