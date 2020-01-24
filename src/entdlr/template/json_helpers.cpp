#include "json_helpers.h"

namespace Entdlr
{
    void to_json(json& j, const Context& c)
    {
        j = json {
            { "namespaces", c.namespaces }
        };
    }

    void from_json(const json& j, Context& c)
    {
        j.at("namespaces").get_to(c.namespaces);
    }

    void to_json(json& j, const Namespace& n)
    {
        j = json {
            { "name", n.name },
            { "filename", n.filename },
            { "line", n.line },
            { "column", n.column },
            { "enums", n.enums },
            { "unions", n.unions },
            { "structs", n.structs }
        };
    }

    void from_json(const json& j, Namespace& n)
    {
        j.at("name").get_to(n.name);
        j.at("filename").get_to(n.filename);
        j.at("line").get_to(n.line);
        j.at("column").get_to(n.column);
        j.at("enums").get_to(n.enums);
        j.at("unions").get_to(n.unions);
        j.at("structs").get_to(n.structs);
    }

    void to_json(json& j, const Struct& s)
    {
        j = json {
            { "name", s.name },
            { "filename", s.filename },
            { "line", s.line },
            { "column", s.column },
            { "fields", s.fields }
        };
    }

    void from_json(const json& j, Struct& s)
    {
        j.at("name").get_to(s.name);
        j.at("filename").get_to(s.filename);
        j.at("line").get_to(s.line);
        j.at("column").get_to(s.column);
        j.at("fields").get_to(s.fields);
    }

    void to_json(json& j, const Field& f)
    {
        j = json {
            { "name", f.name },
            { "filename", f.filename },
            { "line", f.line },
            { "column", f.column },
            { "type", f.type },
            { "isArray", f.isArray },
            { "arraySize", f.arraySize }
        };
    }

    void from_json(const json& j, Field& f)
    {
        j.at("name").get_to(f.name);
        j.at("filename").get_to(f.filename);
        j.at("line").get_to(f.line);
        j.at("column").get_to(f.column);
        j.at("type").get_to(f.type);
        j.at("isArray").get_to(f.isArray);
        j.at("arraySize").get_to(f.arraySize);
    }

    void to_json(json& j, const Union& u)
    {
        j = json {
            { "name", u.name },
            { "filename", u.filename },
            { "line", u.line },
            { "column", u.column },
            { "types", u.types }
        };
    }

    void from_json(const json& j, Union& u)
    {
        j.at("name").get_to(u.name);
        j.at("filename").get_to(u.filename);
        j.at("line").get_to(u.line);
        j.at("column").get_to(u.column);
        j.at("types").get_to(u.types);
    }

    void to_json(json& j, const UnionType& t)
    {
        j = json {
            { "name", t.name },
            { "filename", t.filename },
            { "line", t.line },
            { "column", t.column },
            { "isArray", t.isArray },
            { "arraySize", t.arraySize }
        };
    }

    void from_json(const json& j, UnionType& t)
    {
        j.at("name").get_to(t.name);
        j.at("filename").get_to(t.filename);
        j.at("line").get_to(t.line);
        j.at("column").get_to(t.column);
        j.at("isArray").get_to(t.isArray);
        j.at("arraySize").get_to(t.arraySize);
    }

    void to_json(json& j, const Enum& e)
    {
        j = json {
            { "name", e.name },
            { "filename", e.filename },
            { "line", e.line },
            { "column", e.column },
            { "values", e.values }
        };
    }

    void from_json(const json& j, Enum& e)
    {
        j.at("name").get_to(e.name);
        j.at("filename").get_to(e.filename);
        j.at("line").get_to(e.line);
        j.at("column").get_to(e.column);
        j.at("values").get_to(e.values);
    }

    void to_json(json& j, const EnumValue& e)
    {
        j = json {
            { "name", e.name },
            { "filename", e.filename },
            { "line", e.line },
            { "column", e.column },
            { "value", e.value }
        };
    }

    void from_json(const json& j, EnumValue& e)
    {
        j.at("name").get_to(e.name);
        j.at("filename").get_to(e.filename);
        j.at("line").get_to(e.line);
        j.at("column").get_to(e.column);
        j.at("value").get_to(e.value);
    }
}