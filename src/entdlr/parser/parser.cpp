#include "parser.h"

#include <iostream>
#include <stdexcept>

#ifdef __cpp_lib_filesystem
#include <filesystem>
namespace fs = std::filesystem;
#else
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;
#endif

using std::cout; using std::endl;

namespace Entdlr
{
    Context Parser::parseDir(const std::string& dirname)
    {
        std::vector<Context> contexts;

        if (fs::exists(dirname) && fs::is_directory(dirname))
        {
            fs::recursive_directory_iterator it(dirname);
            fs::recursive_directory_iterator end;

            while (it != end)
            {
                if (fs::is_regular_file(*it) && it->path().extension() == ".fbs")
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

            // get the includes in the file
            auto incs = parseIncludes(schema->include(), filename);
            for (const auto& i : incs)
                context.add(i);

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

            // get interfaces defined in the file
            const auto interfaces = parseInterfaces(schema->interface_decl(), filename);
            for (const auto& i : interfaces)
                ns.add(i);

            context.add(ns);

            return context;
        }

        catch (std::exception& e)
        {
            throw std::runtime_error(std::string("SyntaxError: ") + e.what());
        }
    }

    Context Parser::merge(const std::vector<Context>& contexts)
    {
        Context output;

        std::unordered_map<std::string, Namespace> m;

        for (const auto& context : contexts)
        {
            // add up the namespaces
            for (const auto& n : context.namespaces)
            {
                Namespace ns = m[n.name];

                for (const auto& e : n.enums) ns.add(e);
                for (const auto& u : n.unions) ns.add(u);
                for (const auto& s : n.structs) ns.add(s);
                for (const auto& i : n.interfaces) ns.add(i);

                m[n.name] = ns;
            }
        }

        for (const auto& n : m)
            output.add(n.second);

        return output;
    }

    std::vector<Include> Parser::parseIncludes(const std::vector<FlatBuffersParser::IncludeContext*> incs, const std::string& filename)
    {
        std::vector<Include> output;

        for (const auto& inc : incs)
        {
            std::string name = inc->STRING_CONSTANT()->getSymbol()->getText();
            std::string includeName = name.substr(1, name.size() - 6); // strip quotes and .fbs off

            std::string includeDir = fs::path(filename).parent_path().string();
            if (includeDir == "")
                includeDir = ".";
            std::string includeFilename = includeDir + "/" + name.substr(1, name.size() - 2); // strip quotes off and add the dir

            auto i = Include::create(
                Token::create(
                    includeName,
                    filename,
                    inc->getStart()->getLine(),
                    inc->getStart()->getCharPositionInLine()
                )
            );

            const auto c = parseFile(includeFilename);
            i.namespaces = c.namespaces;

            output.push_back(i);
        }

        return output;
    }

    Namespace Parser::parseNamespace(const std::vector<FlatBuffersParser::Namespace_declContext*>& namespaces, const std::string& filename)
    {
        std::string output = "";

        if (namespaces.size() == 0) // global namespace
            return Namespace::create(Token::create(output, filename, 0, 0));

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

        return Namespace::create(
            Token::create(
                output, filename,
                namespaces[0]->getStart()->getLine(),
                namespaces[0]->getStart()->getCharPositionInLine()
            )
        );
    }

    std::vector<Enum> Parser::parseEnums(const std::vector<FlatBuffersParser::Enum_declContext*>& enums, const std::string& filename)
    {
        std::vector<Enum> output;

        for (const auto& en : enums)
        {
            Enum e;
            std::string comment = "";
            auto t = Token::create(
                en->IDENT()->getSymbol()->getText(),
                filename, en->getStart()->getLine(),
                en->getStart()->getCharPositionInLine()
            );
            std::unordered_map<std::string, Attribute> attributes = parseAttributes(en->metadata(), filename);

            if (en->DOC_COMMENT())
                comment = trimComment(en->DOC_COMMENT()->getSymbol()->getText());
                //cout << "enum -> " << en->DOC_COMMENT()->getSymbol()->getText() << endl;

            if (en->type())
            {
                if (en->type()->BASE_TYPE_NAME())
                    e = Enum::create(t, en->type()->BASE_TYPE_NAME()->getSymbol()->getText(), attributes); // make a new enum with the name
                else throw std::runtime_error(std::to_string(en->type()->getStart()->getLine()) + ", " + std::to_string(en->type()->getStart()->getCharPositionInLine()) + ": enums can only be primitive types");
            }

            else e = Enum::create(t, "int32", attributes);

            // get enum values
            for (const auto& v : en->commasep_enumval_decl()->enumval_decl())
            {
                const auto& valueName = v->ns_ident()->IDENT()[0]->getSymbol()->getText();
                if (v->integer_const() && v->integer_const()->INTEGER_CONSTANT())
                {
                    e.add(
                        Token::create(
                            valueName, filename,
                            v->getStart()->getLine(),
                            v->getStart()->getCharPositionInLine()
                        ),
                        std::stoll(v->integer_const()->INTEGER_CONSTANT()->getSymbol()->getText())
                    );
                }

                else
                {
                    e.add(
                        Token::create(
                            valueName, filename,
                            v->getStart()->getLine(),
                            v->getStart()->getCharPositionInLine()
                        ), {}
                    );
                }
            }

            e.comment = comment;

            output.push_back(e);
        }

        return output;
    }

    std::vector<Union> Parser::parseUnions(const std::vector<FlatBuffersParser::Union_declContext*>& unions, const std::string& filename)
    {
        std::vector<Union> output;

        for (const auto& un : unions)
        {
            auto u = Union::create(
                Token::create(
                    un->IDENT()->getSymbol()->getText(),
                    filename, un->getStart()->getLine(),
                    un->getStart()->getCharPositionInLine()
                )
            ); // make a new union with the name
            u.attributes = parseAttributes(un->metadata(), filename);

            if (un->DOC_COMMENT())
                u.comment = trimComment(un->DOC_COMMENT()->getSymbol()->getText());
                //cout << "union -> " << un->DOC_COMMENT()->getSymbol()->getText() << endl;

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

                u.add(
                    UnionType::create(
                        Token::create(
                            type, filename,
                            t->getStart()->getLine(),
                            t->getStart()->getCharPositionInLine()
                        ),
                        isArray,
                        arraySize
                    )
                );
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
            auto s = Struct::create(
                Token::create(
                    st->IDENT()->getSymbol()->getText(),
                    filename, st->getStart()->getLine(),
                    st->getStart()->getCharPositionInLine()
                )
            ); // make a new struct with the name

            if (st->DOC_COMMENT())
                s.comment = trimComment(st->DOC_COMMENT()->getSymbol()->getText());
                //cout << "struct -> " << st->DOC_COMMENT()->getSymbol()->getText() << endl;

            s.attributes = parseAttributes(st->metadata(), filename);

            // get the fields of the struct
            for (const auto& f : st->field_decl())
            {
                s.add(parseField(f, filename));
            }

            // get the methods of the struct
            for (const auto& m : st->method_decl())
            {
                s.add(parseMethod(m, filename));
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
        std::unordered_map<std::string, Attribute> attributes;
        std::string comment = "";

        if (field->DOC_COMMENT())
            comment = trimComment(field->DOC_COMMENT()->getSymbol()->getText());
            //cout  << "field -> " << field->DOC_COMMENT()->getSymbol()->getText() << endl;

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

        attributes = parseAttributes(field->metadata(), filename);

        return Field::create(
            Token::create(
                name, filename,
                field->getStart()->getLine(),
                field->getStart()->getCharPositionInLine()
            ),
            type, isArray, arraySize, attributes, comment
        );
    }

    Method Parser::parseMethod(FlatBuffersParser::Method_declContext* method, const std::string& filename)
    {
        std::string returnType = "";
        bool returnIsReference = false;
        bool isStatic = false;
        bool isConstant = true;
        std::string comment = "";

        if (method->DOC_COMMENT())
            comment = trimComment(method->DOC_COMMENT()->getSymbol()->getText());
            //cout  << "method -> " << method->DOC_COMMENT()->getSymbol()->getText() << endl;

        if (method->static_decl())
            isStatic = true;

        if (method->mutable_decl())
            isConstant = false;

        if (method->method_return_type() && method->method_return_type()->method_type())
        {
            const auto& rt = method->method_return_type()->method_type();

            if (rt->reference_decl())
                returnIsReference = true;

            if (rt->BASE_TYPE_NAME())
                returnType = rt->BASE_TYPE_NAME()->getSymbol()->getText();

            else if (rt->ns_ident())
            {
                bool afterFirst = false;
                for (const auto& segment : rt->ns_ident()->IDENT())
                { // get the namespace separated by "::"
                    if (afterFirst)
                        returnType += "::";
                    else afterFirst = true;

                    returnType += segment->getSymbol()->getText();
                }
            }
        }

        else returnType = "void";

        auto output = Method::create(
            Token::create(
                method->IDENT()->getSymbol()->getText(),
                filename, method->getStart()->getLine(),
                method->getStart()->getCharPositionInLine()
            ),
            returnType, returnIsReference, isStatic, isConstant, comment
        );

        for (const auto& p : method->method_parameters()->method_parameter())
        {
            std::string t = "";
            bool constant = true;
            bool reference = false;

            if (p->method_type()->BASE_TYPE_NAME())
            {
                t = p->method_type()->BASE_TYPE_NAME()->getSymbol()->getText();
            }

            else if (p->method_type()->ns_ident())
            {
                bool afterFirst = false;
                for (const auto& segment : p->method_type()->ns_ident()->IDENT())
                { // get the namespace separated by "::"
                    if (afterFirst)
                        t += "::";
                    else afterFirst = true;

                    t += segment->getSymbol()->getText();
                }
            }

            if (p->mutable_decl())
                constant = false;

            if (p->reference_decl())
                reference = true;

            output.add(
                Parameter::create(
                    Token::create(
                        p->IDENT()->getSymbol()->getText(),
                        filename, p->getStart()->getLine(),
                        p->getStart()->getCharPositionInLine()
                    ),
                    t, constant, reference
                )
            );
        }

        return output;
    }

    std::unordered_map<std::string, Attribute> Parser::parseAttributes(FlatBuffersParser::MetadataContext* metadata, const std::string& filename)
    {
        std::unordered_map<std::string, Attribute> attributes;

        // check for metadata
        if (metadata && metadata->commasep_ident_with_opt_single_value() && metadata->commasep_ident_with_opt_single_value())
        {
            for (const auto& attribute : metadata->commasep_ident_with_opt_single_value()->ident_with_opt_single_value())
            {
                if (attribute->single_value() && attribute->single_value()->STRING_CONSTANT())
                {
                    auto a = Attribute::create(
                        Token::create(
                            attribute->IDENT()->getSymbol()->getText(),
                            filename, attribute->getStart()->getLine(),
                            attribute->getStart()->getCharPositionInLine()
                        ),
                        attribute->single_value()->STRING_CONSTANT()->getSymbol()->getText()
                    );
                    attributes[a.name] = a;
                }

                else if (attribute->single_value() && attribute->single_value()->scalar())
                {
                    const auto& scalar = attribute->single_value()->scalar();
                    if (scalar->INTEGER_CONSTANT())
                    {
                        auto a = Attribute::create(
                            Token::create(
                                attribute->IDENT()->getSymbol()->getText(),
                                filename, attribute->getStart()->getLine(),
                                attribute->getStart()->getCharPositionInLine()
                            ),
                            std::stod(scalar->INTEGER_CONSTANT()->getSymbol()->getText())
                        );
                        attributes[a.name] = a;
                    }

                    else if (scalar->HEX_INTEGER_CONSTANT())
                    {
                        auto a = Attribute::create(
                            Token::create(
                                attribute->IDENT()->getSymbol()->getText(),
                                filename, attribute->getStart()->getLine(),
                                attribute->getStart()->getCharPositionInLine()
                            ),
                            std::stod(scalar->HEX_INTEGER_CONSTANT()->getSymbol()->getText())
                        );
                        attributes[a.name] = a;
                    }

                    else if (scalar->FLOAT_CONSTANT())
                    {
                        auto a = Attribute::create(
                            Token::create(
                                attribute->IDENT()->getSymbol()->getText(),
                                filename, attribute->getStart()->getLine(),
                                attribute->getStart()->getCharPositionInLine()
                            ),
                            std::stod(scalar->FLOAT_CONSTANT()->getSymbol()->getText())
                        );
                        attributes[a.name] = a;
                    }

                    else if (scalar->IDENT())
                    {
                        auto a = Attribute::create(
                            Token::create(
                                attribute->IDENT()->getSymbol()->getText(),
                                filename, attribute->getStart()->getLine(),
                                attribute->getStart()->getCharPositionInLine()
                            ),
                            std::stod(scalar->IDENT()->getSymbol()->getText())
                        );
                        attributes[a.name] = a;
                    }
                }

                else
                {
                    auto a = Attribute::create(
                        Token::create(
                            attribute->IDENT()->getSymbol()->getText(),
                            filename, attribute->getStart()->getLine(),
                            attribute->getStart()->getCharPositionInLine()
                        )
                    );
                    attributes[a.name] = a;
                }
            }
        }

        return attributes;
    }

    std::vector<Interface> Parser::parseInterfaces(const std::vector<FlatBuffersParser::Interface_declContext*>& interfaces, const std::string& filename)
    {
        std::vector<Interface> output;

        for (const auto& interface : interfaces)
        {
            auto f = Interface::create(
                Token::create(
                    interface->IDENT()->getSymbol()->getText(),
                    filename, interface->getStart()->getLine(),
                    interface->getStart()->getCharPositionInLine()
                )
            );

            if (interface->DOC_COMMENT())
                f.comment = trimComment(interface->DOC_COMMENT()->getSymbol()->getText());
                //cout << "interface -> " << interface->DOC_COMMENT()->getSymbol()->getText() << endl;

            // get the methods of the interface
            for (const auto& m : interface->method_decl())
            {
                f.add(parseMethod(m, filename));
            }

            output.push_back(f);
        }

        return output;
    }

    std::string Parser::trimComment(const std::string& comment)
    {
        std::string output = comment.substr(3, comment.size()); // chop off the '///'

        while (output.size() && (output[0] == ' ' || output[0] == '\t'))
            output = output.substr(1, output.size()); // chop off leading whitespace

        return output;
    }
}
