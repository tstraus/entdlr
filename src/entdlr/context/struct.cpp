#include "struct.h"

namespace Entdlr
{
Field Field::create(const Token& token,
                    const std::string& type,
                    const bool isArray,
                    const uint32_t arraySize,
                    const std::unordered_map<std::string, Attribute>& attributes,
                    const std::string& comment,
                    const Documentation& documentation)
{
    Field out;
    out.token = TokenType::Field;
    out.filename = token.filename;
    out.line = token.line;
    out.column = token.column;
    out.name = token.name;
    out.type = type;
    out.isArray = isArray;
    out.arraySize = arraySize;
    out.attributes = attributes;
    out.comment = comment;
    out.documentation = documentation;

    return out;
}

Struct Struct::create(const Token& token,
                      const std::unordered_map<std::string, Attribute>& attributes,
                      const std::string& comment,
                      const Documentation& documentation)
{
    Struct out;
    out.token = TokenType::Struct;
    out.filename = token.filename;
    out.line = token.line;
    out.column = token.column;
    out.name = token.name;
    out.attributes = attributes;
    out.comment = comment;
    out.documentation = documentation;

    return out;
}

void Struct::add(const Field& field)
{
    fields.push_back(field);
}

void Struct::add(const Method& method)
{
    methods.push_back(method);
}
}; // namespace Entdlr
