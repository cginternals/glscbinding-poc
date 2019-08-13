
#pragma once


#include <string>
#include <iosfwd>

#include <glscbinding-aux/glscbinding-aux_api.h>
#include <glscbinding-aux/glscbinding-aux_features.h>

#include <glscbinding/glsc/types.h>
#include <glscbinding/Value.h>


namespace glsc
{


GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const GLboolean & value);
GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const GLenum & value);
GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const GLextension & value);
GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const AttribMask & value);
GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value);
GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const PathFontStyle & value);
GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const UnusedMask & value);


} // namespace glsc


namespace glscbinding
{


class Version;


/**
*  @brief
*    Generic ostream operator for the Value template
*/
template <typename T>
GLSCBINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T> & value);

/**
*  @brief
*    Generic ostream operator for the Value template with pointer types
*/
template <typename T>
GLSCBINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T *> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLenum Value template
*/
template <>
GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLenum> & value);

/* <- ToDo: Add back second * when implementing this function again
*  @brief
*    A specialized ostream operator for the gl::GLbitfield Value template
*/
/*template <>
GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLbitfield> & value);*/

/**
*  @brief
*    A specialized ostream operator for the gl::GLenum Value template
*/
template <>
GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLboolean> & value);

/**
*  @brief
*    A specialized ostream operator for the GLubyte * Value template
*/
template <>
GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLubyte *> & value);

/**
*  @brief
*    A specialized ostream operator for the GLchar * Value template
*/
template <>
GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLchar *> & value);

/**
*  @brief
*    The operator to allow Versions to be printed onto a std::ostream
*/
GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Version & version);

/**
*  @brief
*    The operator to allow AbstractValues to be printed onto a std::ostream
*/
GLSCBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const AbstractValue * value);


} // namespace glscbinding


#include <glscbinding-aux/types_to_string.inl>