#include "struct.h"

namespace Entdlr
{
    Field Field::create(const std::string& name, const std::string& type, const bool& isArray, const uint32_t& arraySize)
    {
        Field out;
        out.name = name;
        out.type = type;
        out.isArray = isArray;
        out.arraySize = arraySize;

        return out;
    }

    Struct Struct::create(const std::string& name)
    {
        Struct out;
        out.name = name;

        return out;
    }

    void Struct::add(const Field& field)
    {
        fields.push_back(field);
    }
};