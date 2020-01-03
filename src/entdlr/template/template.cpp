#include "template.h"
#include "json_helpers.h"

#include <iostream>

#include "inja.hpp"

using std::cout; using std::endl;

namespace Entdlr
{
    std::string Template::applyTemplate(const Context& context, const std::string& template_name)
    {
        // open and read the template file
        std::ifstream template_file(template_name);
        std::stringstream tmpl;
        tmpl << template_file.rdbuf();

        nlohmann::json j;
        j["entdlr"] = context;

        //cout << j.dump(true) << endl;
        //cout << tmpl.str() << endl;

        return inja::render(tmpl.str(), j);
    }
}