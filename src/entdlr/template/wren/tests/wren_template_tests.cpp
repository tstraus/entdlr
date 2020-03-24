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
            std::string input = R"(
                namespace grid;

                enum Force : uint8
                {
                    Unknown,
                    Blue,
                    Red = 10,
                    Other
                }

                union EntityIdUnion
                {
                    uint64,
                    [uint16 : 4]
                }
            )";

            const auto context = Parser::parse(input);
            WrenTemplate t;

            const auto output = t.applyTemplate(context, "Simple.wren");
            cout << output << endl;

            CHECK(output == "SimpleWrenTest\nstaticTest\nmethodTest\n");
        }
    }
}
