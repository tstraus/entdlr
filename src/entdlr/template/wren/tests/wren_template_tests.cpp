#include "wren_template.h"
#include "parser.h"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <iostream>
using std::cout; using std::endl;

using namespace Entdlr;

TEST_SUITE("WrenTemplateTests")
{
    TEST_CASE("Wren")
    {
        SUBCASE("Simple")
        {
            Context context;
            WrenTemplate t;

            const auto output = t.applyTemplate(context, "Simple.wren");

            CHECK(output == "entdlr\n");
        }
    }
}
