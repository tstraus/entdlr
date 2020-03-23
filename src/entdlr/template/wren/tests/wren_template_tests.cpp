#include "wren_template.h"

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
            Context c;
            WrenTemplate t;

            const auto output = t.applyTemplate(c, "Simple.wren");
            cout << output << endl;

            CHECK(true == true);
        }
    }
}