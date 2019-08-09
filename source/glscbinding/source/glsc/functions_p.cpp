
#include "../Binding_pch.h"

#include <glscbinding/glsc/functions.h>


namespace glsc
{


void glPixelStorei(GLenum pname, GLint param)
{
    return glscbinding::Binding::PixelStorei(pname, param);
}

void glPolygonOffset(GLfloat factor, GLfloat units)
{
    return glscbinding::Binding::PolygonOffset(factor, units);
}

void glProgramBinary(GLuint program, GLenum binaryFormat, const void * binary, GLsizei length)
{
    return glscbinding::Binding::ProgramBinary(program, binaryFormat, binary, length);
}


} // namespace glsc