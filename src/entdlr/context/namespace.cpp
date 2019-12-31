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
        enums[e.name] = e;
    }

    void Namespace::add(const Struct& s)
    {
        structs[s.name] = s;
    }
};