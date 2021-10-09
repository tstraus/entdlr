#include "type_map.h"

#include "nlohmann/json.hpp"

#include <fstream>

using json = nlohmann::json;
using nonstd::optional;

namespace Entdlr
{
TypeMap::TypeMap(const std::unordered_map<std::string, std::string>& mappings)
{
    this->mappings = mappings;
}

Context TypeMap::applyMapping(const Context& context)
{
    auto output = context;

    for (auto& n : output.namespaces)
    {
        n = applyMapping(n);
    }

    for (auto& i : output.includes)
    {
        for (auto& n : i.namespaces)
        {
            n = applyMapping(n);
        }
    }

    return output;
}

Namespace TypeMap::applyMapping(const Namespace& n)
{
    auto output = n;

    for (auto& e : output.enums)
    {
        if (mappings.count(e.type) != 0U)
        {
            e.type = mappings[e.type];
        }
    }

    for (auto& u : output.unions)
    {
        for (auto& t : u.types)
        {
            if (mappings.count(t.name) != 0U)
            {
                t.name = mappings[t.name];
            }
        }
    }

    for (auto& s : output.structs)
    {
        for (auto& f : s.fields)
        {
            if (mappings.count(f.type) != 0U)
            {
                f.type = mappings[f.type];
            }
        }

        for (auto& m : s.methods)
        {
            if (mappings.count(m.returnType) != 0U)
            {
                m.returnType = mappings[m.returnType];
            }

            for (auto& p : m.parameters)
            {
                if (mappings.count(p.type) != 0U)
                {
                    p.type = mappings[p.type];
                }
            }
        }
    }

    for (auto& i : output.interfaces)
    {
        for (auto& m : i.methods)
        {
            if (mappings.count(m.returnType) != 0U)
            {
                m.returnType = mappings[m.returnType];
            }

            for (auto& p : m.parameters)
            {
                if (mappings.count(p.type) != 0U)
                {
                    p.type = mappings[p.type];
                }
            }
        }
    }

    return output;
}

optional<std::string> TypeMap::getType(const std::string& key)
{
    if (mappings.count(key) != 0U)
    {
        return mappings[key];
    }
    return {};
}
}; // namespace Entdlr
