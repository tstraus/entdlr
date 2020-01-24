#ifndef __ENTDLR_ENUM_H__
#define __ENTDLR_ENUM_H__

#include <stdint.h>
#include <string>
#include <vector>
#include <optional>

#include "token.h"

namespace Entdlr
{
    class EnumValue : public Token
    {
    public:
        int64_t value;

        static EnumValue create(const Token& token, const int64_t& value);
    };

    class Enum : public Token
    {
    public:
        std::vector<EnumValue> values;

        static Enum create(const Token& token);
        void add(const Token& token, const std::optional<int64_t> value);

    private:
        int64_t nextValue;
    };
};

#endif // __ENTDLR_ENUM_H__