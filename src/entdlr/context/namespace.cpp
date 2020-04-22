#include "namespace.h"

namespace Entdlr
{
    Namespace Namespace::create(const Token& token)
    {
        Namespace out;
        out.token = TokenType::Namespace;
        out.filename = token.filename;
        out.line = token.line;
        out.column = token.column;
        out.name = token.name;

        return out;
    }

    void Namespace::add(const Enum& e)
    {
        enums.push_back(e);
    }

    void Namespace::add(const Union& u)
    {
        unions.push_back(u);
    }

    void Namespace::add(const Struct& s)
    {
        structs.push_back(s);
    }

    void Namespace::add(const Interface& i)
    {
        interfaces.push_back(i);
    }
};
