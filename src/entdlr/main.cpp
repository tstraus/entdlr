#include <iostream>

#include "antlr4-runtime.h"
#include "FlatBuffersLexer.h"
#include "FlatBuffersParser.h"
#include "FlatBuffersVisitor.h"

#include "inja.hpp"

using std::cout; using std::endl;

int main(int argc, char** argv)
{
    std::ifstream file;
    file.open("../samples/monster.fbs");

    antlr4::ANTLRInputStream input(file);
    FlatBuffersLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    FlatBuffersParser parser(&tokens);

    const auto& schema = parser.schema();

    // print includes
    cout << "===== includes =====" << endl;
    const auto& includes = schema->include();
    for (const auto& i : includes)
        cout << i->STRING_CONSTANT()->getSymbol()->getText() << endl;

    // print namespaces
    cout << "===== namespaces =====" << endl;
    const auto& namespaces = schema->namespace_decl();
    for (const auto& n : namespaces)
    {
        bool afterFirst = false;
        for (const auto& segment : n->IDENT())
        {
            if (afterFirst)
                cout << ".";
            else afterFirst = true;

            cout << segment->getSymbol()->getText();
        }

        cout << endl;
    }

    // print enums
    cout << "===== enums =====" << endl;
    const auto& enums = schema->enum_decl();
    for (const auto& e : enums)
    {
        cout << e->IDENT()->getSymbol()->getText() << endl;

        for (const auto& v : e->commasep_enumval_decl()->enumval_decl())
            cout << "    " << v->ns_ident()->IDENT()[0]->getSymbol()->getText() << endl;
    }

    // print types and their fields
    cout << "===== types =====" << endl;
    const auto& types = schema->type_decl();
    for (const auto& t : types)
    {
        cout << t->IDENT()->getSymbol()->getText() << endl;

        for (const auto& f : t->field_decl())
        {
            cout << "    " << f->IDENT()->getSymbol()->getText() << " : ";

            if (f->type()->BASE_TYPE_NAME())
                cout << f->type()->BASE_TYPE_NAME()->getSymbol()->getText();
            if (f->type()->type() && f->type()->type()->BASE_TYPE_NAME())
                cout << f->type()->type()->BASE_TYPE_NAME()->getSymbol()->getText();
            if (f->type()->type() && f->type()->type()->ns_ident())
            {
                bool afterFirst = false;
                for (const auto& segment : f->type()->type()->ns_ident()->IDENT())
                {
                    if (afterFirst)
                        cout << ".";
                    else afterFirst = true;

                    cout << segment->getSymbol()->getText();
                }
            }
            if (f->type()->ns_ident())
            {
                bool afterFirst = false;
                for (const auto& segment : f->type()->ns_ident()->IDENT())
                {
                    if (afterFirst)
                        cout << ".";
                    else afterFirst = true;

                    cout << segment->getSymbol()->getText();
                }
            }

            cout << endl;
        }
    }

    return 0;
}
