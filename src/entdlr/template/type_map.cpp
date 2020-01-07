#include "type_map.h"

#include "nlohmann/json.hpp"

#include <fstream>

using json = nlohmann::json;

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

        /*for (auto& n : output.namespaces)
        {

        }*/

        return context; // need to change this to actually do something...
    }

    std::optional<std::string> TypeMap::getType(const std::string& key)
    {
        if (mappings.count(key))
            return mappings[key];
        else return {};
    }
};