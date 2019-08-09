
#include "../Binding_pch.h"

#include <glscbinding/glsc/functions.h>


namespace glsc
{


void glFinish()
{
    return glscbinding::Binding::Finish();
}

void glFlush()
{
    return glscbinding::Binding::Flush();
}

void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return glscbinding::Binding::FramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glscbinding::Binding::FramebufferTexture2D(target, attachment, textarget, texture, level);
}

void glFrontFace(GLenum mode)
{
    return glscbinding::Binding::FrontFace(mode);
}


} // namespace glsc