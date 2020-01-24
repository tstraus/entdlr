#ifndef __ENTDLR_TOKEN_H__
#define __ENTDLR_TOKEN_H__

#include <stdint.h>
#include <string>

namespace Entdlr
{
    // used for reporting positions of errors in source file
    class Token
    {
    public:
        std::string name;
        std::string filename;
        uint64_t line;
        uint64_t column;
    };
};

#endif // __ENTDLR_TOKEN_H__