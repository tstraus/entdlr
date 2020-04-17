#ifndef __ENTDLR_UNION_H__
#define __ENTDLR_UNION_H__

#include <stdint.h>
#include <string>
#include <vector>
#include <unordered_map>

#include "token.h"
#include "attribute.h"

namespace Entdlr
{
    class UnionType : public Token
    {
    public:
        bool isArray;
        uint32_t arraySize;

        static UnionType create(const Token& token, const bool& isArray, const uint32_t& arraySize);
    };

    class Union : public Token
    {
    public:
        std::vector<UnionType> types;
        std::unordered_map<std::string, Attribute> attributes;
        std::string comment;

        static Union create(const Token& token, const std::unordered_map<std::string, Attribute>& attributes = {}, const std::string& comment = "");
        void add(const UnionType& type);
    };
};

#endif // __ENTDLR_UNION_H__
