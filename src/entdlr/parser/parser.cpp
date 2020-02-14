#include "parser.h"

#include <iostream>
#include <filesystem>
#include <stdexcept>

using std::cout; using std::endl;

namespace Entdlr
{
    Context Parser::parseDir(const std::string& dirname)
    {
        std::vector<Context> contexts;

        if (std::filesystem::exists(dirname) && std::filesystem::is_directory(dirname))
        {
            std::filesystem::recursive_directory_iterator it(dirname);
            std::filesystem::recursive_directory_iterator end;

            while (it != end)
            {
                if (std::filesystem::is_regular_file(*it) && it->path().extension() == ".fbs")
                    contexts.push_back(parseFile(it->path().string()));

                it++;
            }
        }

        else throw std::runtime_error("Unable to parse directory \"" + dirname + "\"");

        return merge(contexts);
    }

    Context Parser::parseFile(const std::string& filename)
    {
        try
        {
            // open and read the file
            std::ifstream file(filename);
            std::stringstream buffer;
            buffer << file.rdbuf();

            return parse(buffer.str(), filename);
        }

        catch (std::exception& e)
        {
            throw std::runtime_error("\"" + filename + "\"" + std::string(" -> ") + e.what());
        }
    }

    Context Parser::parse(const std::string& content, const std::string& filename)
    {
        try
        {
            // parse with antlr
            antlr4::ANTLRInputStream input(content);
            FlatBuffersLexer lexer(&input);
            antlr4::CommonTokenStream tokens(&lexer);
            FlatBuffersParser parser(&tokens);

            // get the output
            const auto &schema = parser.schema();

            Context context;

            // get the namespace in the file
            auto ns = parseNamespace(schema->namespace_decl(), filename);

            // get enums defined in the file
            const auto enums = parseEnums(schema->enum_decl(), filename);
            for (const auto& e : enums)
                ns.add(e);

            // get unions defined in the file
            const auto unions = parseUnions(schema->union_decl(), filename);
            for (const auto& u : unions)
                ns.add(u);

            // get structs defined in the file
            const auto structs = parseStructs(schema->type_decl(), filename);
            for (const auto& s : structs)
                ns.add(s);

            context.add(ns);

            return context;
        }

        catch (std::exception& e)
        {
            throw std::runtime_error(std::string("SyntaxError: ") + e.what());
        }
    }

    Context Parser::merge(const std::vector<Context> &contexts)
    {
        Context output;

        for (const auto& context : contexts)
        {
            // add up the namespaces
            for (const auto& n : context.namespaces)
                output.add(n);
        }

        return output;
    }

    Namespace Parser::parseNamespace(const std::vector<FlatBuffersParser::Namespace_declContext*>& namespaces, const std::string& filename)
    {
        std::string output = "";

        if (namespaces.size() == 0) // global namespace
            return Namespace::create(Token{output, filename, 0, 0});

        if (namespaces.size() == 1)
        {
            const auto& ns = namespaces[0];
            bool afterFirst = false;
            for (const auto& segment : ns->IDENT())
            { // make the namespace into a string separated by "::"
                if (afterFirst)
                     output += "::";
                else afterFirst = true;

                output += segment->getSymbol()->getText();
            }
        }

        else if (namespaces.size() > 1)
            throw std::runtime_error(std::to_string(namespaces[1]->getStart()->getLine()) + ", " + std::to_string(namespaces[1]->getStart()->getCharPositionInLine()) + ": Multiple namespaces in file");

        return Namespace::create(Token{output, filename, namespaces[0]->getStart()->getLine(), namespaces[0]->getStart()->getCharPositionInLine()});
    }

    std::vector<Enum> Parser::parseEnums(const std::vector<FlatBuffersParser::Enum_declContext*>& enums, const std::string& filename)
    {
        std::vector<Enum> output;

        for (const auto& en : enums)
        {
            Enum e;
            Token t = { en->IDENT()->getSymbol()->getText(), filename, en->getStart()->getLine(), en->getStart()->getCharPositionInLine() };
            if (en->type())
            {
                if (en->type()->BASE_TYPE_NAME())
                    e = Enum::create(t, en->type()->BASE_TYPE_NAME()->getSymbol()->getText()); // make a new enum with the name
                else throw std::runtime_error(std::to_string(en->type()->getStart()->getLine()) + ", " + std::to_string(en->type()->getStart()->getCharPositionInLine()) + ": enums can only be primitive types");
            }

            else e = Enum::create(t);

            // get enum values
            for (const auto& v : en->commasep_enumval_decl()->enumval_decl())
            {
                const auto& valueName = v->ns_ident()->IDENT()[0]->getSymbol()->getText();
                if (v->integer_const() && v->integer_const()->INTEGER_CONSTANT())
                    e.add(Token{valueName, filename, v->getStart()->getLine(), v->getStart()->getCharPositionInLine()},
                        std::stoll(v->integer_const()->INTEGER_CONSTANT()->getSymbol()->getText()));

                else e.add(Token{valueName, filename, v->getStart()->getLine(), v->getStart()->getCharPositionInLine()}, {});
            }

            output.push_back(e);
        }

        return output;
    }

