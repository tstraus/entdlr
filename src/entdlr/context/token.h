#ifndef __ENTDLR_TOKEN_H__
#define __ENTDLR_TOKEN_H__

#include <stdint.h>
#include <string>

namespace Entdlr
{
enum class TokenType
{
    Unknown,
    Tag,
    Documentation,
    Include,
    Attribute,
    EnumValue,
    Enum,
    UnionType,
    Union,
    Parameter,
    Method,
    Field,
    Struct,
    Interface,
    ServiceComponent,
    Service,
    Namespace
};

// used for reporting positions of errors in source file
class Token
{
  public:
    TokenType token;
    std::string name;
    std::string filename;
    uint64_t line;
    uint64_t column;

    static Token create(const std::string& name, const std::string& filename, uint64_t line, uint64_t column);
};
}; // namespace Entdlr

#endif // __ENTDLR_TOKEN_H__
