
#include "../Binding_pch.h"

#include <glscbinding/glsc/functions.h>


namespace glsc
{


void glGenBuffers(GLsizei n, GLuint * buffers)
{
    return glscbinding::Binding::GenBuffers(n, buffers);
}

void glGenerateMipmap(GLenum target)
{
    return glscbinding::Binding::GenerateMipmap(target);
}

void glGenFramebuffers(GLsizei n, GLuint * framebuffers)
{
    return glscbinding::Binding::GenFramebuffers(n, framebuffers);
}

void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
    return glscbinding::Binding::GenRenderbuffers(n, renderbuffers);
}

void glGenTextures(GLsizei n, GLuint * textures)
{
    return glscbinding::Binding::GenTextures(n, textures);
}

GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
    return glscbinding::Binding::GetAttribLocation(program, name);
}

void glGetBooleanv(GLenum pname, GLboolean * data)
{
    return glscbinding::Binding::GetBooleanv(pname, data);
}

void glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glscbinding::Binding::GetBufferParameteriv(target, pname, params);
}

GLenum glGetError()
{
    return glscbinding::Binding::GetError();
}

void glGetFloatv(GLenum pname, GLfloat * data)
{
    return glscbinding::Binding::GetFloatv(pname, data);
}

void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return glscbinding::Binding::GetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

GLenum glGetGraphicsResetStatus()
{
    return glscbinding::Binding::GetGraphicsResetStatus();
}

void glGetIntegerv(GLenum pname, GLint * data)
{
    return glscbinding::Binding::GetIntegerv(pname, data);
}

void glGetnUniformfv(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return glscbinding::Binding::GetnUniformfv(program, location, bufSize, params);
}

void glGetnUniformiv(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return glscbinding::Binding::GetnUniformiv(program, location, bufSize, params);
}

void glGetProgramiv(GLuint program, GLenum pname, GLint * params)
{
    return glscbinding::Binding::GetProgramiv(program, pname, params);
}

void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glscbinding::Binding::GetRenderbufferParameteriv(target, pname, params);
}

const GLubyte * glGetString(GLenum name)
{
    return glscbinding::Binding::GetString(name);
}

void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glscbinding::Binding::GetTexParameterfv(target, pname, params);
}

void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glscbinding::Binding::GetTexParameteriv(target, pname, params);
}

GLint glGetUniformLocation(GLuint program, const GLchar * name)
{
    return glscbinding::Binding::GetUniformLocation(program, name);
}

void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params)
{
    return glscbinding::Binding::GetVertexAttribfv(index, pname, params);
}

void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params)
{
    return glscbinding::Binding::GetVertexAttribiv(index, pname, params);
}

void glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer)
{
    return glscbinding::Binding::GetVertexAttribPointerv(index, pname, pointer);
}


} // namespace glsc