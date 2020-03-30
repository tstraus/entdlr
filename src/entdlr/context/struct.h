#ifndef __ENTDLR_STRUCT_H__
#define __ENTDLR_STRUCT_H__

#include <string>
#include <vector>

#include "token.h"
#include "attribute.h"
#include "method.h"

namespace Entdlr
{
    class Field : public Token
    {
    public:
        std::string type;
        bool isArray;
        uint32_t arraySize;
        std::vector<Attribute> attributes;

        static Field create(const Token& token, const std::string& type, const bool& isArray, const uint32_t& arraySize, const std::vector<Attribute>& attributes = {});
    };

    class Struct : public Token
    {
    public:
        std::vector<Field> fields;
        std::vector<Method> methods;
        std::vector<Attribute> attributes;

        static Struct create(const Token& token, const std::vector<Attribute>& attributes = {});
        void add(const Field& field);
        void add(const Method& method);
    };
};

#endif // __ENTDLR_STRUCT_H__
