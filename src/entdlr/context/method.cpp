#include "method.h"

namespace Entdlr
{
Parameter Parameter::create(const Token& token,
                            const std::string& type,
                            const bool constant,
                            const bool reference,
                            bool isArray,
                            uint32_t arraySize)
{
    Parameter out;
    out.token = TokenType::Parameter;
    out.filename = token.filename;
    out.line = token.line;
    out.column = token.column;
    out.name = token.name;
    out.type = type;
    out.constant = constant;
    out.reference = reference;
    out.isArray = isArray;
    out.arraySize = arraySize;

    return out;
}

Method Method::create(const Token& token,
                      const Parameter& returnValue,
                      const bool isStatic,
                      const bool constant,
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
    out.constant = constant;
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
