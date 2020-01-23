#include "namespace.h"

namespace Entdlr
{
    Namespace Namespace::create(const std::string& name)
    {
        Namespace out;
        out.name = name;

        return out;
    }

    void Namespace::add(const Enum& e)
    {
        enums.push_back(e);
    }

    void Namespace::add(const Union& u)
    {
        unions.push_back(u);
    }

    void Namespace::add(const Struct& s)
    {
        structs.push_back(s);
    }
};