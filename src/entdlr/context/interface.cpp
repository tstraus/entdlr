#include "interface.h"

namespace Entdlr
{
    Interface Interface::create(const Token& token, const std::string& comment, const Documentation& documentation)
    {
        Interface out;
        out.token = TokenType::Interface;
        out.filename = token.filename;
        out.line = token.line;
        out.column = token.column;
        out.name = token.name;
        out.comment = comment;
        out.documentation = documentation;

        return out;
    }

    void Interface::add(const Method& method)
    {
        methods.push_back(method);
    }
};
