#ifndef __ENTDLR_ATTRIBUTE_H__
#define __ENTDLR_ATTRIBUTE_H__

#include <string>
#include <vector>

#include "token.h"

namespace Entdlr
{
class Attribute : public Token
{
  public:
    bool isString;
    std::string string;

    bool isNumber;
    double number;

    bool isInteger;
    int64_t integer;

    static Attribute create(const Token& token);
    static Attribute create(const Token& token, const std::string& s);
    static Attribute create(const Token& token, double n);
    static Attribute create(const Token& token, int64_t i);
};
}; // namespace Entdlr

#endif // __ENTDLR_ATTRIBUTE_H__
