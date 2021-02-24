#ifndef __ENTDLR_INTERFACE_H__
#define __ENTDLR_INTERFACE_H__

#include <string>
#include <vector>

#include "documentation.h"
#include "method.h"
#include "token.h"

namespace Entdlr
{
class Interface : public Token
{
  public:
    std::vector<Method> methods;
    std::string comment;
    Documentation documentation;

    static Interface create(const Token& token,
                            const std::string& comment = "",
                            const Documentation& documentation = {});
    void add(const Method& method);
};
}; // namespace Entdlr

#endif // __ENTDLR_INTERFACE_H__
