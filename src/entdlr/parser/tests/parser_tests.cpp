#include "parser.h"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

using namespace Entdlr;

TEST_SUITE("Parsing")
{
    TEST_CASE("Global")
    {
        SUBCASE("Struct")
        {
            std::string input = R"(
                struct Position
                {
                    x : float64;
                    y : float64;
                    z : float64;
                }
            )";

            const auto context = Parser::parse(input);
            REQUIRE(context.namespaces.size() == 1);

            const auto& n = context.namespaces[0];
            CHECK(n.name == "");
            REQUIRE(n.structs.size() == 1);

            const auto& s = n.structs[0];
            CHECK(s.name == "Position");
            REQUIRE(s.fields.size() == 3);

            const auto& fields = s.fields;
            CHECK(fields[0].name == "x");
            CHECK(fields[0].type == "float64");
            CHECK(fields[1].name == "y");
            CHECK(fields[1].type == "float64");
            CHECK(fields[2].name == "z");
            CHECK(fields[2].type == "float64");
        }

        SUBCASE("Enum")
        {
            std::string input = R"(
                enum Force : uint8
                {
                    Unknown,
                    Blue,
                    Red = 10,
                    Other
                }
            )";

            const auto context = Parser::parse(input);
            REQUIRE(context.namespaces.size() == 1);

            const auto& n = context.namespaces[0];
            CHECK(n.name == "");
            REQUIRE(n.enums.size() == 1);

            const auto& e = n.enums[0];
            CHECK(e.name == "Force");
            CHECK(e.type == "uint8");
            REQUIRE(e.values.size() == 4);

            const auto& values = e.values;
            CHECK(values[0].name == "Unknown");
            CHECK(values[0].value == 0);
            CHECK(values[1].name == "Blue");
            CHECK(values[1].value == 1);
            CHECK(values[2].name == "Red");
            CHECK(values[2].value == 10);
            CHECK(values[3].name == "Other");
            CHECK(values[3].value == 11);
        }

        SUBCASE("Unions")
        {
            std::string input = R"(
                union EntityIdUnion
                {
                    uint64,
                    [uint16 : 4]
                }
            )";

            const auto context = Parser::parse(input);
            REQUIRE(context.namespaces.size() == 1);

            const auto& n = context.namespaces[0];
            CHECK(n.name == "");
            REQUIRE(n.unions.size() == 1);

            const auto& u = n.unions[0];
            CHECK(u.name == "EntityIdUnion");
            REQUIRE(u.types.size() == 2);

            const auto& types = u.types;
            CHECK(types[0].name == "uint64");
            CHECK(types[0].isArray == false);
            CHECK(types[1].name == "uint16");
            CHECK(types[1].isArray == true);
            CHECK(types[1].arraySize == 4);
        }
    }
}
