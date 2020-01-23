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
            { "enums", n.enums },
            { "unions", n.unions },
            { "structs", n.structs }
        };
    }

    void from_json(const json& j, Namespace& n)
    {
        j.at("name").get_to(n.name);
        j.at("enums").get_to(n.enums);
        j.at("unions").get_to(n.unions);
        j.at("structs").get_to(n.structs);
    }

    void to_json(json& j, const Struct& s)
    {
        j = json {
            { "name", s.name },
            { "fields", s.fields }
        };
    }

    void from_json(const json& j, Struct& s)
    {
        j.at("name").get_to(s.name);
        j.at("fields").get_to(s.fields);
    }

    void to_json(json& j, const Field& f)
    {
        j = json {
            { "name", f.name },
            { "type", f.type },
            { "isArray", f.isArray },
            { "arraySize", f.arraySize }
        };
    }

    void from_json(const json& j, Field& f)
    {
        j.at("name").get_to(f.name);
        j.at("type").get_to(f.type);
        j.at("isArray").get_to(f.isArray);
        j.at("arraySize").get_to(f.arraySize);
    }

    void to_json(json& j, const Union& u)
    {
        j = json {
            { "name", u.name },
            { "types", u.types }
        };
    }

    void from_json(const json& j, Union& u)
    {
        j.at("name").get_to(u.name);
        j.at("types").get_to(u.types);
    }

    void to_json(json& j, const UnionType& t)
    {
        j = json {
            { "type", t.type },
            { "isArray", t.isArray },
            { "arraySize", t.arraySize }
        };
    }

    void from_json(const json& j, UnionType& t)
    {
        j.at("type").get_to(t.type);
        j.at("isArray").get_to(t.isArray);
        j.at("arraySize").get_to(t.arraySize);
    }

    void to_json(json& j, const Enum& e)
    {
        j = json {
            { "name", e.name },
            { "values", e.values }
        };
    }

    void from_json(const json& j, Enum& e)
    {
        j.at("name").get_to(e.name);
        j.at("values").get_to(e.values);
    }

    void to_json(json& j, const EnumValue& e)
    {
        j = json {
            { "name", e.name },
            { "value", e.value }
        };
    }

    void from_json(const json& j, EnumValue& e)
    {
        j.at("name").get_to(e.name);
        j.at("value").get_to(e.value);
    }
}