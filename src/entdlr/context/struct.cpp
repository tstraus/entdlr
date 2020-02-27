#include "struct.h"

namespace Entdlr
{
    Attribute Attribute::create(const Token& token)
    {
        Attribute out;
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
        out.filename = token.filename;
        out.line = token.line;
        out.column = token.column;
        out.name = token.name;
        out.isString = true;
        out.string = s;
        out.isNumber = false;
        out.number = 0;

        return out;
    }

    Attribute Attribute::create(const Token& token, const double n)
    {
        Attribute out;
        out.filename = token.filename;
        out.line = token.line;
        out.column = token.column;
        out.name = token.name;
        out.isString = false;
        out.string = "";
        out.isNumber = true;
        out.number = n;

        return out;
    }

    Field Field::create(const Token& token, const std::string& type, const bool& isArray, const uint32_t& arraySize, std::vector<Attribute>& attributes)
    {
        Field out;
        out.filename = token.filename;
        out.line = token.line;
        out.column = token.column;
        out.name = token.name;
        out.type = type;
        out.isArray = isArray;
        out.arraySize = arraySize;
        out.attributes = attributes;

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