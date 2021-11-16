#include "parser.h"

#include "JavadocLexer.h"
#include "JavadocParser.h"

#include <iostream>
#include <limits>
#include <stdexcept>

#ifdef __cpp_lib_filesystem
#include <filesystem>
namespace fs = std::filesystem;
#else
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;
#endif

using std::cout;
using std::endl;

namespace Entdlr
{
Context Parser::parseDir(const std::string& dirname, const std::string& include_dir)
{
    std::vector<Context> contexts;

    if (fs::exists(dirname) && fs::is_directory(dirname))
    {
        fs::recursive_directory_iterator it(dirname);
        fs::recursive_directory_iterator end;

        while (it != end)
        {
            if (fs::is_regular_file(*it) && it->path().extension() == ".fbs")
            {
                contexts.push_back(parseFile(it->path().string(), include_dir));
            }

            it++;
        }
    }

    else
    {
        throw std::runtime_error("Unable to parse directory \"" + dirname + "\"");
    }

    return merge(contexts);
}

Context Parser::parseFile(const std::string& filename, const std::string& include_dir)
{
    try
    {
        // open and read the file
        std::ifstream file(filename);
        file.exceptions(std::ifstream::failbit);
        std::stringstream buffer;
        buffer << file.rdbuf();

        return parse(buffer.str(), filename, include_dir);
    }

    catch (std::ios_base::failure& e)
    {
        throw std::runtime_error(std::string("Unable to open file ") + "\"" + filename + "\"");
    }

    catch (std::exception& e)
    {
        throw std::runtime_error("\"" + filename + "\"" + std::string(" -> ") + e.what());
    }
}

Context Parser::parse(const std::string& content, const std::string& filename, const std::string& include_dir)
{
    try
    {
        // parse with antlr
        antlr4::ANTLRInputStream input(content);
        FlatBuffersLexer lexer(&input);
        antlr4::CommonTokenStream tokens(&lexer);
        FlatBuffersParser parser(&tokens);

        // get the output
        const auto& schema = parser.schema();

        Context context;

        // get the includes in the file
        auto incs = parseIncludes(schema->include(), filename, include_dir);
        for (const auto& i : incs)
        {
            context.add(i);
        }

        // get the namespace in the file
        auto ns = parseNamespace(schema->namespace_decl(), filename);

        // get enums defined in the file
        const auto enums = parseEnums(schema->enum_decl(), filename);
        for (const auto& e : enums)
        {
            ns.add(e);
        }

        // get unions defined in the file
        const auto unions = parseUnions(schema->union_decl(), filename);
        for (const auto& u : unions)
        {
            ns.add(u);
        }

        // get structs defined in the file
        const auto structs = parseStructs(schema->type_decl(), filename);
        for (const auto& s : structs)
        {
            ns.add(s);
        }

        // get interfaces defined in the file
        const auto interfaces = parseInterfaces(schema->interface_decl(), filename);
        for (const auto& i : interfaces)
        {
            ns.add(i);
        }

        // get services defined in the file
        const auto services = parseServices(schema->service_decl(), filename);
        for (const auto& s : services)
        {
            ns.add(s);
        }

        context.add(ns);

        return context;
    }

    catch (std::exception& e)
    {
        throw std::runtime_error(std::string("Syntax Error: ") + e.what());
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
            ns.token = TokenType::Namespace;
            ns.name = n.name;

            for (const auto& e : n.enums)
            {
                ns.add(e);
            }
            for (const auto& u : n.unions)
            {
                ns.add(u);
            }
            for (const auto& s : n.structs)
            {
                ns.add(s);
            }
            for (const auto& i : n.interfaces)
            {
                ns.add(i);
            }
            for (const auto& s : n.services)
            {
                ns.add(s);
            }

            m[n.name] = ns;
        }
    }

    for (const auto& n : m)
    {
        output.add(n.second);
    }

    return output;
}

