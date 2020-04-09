#ifndef __ENTDLR_INCLUDE_H__
#define __ENTDLR_INCLUDE_H__

#include "token.h"

namespace Entdlr
{
    class Include : public Token
    {
    public:
        static Include create(const Token& token);
    };
}

#endif // __ENTDLR_INCLUDE_H__