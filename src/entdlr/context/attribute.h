#ifndef __ENTDLR_ATTRIBUTE_H__
#define __ENTDLR_ATTRIBUTE_H__

#include <string>
#include <vector>

#include "token.h"
#include "method.h"

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
};

#endif // __ENTDLR_ATTRIBUTE_H__
