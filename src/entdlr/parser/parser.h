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

        static Context parse(const std::string& content);

        static Context mergeContexts(const std::vector<Context>& contexts);

    private:
        static Namespace parseNamespace(const std::vector<FlatBuffersParser::Namespace_declContext*>& namespaces);

        static std::vector<Enum> parseEnums(const std::vector<FlatBuffersParser::Enum_declContext*>& enums);

        static std::vector<Struct> parseStructs(const std::vector<FlatBuffersParser::Type_declContext*>& structs);

        static Field parseField(FlatBuffersParser::Field_declContext* field);
    };
};

#endif // __ENTDLR_PARSER_H__