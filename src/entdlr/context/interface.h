#ifndef __ENTDLR_INTERFACE_H__
#define __ENTDLR_INTERFACE_H__

#include <string>
#include <vector>
#include <unordered_map>

#include "attribute.h"
#include "documentation.h"
#include "method.h"
#include "token.h"

namespace Entdlr
{
class Interface : public Token
{
  public:
    std::vector<Method> methods;
    std::unordered_map<std::string, Attribute> attributes;
    std::string comment;
    Documentation documentation;

    static Interface create(const Token& token,
                            const std::unordered_map<std::string, Attribute>& attributes = {},
                            const std::string& comment = "",
                            const Documentation& documentation = {});
    void add(const Method& method);
};
}; // namespace Entdlr

#endif // __ENTDLR_INTERFACE_H__
