#ifndef __ENTDLR_INCLUDE_H__
#define __ENTDLR_INCLUDE_H__

#include "namespace.h"
#include "token.h"

namespace Entdlr
{
class Include : public Token
{
  public:
    std::vector<Namespace> namespaces;

    static Include create(const Token& token);
    void add(const Namespace& n);
};
}; // namespace Entdlr

#endif // __ENTDLR_INCLUDE_H__
