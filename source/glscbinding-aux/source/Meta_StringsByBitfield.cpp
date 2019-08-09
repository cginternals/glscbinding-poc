
#include "Meta_Maps.h"

#include <glscbinding/glsc/bitfield.h>


using namespace glsc;


namespace glscbinding { namespace aux
{


const std::unordered_map<ClearBufferMask, std::string> Meta_StringsByClearBufferMask =
{
    { ClearBufferMask::GL_COLOR_BUFFER_BIT, "GL_COLOR_BUFFER_BIT" },
    { ClearBufferMask::GL_DEPTH_BUFFER_BIT, "GL_DEPTH_BUFFER_BIT" },
    { ClearBufferMask::GL_NONE_BIT, "GL_NONE_BIT" },
    { ClearBufferMask::GL_STENCIL_BUFFER_BIT, "GL_STENCIL_BUFFER_BIT" }
};

const std::unordered_map<UnusedMask, std::string> Meta_StringsByUnusedMask =
{
    { UnusedMask::GL_UNUSED_BIT, "GL_UNUSED_BIT" }
};


} } // namespace glscbinding::aux