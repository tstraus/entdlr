#ifndef __ENTDLR_NAMESPACE_H__
#define __ENTDLR_NAMESPACE_H__

#include "enum.h"
#include "struct.h"

#include <string>
#include <map>

namespace Entdlr
{
    class Namespace
    {
    public:
        std::string name;
        std::map<std::string, Enum> enums; // [enum name]
        std::map<std::string, Struct> structs; // [struct name]

        static Namespace create(const std::string& name);
        void add(const Enum& e);
        void add(const Struct& s);
    };
};

#endif // __ENTDLR_NAMESPACE_H__