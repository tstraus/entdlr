#include "method.h"

namespace Entdlr
{
Parameter Parameter::create(const Token& token, const std::string& type, const bool constant, const bool reference)
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

    return out;
}

Method Method::create(const Token& token,
                      const std::string& returnType,
                      const bool returnIsReference,
                      const bool isStatic,
                      const bool constant,
                      const std::string& comment,
                      const Documentation& documentation)
{
    Method out;
    out.token = TokenType::Method;
    out.filename = token.filename;
    out.line = token.line;
    out.column = token.column;
    out.name = token.name;
    out.returnType = returnType;
    out.returnIsReference = returnIsReference;
    out.isStatic = isStatic;
    out.constant = constant;
    out.comment = comment;
    out.documentation = documentation;

    return out;
}

void Method::add(const Parameter& parameter)
{
    parameters.push_back(parameter);
}
}; // namespace Entdlr
