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

        std::string applyString(const Context& context, const std::string& tmpl, const std::string& functions = "");

    private:
        std::string checkWren(const std::string& name, const unsigned int numArgs, const inja::Arguments& args);

        static void error(WrenVM* vm, WrenErrorType type, const char* module_name, int line, const char* message);
        static void print(WrenVM* vm, const char* text);
        static char* loadModule(WrenVM* vm, const char* name);

        WrenVM* vm;
    };
};

#endif // __ENTDLR_INJA_TEMPLATE_H__      
