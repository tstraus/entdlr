#include "inja_template.h"
#include "parser.h"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <iostream>
using std::cout; using std::endl;

using namespace Entdlr;

TEST_SUITE("InjaTemplateTests")
{
    TEST_CASE("Inja")
    {
        SUBCASE("Basic")
        {
            Context context;
            InjaTemplate t;

            std::string input = R"(entdlr)";
            const auto output = t.applyString(context, input);

            CHECK(output == "entdlr");
        }

        SUBCASE("Fallback")
        {
            Context context;
            Namespace n;
            n.name = "FallbackTest";
            context.add(n);

            InjaTemplate t;

            std::string input = R"(
## for namespace in entdlr.namespaces
{{do_something(namespace.name)}}
## endfor
)";
            const auto output = t.applyString(context, input);

            CHECK(output == "\nfallback\n");
        }
    }
}