    std::vector<Union> Parser::parseUnions(const std::vector<FlatBuffersParser::Union_declContext*>& unions, const std::string& filename)
    {
        std::vector<Union> output;

        for (const auto& un : unions)
        {
            auto u = Union::create(Token{un->IDENT()->getSymbol()->getText(), filename, un->getStart()->getLine(), un->getStart()->getCharPositionInLine()}); // make a new union with the name

            // get union types
            for (const auto& t : un->commasep_uniontype_decl()->uniontype_decl())
            {
                std::string type = "";
                bool isArray = false;
                uint32_t arraySize = 0;

                // plain type
                if (t->type()->BASE_TYPE_NAME())
                {
                    type = t->type()->BASE_TYPE_NAME()->getSymbol()->getText();
                }

                // array of plain type
                else if (t->type()->type() && t->type()->type()->BASE_TYPE_NAME())
                {
                    type = t->type()->type()->BASE_TYPE_NAME()->getSymbol()->getText();

                    isArray = true;

                    // fixed sized array
                    if (t->type()->integer_const() && t->type()->integer_const()->INTEGER_CONSTANT())
                        arraySize = std::stoul(t->type()->integer_const()->INTEGER_CONSTANT()->getSymbol()->getText());
                }

                // namespaced type
                else if (t->type()->ns_ident())
                {
                    bool afterFirst = false;
                    for (const auto& segment : t->type()->ns_ident()->IDENT())
                    { // get the namespace separated by "::"
                        if (afterFirst)
                            type += "::";
                        else afterFirst = true;

                        type += segment->getSymbol()->getText();
                    }
                }

                // array of namespaced type
                if (t->type()->type() && t->type()->type()->ns_ident())
                {
                    bool afterFirst = false;
                    for (const auto& segment : t->type()->type()->ns_ident()->IDENT())
                    { // get the namespace separated by "::"
                        if (afterFirst)
                            type += "::";
                        else afterFirst = true;

                        type += segment->getSymbol()->getText();
                    }

                    isArray = true;

                    // fixed size array
                    if (t->type()->integer_const() && t->type()->integer_const()->INTEGER_CONSTANT())
                        arraySize = std::stoul(t->type()->integer_const()->INTEGER_CONSTANT()->getSymbol()->getText());
                }

                u.add(UnionType::create(Token{type, filename, t->getStart()->getLine(), t->getStart()->getCharPositionInLine()}, isArray, arraySize));
            }

            output.push_back(u);
        }

        return output;
    }

    std::vector<Struct> Parser::parseStructs(const std::vector<FlatBuffersParser::Type_declContext*>& structs, const std::string& filename)
    {
        std::vector<Struct> output;

        for (const auto& st : structs)
        {
            auto s = Struct::create(Token{st->IDENT()->getSymbol()->getText(), filename, st->getStart()->getLine(), st->getStart()->getCharPositionInLine()}); // make a new struct with the name

            // get the fields of the struct
            for (const auto& f : st->field_decl())
            {
                s.add(parseField(f, filename));
            }

            output.push_back(s);
        }

        return output;
    }

    Field Parser::parseField(FlatBuffersParser::Field_declContext* field, const std::string& filename)
    {
        const auto name = field->IDENT()->getSymbol()->getText();
        std::string type = "";
        bool isArray = false;
        uint32_t arraySize = 0;

        // plain type
        if (field->type()->BASE_TYPE_NAME())
        {
            type = field->type()->BASE_TYPE_NAME()->getSymbol()->getText();
        }

        // array of plain type
        else if (field->type()->type() && field->type()->type()->BASE_TYPE_NAME())
        {
            type = field->type()->type()->BASE_TYPE_NAME()->getSymbol()->getText();

            isArray = true;

            // fixed sized array
            if (field->type()->integer_const() && field->type()->integer_const()->INTEGER_CONSTANT())
                arraySize = std::stoul(field->type()->integer_const()->INTEGER_CONSTANT()->getSymbol()->getText());
        }

        // namespaced type
        else if (field->type()->ns_ident())
        {
            bool afterFirst = false;
            for (const auto& segment : field->type()->ns_ident()->IDENT())
            { // get the namespace separated by "::"
                if (afterFirst)
                    type += "::";
                else afterFirst = true;

                type += segment->getSymbol()->getText();
            }
        }

        // array of namespaced type
        if (field->type()->type() && field->type()->type()->ns_ident())
        {
            bool afterFirst = false;
            for (const auto& segment : field->type()->type()->ns_ident()->IDENT())
            { // get the namespace separated by "::"
                if (afterFirst)
                    type += "::";
                else afterFirst = true;

                type += segment->getSymbol()->getText();
            }

            isArray = true;

            // fixed size array
            if (field->type()->integer_const() && field->type()->integer_const()->INTEGER_CONSTANT())
                arraySize = std::stoul(field->type()->integer_const()->INTEGER_CONSTANT()->getSymbol()->getText());
        }

        return Field::create(Token{name, filename, field->getStart()->getLine(), field->getStart()->getCharPositionInLine()}, type, isArray, arraySize);
    }
}
