
#include "../Binding_pch.h"

#include <glscbinding/glsc/functions.h>


namespace glsc
{


void glDepthFunc(GLenum func)
{
    return glscbinding::Binding::DepthFunc(func);
}

void glDepthMask(GLboolean flag)
{
    return glscbinding::Binding::DepthMask(flag);
}

void glDepthRangef(GLfloat n, GLfloat f)
{
    return glscbinding::Binding::DepthRangef(n, f);
}

void glDisable(GLenum cap)
{
    return glscbinding::Binding::Disable(cap);
}

void glDisableVertexAttribArray(GLuint index)
{
    return glscbinding::Binding::DisableVertexAttribArray(index);
}

void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
    return glscbinding::Binding::DrawArrays(mode, first, count);
}

void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return glscbinding::Binding::DrawRangeElements(mode, start, end, count, type, indices);
}


} // namespace glsc