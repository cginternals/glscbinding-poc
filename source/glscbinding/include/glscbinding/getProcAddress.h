
#pragma once


#include <glscbinding/glscbinding_api.h>

#include <glscbinding/ProcAddress.h>


namespace glscbinding
{


/**
*  @brief
*    Default getProcAddress implementation using libdl (Unix) and LoadLibrary (Windows).
*
*  @param[in] name
*    The name of the OpenGL function
*
*  @return
*    The resolved function pointer
*
*  @remark
*    Using glscbinding::getProcAddress is provided for convenience only. Please don't use this in new code.
*    Instead, use an external function resolution callback, e.g.,
*     * wglGetProcAddress
*     * glxGetProcAddress
*     * glfwGetProcAddress
*     * QOpenGlContext::getProcAddress
*/
GLSCBINDING_API ProcAddress getProcAddress(const char * name);


} // namespace glscbinding
