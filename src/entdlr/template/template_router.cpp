#include "template_router.h"
#include "json_helpers.h"
#include "type_map.h"

#include <iostream>

#ifdef __cpp_lib_filesystem
#include <filesystem>
namespace fs = std::filesystem;
#else
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;
#endif

#include "inja_template.h"
#include "wren_template.h"

using std::cout;
using std::endl;

namespace Entdlr
{
TemplateRouter::TemplateRouter()
{
    addTemplate<InjaTemplate>();
    addTemplate<WrenTemplate>();
}

std::string TemplateRouter::applyTemplate(const Context& context, const std::string& template_name)
{
    auto path = fs::path(template_name);
    auto extension = path.extension().string();

    if (templates.count(extension) != 0U)
    {
        return templates[extension]->applyTemplate(context, template_name);
    }
    return "";
}
} // namespace Entdlr
