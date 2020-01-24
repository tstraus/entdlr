#ifndef __ENTDLR_PARSER_H__
#define __ENTDLR_PARSER_H__

#include "context.h"

#include "antlr4-runtime.h"
#include "FlatBuffersParser.h"
#include "FlatBuffersLexer.h"

namespace Entdlr
{
    class Parser
    {
    public:
        static Context parseDir(const std::string& dirname);

        static Context parseFile(const std::string& filename);

        static Context parse(const std::string& content, const std::string& filename = "");

        static Context merge(const std::vector<Context>& contexts);

    private:
        static Namespace parseNamespace(const std::vector<FlatBuffersParser::Namespace_declContext*>& namespaces, const std::string& filename);

        static std::vector<Enum> parseEnums(const std::vector<FlatBuffersParser::Enum_declContext*>& enums, const std::string& filename);

        static std::vector<Union> parseUnions(const std::vector<FlatBuffersParser::Union_declContext*>& unions, const std::string& filename);

        static std::vector<Struct> parseStructs(const std::vector<FlatBuffersParser::Type_declContext*>& structs, const std::string& filename);

        static Field parseField(FlatBuffersParser::Field_declContext* field, const std::string& filename);
    };
};

#endif // __ENTDLR_PARSER_H__
