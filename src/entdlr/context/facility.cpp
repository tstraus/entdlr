#include "facility.h"

namespace Entdlr
{
    Facility Facility::create(const Token& token, const std::string& comment)
    {
        Facility out;
        out.filename = token.filename;
        out.line = token.line;
        out.column = token.column;
        out.name = token.name;
        out.comment = comment;

        return out;
    }

    void Facility::add(const Method& method)
    {
        methods.push_back(method);
    }
};
