#ifndef __TYPE_MAP_H__
#define __TYPE_MAP_H__

#include "optional.hpp"
#include <unordered_map>
#include <string>
using nonstd::optional;

#include "context.h"

namespace Entdlr
{
class TypeMap
{
  public:
    TypeMap(const std::unordered_map<std::string, std::string>& mappings);

    Context applyMapping(const Context& context);

    optional<std::string> getType(const std::string& key);

  private:
    Namespace applyMapping(const Namespace& n);

    std::unordered_map<std::string, std::string> mappings;
};
}; // namespace Entdlr

#endif // __TYPE_MAP_H__
