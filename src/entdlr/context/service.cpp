#include "service.h"

namespace Entdlr
{
ServiceComponent ServiceComponent::create(const Token& token,
                                          const std::string& type,
                                          const std::unordered_map<std::string, Attribute>& attributes,
                                          const std::string& comment,
                                          const Documentation& documentation)
{
    ServiceComponent out;
    out.token = TokenType::ServiceComponent;
    out.filename = token.filename;
    out.line = token.line;
    out.column = token.column;
    out.name = token.name;
    out.type = type;
    out.attributes = attributes;
    out.comment = comment;
    out.documentation = documentation;

    return out;
}
Service Service::create(const Token& token,
                        const std::unordered_map<std::string, Attribute>& attribute,
                        const std::string& comment,
                        const Documentation& documentation)
{
    Service out;
    out.token = TokenType::Service;
    out.filename = token.filename;
    out.line = token.line;
    out.column = token.column;
    out.name = token.name;
    out.attributes = attribute;
    out.comment = comment;
    out.documentation = documentation;

    return out;
}

void Service::add(const ServiceComponent& component)
{
    components.push_back(component);
}
}; // namespace Entdlr