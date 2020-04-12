#include "token.h"

#include <iostream>

using std::cout; using std::endl;

namespace Entdlr
{
    Token Token::create(const std::string& name, const std::string& filename,
        const uint64_t line, const uint64_t column)
    {
        Token out;
        out.name = name;
        out.filename = filename;
        out.line = line;
        out.column = column;

        return out;
    }
};
