#ifndef __ENTDLR_UNION_H__
#define __ENTDLR_UNION_H__

#include <stdint.h>
#include <string>
#include <unordered_map>
#include <vector>

#include "attribute.h"
#include "documentation.h"
#include "token.h"

namespace Entdlr
{
class UnionType : public Token
{
  public:
    bool isArray;
    uint32_t arraySize;

    static UnionType create(const Token& token, bool isArray, uint32_t arraySize);
};

class Union : public Token
{
  public:
    std::vector<UnionType> types;
    std::unordered_map<std::string, Attribute> attributes;
    std::string comment;
    Documentation documentation;

    static Union create(const Token& token,
                        const std::unordered_map<std::string, Attribute>& attributes = {},
                        const std::string& comment = "",
                        const Documentation& documentation = {});
    void add(const UnionType& type);
};
}; // namespace Entdlr

#endif // __ENTDLR_UNION_H__
