#ifndef __ENTDLR_WREN_TEMPLATE_H__
#define __ENTDLR_WREN_TEMPLATE_H__

#include "i_template.h"

#include "wren.hpp"

namespace Entdlr
{
    class WrenTemplate : public ITemplate
    {
    public:
        WrenTemplate();

        ~WrenTemplate();

        std::string getFileExtension() const;

        std::string applyTemplate(const Context& context, const std::string& template_name);

    private:
        static WrenLoadModuleResult loadModule(WrenVM* vm, const char* name);

        static void error(WrenVM* vm, WrenErrorType type, const char* module_name, int line, const char* message);

        static WrenForeignMethodFn bindForeignMethod(WrenVM* vm, const char* module,
            const char* className, bool isStatic, const char* signature);

        static WrenForeignClassMethods bindForeignClass(WrenVM* vm, const char* module, const char* className);

        static void print(WrenVM* vm, const char* text);

        WrenVM* vm;
    };
};

#endif // __ENTDLR_WREN_TEMPLATE_H__