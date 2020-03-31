#ifndef __ENTDLR_ENUM_H__
#define __ENTDLR_ENUM_H__

#include <stdint.h>
#include <string>
#include <vector>
#include <optional>

#include "token.h"
#include "attribute.h"

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
        std::vector<Attribute> attributes;
        std::string comment;

        static Enum create(const Token& token, const std::string& type = "int32", const std::vector<Attribute>& attributes = {}, const std::string& comment = "");
        void add(const Token& token, const std::optional<int64_t> value);

    private:
        int64_t nextValue;
    };
};

#endif // __ENTDLR_ENUM_H__
