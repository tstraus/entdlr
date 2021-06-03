#include "attribute.h"

namespace Entdlr
{
Attribute Attribute::create(const Token& token)
{
    Attribute out;
    out.token = TokenType::Attribute;
    out.filename = token.filename;
    out.line = token.line;
    out.column = token.column;
    out.name = token.name;
    out.isString = false;
    out.string = "";
    out.isNumber = false;
    out.number = 0;

    return out;
}

Attribute Attribute::create(const Token& token, const std::string& s)
{
    Attribute out;
    out.token = TokenType::Attribute;
    out.filename = token.filename;
    out.line = token.line;
    out.column = token.column;
    out.name = token.name;
    out.isString = true;
    out.string = s;
    out.isNumber = false;
    out.number = 0;
    out.isInteger = false;
    out.integer = 0;

    return out;
}

Attribute Attribute::create(const Token& token, const double n)
{
    Attribute out;
    out.token = TokenType::Attribute;
    out.filename = token.filename;
    out.line = token.line;
    out.column = token.column;
    out.name = token.name;
    out.isString = false;
    out.string = "";
    out.isNumber = true;
    out.number = n;
    out.isInteger = false;
    out.integer = 0;

    return out;
}

Attribute Attribute::create(const Token& token, const int64_t i)
{
    Attribute out;
    out.token = TokenType::Attribute;
    out.filename = token.filename;
    out.line = token.line;
    out.column = token.column;
    out.name = token.name;
    out.isString = false;
    out.string = "";
    out.isNumber = false;
    out.number = 0;
    out.isInteger = true;
    out.integer = i;

    return out;
}
}; // namespace Entdlr
