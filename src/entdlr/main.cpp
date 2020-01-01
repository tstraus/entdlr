#include <iostream>

#include "argh.h"
#include "parser.h"

using std::cout; using std::endl;

int main(int argc, char** argv)
{
    try
    {
        std::string filename = "";
        std::string dirname = "";

        argh::parser args(argv);
        if (args[{ "-h", "--help" }])
        {
            cout <<
            "Usage: entdlr [OPTION]\n" <<
            "  -h, --help           Basic use help (this)\n" <<
            "  -f, --file=FILE      Parse the specified file\n" <<
            "  -d, --dir=DIRECTORY  Parse all \".fbs\" files in the directory" << endl;

            return 0;
        }

        args({ "-f", "--file" }) >> filename;
        args({ "-d", "--dir" }) >> dirname;

        if (filename.empty() && dirname.empty())
            filename = "../samples/monster.fbs";

        Entdlr::Context context;
        if (!filename.empty())
            context = Entdlr::Parser::parseFile(filename);
        if (!dirname.empty())
            context = Entdlr::Parser::parseDir(dirname);

        // print namespaces
        for (const auto &n : context.namespaces) {
            cout << n.second.name << endl;

            // print enums
            for (const auto &e : n.second.enums) {
                cout << "    " << e.second.name << " : enum" << endl;

                for (const auto &v : e.second.values)
                    cout << "        " << v.second.name << " = " << v.second.value << endl;
            }

            // print structs
            for (const auto &s : n.second.structs) {
                cout << "    " << s.second.name << " : struct" << endl;

                for (const auto &f : s.second.fields)
                    cout << "         " << f.name << " : " << f.type << endl;
            }
        }

        return 0;
    }

    catch (std::exception& e)
    {
        cout << "ERROR: " << e.what() << endl;

        return 1;
    }
}
