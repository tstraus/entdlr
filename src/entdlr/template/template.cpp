#include "template.h"
#include "json_helpers.h"
#include "type_map.h"

#include <filesystem>
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

        auto c = context;

        // try to open a type map file for the template
        const std::string templateExtension(".tmpl");
        if (template_name != templateExtension &&
            template_name.size() > templateExtension.size() &&
            template_name.substr(template_name.size() - templateExtension.size()) == ".tmpl"
            )
        {
            std::string typeMapFilename = template_name.substr(0, template_name.size() - templateExtension.size()) + "_mapping.json";
            
            if (std::filesystem::exists(typeMapFilename))
            {
                TypeMap typeMap(typeMapFilename);
                c = typeMap.applyMapping(context);
            }
        }

        json j;
        j["entdlr"] = c;

        //cout << j.dump(true) << endl;
        //cout << tmpl.str() << endl;

        return inja::render(tmpl.str(), j);
    }
}