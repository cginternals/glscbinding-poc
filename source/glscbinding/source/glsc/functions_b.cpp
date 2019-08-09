
#include "../Binding_pch.h"

#include <glscbinding/glsc/functions.h>


namespace glsc
{


void glBindBuffer(GLenum target, GLuint buffer)
{
    return glscbinding::Binding::BindBuffer(target, buffer);
}

void glBindFramebuffer(GLenum target, GLuint framebuffer)
{
    return glscbinding::Binding::BindFramebuffer(target, framebuffer);
}

void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
    return glscbinding::Binding::BindRenderbuffer(target, renderbuffer);
}

void glBindTexture(GLenum target, GLuint texture)
{
    return glscbinding::Binding::BindTexture(target, texture);
}

void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glscbinding::Binding::BlendColor(red, green, blue, alpha);
}

void glBlendEquation(GLenum mode)
{
    return glscbinding::Binding::BlendEquation(mode);
}

void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
    return glscbinding::Binding::BlendEquationSeparate(modeRGB, modeAlpha);
}

void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
    return glscbinding::Binding::BlendFunc(sfactor, dfactor);
}

void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return glscbinding::Binding::BlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage)
{
    return glscbinding::Binding::BufferData(target, size, data, usage);
}

void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data)
{
    return glscbinding::Binding::BufferSubData(target, offset, size, data);
}


} // namespace glsc