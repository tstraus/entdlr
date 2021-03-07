#include "context.h"

namespace Entdlr
{
void Context::add(const Include& i)
{
    includes.push_back(i);
}

void Context::add(const Namespace& n)
{
    namespaces.push_back(n);
}
}; // namespace Entdlr
