#ifndef __ENTDLR_TEMPLATE_ROUTER_H__
#define __ENTDLR_TEMPLATE_ROUTER_H__

#include "context.h"
#include "i_template.h"

#include <unordered_map>
#include <memory>

namespace Entdlr
{
    class TemplateRouter
    {
    public:
        TemplateRouter();

        std::string applyTemplate(const Context& context, const std::string& template_name);

    private:
        template <typename T>
        void addTemplate()
        {
            std::unique_ptr<ITemplate> t = std::make_unique<T>();
            templates[t->getFileExtension()] = std::move(t);
        }

        std::unordered_map<std::string, std::unique_ptr<ITemplate>> templates;
    };
};

#endif // __ENTDLR_TEMPLATE_ROUTER_H__      