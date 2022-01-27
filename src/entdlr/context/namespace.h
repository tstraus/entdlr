#ifndef __ENTDLR_NAMESPACE_H__
#define __ENTDLR_NAMESPACE_H__

#include "enum.h"
#include "interface.h"
#include "service.h"
#include "struct.h"
#include "token.h"
#include "union.h"

#include <string>
#include <vector>

namespace Entdlr
{
class Namespace : public Token
{
  public:
    std::vector<Enum> enums;
    std::vector<Union> unions;
    std::vector<Struct> structs;
    std::vector<Interface> interfaces;
    std::vector<Service> services;

    static Namespace create(const Token& token);
    void add(const Enum& e);
    void add(const Union& u);
    void add(const Struct& s);
    void add(const Interface& i);
    void add(const Service& s);

    void sort();
};
}; // namespace Entdlr

#endif // __ENTDLR_NAMESPACE_H__
