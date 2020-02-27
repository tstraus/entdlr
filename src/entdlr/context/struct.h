#ifndef __ENTDLR_STRUCT_H__
#define __ENTDLR_STRUCT_H__

#include <string>
#include <vector>

#include "token.h"

namespace Entdlr
{
    class Attribute : public Token
    {
    public:
        bool isString;
        std::string string;

        bool isNumber;
        double number;

        static Attribute create(const Token& token);
        static Attribute create(const Token& token, const std::string& s);
        static Attribute create(const Token& token, const double n);
    };

    class Field : public Token
    {
    public:
        std::string type;
        bool isArray;
        uint32_t arraySize;
        std::vector<Attribute> attributes;

        static Field create(const Token& token, const std::string& type, const bool& isArray, const uint32_t& arraySize, std::vector<Attribute>& attributes);
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