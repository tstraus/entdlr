#include "context.h"

namespace Entdlr
{
    void Context::add(const Enum& e)
    {
        enums[e.name] = e;
    }

    void Context::add(const Struct& s)
    {
        structs[s.name] = s;
    }

    void Context::add(const Namespace& n)
    {
        namespaces[n.name] = n;
    }
};