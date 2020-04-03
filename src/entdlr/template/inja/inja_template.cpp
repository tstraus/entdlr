#include "inja_template.h"
#include "json_helpers.h"
#include "type_map.h"

#include <filesystem>
#include <iostream>

#include "inja.hpp"

using std::cout; using std::endl;

namespace Entdlr
{
    std::string InjaTemplate::getFileExtension() const
    {
        return ".tmpl";
    }

    std::string InjaTemplate::applyTemplate(const Context& context, const std::string& template_name)
    {
        // open and read the template file
        std::ifstream template_file(template_name);
        std::stringstream tmpl;
        tmpl << template_file.rdbuf();

        auto c = context;

        // try to open a type map file for the template
        const auto templateExtension = getFileExtension();
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

        return applyString(c, tmpl.str());
    }

    std::string InjaTemplate::applyString(const Context& context, const std::string& tmpl)
    {
        // set up wren first
        WrenConfiguration config;
        wrenInitConfiguration(&config);
        vm = wrenNewVM(&config);

        json j;
        j["entdlr"] = context;

        //cout << j.dump(true) << endl;
        //cout << tmpl.str() << endl;

        inja::Environment env;
        env.set_fallback(
            [this](const std::string& name, const unsigned int numArgs, const inja::Arguments& args)
            {
                return checkWren(name, numArgs, args);
            }
        );

        const auto output = env.render(tmpl, j);

        wrenFreeVM(vm);

        return output;
    }

    std::string InjaTemplate::checkWren(const std::string& name, const unsigned int numArgs, const inja::Arguments& args)
    {
        cout << name << "(" << numArgs << ")" << endl;
        for (const auto& arg : args)
            cout << "    " << *arg << endl;

        return "fallback";
    }
}
