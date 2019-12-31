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
        // the global namespace
        std::map<std::string, Enum> enums; // [enum name]
        std::map<std::string, Struct> structs; // [struct name]

        // other namespaces
        std::map<std::string, Namespace> namespaces; // [namespace name]

        void add(const Enum& e);
        void add(const Struct& s);

        void add(const Namespace& n);
    };
};

#endif // __ENTDLR_CONTEXT_H__