#ifndef __ENTDLR_METHOD_H__
#define __ENTDLR_METHOD_H__

#include <string>
#include <unordered_map>
#include <vector>

#include "attribute.h"
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
    bool isArray;
    uint32_t arraySize;

    static Parameter create(const Token& token,
                            const std::string& type,
                            bool constant = true,
                            bool reference = false,
                            bool isArray = false,
                            uint32_t arraySize = 0);
};

class Method : public Token
{
  public:
    Parameter returnValue;
    std::vector<Parameter> parameters;
    bool isStatic;
    bool constant;
    std::string comment;
    std::unordered_map<std::string, Attribute> attributes;
    Documentation documentation;

    static Method create(const Token& token,
                         const Parameter& returnValue,
                         bool isStatic = false,
                         bool constant = false,
                         const std::unordered_map<std::string, Attribute>& attributes = {},
                         const std::string& comment = "",
                         const Documentation& documentation = {});
    void add(const Parameter& parameter);
};
}; // namespace Entdlr

#endif // __ENTDLR_METHOD_H__
