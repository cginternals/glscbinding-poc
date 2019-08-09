
#include "../Binding_pch.h"

#include <glscbinding/glsc/functions.h>


namespace glsc
{


GLboolean glIsEnabled(GLenum cap)
{
    return glscbinding::Binding::IsEnabled(cap);
}


} // namespace glsc