#ifndef __ENTDLR_ENUM_H__
#define __ENTDLR_ENUM_H__

#include <stdint.h>
#include <string>
#include <vector>
#include <unordered_map>

#include "util/optional.hpp"
using nonstd::optional;

#include "token.h"
#include "attribute.h"
#include "documentation.h"

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
        std::string type;
        std::vector<EnumValue> values;
        std::unordered_map<std::string,Attribute> attributes;
        std::string comment;
        Documentation documentation;

        static Enum create(const Token& token, const std::string& type = "int32", const std::unordered_map<std::string, Attribute>& attributes = {},
            const std::string& comment = "", const Documentation& documentation = {});
        void add(const Token& token, const optional<int64_t> value);

    private:
        int64_t nextValue;
    };
};

#endif // __ENTDLR_ENUM_H__
