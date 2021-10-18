#include "py_entdlr.hpp"

#include "inja_template.h"
#include "json_helpers.h"
#include "parser.h"

#include <iostream>

std::string parse_file(const std::string& fbs_file, const std::string& fbs_include_dir)
{
    return nlohmann::json(Entdlr::Parser::parseFile(fbs_file, fbs_include_dir)).dump();
}

std::string parse_dir(const std::string& fbs_dir, const std::string& fbs_include_dir)
{
    return nlohmann::json(Entdlr::Parser::parseDir(fbs_dir, fbs_include_dir)).dump();
}

std::string apply_template(const std::string& context_str,
                           const std::string& template_str,
                           const std::string& script_str,
                           const std::string& config_str)
{
    const auto context = nlohmann::json::parse(context_str);

    Entdlr::InjaTemplate t;
    return t.applyString(context, template_str, script_str, config_str);
}

std::string apply_template_file(const std::string& context_str,
                                const std::string& template_file,
                                const std::string& script_file,
                                const std::string& config_file)
{
    const auto context = nlohmann::json::parse(context_str);

    Entdlr::InjaTemplate t;
    return t.applyTemplate(context, template_file, script_file, config_file);
}

std::string parse_and_apply(const std::string& fbs_file,
                            const std::string& template_file,
                            const std::string& script_file,
                            const std::string& config_file)
{
    const auto context = Entdlr::Parser::parseFile(fbs_file);

    Entdlr::InjaTemplate t;
    return t.applyTemplate(context, template_file, script_file, config_file);
}


