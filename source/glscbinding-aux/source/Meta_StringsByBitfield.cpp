
#include "Meta_Maps.h"

#include <glscbinding/glsc/bitfield.h>


using namespace glsc;


namespace glscbinding { namespace aux
{


const std::unordered_map<AttribMask, std::string> Meta_StringsByAttribMask =
{
    { AttribMask::GL_COLOR_BUFFER_BIT, "GL_COLOR_BUFFER_BIT" },
    { AttribMask::GL_DEPTH_BUFFER_BIT, "GL_DEPTH_BUFFER_BIT" },
    { AttribMask::GL_NONE_BIT, "GL_NONE_BIT" },
    { AttribMask::GL_STENCIL_BUFFER_BIT, "GL_STENCIL_BUFFER_BIT" }
};

const std::unordered_map<ClearBufferMask, std::string> Meta_StringsByClearBufferMask =
{
    { ClearBufferMask::GL_COLOR_BUFFER_BIT, "GL_COLOR_BUFFER_BIT" },
    { ClearBufferMask::GL_DEPTH_BUFFER_BIT, "GL_DEPTH_BUFFER_BIT" },
    { ClearBufferMask::GL_NONE_BIT, "GL_NONE_BIT" },
    { ClearBufferMask::GL_STENCIL_BUFFER_BIT, "GL_STENCIL_BUFFER_BIT" }
};

const std::unordered_map<FragmentShaderDestMaskATI, std::string> Meta_StringsByFragmentShaderDestMaskATI =
{
    { FragmentShaderDestMaskATI::GL_NONE_BIT, "GL_NONE_BIT" }
};

const std::unordered_map<FragmentShaderDestModMaskATI, std::string> Meta_StringsByFragmentShaderDestModMaskATI =
{
    { FragmentShaderDestModMaskATI::GL_NONE_BIT, "GL_NONE_BIT" }
};

const std::unordered_map<PathFontStyle, std::string> Meta_StringsByPathFontStyle =
{
    { PathFontStyle::GL_NONE_BIT, "GL_NONE_BIT" }
};

const std::unordered_map<UnusedMask, std::string> Meta_StringsByUnusedMask =
{
    { UnusedMask::GL_UNUSED_BIT, "GL_UNUSED_BIT" }
};


} } // namespace glscbinding::aux