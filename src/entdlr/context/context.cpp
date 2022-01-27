#include "context.h"

#include <algorithm>

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

void Context::sort()
{
    // sort the actual includes
    std::sort(includes.begin(), includes.end(), [](const Include& a, const Include& b) { return a.name < b.name; });

    // sort the info parsed from the includes
    for (auto& i : includes)
    {
        for (auto& n : i.namespaces)
        {
            n.sort();
        }
    }

    // sort the namespaces defined
    std::sort(
        namespaces.begin(), namespaces.end(), [](const Namespace& a, const Namespace& b) { return a.name < b.name; });

    // sort the content of the namespaces defined
    for (auto& n : namespaces)
    {
        n.sort();
    }
}
}; // namespace Entdlr
