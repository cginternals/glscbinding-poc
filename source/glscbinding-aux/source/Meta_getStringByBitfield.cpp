
#include <glscbinding-aux/Meta.h>

#include <glscbinding/glsc/bitfield.h>

#include "Meta_Maps.h"


using namespace glsc;


namespace
{


const auto none = std::string{};


} // namespace


namespace glscbinding { namespace aux
{


const std::string & Meta::getString(const ClearBufferMask glscbitfield)
{
    const auto i = Meta_StringsByClearBufferMask.find(glscbitfield);
    if (i != Meta_StringsByClearBufferMask.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const UnusedMask glscbitfield)
{
    const auto i = Meta_StringsByUnusedMask.find(glscbitfield);
    if (i != Meta_StringsByUnusedMask.end())
    {
        return i->second;
    }
    return none;
}


} } // namespace glscbinding::aux