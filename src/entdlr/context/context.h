#ifndef __ENTDLR_CONTEXT_H__
#define __ENTDLR_CONTEXT_H__

#include "include.h"
#include "namespace.h"

namespace Entdlr
{
    class Context
    {
    public:
        std::vector<Include> includes;
        std::vector<Namespace> namespaces;

        void add(const Include& i);
        void add(const Namespace& n);
    };
};

#endif // __ENTDLR_CONTEXT_H__
