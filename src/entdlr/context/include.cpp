#include "include.h"

#include <iostream>

using std::cout; using std::endl;

namespace Entdlr
{
    Include Include::create(const Token& token)
    {
        Include out;
        out.token = TokenType::Include;
        out.filename = token.filename;
        out.line = token.line;
        out.column = token.column;
        out.name = token.name;

        return out;
    }

    void Include::add(const Namespace& n)
    {
        namespaces.push_back(n);
    }
};
