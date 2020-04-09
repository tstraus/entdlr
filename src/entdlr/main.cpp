#include <iostream>

#include "parser.h"
#include "template_router.h"

#include "argh.h"
#include "rang.hpp"

using std::cout; using std::endl;
using namespace rang;

int main(int argc, char** argv)
{
    try
    {
        std::string template_name = "";
        std::string filename = "";
        std::string output_name = "";

        argh::parser args(argv);
        if (args[{ "-h", "--help" }])
        {
            cout <<
            "Usage: entdlr [OPTION]\n" <<
            "  -h, --help           Basic use help (this)\n" <<
            "  -t, --template=FILE  Template file to use. Default: \"../samples/dump.wren\"\n" <<
            "  -f, --file=FILE      Parse the specified file. Default: \"../samples/entity.fbs\"\n" <<
            "  -o, --output=FILE    File to put template output in. Default: prints to STDOUT" <<
            endl;

            return 0;
        }

        //args({ "-t", "--template" }, "../samples/dump.wren") >> template_name;
        args({ "-t", "--template" }, "../samples/display.tmpl") >> template_name;
        args({ "-f", "--file" }) >> filename;
        args({ "-o", "--output" }) >> output_name;

        if (filename.empty())
            filename = "../samples/entity.fbs";

        Entdlr::Context context;
        if (!filename.empty())
            context = Entdlr::Parser::parseFile(filename);
        
        Entdlr::TemplateRouter t;
        const auto output = t.applyTemplate(context, template_name);

        if (output_name.empty()) // no output file given, print it
            cout << output << endl;

        else
        {
            std::ofstream output_file(output_name);
            output_file << output;
            output_file.close();
        }

        return 0;
    }

    catch (std::exception& e)
    {
        cout << fg::red << "ERROR: " << fg::reset << e.what() << endl;

        return 1;
    }
}
