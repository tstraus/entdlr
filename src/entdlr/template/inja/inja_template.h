#ifndef __ENTDLR_INJA_TEMPLATE_H__
#define __ENTDLR_INJA_TEMPLATE_H__

#include "i_template.h"

#include "inja.hpp"
#include "wren.hpp"

namespace Entdlr
{
    class InjaTemplate : public ITemplate
    {
    public:
        std::string getFileExtension() const;

        std::string applyTemplate(const Context& context, const std::string& template_name);

        std::string applyString(const Context& context, const std::string& tmpl);

    private:
        std::string checkWren(const std::string& name, const unsigned int numArgs, const inja::Arguments& args);

        WrenVM* vm;
    };
};

#endif // __ENTDLR_INJA_TEMPLATE_H__      
