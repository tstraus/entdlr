#include <iostream>

#include "inja_template.h"

#include "util/argh.h"
#include "util/rang.hpp"

#ifdef __cpp_lib_filesystem
#include <filesystem>
namespace fs = std::filesystem;
#else
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;
#endif

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
            cout
            << "Usage: entdlr [OPTION]\n"
            << "  -h, --help           Basic use help (this)\n"
            << "  -t, --template=FILE  Template file to use\n"
            << "  -f, --file=FILE      Parse the specified file\n"
            << "  -o, --output=FILE    File to put template output in. Default: prints to STDOUT"
            << endl;

            return 0;
        }

        args({ "-t", "--template" }) >> template_name;
        args({ "-f", "--file" }) >> filename;
        args({ "-o", "--output" }) >> output_name;

        if (filename.empty())
        {
            cout << rang::fg::red << "ERROR: Input JSON file not given" << endl;

            return 1;
        }

        if (template_name.empty())
        {
            cout << rang::fg::red << "ERROR: Template file not given" << endl;
        }

        Entdlr::InjaTemplate t;

        // open and read the input json file
        std::ifstream file(filename);
        nlohmann::json j;
        file >> j;

        // open and read the template file
        std::ifstream templateFile(template_name);
        std::stringstream tmpl;
        tmpl << templateFile.rdbuf();

        // check for a wren file with functions in it
        std::string scriptContent;
        std::string functionsFilename = template_name.substr(0, template_name.size() - t.getFileExtension().size()) + ".wren";
        if (fs::exists(functionsFilename))
        {
            // open and read the script
            std::ifstream functionsFile(functionsFilename);
            std::stringstream functions;
            functions << functionsFile.rdbuf();
            scriptContent = functions.str();
        }
        
        const auto output = t.applyJson(j, tmpl.str(), scriptContent);

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
