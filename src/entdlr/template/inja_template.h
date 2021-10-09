#ifndef __ENTDLR_INJA_TEMPLATE_H__
#define __ENTDLR_INJA_TEMPLATE_H__

#include "context.h"

#include "inja.hpp"
#include "wren.hpp"

namespace Entdlr
{
class InjaTemplate
{
  public:
    std::string applyTemplate(const Context& context, const std::string& template_name, const std::string& script_name = "", const std::string& config_name = "");

    std::string applyString(const Context& context, const std::string& tmpl, const std::string& script = "", const std::string& config = "");

    std::string applyJson(const nlohmann::json& c, const std::string& tmpl, const std::string& script = "", const nlohmann::json& config = {});

  private:
    void loadWrenSource(const std::string& source);
    nlohmann::json checkWren(const std::string& name, unsigned int numArgs, const inja::Arguments& args);

    static void log(const std::string& level, const std::string& message);

    static void error(WrenVM* vm, WrenErrorType type, const char* module_name, int line, const char* message);
    static void print(WrenVM* vm, const char* text);
    static WrenLoadModuleResult loadModule(WrenVM* vm, const char* name);

    WrenVM* vm;

    Context context;
};
}; // namespace Entdlr

#endif // __ENTDLR_INJA_TEMPLATE_H__
