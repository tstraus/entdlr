#include "template_router.h"
#include "json_helpers.h"
#include "type_map.h"

#include <experimental/filesystem>
#include <iostream>

#include "inja_template.h"
#include "wren_template.h"

using std::cout; using std::endl;

namespace Entdlr
{
    TemplateRouter::TemplateRouter()
    {
        addTemplate<InjaTemplate>();
        addTemplate<WrenTemplate>();
    }

    std::string TemplateRouter::applyTemplate(const Context& context, const std::string& template_name)
    {
        auto path = std::experimental::filesystem::path(template_name);
        auto extension = path.extension().string();

        if (templates.count(extension))
            return templates[extension]->applyTemplate(context, template_name);
        else return "";
    }
}
