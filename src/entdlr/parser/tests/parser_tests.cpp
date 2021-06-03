#include "parser.h"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <iostream>
using std::cout;
using std::endl;

using namespace Entdlr;

TEST_SUITE("Parsing")
{
    TEST_CASE("Global")
    {
        SUBCASE("Struct")
        {
            std::string input = R"(
                include "test/Measurement.fbs";

                /// struct comment
                struct Position (correlated)
                {
                    x : float64; /// field comment
                    y : float64; // ignored comment
                    z : float64;
                }
            )";

            const auto context = Parser::parse(input);
            REQUIRE(context.includes.size() == 1);
            CHECK(context.includes[0].token == TokenType::Include);
            CHECK(context.includes[0].name == "test/Measurement");

            REQUIRE(context.namespaces.size() == 1);

            const auto& n = context.namespaces[0];
            CHECK(n.name == "");
            REQUIRE(n.structs.size() == 1);

            const auto& s = n.structs[0];
            CHECK(s.token == TokenType::Struct);
            CHECK(s.name == "Position");
            CHECK(s.comment == "struct comment");
            REQUIRE(s.fields.size() == 3);
            REQUIRE(s.attributes.size() == 1);

            const auto& attributes = s.attributes;
            CHECK(attributes.begin()->second.token == TokenType::Attribute);
            CHECK(attributes.begin()->second.name == "correlated");
            CHECK(attributes.begin()->second.isNumber == false);
            CHECK(attributes.begin()->second.isString == false);

            const auto& fields = s.fields;
            CHECK(fields[0].token == TokenType::Field);
            CHECK(fields[0].name == "x");
            CHECK(fields[0].type == "float64");
            CHECK(fields[0].comment == "field comment");
            CHECK(fields[1].token == TokenType::Field);
            CHECK(fields[1].name == "y");
            CHECK(fields[1].type == "float64");
            CHECK(fields[1].comment == "");
            CHECK(fields[2].token == TokenType::Field);
            CHECK(fields[2].name == "z");
            CHECK(fields[2].type == "float64");
            CHECK(fields[2].comment == "");
        }

        SUBCASE("Enum")
        {
            std::string input = R"(
                /// enum comment
                enum Force : uint8
                {
                    Unknown,
                    Blue,
                    Red = 10,
                    Green = 0x0F,
                    Other
                }
            )";

            const auto context = Parser::parse(input);
            REQUIRE(context.namespaces.size() == 1);

            const auto& n = context.namespaces[0];
            CHECK(n.token == TokenType::Namespace);
            CHECK(n.name == "");
            REQUIRE(n.enums.size() == 1);

            const auto& e = n.enums[0];
            CHECK(e.token == TokenType::Enum);
            CHECK(e.name == "Force");
            CHECK(e.type == "uint8");
            CHECK(e.comment == "enum comment");
            REQUIRE(e.values.size() == 5);

            const auto& values = e.values;
            CHECK(values[0].token == TokenType::EnumValue);
            CHECK(values[0].name == "Unknown");
            CHECK(values[0].value == 0);
            CHECK(values[1].token == TokenType::EnumValue);
            CHECK(values[1].name == "Blue");
            CHECK(values[1].value == 1);
            CHECK(values[2].token == TokenType::EnumValue);
            CHECK(values[2].name == "Red");
            CHECK(values[2].value == 10);
            CHECK(values[3].token == TokenType::EnumValue);
            CHECK(values[3].name == "Green");
            CHECK(values[3].value == 15);
            CHECK(values[4].token == TokenType::EnumValue);
            CHECK(values[4].name == "Other");
            CHECK(values[4].value == 16);
        }

        SUBCASE("Unions")
        {
            std::string input = R"(
                /// union comment
                union EntityIdUnion
                {
                    uint64,
                    [uint16 : 4]
                }
            )";

            const auto context = Parser::parse(input);
            REQUIRE(context.namespaces.size() == 1);

            const auto& n = context.namespaces[0];
            CHECK(n.token == TokenType::Namespace);
            CHECK(n.name == "");
            REQUIRE(n.unions.size() == 1);

            const auto& u = n.unions[0];
            CHECK(u.token == TokenType::Union);
            CHECK(u.name == "EntityIdUnion");
            CHECK(u.comment == "union comment");
            REQUIRE(u.types.size() == 2);

            const auto& types = u.types;
            CHECK(types[0].token == TokenType::UnionType);
            CHECK(types[0].name == "uint64");
            CHECK(types[0].isArray == false);
            CHECK(types[1].token == TokenType::UnionType);
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

                /** 
                 * ECEF Position
                 * @units meters
                 */
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
            CHECK(n.token == TokenType::Namespace);
            CHECK(n.name == "grid");
            REQUIRE(n.structs.size() == 1);

            const auto& s = n.structs[0];
            CHECK(s.token == TokenType::Struct);
            CHECK(s.name == "Position");
            REQUIRE(s.fields.size() == 3);

            const auto& d = s.documentation;
            CHECK(d.description == "ECEF Position");
            REQUIRE(d.tags.size() == 1);
            CHECK(d.tags[0].name == "units");
            CHECK(d.tags[0].content == "meters");

            const auto& fields = s.fields;
            CHECK(fields[0].token == TokenType::Field);
            CHECK(fields[0].name == "x");
            CHECK(fields[0].type == "float64");
            CHECK(fields[1].token == TokenType::Field);
            CHECK(fields[1].name == "y");
            CHECK(fields[1].type == "float64");
            CHECK(fields[2].token == TokenType::Field);
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

                enum Mode1
                {
                    Off,
                    Search,
                    Track,
                    Other
                }

                enum Mode2
                {
                    Off = -1,
                    Search,
                    Track,
                    Other = 20000
                }
            )";

            const auto context = Parser::parse(input);
            REQUIRE(context.namespaces.size() == 1);

            const auto& n = context.namespaces[0];
            CHECK(n.token == TokenType::Namespace);
            CHECK(n.name == "grid");
            REQUIRE(n.enums.size() == 3);

            const auto& e = n.enums[0];
            CHECK(e.token == TokenType::Enum);
            CHECK(e.name == "Force");
            CHECK(e.type == "uint8");
            REQUIRE(e.values.size() == 4);

            const auto& values = e.values;
            CHECK(values[0].token == TokenType::EnumValue);
            CHECK(values[0].name == "Unknown");
            CHECK(values[0].value == 0);
            CHECK(values[1].token == TokenType::EnumValue);
            CHECK(values[1].name == "Blue");
            CHECK(values[1].value == 1);
            CHECK(values[2].token == TokenType::EnumValue);
            CHECK(values[2].name == "Red");
            CHECK(values[2].value == 10);
            CHECK(values[3].token == TokenType::EnumValue);
            CHECK(values[3].name == "Other");
            CHECK(values[3].value == 11);

            const auto& m1 = n.enums[1];
            CHECK(m1.name == "Mode1");
            CHECK(m1.type == "uint8");

            const auto& m2 = n.enums[2];
            CHECK(m2.name == "Mode2");
            CHECK(m2.type == "int16");
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
            CHECK(n.token == TokenType::Namespace);
            CHECK(n.name == "grid");
            REQUIRE(n.unions.size() == 1);

            const auto& u = n.unions[0];
            CHECK(u.token == TokenType::Union);
            CHECK(u.name == "EntityIdUnion");
            REQUIRE(u.types.size() == 2);

            const auto& types = u.types;
            CHECK(types[0].token == TokenType::UnionType);
            CHECK(types[0].name == "uint64");
            CHECK(types[0].isArray == false);
            CHECK(types[1].token == TokenType::UnionType);
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
                    fixed : [uint16 : 8] (string_things : "asdf");
                    variable : [float64] (things : 6.0);
                    attr : [string : 2] (max_length : 10);
                }
            )";

            const auto context = Parser::parse(input);
            const auto& s = context.namespaces[0].structs[0];
            CHECK(s.token == TokenType::Struct);
            REQUIRE(s.name == "Test");
            const auto& f = s.fields;

            CHECK(f[0].token == TokenType::Field);
            CHECK(f[0].name == "fixed");
            CHECK(f[0].type == "uint16");
            CHECK(f[0].isArray == true);
            CHECK(f[0].arraySize == 8);
            CHECK(f[0].attributes.begin()->second.isString == true);
            CHECK(f[0].attributes.begin()->second.isNumber == false);
            CHECK(f[0].attributes.begin()->second.isInteger == false);
            CHECK(f[0].attributes.begin()->second.name == "string_things");
            CHECK(f[0].attributes.begin()->second.string == "asdf");

            CHECK(f[1].token == TokenType::Field);
            CHECK(f[1].name == "variable");
            CHECK(f[1].type == "float64");
            CHECK(f[1].isArray == true);
            CHECK(f[1].arraySize == 0);
            REQUIRE(f[1].attributes.size() == 1);
            CHECK(f[1].attributes.begin()->second.isString == false);
            CHECK(f[1].attributes.begin()->second.isNumber == true);
            CHECK(f[1].attributes.begin()->second.isInteger == false);
            CHECK(f[1].attributes.begin()->second.name == "things");
            CHECK(f[1].attributes.begin()->second.number == 6.0);

            CHECK(f[2].token == TokenType::Field);
            CHECK(f[2].name == "attr");
            CHECK(f[2].type == "string");
            CHECK(f[2].isArray == true);
            CHECK(f[2].arraySize == 2);
            REQUIRE(f[2].attributes.size() == 1);
            CHECK(f[2].attributes.begin()->second.isString == false);
            CHECK(f[2].attributes.begin()->second.isNumber == false);
            CHECK(f[2].attributes.begin()->second.isInteger == true);
            CHECK(f[2].attributes.begin()->second.name == "max_length");
            CHECK(f[2].attributes.begin()->second.integer == 10);
        }
    }

    TEST_CASE("Methods")
    {
        SUBCASE("Structs")
        {
            std::string input = R"(
                /// other struct comment
                struct Position
                {
                    x : float64;
                    y : float64;
                    z : float64;

                    normalize(); /// method comment
                    valid() : bool;
                    azTo(otherPos: Position) : angle;
                    elTo(otherPos: mut Position) : angle;
                    between(a: ref Position, b: mut Position) : bool;
                    static create(lat: mut angle, lon: ref angle, alt: ref mut length) : ref Position;
                    mut multiply(other: float64);
                }
            )";

            const auto context = Parser::parse(input);
            const auto& s = context.namespaces[0].structs[0];

            CHECK(s.token == TokenType::Struct);
            CHECK(s.name == "Position");
            CHECK(s.comment == "other struct comment");
            REQUIRE(s.methods.size() == 7);

            const auto& m1 = s.methods[0];
            CHECK(m1.token == TokenType::Method);
            CHECK(m1.name == "normalize");
            CHECK(m1.returnType == "void");
            CHECK(m1.isStatic == false);
            CHECK(m1.constant == true);
            CHECK(m1.parameters.size() == 0);
            CHECK(m1.comment == "method comment");

            const auto& m2 = s.methods[1];
            CHECK(m2.token == TokenType::Method);
            CHECK(m2.name == "valid");
            CHECK(m2.returnType == "bool");
            CHECK(m2.isStatic == false);
            CHECK(m2.constant == true);
            REQUIRE(m2.parameters.size() == 0);

            const auto& m3 = s.methods[2];
            CHECK(m3.token == TokenType::Method);
            CHECK(m3.name == "azTo");
            CHECK(m3.returnType == "angle");
            CHECK(m3.isStatic == false);
            CHECK(m3.constant == true);
            REQUIRE(m3.parameters.size() == 1);
            CHECK(m3.parameters[0].token == TokenType::Parameter);
            CHECK(m3.parameters[0].name == "otherPos");
            CHECK(m3.parameters[0].type == "Position");
            CHECK(m3.parameters[0].constant == true);
            CHECK(m3.parameters[0].reference == false);

            const auto& m4 = s.methods[3];
            CHECK(m4.token == TokenType::Method);
            CHECK(m4.name == "elTo");
            CHECK(m4.returnType == "angle");
            CHECK(m4.isStatic == false);
            CHECK(m4.constant == true);
            REQUIRE(m4.parameters.size() == 1);
            CHECK(m4.parameters[0].token == TokenType::Parameter);
            CHECK(m4.parameters[0].name == "otherPos");
            CHECK(m4.parameters[0].type == "Position");
            CHECK(m4.parameters[0].constant == false);
            CHECK(m4.parameters[0].reference == false);

            const auto& m5 = s.methods[4];
            CHECK(m5.token == TokenType::Method);
            CHECK(m5.name == "between");
            CHECK(m5.returnType == "bool");
            CHECK(m5.isStatic == false);
            CHECK(m5.constant == true);
            REQUIRE(m5.parameters.size() == 2);
            CHECK(m5.parameters[0].token == TokenType::Parameter);
            CHECK(m5.parameters[0].name == "a");
            CHECK(m5.parameters[0].type == "Position");
            CHECK(m5.parameters[0].constant == true);
            CHECK(m5.parameters[0].reference == true);
            CHECK(m5.parameters[1].token == TokenType::Parameter);
            CHECK(m5.parameters[1].name == "b");
            CHECK(m5.parameters[1].type == "Position");
            CHECK(m5.parameters[1].constant == false);
            CHECK(m5.parameters[1].reference == false);

            const auto& m6 = s.methods[5];
            CHECK(m6.token == TokenType::Method);
            CHECK(m6.name == "create");
            CHECK(m6.returnType == "Position");
            CHECK(m6.returnIsReference == true);
            CHECK(m6.isStatic == true);
            CHECK(m6.constant == true);
            REQUIRE(m6.parameters.size() == 3);
            CHECK(m6.parameters[0].token == TokenType::Parameter);
            CHECK(m6.parameters[0].name == "lat");
            CHECK(m6.parameters[0].type == "angle");
            CHECK(m6.parameters[0].constant == false);
            CHECK(m6.parameters[0].reference == false);
            CHECK(m6.parameters[1].token == TokenType::Parameter);
            CHECK(m6.parameters[1].name == "lon");
            CHECK(m6.parameters[1].type == "angle");
            CHECK(m6.parameters[1].constant == true);
            CHECK(m6.parameters[1].reference == true);
            CHECK(m6.parameters[2].token == TokenType::Parameter);
            CHECK(m6.parameters[2].name == "alt");
            CHECK(m6.parameters[2].type == "length");
            CHECK(m6.parameters[2].constant == false);
            CHECK(m6.parameters[2].reference == true);

            const auto& m7 = s.methods[6];
            CHECK(m7.token == TokenType::Method);
            CHECK(m7.name == "multiply");
            CHECK(m7.returnType == "void");
            CHECK(m7.returnIsReference == false);
            CHECK(m7.isStatic == false);
            CHECK(m7.constant == false);
            REQUIRE(m7.parameters.size() == 1);
            CHECK(m7.parameters[0].token == TokenType::Parameter);
            CHECK(m7.parameters[0].name == "other");
            CHECK(m7.parameters[0].type == "float64");
            CHECK(m7.parameters[0].constant == true);
            CHECK(m7.parameters[0].reference == false);

            REQUIRE(s.fields.size() == 3);

            const auto& fields = s.fields;
            CHECK(fields[0].token == TokenType::Field);
            CHECK(fields[0].name == "x");
            CHECK(fields[0].type == "float64");
            CHECK(fields[1].token == TokenType::Field);
            CHECK(fields[1].name == "y");
            CHECK(fields[1].type == "float64");
            CHECK(fields[2].token == TokenType::Field);
            CHECK(fields[2].name == "z");
            CHECK(fields[2].type == "float64");
        }

        SUBCASE("Interfaces")
        {
            std::string input = R"(
                /// interface comment
                interface Time
                {
                    now_a();
                    now_b(start: uint64);
                    now_0() : time;
                    now_1(start: mut uint64) : time; /// method comment
                    now_2(start: int32, end: mut uint16) : time;
                    static create(lat: angle, lon: angle, alt: length) : Position;
                }
            )";

            const auto context = Parser::parse(input);
            const auto& f = context.namespaces[0].interfaces[0];

            CHECK(f.token == TokenType::Interface);
            CHECK(f.name == "Time");
            CHECK(f.comment == "interface comment");
            REQUIRE(f.methods.size() == 6);

            const auto& ma = f.methods[0];
            CHECK(ma.token == TokenType::Method);
            CHECK(ma.name == "now_a");
            CHECK(ma.returnType == "void");
            CHECK(ma.parameters.size() == 0);

            const auto& mb = f.methods[1];
            CHECK(mb.token == TokenType::Method);
            CHECK(mb.name == "now_b");
            CHECK(mb.returnType == "void");
            REQUIRE(mb.parameters.size() == 1);
            CHECK(mb.parameters[0].name == "start");
            CHECK(mb.parameters[0].type == "uint64");
            CHECK(mb.parameters[0].constant == true);

            const auto& m0 = f.methods[2];
            CHECK(m0.token == TokenType::Method);
            CHECK(m0.name == "now_0");
            CHECK(m0.returnType == "time");
            CHECK(m0.parameters.size() == 0);

            const auto& m1 = f.methods[3];
            CHECK(m1.token == TokenType::Method);
            CHECK(m1.name == "now_1");
            CHECK(m1.returnType == "time");
            REQUIRE(m1.parameters.size() == 1);
            CHECK(m1.parameters[0].name == "start");
            CHECK(m1.parameters[0].type == "uint64");
            CHECK(m1.parameters[0].constant == false);
            CHECK(m1.comment == "method comment");

            const auto& m2 = f.methods[4];
            CHECK(m2.token == TokenType::Method);
            CHECK(m2.name == "now_2");
            CHECK(m2.returnType == "time");
            REQUIRE(m2.parameters.size() == 2);
            CHECK(m2.parameters[0].name == "start");
            CHECK(m2.parameters[0].type == "int32");
            CHECK(m2.parameters[0].constant == true);
            CHECK(m2.parameters[1].name == "end");
            CHECK(m2.parameters[1].type == "uint16");
            CHECK(m2.parameters[1].constant == false);

            const auto& m6 = f.methods[5];
            CHECK(m6.token == TokenType::Method);
            CHECK(m6.name == "create");
            CHECK(m6.returnType == "Position");
            CHECK(m6.isStatic == true);
            REQUIRE(m6.parameters.size() == 3);
            CHECK(m6.parameters[0].name == "lat");
            CHECK(m6.parameters[0].type == "angle");
            CHECK(m6.parameters[0].constant == true);
            CHECK(m6.parameters[1].name == "lon");
            CHECK(m6.parameters[1].type == "angle");
            CHECK(m6.parameters[1].constant == true);
            CHECK(m6.parameters[2].name == "alt");
            CHECK(m6.parameters[2].type == "length");
            CHECK(m6.parameters[2].constant == true);
        }
    }
}
