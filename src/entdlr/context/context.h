#ifndef __ENTDLR_CONTEXT_H__
#define __ENTDLR_CONTEXT_H__

#include "enum.h"
#include "struct.h"
#include "namespace.h"

namespace Entdlr
{
    class Context
    {
    public:
        std::map<std::string, Namespace> namespaces; // [namespace name]

        void add(const Namespace& n);
    };
};

#endif // __ENTDLR_CONTEXT_H__
