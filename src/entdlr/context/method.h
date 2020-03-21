#ifndef __ENTDLR_METHOD_H__
#define __ENTDLR_METHOD_H__

#include <string>
#include <vector>

#include "token.h"

namespace Entdlr
{
    class Parameter : public Token
    {
    public:
        std::string type;
        bool constant;

        static Parameter create(const Token& token, const std::string& type, const bool constant = true);
    };

    class Method : public Token
    {
    public:
        std::string returnType;
        std::vector<Parameter> parameters;
        bool isStatic;

        static Method create(const Token& token, const std::string& returnType, const bool& isStatic = false);
        void add(const Parameter& parameter);
    };
};

#endif // __ENTDLR_METHOD_H__
