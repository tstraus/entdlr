#ifndef __ENTDLR_METHOD_H__
#define __ENTDLR_METHOD_H__

#include <string>
#include <vector>

#include "documentation.h"
#include "token.h"

namespace Entdlr
{
class Parameter : public Token
{
  public:
    std::string type;
    bool constant;
    bool reference;

    static Parameter create(const Token& token, const std::string& type, bool constant = true, bool reference = false);
};

class Method : public Token
{
  public:
    std::string returnType;
    bool returnIsReference;
    std::vector<Parameter> parameters;
    bool isStatic;
    bool constant;
    std::string comment;
    Documentation documentation;

    static Method create(const Token& token,
                         const std::string& returnType,
                         bool returnIsReference = false,
                         bool isStatic = false,
                         bool constant = false,
                         const std::string& comment = "",
                         const Documentation& documentation = {});
    void add(const Parameter& parameter);
};
}; // namespace Entdlr

#endif // __ENTDLR_METHOD_H__
