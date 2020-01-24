#ifndef __ENTDLR_STRUCT_H__
#define __ENTDLR_STRUCT_H__

#include <string>
#include <vector>

#include "token.h"

namespace Entdlr
{
    class Field : public Token
    {
    public:
        std::string type;
        bool isArray;
        uint32_t arraySize;

        static Field create(const Token& token, const std::string& type, const bool& isArray, const uint32_t& arraySize);
    };

    class Struct : public Token
    {
    public:
        std::vector<Field> fields;

        static Struct create(const Token& token);
        void add(const Field& field);
    };
};

#endif // __ENTDLR_STRUCT_H__