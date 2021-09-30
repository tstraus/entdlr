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
    static std::string getFileExtension();

    std::string applyTemplate(const Context& context, const std::string& template_name, const std::string& data_json_name = "");

    std::string applyString(const Context& context, const std::string& tmpl, const nlohmann::json& data = {});

    std::string applyJson(const nlohmann::json& j, const std::string& tmpl);

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
