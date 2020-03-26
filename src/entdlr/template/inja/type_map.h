#ifndef __TYPE_MAP_H__
#define __TYPE_MAP_H__

#include <string>
#include <map>
#include <optional>

#include "context.h"

namespace Entdlr
{
    class TypeMap
    {
    public:
        TypeMap(const std::string& filename); // load a json mapping file

        TypeMap(const std::map<std::string, std::string>& mappings);

        Context applyMapping(const Context& context);

        std::optional<std::string> getType(const std::string& key);

    private:
        std::map<std::string, std::string> mappings;
    };
};

#endif // __TYPE_MAP_H__