#include "enum.h"

namespace Entdlr
{
    EnumValue EnumValue::create(const std::string& name, const int64_t& value)
    {
        EnumValue out;
        out.name = name;
        out.value = value;

        return out;
    }

    Enum Enum::create(const std::string& name)
    {
        Enum out;
        out.name = name;
        out.previousValue = 0;

        return out;
    }

    void Enum::add(const std::string& name, const std::optional<int64_t> value)
    {
        if (name != "")
        {
            if (value)
            {
                values[*value] = EnumValue::create(name, *value);
                previousValue = *value;
            }

            else
            {
                const auto newValue = previousValue++;
                values[newValue] = EnumValue::create(name, newValue);
            }
        }
    }
};