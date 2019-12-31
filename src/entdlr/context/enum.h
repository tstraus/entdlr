#ifndef __ENTDLR_ENUM_H__
#define __ENTDLR_ENUM_H__

#include <stdint.h>
#include <string>
#include <map>
#include <optional>

namespace Entdlr
{
    class EnumValue
    {
    public:
        std::string name;
        int64_t value;

        static EnumValue create(const std::string& name, const int64_t& value);
    };

    class Enum
    {
    public:
        std::string name;
        std::map<int64_t, EnumValue> values; // [value]

        static Enum create(const std::string& name);
        void add(const std::string& name, const std::optional<int64_t> value);

    private:
        int64_t previousValue;
    };
};

#endif // __ENTDLR_ENUM_H__