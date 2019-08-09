
#include "../Binding_pch.h"

#include <glscbinding/glsc/functions.h>


namespace glsc
{


GLenum glCheckFramebufferStatus(GLenum target)
{
    return glscbinding::Binding::CheckFramebufferStatus(target);
}

void glClear(ClearBufferMask mask)
{
    return glscbinding::Binding::Clear(mask);
}

void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glscbinding::Binding::ClearColor(red, green, blue, alpha);
}

void glClearDepthf(GLfloat d)
{
    return glscbinding::Binding::ClearDepthf(d);
}

void glClearStencil(GLint s)
{
    return glscbinding::Binding::ClearStencil(s);
}

void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return glscbinding::Binding::ColorMask(red, green, blue, alpha);
}

void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return glscbinding::Binding::CompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

GLuint glCreateProgram()
{
    return glscbinding::Binding::CreateProgram();
}

void glCullFace(GLenum mode)
{
    return glscbinding::Binding::CullFace(mode);
}


} // namespace glsc