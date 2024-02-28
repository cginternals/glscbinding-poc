
#pragma once


#include <glscbinding/noglsc.h>

#include <glscbinding/glsc/enum.h>


namespace glsc20ext
{


// use enum type
using glsc::GLenum;


// import enums to namespace
using glsc::GL_COMPRESSED_RGB_S3TC_DXT1_EXT;
using glsc::GL_COMPRESSED_RGBA_S3TC_DXT1_EXT;
using glsc::GL_COMPRESSED_RGBA_S3TC_DXT3_EXT;
using glsc::GL_COMPRESSED_RGBA_S3TC_DXT5_EXT;
using glsc::GL_DEPTH_COMPONENT24_OES;
using glsc::GL_DEPTH_COMPONENT32_OES;
using glsc::GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES;
using glsc::GL_PVRIC_SIGNATURE_MISMATCH_IMG;
using glsc::GL_RGB8_OES;
using glsc::GL_RGBA8_OES;
using glsc::GL_TRP_ERROR_CONTEXT_RESET_IMG;
using glsc::GL_TRP_IMG;
using glsc::GL_TRP_UNSUPPORTED_CONTEXT_IMG;


} // namespace glsc20ext