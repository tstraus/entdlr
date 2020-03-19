#ifndef __ENTDLR_FACILITY_H__
#define __ENTDLR_FACILITY_H__

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

        static Method create(const Token& token, const std::string& returnType);
        void add(const Parameter& parameter);
    };

    class Facility : public Token
    {
    public:
        std::vector<Method> methods;

        static Facility create(const Token& token);
        void add(const Method& method);
    };
};

#endif // __ENTDLR_FACILITY_H__