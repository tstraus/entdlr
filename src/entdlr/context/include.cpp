#include "include.h"

#include <iostream>

using std::cout; using std::endl;

namespace Entdlr
{
    Include Include::create(const Token& token)
    {
        Include out;
        out.filename = token.filename;
        out.line = token.line;
        out.column = token.column;
        out.name = token.name;

        return out;
    }
};