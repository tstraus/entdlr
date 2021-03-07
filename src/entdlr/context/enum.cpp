#include "enum.h"

#include <iostream>

using nonstd::optional;
using std::cout;
using std::endl;

namespace Entdlr
{
EnumValue EnumValue::create(const Token& token, const int64_t& value)
{
    EnumValue out;
    out.token = TokenType::EnumValue;
    out.filename = token.filename;
    out.line = token.line;
    out.column = token.column;
    out.name = token.name;
    out.value = value;

    return out;
}

Enum Enum::create(const Token& token,
                  const std::string& type,
                  const std::unordered_map<std::string, Attribute>& attributes,
                  const std::string& comment,
                  const Documentation& documentation)
{
    Enum out;
    out.token = TokenType::Enum;
    out.filename = token.filename;
    out.line = token.line;
    out.column = token.column;
    out.name = token.name;
    out.nextValue = 0;
    out.type = type;
    out.attributes = attributes;
    out.comment = comment;
    out.documentation = documentation;

    return out;
}

void Enum::add(const Token& token, const optional<int64_t> value)
{
    if (!token.name.empty())
    {
        if (value)
        {
            values.push_back(EnumValue::create(token, *value));
            nextValue = *value + 1;
        }

        else
        {
            const auto newValue = nextValue++;
            values.push_back(EnumValue::create(token, newValue));
        }
    }
}
}; // namespace Entdlr
