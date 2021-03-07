#include "union.h"

#include <iostream>

using std::cout;
using std::endl;

namespace Entdlr
{
UnionType UnionType::create(const Token& token, const bool& isArray, const uint32_t& arraySize)
{
    UnionType out;
    out.token = TokenType::UnionType;
    out.filename = token.filename;
    out.line = token.line;
    out.column = token.column;
    out.name = token.name;
    out.isArray = isArray;
    out.arraySize = arraySize;

    return out;
}

Union Union::create(const Token& token,
                    const std::unordered_map<std::string, Attribute>& attributes,
                    const std::string& comment,
                    const Documentation& documentation)
{
    Union out;
    out.token = TokenType::Union;
    out.filename = token.filename;
    out.line = token.line;
    out.column = token.column;
    out.name = token.name;
    out.attributes = attributes;
    out.comment = comment;
    out.documentation = documentation;

    return out;
}

void Union::add(const UnionType& type)
{
    types.push_back(type);
}
}; // namespace Entdlr
