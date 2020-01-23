#ifndef __ENTDLR_UNION_H__
#define __ENTDLR_UNION_H__

#include <stdint.h>
#include <string>
#include <vector>
#include <optional>

namespace Entdlr
{
    class UnionType
    {
    public:
        std::string type;
        bool isArray;
        uint32_t arraySize;

        static UnionType create(const std::string& type, const bool& isArray, const uint32_t& arraySize);
    };

    class Union
    {
    public:
        std::string name;
        std::vector<UnionType> types;

        static Union create(const std::string& name);
        void add(const UnionType& type);
    };
};

#endif // __ENTDLR_UNION_H__