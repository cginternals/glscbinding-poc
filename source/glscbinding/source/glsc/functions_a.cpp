
#include "../Binding_pch.h"

#include <glscbinding/glsc/functions.h>


namespace glsc
{


void glActiveTexture(GLenum texture)
{
    return glscbinding::Binding::ActiveTexture(texture);
}


} // namespace glsc