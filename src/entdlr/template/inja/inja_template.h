#ifndef __ENTDLR_INJA_TEMPLATE_H__
#define __ENTDLR_INJA_TEMPLATE_H__

#include "i_template.h"

namespace Entdlr
{
    class InjaTemplate : public ITemplate
    {
    public:
        std::string getFileExtension() const;

        std::string applyTemplate(const Context& context, const std::string& template_name);
    };
};

#endif // __ENTDLR_INJA_TEMPLATE_H__      
