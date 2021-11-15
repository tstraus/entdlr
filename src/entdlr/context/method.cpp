#include "method.h"

namespace Entdlr
{
Parameter Parameter::create(const Token& token,
                            const std::string& type,
                            const bool in,
                            const bool out,
                            bool isArray,
                            uint32_t arraySize)
{
    Parameter p;
    p.token = TokenType::Parameter;
    p.filename = token.filename;
    p.line = token.line;
    p.column = token.column;
    p.name = token.name;
    p.type = type;
    p.in = in;
    p.out = out;
    p.isArray = isArray;
    p.arraySize = arraySize;

    return p;
}

Method Method::create(const Token& token,
                      const Parameter& returnValue,
                      const bool isStatic,
                      const bool isConstant,
                      const std::unordered_map<std::string, Attribute>& attributes,
                      const std::string& comment,
                      const Documentation& documentation)
{
    Method out;
    out.token = TokenType::Method;
    out.filename = token.filename;
    out.line = token.line;
    out.column = token.column;
    out.name = token.name;
    out.returnValue  = returnValue;
    out.isStatic = isStatic;
    out.isConstant = isConstant;
    out.attributes = attributes;
    out.comment = comment;
    out.documentation = documentation;

    return out;
}

void Method::add(const Parameter& parameter)
{
    parameters.push_back(parameter);
}
}; // namespace Entdlr
