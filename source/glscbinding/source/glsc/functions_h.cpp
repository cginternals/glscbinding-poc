
#include "../Binding_pch.h"

#include <glscbinding/glsc/functions.h>


namespace glsc
{


void glHint(GLenum target, GLenum mode)
{
    return glscbinding::Binding::Hint(target, mode);
}


} // namespace glsc