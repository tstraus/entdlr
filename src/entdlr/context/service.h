#ifndef __ENTDLR_SERVICE_H__
#define __ENTDLR_SERVICE_H__

#include "struct.h"
#include "token.h"

namespace Entdlr
{
class ServiceComponent : public Token
{
  public:
    std::string type;
    std::unordered_map<std::string, Attribute> attributes;
    std::string comment;
    Documentation documentation;

    static ServiceComponent create(const Token& token,
                                   const std::string& type,
                                   const std::unordered_map<std::string, Attribute>& attributes = {},
                                   const std::string& comment = "",
                                   const Documentation& documentation = {});
};

class Service : public Token
{
  public:
    std::vector<ServiceComponent> components;
    std::unordered_map<std::string, Attribute> attributes;
    std::string comment;
    Documentation documentation;

    static Service create(const Token& token,
                          const std::unordered_map<std::string, Attribute>& attribute = {},
                          const std::string& comment = "",
                          const Documentation& documentation = {});

    void add(const ServiceComponent& component);
};
}; // namespace Entdlr

#endif // __ENTDLR_SERVICE_H__