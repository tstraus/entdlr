#ifndef __ENTDLR_TOKEN_H__
#define __ENTDLR_TOKEN_H__

#include <stdint.h>
#include <string>

namespace Entdlr
{
    enum class TokenType
    {
        Unknown,
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

        static Token create(const std::string& name, const std::string& filename,
            const uint64_t line, const uint64_t column);
    };
};

#endif // __ENTDLR_TOKEN_H__
