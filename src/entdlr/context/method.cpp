#include "method.h"

namespace Entdlr
{
    Parameter Parameter::create(const Token& token, const std::string& type, const bool constant)
    {
        Parameter out;
        out.filename = token.filename;
        out.line = token.line;
        out.column = token.column;
        out.name = token.name;
        out.type = type;
        out.constant = constant;

        return out;
    }

    Method Method::create(const Token& token, const std::string& returnType, const bool& isStatic)
    {
        Method out;
        out.filename = token.filename;
        out.line = token.line;
        out.column = token.column;
        out.name = token.name;
        out.returnType = returnType;
        out.isStatic = isStatic;

        return out;
    }

    void Method::add(const Parameter& parameter)
    {
        parameters.push_back(parameter);
    }
};