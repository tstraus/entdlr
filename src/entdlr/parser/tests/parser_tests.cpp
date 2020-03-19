#include "parser.h"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <iostream>
using std::cout; using std::endl;

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

    TEST_CASE("Namespace")
    {
        SUBCASE("Struct")
        {
            std::string input = R"(
                namespace grid;

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
            CHECK(n.name == "grid");
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
                namespace grid;

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
            CHECK(n.name == "grid");
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
                namespace grid;

                union EntityIdUnion
                {
                    uint64,
                    [uint16 : 4]
                }
            )";

            const auto context = Parser::parse(input);
            REQUIRE(context.namespaces.size() == 1);

            const auto& n = context.namespaces[0];
            CHECK(n.name == "grid");
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

    TEST_CASE("Arrays")
    {
        SUBCASE("Struct")
        {
            std::string input = R"(
                struct Test
                {
                    fixed : [uint16 : 8];
                    variable : [float64];
                    attr : [string : 2] (max_length : 10);
                }
            )";

            const auto context = Parser::parse(input);
            const auto& s = context.namespaces[0].structs[0];
            REQUIRE(s.name == "Test");
            const auto& f = s.fields;

            CHECK(f[0].name == "fixed");
            CHECK(f[0].type == "uint16");
            CHECK(f[0].isArray == true);
            CHECK(f[0].arraySize == 8);

            CHECK(f[1].name == "variable");
            CHECK(f[1].type == "float64");
            CHECK(f[1].isArray == true);
            CHECK(f[1].arraySize == 0);

            CHECK(f[2].name == "attr");
            CHECK(f[2].type == "string");
            CHECK(f[2].isArray == true);
            CHECK(f[2].arraySize == 2);
            REQUIRE(f[2].attributes.size() == 1);
            CHECK(f[2].attributes[0].name == "max_length");
            CHECK(f[2].attributes[0].number == 10);
        }
    }

    TEST_CASE("Facilities")
    {
        SUBCASE("Parameters")
        {
            std::string input = R"(
                facility Time
                {
                    now_a();
                    now_b(start: uint64);
                    now_0() : time;
                    now_1(mut start: uint64) : time;
                    now_2(start: int32, mut end: uint16) : time;
                }
            )";

            const auto context = Parser::parse(input);
            const auto& f = context.namespaces[0].facilities[0];

            CHECK(f.name == "Time");
            REQUIRE(f.methods.size() == 5);

            const auto& ma = f.methods[0];
            CHECK(ma.name == "now_a");
            CHECK(ma.returnType == "void");
            CHECK(ma.parameters.size() == 0);

            const auto& mb = f.methods[1];
            CHECK(mb.name == "now_b");
            CHECK(mb.returnType == "void");
            REQUIRE(mb.parameters.size() == 1);
            CHECK(mb.parameters[0].name == "start");
            CHECK(mb.parameters[0].type == "uint64");
            CHECK(mb.parameters[0].constant == true);

            const auto& m0 = f.methods[2];
            CHECK(m0.name == "now_0");
            CHECK(m0.returnType == "time");
            CHECK(m0.parameters.size() == 0);

            const auto& m1 = f.methods[3];
            CHECK(m1.name == "now_1");
            CHECK(m1.returnType == "time");
            REQUIRE(m1.parameters.size() == 1);
            CHECK(m1.parameters[0].name == "start");
            CHECK(m1.parameters[0].type == "uint64");
            CHECK(m1.parameters[0].constant == false);

            const auto& m2 = f.methods[4];
            CHECK(m2.name == "now_2");
            CHECK(m2.returnType == "time");
            REQUIRE(m2.parameters.size() == 2);
            CHECK(m2.parameters[0].name == "start");
            CHECK(m2.parameters[0].type == "int32");
            CHECK(m2.parameters[0].constant == true);
            CHECK(m2.parameters[1].name == "end");
            CHECK(m2.parameters[1].type == "uint16");
            CHECK(m2.parameters[1].constant == false);
        }
    }
}