std::vector<Include> Parser::parseIncludes(const std::vector<FlatBuffersParser::IncludeContext*>& incs,
                                           const std::string& filename,
                                           const std::string& include_dir)
{
    std::vector<Include> output;

    for (const auto& inc : incs)
    {
        std::string name = inc->STRING_CONSTANT()->getSymbol()->getText();
        std::string includeName = name.substr(1, name.size() - 6); // strip quotes and .fbs off

        auto searchDir = include_dir;
        if (searchDir.empty())
        {
            std::string fileParentDir = fs::path(filename).parent_path().string();
            if (!fileParentDir.empty())
            {
                searchDir = fileParentDir;
            }

            else
            {
                searchDir = ".";
            }
        }

        std::string includeFilename =
            searchDir + "/" + name.substr(1, name.size() - 2); // strip quotes off and add the dir

        auto i = Include::create(
            Token::create(includeName, filename, inc->getStart()->getLine(), inc->getStart()->getCharPositionInLine()));

        const auto c = parseFile(includeFilename, include_dir);
        i.namespaces = c.namespaces;

        output.push_back(i);
    }

    return output;
}

Namespace Parser::parseNamespace(const std::vector<FlatBuffersParser::Namespace_declContext*>& namespaces,
                                 const std::string& filename)
{
    std::string output;

    if (namespaces.empty())
    { // global namespace
        return Namespace::create(Token::create(output, filename, 0, 0));
    }

    if (namespaces.size() == 1)
    {
        const auto& ns = namespaces[0];
        bool afterFirst = false;
        for (const auto& segment : ns->IDENT())
        { // make the namespace into a string separated by "."
            if (afterFirst)
            {
                output += ".";
            }
            else
            {
                afterFirst = true;
            }

            output += segment->getSymbol()->getText();
        }
    }

    else if (namespaces.size() > 1)
    {
        throw std::runtime_error(std::to_string(namespaces[1]->getStart()->getLine()) + ", " +
                                 std::to_string(namespaces[1]->getStart()->getCharPositionInLine()) +
                                 ": Multiple namespaces in file");
    }

    return Namespace::create(Token::create(
        output, filename, namespaces[0]->getStart()->getLine(), namespaces[0]->getStart()->getCharPositionInLine()));
}

std::vector<Enum> Parser::parseEnums(const std::vector<FlatBuffersParser::Enum_declContext*>& enums,
                                     const std::string& filename)
{
    std::vector<Enum> output;

    for (const auto& en : enums)
    {
        Enum e;
        std::string comment;
        auto t = Token::create(en->IDENT()->getSymbol()->getText(),
                               filename,
                               en->getStart()->getLine(),
                               en->getStart()->getCharPositionInLine());
        std::unordered_map<std::string, Attribute> attributes = parseAttributes(en->metadata(), filename);

        if (en->BLOCK_COMMENT() != nullptr)
        {
            if (const auto doc = parseDocumentation(en->BLOCK_COMMENT()->getSymbol()->getText()))
            {
                e.documentation = *doc;
            }
        }

        if (en->DOC_COMMENT() != nullptr)
        {
            comment = trimComment(en->DOC_COMMENT()->getSymbol()->getText());
        }
        // cout << "enum -> " << en->DOC_COMMENT()->getSymbol()->getText() << endl;

        bool unspecifiedType = false;

        if (en->type() != nullptr)
        {
            if (en->type()->BASE_TYPE_NAME() != nullptr)
            {
                e = Enum::create(t,
                                 en->type()->BASE_TYPE_NAME()->getSymbol()->getText(),
                                 attributes); // make a new enum with the name
            }
            else
            {
                throw std::runtime_error(std::to_string(en->type()->getStart()->getLine()) + ", " +
                                         std::to_string(en->type()->getStart()->getCharPositionInLine()) +
                                         ": enums can only be primitive types");
            }
        }

        else
        {
            unspecifiedType = true;
            e = Enum::create(t, "int32", attributes);
        }

        // get enum values
        for (const auto& v : en->commasep_enumval_decl()->enumval_decl())
        {
            const auto& valueName = v->ns_ident()->IDENT()[0]->getSymbol()->getText();
            if (v->integer_const() != nullptr)
            {
                e.add(Token::create(
                          valueName, filename, v->getStart()->getLine(), v->getStart()->getCharPositionInLine()),
                      v->integer_const()->INTEGER_CONSTANT() != nullptr
                          ? std::stoll(v->integer_const()->INTEGER_CONSTANT()->getSymbol()->getText())
                          : std::stoll(v->integer_const()->HEX_INTEGER_CONSTANT()->getSymbol()->getText(), 0, 16));
            }

            else
            {
                e.add(Token::create(
                          valueName, filename, v->getStart()->getLine(), v->getStart()->getCharPositionInLine()),
                      {});
            }
        }

        if (unspecifiedType)
        {
            determineEnumType(e);
        }

        e.comment = comment;

        output.push_back(e);
    }

    return output;
}

