#include "struct.h"

namespace Entdlr
{
    Field Field::create(const Token& token, const std::string& type, const bool& isArray, const uint32_t& arraySize)
    {
        Field out;
        out.filename = token.filename;
        out.line = token.line;
        out.column = token.column;
        out.name = token.name;
        out.type = type;
        out.isArray = isArray;
        out.arraySize = arraySize;

        return out;
    }

    Struct Struct::create(const Token& token)
    {
        Struct out;
        out.filename = token.filename;
        out.line = token.line;
        out.column = token.column;
        out.name = token.name;

        return out;
    }

    void Struct::add(const Field& field)
    {
        fields.push_back(field);
    }
};