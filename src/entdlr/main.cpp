#include <iostream>
#include <ratio>
#include <stdexcept>

#include "inja_template.h" // I must be included before parser.h because json and antlr don't get along
#include "parser.h"

#include "util/argh.h"
#include "util/rang.hpp"

using std::cout;
using std::endl;
using namespace rang;

int main(int argc, char** argv)
{
    try
    {
        std::string template_name;
        std::string filename;
        std::string dirname;
        std::string output_name;
        std::string include_dir;

        argh::parser args(argv);
        if (args[{"-h", "--help"}])
        {
            cout << "Usage: entdlr [OPTION]\n"
                 << "  -h, --help             Basic use help (this)\n"
                 << "  -t, --template=FILE    Template file to use. Default: \"../samples/display.tmpl\"\n"
                 << "  -f, --file=FILE        Parse the specified file. Default: \"../samples/entity.fbs\"\n"
                 << "  -d, --dir=DIR          Parse all files in the specified directory.\n"
                 << "  -o, --output=FILE      File to put template output in. Default: prints to STDOUT\n"
                 << "  -i, --include_dir=DIR  Directory to search for included files. Default: directory of --file"
                 << endl;

            return 0;
        }

        args({"-t", "--template"}, "../samples/display.tmpl") >> template_name;
        args({"-f", "--file"}) >> filename;
        args({"-d", "--dir"}) >> dirname;
        args({"-o", "--output"}) >> output_name;
        args({"-i", "--include_dir"}) >> include_dir;

        if (!filename.empty() && !dirname.empty())
        {
            throw std::runtime_error("Only one of \"--file\" or \"--dir\" can be given from the command line");
        }

        // set the default filename
        if (filename.empty())
        {
            filename = "../samples/entity.fbs";
        }

        Entdlr::Context context;
        if (!filename.empty() && dirname.empty())
        {
            context = Entdlr::Parser::parseFile(filename, include_dir);
        }

        else if (!dirname.empty())
        {
            context = Entdlr::Parser::parseDir(dirname, include_dir);
        }

        Entdlr::InjaTemplate t;
        const auto output = t.applyTemplate(context, template_name);

        if (output_name.empty())
        { // no output file given, print it
            cout << output << endl;
        }
        else
        {
            std::ofstream output_file(output_name);
            if (output_file.is_open())
            {
                output_file << output;
                output_file.close();
            }
            else
            {
                throw std::runtime_error("Couldn't open output file " + output_name);
            }
        }

        return 0;
    }

    catch (std::exception& e)
    {
        cout << fg::red << "ERROR: " << fg::reset << e.what() << endl;

        return 1;
    }
}
