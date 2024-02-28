
#pragma once


#include <glscbinding/noglsc.h>

#include <glscbinding/glscbinding_features.h>

#include <glscbinding/SharedBitfield.h>


namespace glsc
{


enum class AttribMask : unsigned int
{
    GL_NONE_BIT           = 0x0, // Generic GL_NONE_BIT
    GL_DEPTH_BUFFER_BIT   = 0x00000100,
    GL_STENCIL_BUFFER_BIT = 0x00000400,
    GL_COLOR_BUFFER_BIT   = 0x00004000
};


enum class ClearBufferMask : unsigned int
{
    GL_NONE_BIT           = 0x0, // Generic GL_NONE_BIT
    GL_DEPTH_BUFFER_BIT   = 0x00000100, // reuse from AttribMask
    GL_STENCIL_BUFFER_BIT = 0x00000400, // reuse from AttribMask
    GL_COLOR_BUFFER_BIT   = 0x00004000 // reuse from AttribMask
};


enum class FragmentShaderDestMaskATI : unsigned int
{
    GL_NONE_BIT           = 0x0 // Generic GL_NONE_BIT
};


enum class FragmentShaderDestModMaskATI : unsigned int
{
    GL_NONE_BIT           = 0x0 // Generic GL_NONE_BIT
};


enum class PathFontStyle : unsigned int
{
    GL_NONE_BIT           = 0x0 // Generic GL_NONE_BIT
};


enum class UnusedMask : unsigned int
{
    GL_UNUSED_BIT         = 0x00000000
};


// import bitfields to namespace

GLSCBINDING_CONSTEXPR static const glscbinding::SharedBitfield<AttribMask, ClearBufferMask> GL_COLOR_BUFFER_BIT = AttribMask::GL_COLOR_BUFFER_BIT;
GLSCBINDING_CONSTEXPR static const glscbinding::SharedBitfield<AttribMask, ClearBufferMask> GL_DEPTH_BUFFER_BIT = AttribMask::GL_DEPTH_BUFFER_BIT;
GLSCBINDING_CONSTEXPR static const glscbinding::SharedBitfield<AttribMask, ClearBufferMask, FragmentShaderDestMaskATI, FragmentShaderDestModMaskATI, PathFontStyle> GL_NONE_BIT = AttribMask::GL_NONE_BIT;
GLSCBINDING_CONSTEXPR static const glscbinding::SharedBitfield<AttribMask, ClearBufferMask> GL_STENCIL_BUFFER_BIT = AttribMask::GL_STENCIL_BUFFER_BIT;
GLSCBINDING_CONSTEXPR static const UnusedMask GL_UNUSED_BIT = UnusedMask::GL_UNUSED_BIT;


} // namespace glsc