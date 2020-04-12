#include "json_helpers.h"

namespace Entdlr {
    void to_json(json& j, const Context& c) {
        j = json{
                {"includes",   c.includes},
                {"namespaces", c.namespaces}
        };
    }

    void from_json(const json& j, Context& c) {
        j.at("includes").get_to(c.includes);
        j.at("namespaces").get_to(c.namespaces);
    }

    void to_json(json& j, const Include& i) {
        j = json{
                {"token",      i.token},
                {"name",       i.name},
                {"filename",   i.filename},
                {"line",       i.line},
                {"column",     i.column}
        };
    }

    void from_json(const json& j, Include& i) {
        j.at("token").get_to(i.token);
        j.at("name").get_to(i.name);
        j.at("filename").get_to(i.filename);
        j.at("line").get_to(i.line);
        j.at("column").get_to(i.column);
    }

    void to_json(json& j, const Namespace& n) {
        j = json{
                {"token",      n.token},
                {"name",       n.name},
                {"filename",   n.filename},
                {"line",       n.line},
                {"column",     n.column},
                {"enums",      n.enums},
                {"unions",     n.unions},
                {"structs",    n.structs},
                {"interfaces", n.interfaces}
        };
    }

    void from_json(const json& j, Namespace& n) {
        j.at("token").get_to(n.token);
        j.at("name").get_to(n.name);
        j.at("filename").get_to(n.filename);
        j.at("line").get_to(n.line);
        j.at("column").get_to(n.column);
        j.at("enums").get_to(n.enums);
        j.at("unions").get_to(n.unions);
        j.at("structs").get_to(n.structs);
        j.at("interfaces").get_to(n.interfaces);
    }

    void to_json(json& j, const Struct& s) {
        j = json{
                {"token",      s.token},
                {"name",       s.name},
                {"filename",   s.filename},
                {"line",       s.line},
                {"column",     s.column},
                {"fields",     s.fields},
                {"methods",    s.methods},
                {"attributes", s.attributes},
                {"comment",    s.comment}
        };
    }

    void from_json(const json& j, Struct& s) {
        j.at("token").get_to(s.token);
        j.at("name").get_to(s.name);
        j.at("filename").get_to(s.filename);
        j.at("line").get_to(s.line);
        j.at("column").get_to(s.column);
        j.at("fields").get_to(s.fields);
        j.at("methods").get_to(s.methods);
        j.at("attributes").get_to(s.attributes);
        j.at("comment").get_to(s.comment);
    }

    void to_json(json& j, const Field& f) {
        j = json{
                {"token",      f.token},
                {"name",       f.name},
                {"filename",   f.filename},
                {"line",       f.line},
                {"column",     f.column},
                {"type",       f.type},
                {"isArray",    f.isArray},
                {"arraySize",  f.arraySize},
                {"attributes", f.attributes},
                {"comment",    f.comment}
        };
    }

    void from_json(const json& j, Field& f) {
        j.at("token").get_to(f.token);
        j.at("name").get_to(f.name);
        j.at("filename").get_to(f.filename);
        j.at("line").get_to(f.line);
        j.at("column").get_to(f.column);
        j.at("type").get_to(f.type);
        j.at("isArray").get_to(f.isArray);
        j.at("arraySize").get_to(f.arraySize);
        j.at("attributes").get_to(f.attributes);
        j.at("comment").get_to(f.comment);
    }

    void to_json(json& j, const Attribute& a) {
        j = json{
                {"token",    a.token},
                {"name",     a.name},
                {"filename", a.filename},
                {"line",     a.line},
                {"column",   a.column},
                {"isString", a.isString},
                {"string",   a.string},
                {"isNumber", a.isNumber},
                {"number",   a.number},
        };
    }

    void from_json(const json& j, Attribute& a) {
        j.at("token").get_to(a.token);
        j.at("name").get_to(a.name);
        j.at("filename").get_to(a.filename);
        j.at("line").get_to(a.line);
        j.at("column").get_to(a.column);
        j.at("isString").get_to(a.isString);
        j.at("string").get_to(a.string);
        j.at("isNumber").get_to(a.isNumber);
        j.at("number").get_to(a.number);
    }

    void to_json(json& j, const Union& u) {
        j = json{
                {"token",      u.token},
                {"name",       u.name},
                {"filename",   u.filename},
                {"line",       u.line},
                {"column",     u.column},
                {"types",      u.types},
                {"attributes", u.attributes},
                {"comment",    u.comment}
        };
    }

