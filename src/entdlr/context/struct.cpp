#include "struct.h"

namespace Entdlr
{
    Field Field::create(const std::string& name, const std::string& type)
    {
        Field out;
        out.name = name;
        out.type = type;

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