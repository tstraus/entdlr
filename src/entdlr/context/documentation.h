#ifndef __ENTDLR_DOCUMENTATION_H__
#define __ENTDLR_DOCUMENTATION_H__

#include "token.h"

#include <vector>

namespace Entdlr
{
class Tag : public Token
{
  public:
    std::string content;

    static Tag create(const Token& token, const std::string& content = "");
};

class Documentation : public Token
{
  public:
    std::string description;
    std::vector<Tag> tags;

    static Documentation create(const Token& token, const std::string& description = "");
    void add(const Tag& t);
};
}; // namespace Entdlr

#endif // __ENTDLR_DOCUMENTATION_H__