std::vector<Union> Parser::parseUnions(const std::vector<FlatBuffersParser::Union_declContext*>& unions,
                                       const std::string& filename)
{
    std::vector<Union> output;

    for (const auto& un : unions)
    {
        auto u =
            Union::create(Token::create(un->IDENT()->getSymbol()->getText(),
                                        filename,
                                        un->getStart()->getLine(),
                                        un->getStart()->getCharPositionInLine())); // make a new union with the name
        u.attributes = parseAttributes(un->metadata(), filename);

        if (un->BLOCK_COMMENT() != nullptr)
        {
            if (const auto doc = parseDocumentation(un->BLOCK_COMMENT()->getSymbol()->getText()))
            {
                u.documentation = *doc;
            }
        }

        if (un->DOC_COMMENT() != nullptr)
        {
            u.comment = trimComment(un->DOC_COMMENT()->getSymbol()->getText());
        }
        // cout << "union -> " << un->DOC_COMMENT()->getSymbol()->getText() << endl;

        // get union types
        for (const auto& t : un->commasep_uniontype_decl()->uniontype_decl())
        {
            std::string type;
            bool isArray = false;
            uint32_t arraySize = 0;

            // plain type
            if (t->type()->BASE_TYPE_NAME() != nullptr)
            {
                type = t->type()->BASE_TYPE_NAME()->getSymbol()->getText();
            }

            // array of plain type
            else if ((t->type()->type() != nullptr) && (t->type()->type()->BASE_TYPE_NAME() != nullptr))
            {
                type = t->type()->type()->BASE_TYPE_NAME()->getSymbol()->getText();

                isArray = true;

                // fixed sized array
                if ((t->type()->integer_const() != nullptr) &&
                    (t->type()->integer_const()->INTEGER_CONSTANT() != nullptr))
                {
                    arraySize = std::stoul(t->type()->integer_const()->INTEGER_CONSTANT()->getSymbol()->getText());
                }
            }

            // namespaced type
            else if (t->type()->ns_ident() != nullptr)
            {
                bool afterFirst = false;
                for (const auto& segment : t->type()->ns_ident()->IDENT())
                { // get the namespace separated by "."
                    if (afterFirst)
                    {
                        type += ".";
                    }
                    else
                    {
                        afterFirst = true;
                    }

                    type += segment->getSymbol()->getText();
                }
            }

            // array of namespaced type
            if ((t->type()->type() != nullptr) && (t->type()->type()->ns_ident() != nullptr))
            {
                bool afterFirst = false;
                for (const auto& segment : t->type()->type()->ns_ident()->IDENT())
                { // get the namespace separated by "."
                    if (afterFirst)
                    {
                        type += ".";
                    }
                    else
                    {
                        afterFirst = true;
                    }

                    type += segment->getSymbol()->getText();
                }

                isArray = true;

                // fixed size array
                if ((t->type()->integer_const() != nullptr) &&
                    (t->type()->integer_const()->INTEGER_CONSTANT() != nullptr))
                {
                    arraySize = std::stoul(t->type()->integer_const()->INTEGER_CONSTANT()->getSymbol()->getText());
                }
            }

            u.add(UnionType::create(
                Token::create(type, filename, t->getStart()->getLine(), t->getStart()->getCharPositionInLine()),
                isArray,
                arraySize));
        }

        output.push_back(u);
    }

    return output;
}

