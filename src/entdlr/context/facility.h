#ifndef __ENTDLR_FACILITY_H__
#define __ENTDLR_FACILITY_H__

#include <string>
#include <vector>

#include "token.h"
#include "method.h"

namespace Entdlr
{
    class Facility : public Token
    {
    public:
        std::vector<Method> methods;

        static Facility create(const Token& token);
        void add(const Method& method);
    };
};

#endif // __ENTDLR_FACILITY_H__
