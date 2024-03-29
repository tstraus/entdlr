#ifndef __ENTDLR_STRUCT_H__
#define __ENTDLR_STRUCT_H__

#include <string>
#include <unordered_map>
#include <vector>

#include "attribute.h"
#include "documentation.h"
#include "method.h"
#include "token.h"

namespace Entdlr
{
class Field : public Token
{
  public:
    std::string type;
    bool isArray;
    uint32_t arraySize;
    std::unordered_map<std::string, Attribute> attributes;
    std::string comment;
    Documentation documentation;

    static Field create(const Token& token,
                        const std::string& type,
                        bool isArray,
                        uint32_t arraySize,
                        const std::unordered_map<std::string, Attribute>& attributes = {},
                        const std::string& comment = "",
                        const Documentation& documentation = {});
};

class Struct : public Token
{
  public:
    std::vector<Field> fields;
    std::vector<Method> methods;
    std::unordered_map<std::string, Attribute> attributes;
    std::string comment;
    Documentation documentation;

    static Struct create(const Token& token,
                         const std::unordered_map<std::string, Attribute>& attributes = {},
                         const std::string& comment = "",
                         const Documentation& documentation = {});
    void add(const Field& field);
    void add(const Method& method);
};
}; // namespace Entdlr

#endif // __ENTDLR_STRUCT_H__
