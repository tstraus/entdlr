#include <iostream>
#include <ratio>
#include <stdexcept>

#include "inja_template.h" // I must be included before parser.h because json and antlr don't get along
#include "parser.h"

#include "CLI11.hpp"
#include "rang.hpp"

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

        CLI::App app {"entdlr"};
        app.add_option("-t,--template", template_name, "Template file to use.")->default_val("../samples/display.tmpl");
        app.add_option("-f,--file", filename, "Parse the specified file.")->default_val("../samples/entity.fbs");
        app.add_option("-d,--dir", dirname, "Parse all files in the specified directory.");
        app.add_option("-o,--output", output_name, "File to put template output in, otherwise prints to STDOUT");
        app.add_option("-i,--include_dir", include_dir, "Directory to search for included files, otherwise directory of --file");

        CLI11_PARSE(app, argc, argv);

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
