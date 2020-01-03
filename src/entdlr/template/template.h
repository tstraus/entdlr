#ifndef __ENTDLR_TEMPLATE_H__
#define __ENTDLR_TEMPLATE_H__

#include "context.h"

namespace Entdlr
{
    class Template
    {
    public:
        static std::string applyTemplate(const Context& context, const std::string& template_name);
    };
};

#endif // __ENTDLR_TEMPLATE_H__      