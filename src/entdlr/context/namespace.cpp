#include "namespace.h"

#include <algorithm>

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

void Namespace::add(const Service& s)
{
    services.push_back(s);
}

void Namespace::sort()
{

    std::sort(enums.begin(), enums.end(), [](const Enum& a, const Enum& b) { return a.name < b.name; });
    std::sort(unions.begin(), unions.end(), [](const Union& a, const Union& b) { return a.name < b.name; });
    std::sort(structs.begin(), structs.end(), [](const Struct& a, const Struct& b) { return a.name < b.name; });
    std::sort(
        interfaces.begin(), interfaces.end(), [](const Interface& a, const Interface& b) { return a.name < b.name; });
    std::sort(services.begin(), services.end(), [](const Service& a, const Service& b) { return a.name < b.name; });
}
}; // namespace Entdlr
