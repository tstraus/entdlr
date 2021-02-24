#ifndef __ENTDLR_I_TEMPLATE_H__
#define __ENTDLR_I_TEMPLATE_H__

#include "context.h"

namespace Entdlr
{
class ITemplate
{
  protected:
    ITemplate()
    {
    }

  public:
    ~ITemplate()
    {
    }

    virtual std::string getFileExtension() const = 0;

    virtual std::string applyTemplate(const Context& context, const std::string& template_name) = 0;
};
}; // namespace Entdlr

#endif // __ENTDLR_I_TEMPLATE_H__
