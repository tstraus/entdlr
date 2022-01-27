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
        std::string wren;
        std::string config;
        std::string output_name;
        std::string include_dir;
        bool sort = false;

        CLI::App app{"entdlr"};

        auto* templateOption = app.add_option("template", template_name, "Template file to use.");
        auto* fileOption = app.add_option("file", filename, "Parse the specified file.");
        auto* dirOption = app.add_option("-d,--dir", dirname, "Parse all files in the specified directory.");
        auto* wrenOptions = app.add_option("-w,--wren", wren, "Wren functions made available in the template.");
        auto* configOption = app.add_option("-c,--config", config, "Config file with type map and additional context");
        auto* outputOption =
            app.add_option("-o,--output", output_name, "File to put template output in, otherwise prints to STDOUT");
        auto* includeOption =
            app.add_option("-i,--include_dir",
                           include_dir,
                           "Directory to search for included .fbs files, otherwise directory of file");
        auto* sortOption =
            app.add_flag("-s,--sort", sort, "Order declarations alphebetically, rather than in the order parsed");

        templateOption->required();
        dirOption->excludes(fileOption);

        CLI11_PARSE(app, argc, argv);

        Entdlr::Context context;
        if (dirname.empty())
        {
            context = Entdlr::Parser::parseFile(filename, include_dir);
        }

        else
        {
            context = Entdlr::Parser::parseDir(dirname, include_dir);
        }

        if (sort)
        {
            context.sort();
        }

        Entdlr::InjaTemplate t;
        const auto output = t.applyTemplate(context, template_name, wren, config);

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