std::vector<Struct> Parser::parseStructs(const std::vector<FlatBuffersParser::Type_declContext*>& structs,
                                         const std::string& filename)
{
    std::vector<Struct> output;

    for (const auto& st : structs)
    {
        auto s =
            Struct::create(Token::create(st->IDENT()->getSymbol()->getText(),
                                         filename,
                                         st->getStart()->getLine(),
                                         st->getStart()->getCharPositionInLine())); // make a new struct with the name

        if (st->BLOCK_COMMENT() != nullptr)
        {
            if (const auto doc = parseDocumentation(st->BLOCK_COMMENT()->getSymbol()->getText()))
            {
                s.documentation = *doc;
            }
        }

        if (st->DOC_COMMENT() != nullptr)
        {
            s.comment = trimComment(st->DOC_COMMENT()->getSymbol()->getText());
        }
        // cout << "struct -> " << st->DOC_COMMENT()->getSymbol()->getText() << endl;

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
    std::string type;
    bool isArray = false;
    uint32_t arraySize = 0;
    std::unordered_map<std::string, Attribute> attributes;
    std::string comment;
    Documentation documentation = {};

    if (field->BLOCK_COMMENT() != nullptr)
    {
        if (const auto doc = parseDocumentation(field->BLOCK_COMMENT()->getSymbol()->getText()))
        {
            documentation = *doc;
        }
    }

    if (field->DOC_COMMENT() != nullptr)
    {
        comment = trimComment(field->DOC_COMMENT()->getSymbol()->getText());
    }
    // cout  << "field -> " << field->DOC_COMMENT()->getSymbol()->getText() << endl;

    // plain type
    if (field->type()->BASE_TYPE_NAME() != nullptr)
    {
        type = field->type()->BASE_TYPE_NAME()->getSymbol()->getText();
    }

    // array of plain type
    else if ((field->type()->type() != nullptr) && (field->type()->type()->BASE_TYPE_NAME() != nullptr))
    {
        type = field->type()->type()->BASE_TYPE_NAME()->getSymbol()->getText();

        isArray = true;

        // fixed sized array
        if ((field->type()->integer_const() != nullptr) &&
            (field->type()->integer_const()->INTEGER_CONSTANT() != nullptr))
        {
            arraySize = std::stoul(field->type()->integer_const()->INTEGER_CONSTANT()->getSymbol()->getText());
        }
    }

    // namespaced type
    else if (field->type()->ns_ident() != nullptr)
    {
        bool afterFirst = false;
        for (const auto& segment : field->type()->ns_ident()->IDENT())
        { // get the namespace separated by "."
            if (afterFirst)
            {
                type += ".";
            }
            else
            {
                afterFirst = true;
            }

            type += segment->getSymbol()->getText();
        }
    }

    // array of namespaced type
    if ((field->type()->type() != nullptr) && (field->type()->type()->ns_ident() != nullptr))
    {
        bool afterFirst = false;
        for (const auto& segment : field->type()->type()->ns_ident()->IDENT())
        { // get the namespace separated by "."
            if (afterFirst)
            {
                type += ".";
            }
            else
            {
                afterFirst = true;
            }

            type += segment->getSymbol()->getText();
        }

        isArray = true;

        // fixed size array
        if ((field->type()->integer_const() != nullptr) &&
            (field->type()->integer_const()->INTEGER_CONSTANT() != nullptr))
        {
            arraySize = std::stoul(field->type()->integer_const()->INTEGER_CONSTANT()->getSymbol()->getText());
        }
    }

    attributes = parseAttributes(field->metadata(), filename);

    return Field::create(
        Token::create(name, filename, field->getStart()->getLine(), field->getStart()->getCharPositionInLine()),
        type,
        isArray,
        arraySize,
        attributes,
        comment,
        documentation);
}

Method Parser::parseMethod(FlatBuffersParser::Method_declContext* method, const std::string& filename)
{
    Parameter returnValue;
    returnValue.token = TokenType::Parameter;
    returnValue.name = "return";
    returnValue.in = false;
    returnValue.out = false;
    returnValue.isArray = false;
    returnValue.arraySize = 0;

    bool isStatic = false;
    bool isConstant = true;
    std::string comment;
    Documentation documentation;

    if (method->BLOCK_COMMENT() != nullptr)
    {
        if (const auto doc = parseDocumentation(method->BLOCK_COMMENT()->getSymbol()->getText()))
        {
            documentation = *doc;
        }
    }

    if (method->DOC_COMMENT() != nullptr)
    {
        comment = trimComment(method->DOC_COMMENT()->getSymbol()->getText());
    }
    // cout  << "method -> " << method->DOC_COMMENT()->getSymbol()->getText() << endl;

    if (method->STATIC() != nullptr)
    {
        isStatic = true;
    }

    if (method->MUTABLE() != nullptr)
    {
        isConstant = false;
    }

    const auto attributes = parseAttributes(method->metadata(), filename);

    // non-void method
    if (method->type() != nullptr)
    {
        auto* rt = method->type();

        const auto returnToken = Token::create(
            "return", filename, rt->getStart()->getLine(), rt->getStart()->getCharPositionInLine());
        returnValue.name = returnToken.name;
        returnValue.filename = returnToken.filename;
        returnValue.line = returnToken.line;
        returnValue.column = returnToken.column;

        // plain type
        if (rt->BASE_TYPE_NAME() != nullptr)
        {
            returnValue.type = rt->BASE_TYPE_NAME()->getSymbol()->getText();
        }

        // array of plain type
        else if ((rt->type() != nullptr) && (rt->type()->BASE_TYPE_NAME() != nullptr))
        {
            returnValue.type = rt->type()->BASE_TYPE_NAME()->getSymbol()->getText();

            returnValue.isArray = true;

            // fixed size array
            if ((rt->integer_const() != nullptr) &&
                (rt->integer_const()->INTEGER_CONSTANT() != nullptr))
            {
                returnValue.arraySize =
                    std::stoul(rt->integer_const()->INTEGER_CONSTANT()->getSymbol()->getText());
            }
        }

        // namespaced type
        else if (rt->ns_ident() != nullptr)
        {
            bool afterFirst = false;
            for (const auto& segment : rt->ns_ident()->IDENT())
            { // get the namespace separated by "."
                if (afterFirst)
                {
                    returnValue.type += ".";
                }
                else
                {
                    afterFirst = true;
                }

                returnValue.type += segment->getSymbol()->getText();
            }
        }

        // array of namespaced type
        if ((rt->type() != nullptr) && (rt->type()->ns_ident() != nullptr))
        {
            bool afterFirst = false;
            for (const auto& segment : rt->type()->ns_ident()->IDENT())
            { // get the namespace separated by "."
                if (afterFirst)
                {
                    returnValue.type += ".";
                }
                else
                {
                    afterFirst = true;
                }

                returnValue.type += segment->getSymbol()->getText();
            }

            returnValue.isArray = true;

            // fixed size array
            if ((rt->integer_const() != nullptr) &&
                (rt->integer_const()->INTEGER_CONSTANT() != nullptr))
            {
                returnValue.arraySize =
                    std::stoul(rt->integer_const()->INTEGER_CONSTANT()->getSymbol()->getText());
            }
        }
    }

    else
    {
        returnValue.type = "void";
    }

    auto output = Method::create(Token::create(method->IDENT()->getSymbol()->getText(),
                                               filename,
                                               method->getStart()->getLine(),
                                               method->getStart()->getCharPositionInLine()),
                                 returnValue,
                                 isStatic,
                                 isConstant,
                                 attributes,
                                 comment,
                                 documentation);

    for (const auto& p : method->method_parameters()->method_parameter())
    {
        std::string type;
        bool isArray = false;
        bool in = false;
        bool out = false;
        uint32_t arraySize = 0;

        auto* mt = p->method_type();

        // plain type
        if (mt->type()->BASE_TYPE_NAME() != nullptr)
        {
            type = mt->type()->BASE_TYPE_NAME()->getSymbol()->getText();
        }

        // array of plain type
        else if ((mt->type()->type() != nullptr) && (mt->type()->type()->BASE_TYPE_NAME() != nullptr))
        {
            type = mt->type()->type()->BASE_TYPE_NAME()->getSymbol()->getText();

            isArray = true;

            // fixed size array
            if ((mt->type()->integer_const() != nullptr) &&
                (mt->type()->integer_const()->INTEGER_CONSTANT() != nullptr))
            {
                arraySize = std::stoul(mt->type()->integer_const()->INTEGER_CONSTANT()->getSymbol()->getText());
            }
        }

        // namespaced type
        else if (mt->type()->ns_ident() != nullptr)
        {
            bool afterFirst = false;
            for (const auto& segment : mt->type()->ns_ident()->IDENT())
            { // get the namespace separated by "."
                if (afterFirst)
                {
                    type += ".";
                }
                else
                {
                    afterFirst = true;
                }

                type += segment->getSymbol()->getText();
            }
        }

        // array of namespaced type
        if ((mt->type()->type() != nullptr) && (mt->type()->type()->ns_ident() != nullptr))
        {
            bool afterFirst = false;
            for (const auto& segment : mt->type()->type()->ns_ident()->IDENT())
            { // get the namespace separated by "."
                if (afterFirst)
                {
                    type += ".";
                }
                else
                {
                    afterFirst = true;
                }

                type += segment->getSymbol()->getText();
            }

            isArray = true;

            // fixed size array
            if ((mt->type()->integer_const() != nullptr) &&
                (mt->type()->integer_const()->INTEGER_CONSTANT() != nullptr))
            {
                arraySize = std::stoul(mt->type()->integer_const()->INTEGER_CONSTANT()->getSymbol()->getText());
            }
        }

        if (mt->IN() != nullptr)
        {
            in = true;
        }

        if (mt->OUT() != nullptr)
        {
            out = true;
        }

        if (in == out)
        {
            throw std::runtime_error(std::to_string(mt->type()->getStart()->getLine()) + ", " +
                                     std::to_string(mt->type()->getStart()->getCharPositionInLine()) +
                                     ": Method parameters must be either 'in' or 'out'");
        }

        output.add(Parameter::create(Token::create(p->IDENT()->getSymbol()->getText(),
                                                   filename,
                                                   p->getStart()->getLine(),
                                                   p->getStart()->getCharPositionInLine()),
                                     type,
                                     in,
                                     out,
                                     isArray,
                                     arraySize));
    }

    return output;
}

std::unordered_map<std::string, Attribute> Parser::parseAttributes(FlatBuffersParser::MetadataContext* metadata,
                                                                   const std::string& filename)
{
    std::unordered_map<std::string, Attribute> attributes;

    // check for metadata
    if ((metadata != nullptr) && (metadata->commasep_ident_with_opt_single_value() != nullptr) &&
        (metadata->commasep_ident_with_opt_single_value() != nullptr))
    {
        for (const auto& attribute : metadata->commasep_ident_with_opt_single_value()->ident_with_opt_single_value())
        {
            if ((attribute->single_value() != nullptr) && (attribute->single_value()->STRING_CONSTANT() != nullptr))
            {
                auto attributeString = attribute->single_value()->STRING_CONSTANT()->getSymbol()->getText();
                attributeString = attributeString.substr(1, attributeString.size() - 2); // strip the surrounding quotes
                auto a = Attribute::create(Token::create(attribute->IDENT()->getSymbol()->getText(),
                                                         filename,
                                                         attribute->getStart()->getLine(),
                                                         attribute->getStart()->getCharPositionInLine()),
                                           attributeString);
                attributes[a.name] = a;
            }

            else if ((attribute->single_value() != nullptr) && (attribute->single_value()->scalar() != nullptr))
            {
                const auto& scalar = attribute->single_value()->scalar();
                if (scalar->INTEGER_CONSTANT() != nullptr)
                {
                    auto a = Attribute::create(Token::create(attribute->IDENT()->getSymbol()->getText(),
                                                             filename,
                                                             attribute->getStart()->getLine(),
                                                             attribute->getStart()->getCharPositionInLine()),
                                               (int64_t)std::stoll(scalar->INTEGER_CONSTANT()->getSymbol()->getText()));
                    attributes[a.name] = a;
                }

                else if (scalar->HEX_INTEGER_CONSTANT() != nullptr)
                {
                    auto a =
                        Attribute::create(Token::create(attribute->IDENT()->getSymbol()->getText(),
                                                        filename,
                                                        attribute->getStart()->getLine(),
                                                        attribute->getStart()->getCharPositionInLine()),
                                          (int64_t)std::stoll(scalar->HEX_INTEGER_CONSTANT()->getSymbol()->getText()));
                    attributes[a.name] = a;
                }

                else if (scalar->FLOAT_CONSTANT() != nullptr)
                {
                    auto a = Attribute::create(Token::create(attribute->IDENT()->getSymbol()->getText(),
                                                             filename,
                                                             attribute->getStart()->getLine(),
                                                             attribute->getStart()->getCharPositionInLine()),
                                               std::stod(scalar->FLOAT_CONSTANT()->getSymbol()->getText()));
                    attributes[a.name] = a;
                }

                else if (scalar->IDENT() != nullptr)
                {
                    auto a = Attribute::create(Token::create(attribute->IDENT()->getSymbol()->getText(),
                                                             filename,
                                                             attribute->getStart()->getLine(),
                                                             attribute->getStart()->getCharPositionInLine()),
                                               std::stod(scalar->IDENT()->getSymbol()->getText()));
                    attributes[a.name] = a;
                }
            }

            else
            {
                auto a = Attribute::create(Token::create(attribute->IDENT()->getSymbol()->getText(),
                                                         filename,
                                                         attribute->getStart()->getLine(),
                                                         attribute->getStart()->getCharPositionInLine()));
                attributes[a.name] = a;
            }
        }
    }

    return attributes;
}

std::vector<Interface> Parser::parseInterfaces(const std::vector<FlatBuffersParser::Interface_declContext*>& interfaces,
                                               const std::string& filename)
{
    std::vector<Interface> output;

    for (const auto& interface : interfaces)
    {
        auto f = Interface::create(Token::create(interface->IDENT()->getSymbol()->getText(),
                                                 filename,
                                                 interface->getStart()->getLine(),
                                                 interface->getStart()->getCharPositionInLine()),
                                   parseAttributes(interface->metadata(), filename));

        if (interface->BLOCK_COMMENT() != nullptr)
        {
            if (const auto doc = parseDocumentation(interface->BLOCK_COMMENT()->getSymbol()->getText()))
            {
                f.documentation = *doc;
            }
        }

        if (interface->DOC_COMMENT() != nullptr)
        {
            f.comment = trimComment(interface->DOC_COMMENT()->getSymbol()->getText());
        }
        // cout << "interface -> " << interface->DOC_COMMENT()->getSymbol()->getText() << endl;

        // get the methods of the interface
        for (const auto& m : interface->method_decl())
        {
            f.add(parseMethod(m, filename));
        }

        output.push_back(f);
    }

    return output;
}

ServiceComponent Parser::parseServiceComponent(FlatBuffersParser::Service_component_declContext* component,
                                               const std::string& filename)
{
    const auto type = component->IDENT()->getSymbol()->getText();
    std::string name;
    std::unordered_map<std::string, Attribute> attributes;
    std::string comment;
    Documentation documentation = {};

    // plain type
    if (component->type()->BASE_TYPE_NAME() != nullptr)
    {
        name = component->type()->BASE_TYPE_NAME()->getSymbol()->getText();
    }

    // namespaced type
    else if (component->type()->ns_ident() != nullptr)
    {
        bool afterFirst = false;
        for (const auto& segment : component->type()->ns_ident()->IDENT())
        { // get the namespace separated by "."
            if (afterFirst)
            {
                name += ".";
            }
            else
            {
                afterFirst = true;
            }

            name += segment->getSymbol()->getText();
        }
    }

    else
    {
        throw std::runtime_error(std::to_string(component->type()->getStart()->getLine()) + ", " +
                                 std::to_string(component->type()->getStart()->getCharPositionInLine()) +
                                 ": service components may not be arrays");
    }

    if (component->BLOCK_COMMENT() != nullptr)
    {
        if (const auto doc = parseDocumentation(component->BLOCK_COMMENT()->getSymbol()->getText()))
        {
            documentation = *doc;
        }
    }

    if (component->DOC_COMMENT() != nullptr)
    {
        comment = trimComment(component->DOC_COMMENT()->getSymbol()->getText());
    }

    attributes = parseAttributes(component->metadata(), filename);

    return ServiceComponent::create(
        Token::create(name, filename, component->getStart()->getLine(), component->getStart()->getCharPositionInLine()),
        type,
        attributes,
        comment,
        documentation);
}

std::vector<Service> Parser::parseServices(const std::vector<FlatBuffersParser::Service_declContext*>& services,
                                           const std::string& filename)
{
    std::vector<Service> output;

    for (const auto& service : services)
    {
        auto s = Service::create(Token::create(service->IDENT()->getSymbol()->getText(),
                                               filename,
                                               service->getStart()->getLine(),
                                               service->getStart()->getCharPositionInLine()));

        if (service->BLOCK_COMMENT() != nullptr)
        {
            if (const auto doc = parseDocumentation(service->BLOCK_COMMENT()->getSymbol()->getText()))
            {
                s.documentation = *doc;
            }
        }

        if (service->DOC_COMMENT() != nullptr)
        {
            s.comment = trimComment(service->DOC_COMMENT()->getSymbol()->getText());
        }

        s.attributes = parseAttributes(service->metadata(), filename);

        // get the components of the service
        for (const auto& c : service->service_component_decl())
        {
            s.add(parseServiceComponent(c, filename));
        }

        output.push_back(s);
    }

    return output;
}

nonstd::optional<Documentation> Parser::parseDocumentation(const std::string& comment)
{
    // check that it's a documentation block comment, and not just `/*`
    if (comment.rfind("/**", 0) == 0)
    {
        try
        {
            // parse with antlr
            antlr4::ANTLRInputStream input(comment);
            JavadocLexer lexer(&input);
            antlr4::CommonTokenStream tokens(&lexer);
            JavadocParser parser(&tokens);

            // get the output
            const auto& documentation = parser.documentation();

            if (documentation->documentationContent() != nullptr)
            {
                Documentation output;
                output.token = TokenType::Documentation;

                const auto& content = documentation->documentationContent();

                // check if there is a description
                if (content->description() != nullptr)
                {
                    std::string description;
                    const auto& lines = content->description()->descriptionLine();
                    for (const auto& line : lines)
                    {
                        description += line->getText();
                    }

                    output.description = description;
                }

                // check if there are tags
                if (content->tagSection() != nullptr)
                {
                    const auto& tags = content->tagSection()->blockTag();
                    for (const auto& tag : tags)
                    {
                        Tag t;
                        t.token = TokenType::Tag;
                        t.name = tag->blockTagName()->NAME()->getSymbol()->getText();

                        std::string tagContent;
                        for (const auto& c : tag->blockTagContent())
                        {
                            if (c->blockTagText() != nullptr)
                            {
                                for (const auto& e : c->blockTagText()->blockTagTextElement())
                                {
                                    if (e->TEXT_CONTENT() != nullptr)
                                    {
                                        tagContent += e->TEXT_CONTENT()->getSymbol()->getText();
                                    }
                                    if (e->NAME() != nullptr)
                                    {
                                        tagContent += e->NAME()->getSymbol()->getText();
                                    }
                                    if (e->SPACE() != nullptr)
                                    {
                                        tagContent += " ";
                                    }
                                }
                            }
                        }

                        t.content = tagContent;

                        output.add(t);
                    }
                }

                return output;
            }
        }
        catch (std::exception& e)
        {
            throw std::runtime_error(std::string("Documentation Syntax Error: ") + e.what());
        }
    }

    return {};
}

std::string Parser::trimComment(const std::string& comment)
{
    std::string output = comment.substr(3, comment.size()); // chop off the '///'

    while ((!output.empty()) && (output[0] == ' ' || output[0] == '\t'))
    {
        output = output.substr(1, output.size()); // chop off leading whitespace
    }

    return output;
}

void Parser::determineEnumType(Enum& e)
{
    int64_t min = 0;
    uint64_t max = 0;

    // determine the highest and lowest values
    for (const auto& v : e.values)
    {
        const auto& value = v.value;
        if (value < min)
        {
            min = value;
        }
        else if (value > max)
        {
            max = value;
        }
    }

    // can it be unsigned?
    if (min >= 0)
    {
        if (max <= std::numeric_limits<uint8_t>::max())
        {
            e.type = "uint8";
        }
        else if (max <= std::numeric_limits<uint16_t>::max())
        {
            e.type = "uint16";
        }
        else if (max <= std::numeric_limits<uint32_t>::max())
        {
            e.type = "uint32";
        }
        else if (max <= std::numeric_limits<uint64_t>::max())
        {
            e.type = "uint64";
        }
        else
        {
            throw std::runtime_error(std::to_string(e.line) + ", " + std::to_string(e.column) + ": enum " + e.name +
                                     " cannot be represented by a uint64, check its values");
        }
    }

    // signed
    else
    {
        if (std::numeric_limits<int8_t>::min() <= min && max <= std::numeric_limits<int8_t>::max())
        {
            e.type = "int8";
        }
        else if (std::numeric_limits<int16_t>::min() <= min && max <= std::numeric_limits<int16_t>::max())
        {
            e.type = "int16";
        }
        else if (std::numeric_limits<int32_t>::min() <= min && max <= std::numeric_limits<int32_t>::max())
        {
            e.type = "int32";
        }
        else if (std::numeric_limits<int64_t>::min() <= min && max <= std::numeric_limits<int64_t>::max())
        {
            e.type = "int64";
        }
        else
        {
            throw std::runtime_error(std::to_string(e.line) + ", " + std::to_string(e.column) + ": enum " + e.name +
                                     " cannot be represented by a int64, check its values");
        }
    }
}
} // namespace Entdlr
