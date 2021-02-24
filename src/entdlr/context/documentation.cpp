#include "documentation.h"

#include <iostream>

using std::cout;
using std::endl;

namespace Entdlr
{
Tag Tag::create(const Token& token, const std::string& content)
{
    Tag out;
    out.token = TokenType::Tag;
    out.filename = token.filename;
    out.line = token.line;
    out.column = token.column;
    out.name = token.name;
    out.content = content;

    return out;
}

Documentation Documentation::create(const Token& token, const std::string& description)
{
    Documentation out;
    out.token = TokenType::Documentation;
    out.filename = token.filename;
    out.line = token.line;
    out.column = token.column;
    out.name = token.name;
    out.description = description;

    return out;
}

void Documentation::add(const Tag& t)
{
    tags.push_back(t);
}
}; // namespace Entdlr
