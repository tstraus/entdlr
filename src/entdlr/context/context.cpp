#include "context.h"

namespace Entdlr
{
    void Context::add(const Namespace& n)
    {
        namespaces[n.name] = n;
    }
};
