
#pragma once


#include <cstddef>
#include <cstdint>
#include <array>
#include <string>

#include <KHR/khrplatform.h>


#ifdef _MSC_VER
#define GLSC_APIENTRY __stdcall
#else
#define GLSC_APIENTRY
#endif

#include <glscbinding/noglsc.h>
#include <glscbinding/glscbinding_api.h>
#include <glscbinding/glscbinding_features.h>
#include <glscbinding/glsc/boolean.h>


namespace glsc
{


using GLbitfield = unsigned int;
using GLchar = char;
using GLfloat = khronos_float_t;
using GLint = int;
using GLintptr = khronos_intptr_t;
using GLsizei = int;
using GLsizeiptr = khronos_ssize_t;
using GLubyte = khronos_uint8_t;
using GLuint = unsigned int;
using GLuint64 = khronos_uint64_t;
enum class AttribMask : unsigned int;
enum class ClearBufferMask : unsigned int;
enum class FragmentShaderDestMaskATI : unsigned int;
enum class FragmentShaderDestModMaskATI : unsigned int;
enum class GLenum : unsigned int;
enum class GLextension : int;
enum class PathFontStyle : unsigned int;
enum class UnusedMask : unsigned int;


} // namespace glsc


#include <glscbinding/glsc/types.inl>