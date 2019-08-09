
#include <glscbinding-aux/types_to_string.h>

#include <ostream>
#include <bitset>
#include <sstream>

#include <glscbinding/Version.h>
#include <glscbinding-aux/Meta.h>

#include "types_to_string_private.h"


namespace glsc
{


std::ostream & operator<<(std::ostream & stream, const GLboolean & value)
{
    stream << glscbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const GLenum & value)
{
    stream << glscbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const GLextension & value)
{
    stream << glscbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const AttribMask & value)
{
    stream << glscbinding::aux::bitfieldString<AttribMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value)
{
    stream << glscbinding::aux::bitfieldString<ClearBufferMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const PathFontStyle & value)
{
    stream << glscbinding::aux::bitfieldString<PathFontStyle>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const UnusedMask & value)
{
    stream << glscbinding::aux::bitfieldString<UnusedMask>(value);
    return stream;
}


} // namespace glsc


namespace glscbinding
{


template <>
std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLenum> & value)
{
    const auto & name = aux::Meta::getString(value.value());
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));

    return stream;
}

/*template <>
std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLbitfield> & value)
{
    std::stringstream ss;
    ss << "0x" << std::hex << static_cast<unsigned>(value.value());
    stream << ss.str();

    return stream;
}*/

template <>
std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLboolean> & value)
{
    const auto & name = aux::Meta::getString(value.value());
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));

    return stream;
}


template <>
std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLchar *> & value)
{
    auto s = aux::wrapString(reinterpret_cast<const char*>(value.value()));
    stream.write(s.c_str(), static_cast<std::streamsize>(s.size()));

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLubyte *> & value)
{
    auto s = aux::wrapString(reinterpret_cast<const char*>(value.value()));
    stream.write(s.c_str(), static_cast<std::streamsize>(s.size()));

    return stream;
}


std::ostream & operator<<(std::ostream & stream, const Version & version)
{
    stream << version.toString();

    return stream;
}

std::ostream & operator<<(std::ostream & stream, const AbstractValue * value)
{
    if (typeid(*value) == typeid(AbstractValue))
    {
        return stream << reinterpret_cast<const void*>(value);
    }

    
    if (typeid(*value) == typeid(Value<glsc::AttribMask>))
    {
        return stream << *reinterpret_cast<const Value<glsc::AttribMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<glsc::AttribMask *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::AttribMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<glsc::ClearBufferMask>))
    {
        return stream << *reinterpret_cast<const Value<glsc::ClearBufferMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<glsc::ClearBufferMask *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::ClearBufferMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<glsc::GLbitfield>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLbitfield>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<glsc::GLbitfield *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLbitfield *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<glsc::GLchar>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLchar>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<glsc::GLchar *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLchar *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<glsc::GLenum>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLenum>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<glsc::GLenum *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLenum *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<glsc::GLextension>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLextension>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<glsc::GLextension *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLextension *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<glsc::GLfloat>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLfloat>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<glsc::GLfloat *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLfloat *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<glsc::GLint>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLint>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<glsc::GLint *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLint *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<glsc::GLintptr>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLintptr>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<glsc::GLintptr *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLintptr *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<glsc::GLsizei>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLsizei>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<glsc::GLsizei *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLsizei *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<glsc::GLsizeiptr>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLsizeiptr>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<glsc::GLsizeiptr *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLsizeiptr *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<glsc::GLubyte>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLubyte>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<glsc::GLubyte *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLubyte *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<glsc::GLuint>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLuint>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<glsc::GLuint *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLuint *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<glsc::GLuint64>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLuint64>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<glsc::GLuint64 *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLuint64 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<glsc::PathFontStyle>))
    {
        return stream << *reinterpret_cast<const Value<glsc::PathFontStyle>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<glsc::PathFontStyle *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::PathFontStyle *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<glsc::UnusedMask>))
    {
        return stream << *reinterpret_cast<const Value<glsc::UnusedMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<glsc::UnusedMask *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::UnusedMask *>*>(value);
    }

    // expect an AbstractValue with a pointer in first member
    return stream << *reinterpret_cast<const Value<void *>*>(value);
}


} // namespace glscbinding