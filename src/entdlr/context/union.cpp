#include "union.h"

#include <iostream>

using std::cout; using std::endl;

namespace Entdlr
{
    UnionType UnionType::create(const std::string& type, const bool& isArray, const uint32_t& arraySize)
    {
        UnionType out;
        out.type = type;
        out.isArray = isArray;
        out.arraySize = arraySize;

        return out;
    }

    Union Union::create(const std::string& name)
    {
        Union out;
        out.name = name;

        return out;
    }

    void Union::add(const UnionType& type)
    {
        types.push_back(type);
    }
};