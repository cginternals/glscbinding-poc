
#include "../Binding_pch.h"

#include <glscbinding/glsc/functions.h>


namespace glsc
{


void glEnable(GLenum cap)
{
    return glscbinding::Binding::Enable(cap);
}

void glEnableVertexAttribArray(GLuint index)
{
    return glscbinding::Binding::EnableVertexAttribArray(index);
}


} // namespace glsc