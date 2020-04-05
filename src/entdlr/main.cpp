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
        std::string dirname = "";

        argh::parser args(argv);
        if (args[{ "-h", "--help" }])
        {
            cout <<
            "Usage: entdlr [OPTION]\n" <<
            "  -h, --help           Basic use help (this)\n" <<
            "  -t, --template=FILE  Template file to use. Default: \"../samples/dump.wren\"\n" <<
            "  -f, --file=FILE      Parse the specified file. Default: \"../samples/entity.fbs\"\n" <<
            "  -d, --dir=DIRECTORY  Parse all \".fbs\" files in the directory" << endl;

            return 0;
        }

        args({ "-t", "--template" }, "../samples/dump.wren") >> template_name;
        args({ "-f", "--file" }) >> filename;
        args({ "-d", "--dir" }) >> dirname;

        if (filename.empty() && dirname.empty())
            filename = "../samples/entity.fbs";

        Entdlr::Context context;
        if (!filename.empty())
            context = Entdlr::Parser::parseFile(filename);
        if (!dirname.empty())
            context = Entdlr::Parser::parseDir(dirname);
        
        Entdlr::TemplateRouter t;
        cout << t.applyTemplate(context, template_name) << endl;

        return 0;
    }

    catch (std::exception& e)
    {
        cout << fg::red << "ERROR: " << fg::reset << e.what() << endl;

        return 1;
    }
}
