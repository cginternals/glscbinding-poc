
#include "../Binding_pch.h"

#include <glscbinding/glsc/functions.h>


namespace glsc
{


void glLineWidth(GLfloat width)
{
    return glscbinding::Binding::LineWidth(width);
}


} // namespace glsc