#ifndef __ENTDLR_JSON_HELPERS_H__
#define __ENTDLR_JSON_HELPERS_H__

#include "context.h"

#include "nlohmann/json.hpp"
using nlohmann::json;

namespace Entdlr
{
    void to_json(json& j, const Context& c);
    void from_json(const json& j, Context& c);

    void to_json(json& j, const Namespace& n);
    void from_json(const json& j, Namespace& n);

    void to_json(json& j, const Struct& s);
    void from_json(const json& j, Struct& s);

    void to_json(json& j, const Field& f);
    void from_json(const json& j, Field& f);

    void to_json(json& j, const Union& u);
    void from_json(const json& j, Union& u);

    void to_json(json& j, const UnionType& t);
    void from_json(const json& j, UnionType& t);

    void to_json(json& j, const Enum& e);
    void from_json(const json& j, Enum& e);

    void to_json(json& j, const EnumValue& e);
    void from_json(const json& j, EnumValue& e);
};

#endif // __ENTDLR_JSON_HELPERS_H__