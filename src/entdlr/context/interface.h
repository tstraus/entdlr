#ifndef __ENTDLR_INTERFACE_H__
#define __ENTDLR_INTERFACE_H__

#include <string>
#include <vector>

#include "token.h"
#include "method.h"
#include "documentation.h"

namespace Entdlr
{
    class Interface : public Token
    {
    public:
        std::vector<Method> methods;
        std::string comment;
        Documentation documentation;

        static Interface create(const Token& token, const std::string& comment = "", const Documentation& documentation = {});
        void add(const Method& method);
    };
};

#endif // __ENTDLR_INTERFACE_H__
