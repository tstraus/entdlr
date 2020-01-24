#include "union.h"

#include <iostream>

using std::cout; using std::endl;

namespace Entdlr
{
    UnionType UnionType::create(const Token& token, const bool& isArray, const uint32_t& arraySize)
    {
        UnionType out;
        out.filename = token.filename;
        out.line = token.line;
        out.column = token.column;
        out.name = token.name;
        out.isArray = isArray;
        out.arraySize = arraySize;

        return out;
    }

    Union Union::create(const Token& token)
    {
        Union out;
        out.filename = token.filename;
        out.line = token.line;
        out.column = token.column;
        out.name = token.name;

        return out;
    }

    void Union::add(const UnionType& type)
    {
        types.push_back(type);
    }
};