    void from_json(const json& j, Union& u) {
        j.at("token").get_to(u.token);
        j.at("name").get_to(u.name);
        j.at("filename").get_to(u.filename);
        j.at("line").get_to(u.line);
        j.at("column").get_to(u.column);
        j.at("types").get_to(u.types);
        j.at("attributes").get_to(u.attributes);
        j.at("comment").get_to(u.comment);
    }

    void to_json(json& j, const UnionType& t) {
        j = json{
                {"token",     t.token},
                {"name",      t.name},
                {"filename",  t.filename},
                {"line",      t.line},
                {"column",    t.column},
                {"isArray",   t.isArray},
                {"arraySize", t.arraySize}
        };
    }

    void from_json(const json& j, UnionType& t) {
        j.at("token").get_to(t.token);
        j.at("name").get_to(t.name);
        j.at("filename").get_to(t.filename);
        j.at("line").get_to(t.line);
        j.at("column").get_to(t.column);
        j.at("isArray").get_to(t.isArray);
        j.at("arraySize").get_to(t.arraySize);
    }

    void to_json(json& j, const Enum& e) {
        j = json{
                {"token",        e.token},
                {"name",         e.name},
                {"type",         e.type},
                {"filename",     e.filename},
                {"line",         e.line},
                {"column",       e.column},
                {"values",       e.values},
                {"attributes",   e.attributes},
                {"comment",      e.comment}
        };
    }

    void from_json(const json& j, Enum& e) {
        j.at("token").get_to(e.token);
        j.at("name").get_to(e.name);
        j.at("type").get_to(e.type);
        j.at("filename").get_to(e.filename);
        j.at("line").get_to(e.line);
        j.at("column").get_to(e.column);
        j.at("values").get_to(e.values);
        j.at("attributes").get_to(e.attributes);
        j.at("comment").get_to(e.comment);
    }

    void to_json(json& j, const EnumValue& e) {
        j = json{
                {"token",    e.token},
                {"name",     e.name},
                {"filename", e.filename},
                {"line",     e.line},
                {"column",   e.column},
                {"value",    e.value}
        };
    }

    void from_json(const json& j, EnumValue& e) {
        j.at("token").get_to(e.token);
        j.at("name").get_to(e.name);
        j.at("filename").get_to(e.filename);
        j.at("line").get_to(e.line);
        j.at("column").get_to(e.column);
        j.at("value").get_to(e.value);
    }

    void to_json(json& j, const Interface& i)
    {
        j = json{
                {"token",    i.token},
                {"name",     i.name},
                {"filename", i.filename},
                {"line",     i.line},
                {"column",   i.column},
                {"methods",  i.methods},
                {"comment",  i.comment}
        };
    }

    void from_json(const json& j, Interface& i)
    {
        j.at("token").get_to(i.token);
        j.at("name").get_to(i.name);
        j.at("filename").get_to(i.filename);
        j.at("line").get_to(i.line);
        j.at("column").get_to(i.column);
        j.at("methods").get_to(i.methods);
        j.at("comment").get_to(i.comment);
    }

    void to_json(json& j, const Method& m)
    {
        j = json{
                {"token",      m.token},
                {"name",       m.name},
                {"filename",   m.filename},
                {"line",       m.line},
                {"column",     m.column},
                {"returnType", m.returnType},
                {"isStatic",   m.isStatic},
                {"parameters", m.parameters},
                {"comment",    m.comment}
        };
    }

    void from_json(const json& j, Method& m)
    {
        j.at("token").get_to(m.token);
        j.at("name").get_to(m.name);
        j.at("filename").get_to(m.filename);
        j.at("line").get_to(m.line);
        j.at("column").get_to(m.column);
        j.at("returnType").get_to(m.returnType);
        j.at("isStatic").get_to(m.isStatic);
        j.at("parameters").get_to(m.parameters);
        j.at("comment").get_to(m.comment);
    }

    void to_json(json& j, const Parameter& p)
    {
        j = json{
                {"token",    p.token},
                {"name",     p.name},
                {"filename", p.filename},
                {"line",     p.line},
                {"column",   p.column},
                {"type",     p.type},
                {"constant", p.constant}
        };
    }

    void from_json(const json& j, Parameter& p)
    {
        j.at("token").get_to(p.token);
        j.at("name").get_to(p.name);
        j.at("filename").get_to(p.filename);
        j.at("line").get_to(p.line);
        j.at("column").get_to(p.column);
        j.at("type").get_to(p.type);
        j.at("constant").get_to(p.constant);
    }
}
