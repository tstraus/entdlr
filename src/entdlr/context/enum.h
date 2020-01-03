#ifndef __ENTDLR_ENUM_H__
#define __ENTDLR_ENUM_H__

#include <stdint.h>
#include <string>
#include <vector>
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
        std::vector<EnumValue> values;

        static Enum create(const std::string& name);
        void add(const std::string& name, const std::optional<int64_t> value);

    private:
        int64_t nextValue;
    };
};

#endif // __ENTDLR_ENUM_H__