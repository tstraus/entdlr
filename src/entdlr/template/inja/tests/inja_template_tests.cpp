#include "inja_template.h"
#include "parser.h"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <iostream>
using std::cout; using std::endl;

using namespace Entdlr;

TEST_SUITE("InjaTemplateTests")
{
    TEST_CASE("Basic")
    {
        Context context;
        InjaTemplate t;

        std::string input = R"(entdlr)";
        const auto output = t.applyString(context, input);

        CHECK(output == "entdlr");
    }

    TEST_CASE("WrenFunction")
    {
        Context context;
        Namespace n;
        n.name = "WrenFunction";
        n.line = 11;
        n.column = 22;
        context.add(n);

        InjaTemplate t;

        SUBCASE("String")
        {
            std::string inputTemplate = R"(
## for namespace in entdlr.namespaces
{{do_something(namespace.name)}}
{{do_more_things(namespace.line, namespace.column)}}
## endfor
)";

            std::string inputScript = R"woo(
class Functions {
    static do_something(what) {
        return "I did the thing -> " + what
    }

    static do_more_things(line, column) {
        return "ERROR: (" + line.toString + ", " + column.toString + ")"
    }
}
)woo";

            const auto output = t.applyString(context, inputTemplate, inputScript);

            CHECK(output == "\nI did the thing -> WrenFunction\nERROR: (11, 22)\n");
        }

        SUBCASE("File")
        {
            const auto output = t.applyTemplate(context, "Functions.tmpl");

            CHECK(output == "I did the thing inside module -> WrenFunction\nERROR: (11, 22)\n");
        }
    }
}
