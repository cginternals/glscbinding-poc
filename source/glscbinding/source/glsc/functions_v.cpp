
#include "../Binding_pch.h"

#include <glscbinding/glsc/functions.h>


namespace glsc
{


void glVertexAttrib1f(GLuint index, GLfloat x)
{
    return glscbinding::Binding::VertexAttrib1f(index, x);
}

void glVertexAttrib1fv(GLuint index, const GLfloat * v)
{
    return glscbinding::Binding::VertexAttrib1fv(index, v);
}

void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
    return glscbinding::Binding::VertexAttrib2f(index, x, y);
}

void glVertexAttrib2fv(GLuint index, const GLfloat * v)
{
    return glscbinding::Binding::VertexAttrib2fv(index, v);
}

void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return glscbinding::Binding::VertexAttrib3f(index, x, y, z);
}

void glVertexAttrib3fv(GLuint index, const GLfloat * v)
{
    return glscbinding::Binding::VertexAttrib3fv(index, v);
}

void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glscbinding::Binding::VertexAttrib4f(index, x, y, z, w);
}

void glVertexAttrib4fv(GLuint index, const GLfloat * v)
{
    return glscbinding::Binding::VertexAttrib4fv(index, v);
}

void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return glscbinding::Binding::VertexAttribPointer(index, size, type, normalized, stride, pointer);
}

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glscbinding::Binding::Viewport(x, y, width, height);
}


} // namespace glsc