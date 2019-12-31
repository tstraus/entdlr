#include "enum.h"

#include <iostream>

using std::cout; using std::endl;

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
        out.nextValue = 0;

        return out;
    }

    void Enum::add(const std::string& name, const std::optional<int64_t> value)
    {
        if (name != "")
        {
            if (value)
            {
                values[*value] = EnumValue::create(name, *value);
                nextValue = *value + 1;
            }

            else
            {
                const auto newValue = nextValue++;
                values[newValue] = EnumValue::create(name, newValue);
            }
        }
    }
};