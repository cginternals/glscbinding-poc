
#include "../Binding_pch.h"

#include <glscbinding/glsc/functions.h>


namespace glsc
{


void glSampleCoverage(GLfloat value, GLboolean invert)
{
    return glscbinding::Binding::SampleCoverage(value, invert);
}

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glscbinding::Binding::Scissor(x, y, width, height);
}

void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
    return glscbinding::Binding::StencilFunc(func, ref, mask);
}

void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
    return glscbinding::Binding::StencilFuncSeparate(face, func, ref, mask);
}

void glStencilMask(GLuint mask)
{
    return glscbinding::Binding::StencilMask(mask);
}

void glStencilMaskSeparate(GLenum face, GLuint mask)
{
    return glscbinding::Binding::StencilMaskSeparate(face, mask);
}

void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
    return glscbinding::Binding::StencilOp(fail, zfail, zpass);
}

void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return glscbinding::Binding::StencilOpSeparate(face, sfail, dpfail, dppass);
}


} // namespace glsc