#include <iostream>

#include "antlr4-runtime.h"
#include "FlatBuffersLexer.h"
#include "FlatBuffersParser.h"

#include "inja.hpp"

using std::cout; using std::endl;

int main(int argc, char** argv)
{
    // open the file
    std::ifstream file;
    if (argc > 1)
        file.open(argv[1]);
    else file.open("../samples/monster.fbs");

    // parse with antlr
    antlr4::ANTLRInputStream input(file);
    FlatBuffersLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    FlatBuffersParser parser(&tokens);

    // get the output
    const auto& schema = parser.schema();

    // go through the AST
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
        { // print the namespace with '.' separators
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
    { // name of the enum
        cout << e->IDENT()->getSymbol()->getText() << endl;

        // values of the enum
        for (const auto& v : e->commasep_enumval_decl()->enumval_decl())
            cout << "    " << v->ns_ident()->IDENT()[0]->getSymbol()->getText() << endl;
    }

    // print types and their fields
    cout << "===== types =====" << endl;
    const auto& types = schema->type_decl();
    for (const auto& t : types)
    { // name of the type
        cout << t->IDENT()->getSymbol()->getText() << endl;

        for (const auto& f : t->field_decl()) { // members of type
            cout << "    " << f->IDENT()->getSymbol()->getText() << " : ";

            if (f->type()->BASE_TYPE_NAME()) // plain type
                cout << f->type()->BASE_TYPE_NAME()->getSymbol()->getText();
            if (f->type()->type() && f->type()->type()->BASE_TYPE_NAME())
            { // array of plain type
                cout << f->type()->type()->BASE_TYPE_NAME()->getSymbol()->getText();
                cout << "[";
                if (f->type()->integer_const() && f->type()->integer_const()->INTEGER_CONSTANT()) // fixed size array
                    cout << f->type()->integer_const()->INTEGER_CONSTANT()->getSymbol()->getText();
                cout << "]";
            }
            if (f->type()->type() && f->type()->type()->ns_ident())
            { // array of namespace type
                bool afterFirst = false;
                for (const auto& segment : f->type()->type()->ns_ident()->IDENT())
                { // print the namespace type with '.' separators
                    if (afterFirst)
                        cout << ".";
                    else afterFirst = true;

                    cout << segment->getSymbol()->getText();
                }
                cout << "[";
                if (f->type()->integer_const() && f->type()->integer_const()->INTEGER_CONSTANT()) // fixed size array
                    cout << f->type()->integer_const()->INTEGER_CONSTANT()->getSymbol()->getText();
                cout << "]";
            }
            if (f->type()->ns_ident())
            { // namespace type
                bool afterFirst = false;
                for (const auto& segment : f->type()->ns_ident()->IDENT())
                { // print the namespace type with '.' separators
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
