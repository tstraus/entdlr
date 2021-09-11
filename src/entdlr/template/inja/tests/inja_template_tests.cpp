#include "inja_template.h"
#include "parser.h"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <iostream>
using std::cout;
using std::endl;

using namespace Entdlr;

void SetEnv(const std::string& name, const std::string& value)
{
#ifdef WIN32
    _putenv_s(name.c_str(), value.c_str());
#else
    setenv(name.c_str(), value.c_str(), 1);
#endif
}

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
        Struct s;
        s.name = "TestStruct";
        s.line = 12;
        s.column = 81;
        Field f;
        f.name = "TestField";
        f.line = 13;
        f.column = 34;
        f.isArray = true;
        f.arraySize = 7;
        Attribute a;
        a.name = "TestAttribute";
        a.line = 13;
        a.column = 40;
        a.integer = 7;
        a.number = 7.0;
        f.attributes[a.name] = a;
        s.add(f);
        n.add(s);
        context.add(n);

        InjaTemplate t;

        SUBCASE("IntegralNumberOutput")
        {
            std::string inputTemplate = R"(
## for namespace in entdlr.namespaces
## for struct in namespace.structs
## for field in struct.fields
## for name, attribute in field.attributes
{{ attribute.integer }}
{{ attribute.number }}
## endfor
## endfor
## endfor
## endfor
)";

            std::string inputScript;

            const auto output = t.applyString(context, inputTemplate, inputScript);

            CHECK(output == "\n7\n7.0\n");
        }

        SUBCASE("String")
        {
            std::string inputTemplate = R"(
## for namespace in entdlr.namespaces
{{ do_something(namespace.name) }}
{{ do_more_things(namespace.line, namespace.column) }}
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

            CHECK(output == "I did the thing inside module -> WrenFunction\nERROR: (11, 22)\n\n\n");
        }

        SUBCASE("ReturnString")
        {
            std::string inputTemplate = R"({% if do_string() == "strstrstr" %}did string{% endif %})";
            std::string inputScript = R"(
class Functions {
    static do_string() {
        return "strstrstr"
    }
}
)";

            const auto output = t.applyString(context, inputTemplate, inputScript);

            CHECK(output == "did string");
        }

        SUBCASE("ReturnNumber")
        {
            std::string inputTemplate = R"({% if do_number() > 1.0 %}did number{% endif %})";
            std::string inputScript = R"(
class Functions {
    static do_number() {
        return 1.234
    }
}
)";

            const auto output = t.applyString(context, inputTemplate, inputScript);

            CHECK(output == "did number");
        }

        SUBCASE("ReturnBool")
        {
            std::string inputTemplate = R"({% if do_bool() %}did bool{% endif %})";
            std::string inputScript = R"(
class Functions {
    static do_bool() {
        return true
    }
}
)";

            const auto output = t.applyString(context, inputTemplate, inputScript);

            CHECK(output == "did bool");
        }

        SUBCASE("EnvironmentVariable_Set")
        {
            SetEnv("ENTDLR_INJA_TEST_VAR_1", "asdf");
            std::string inputTemplate = R"({{ env("ENTDLR_INJA_TEST_VAR_1") }})";

            const auto output = t.applyString(context, inputTemplate);

            CHECK(output == "asdf");
        }

        SUBCASE("EnvironmentVariable_ThrowsNotSet")
        {
            std::string inputTemplate = R"({{ env("ENTDLR_INJA_TEST_VAR_2") }})";

            bool threw = false;
            try
            {
                const auto output = t.applyString(context, inputTemplate);
            }
            catch (...)
            {
                threw = true;
            }

            CHECK(threw == true);
        }

        SUBCASE("EnvironmentVariable_Default")
        {
            std::string inputTemplate = R"({{ env_default("ENTDLR_INJA_TEST_VAR_2", "fdsa") }})";

            const auto output = t.applyString(context, inputTemplate);

            CHECK(output == "fdsa");
        }
    }
}
