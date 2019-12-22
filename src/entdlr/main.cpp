#include <iostream>

#include "antlr4-runtime.h"
#include "entdlrLexer.h"
#include "entdlrParser.h"
#include "entdlrVisitor.h"

using std::cout; using std::endl;

int main(int argc, char** argv)
{
    cout << "entdlr" << endl;

    std::ifstream file;
    file.open("../example.proto");

    antlr4::ANTLRInputStream input(file);
    entdlrLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    entdlrParser parser(&tokens);

    return 0;
}
