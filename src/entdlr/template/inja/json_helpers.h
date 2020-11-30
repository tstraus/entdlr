#ifndef __ENTDLR_JSON_HELPERS_H__
#define __ENTDLR_JSON_HELPERS_H__

#include "context.h"

#include "nlohmann/json.hpp"
using nlohmann::json;

namespace Entdlr
{
    void to_json(json& j, const Context& c);
    void from_json(const json& j, Context& c);

    void to_json(json& j, const Documentation& d);
    void from_json(const json& j, Documentation& d);

    void to_json(json& j, const Tag& t);
    void from_json(const json& j, Tag& t);

    void to_json(json& j, const Include& i);
    void from_json(const json& j, Include& i);

    void to_json(json& j, const Namespace& n);
    void from_json(const json& j, Namespace& n);

    void to_json(json& j, const Struct& s);
    void from_json(const json& j, Struct& s);

    void to_json(json& j, const Field& f);
    void from_json(const json& j, Field& f);

    void to_json(json& j, const Attribute& a);
    void from_json(const json& j, Attribute& a);

    void to_json(json& j, const Union& u);
    void from_json(const json& j, Union& u);

    void to_json(json& j, const UnionType& t);
    void from_json(const json& j, UnionType& t);

    void to_json(json& j, const Enum& e);
    void from_json(const json& j, Enum& e);

    void to_json(json& j, const EnumValue& e);
    void from_json(const json& j, EnumValue& e);

    void to_json(json& j, const Interface& i);
    void from_json(const json& j, Interface& i);

    void to_json(json& j, const Method& m);
    void from_json(const json& j, Method& m);

    void to_json(json& j, const Parameter& p);
    void from_json(const json& j, Parameter& p);
};

#endif // __ENTDLR_JSON_HELPERS_H__
