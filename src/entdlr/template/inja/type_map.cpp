#include "type_map.h"

#include "nlohmann/json.hpp"

#include <fstream>

using json = nlohmann::json;
using nonstd::optional;

namespace Entdlr
{
    TypeMap::TypeMap(const std::string& filename)
    {
        std::ifstream f(filename);
        json j;
        f >> j;

        j.at("mappings").get_to(mappings);
    }

    TypeMap::TypeMap(const std::map<std::string, std::string>& mappings)
    {
        this->mappings = mappings;
    }

    Context TypeMap::applyMapping(const Context& context)
    {
        auto output = context;

        for (auto& n : output.namespaces)
            n = applyMapping(n);

        for (auto& i : output.includes)
        {
            for (auto& n : i.namespaces)
                n = applyMapping(n);
        }

        return output;
    }

    Namespace TypeMap::applyMapping(const Namespace& n)
    {
        auto output = n;

        for (auto& e : output.enums)
        {
            if (mappings.count(e.type))
                e.type = mappings[e.type];
        }

        for (auto& u : output.unions)
        {
            for (auto& t : u.types)
            {
                if (mappings.count(t.name))
                    t.name = mappings[t.name];
            }
        }

        for (auto& s : output.structs)
        {
            for (auto& f : s.fields)
            {
                if (mappings.count(f.type))
                    f.type = mappings[f.type];
            }

            for (auto& m : s.methods)
            {
                if (mappings.count(m.returnType))
                    m.returnType = mappings[m.returnType];

                for (auto& p : m.parameters)
                {
                    if (mappings.count(p.type))
                        p.type = mappings[p.type];
                }
            }
        }

        for (auto& i : output.interfaces)
        {
            for (auto& m : i.methods)
            {
                if (mappings.count(m.returnType))
                    m.returnType = mappings[m.returnType];

                for (auto& p : m.parameters)
                {
                    if (mappings.count(p.type))
                        p.type = mappings[p.type];
                }
            }
        }

        return output;
    }

    optional<std::string> TypeMap::getType(const std::string& key)
    {
        if (mappings.count(key))
            return mappings[key];
        else return {};
    }
};
