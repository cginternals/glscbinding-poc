
#include <glscbinding-aux/types_to_string.h>

#include <ostream>
#include <bitset>
#include <sstream>

#include <glscbinding/Version.h>
#include <glscbinding-aux/Meta.h>

#include "types_to_string_private.h"


namespace glsc
{


std::ostream & operator<<(std::ostream & stream, const GLextension & value)
{
    stream << glscbinding::aux::Meta::getString(value);
    return stream;
}


} // namespace glsc

namespace glsc
{


std::ostream & operator<<(std::ostream & stream, const GLenum & value)
{
    stream << glscbinding::aux::Meta::getString(value);
    return stream;
}


} // namespace glsc

namespace glsc
{


std::ostream & operator<<(std::ostream & stream, const GLboolean & value)
{
    stream << glscbinding::aux::Meta::getString(value);
    return stream;
}


} // namespace glsc

namespace glsc
{


std::ostream & operator<<(std::ostream & stream, const AttribMask & value)
{
    stream << glscbinding::aux::bitfieldString<AttribMask>(value);
    return stream;
}


} // namespace glsc

namespace glsc
{


std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value)
{
    stream << glscbinding::aux::bitfieldString<ClearBufferMask>(value);
    return stream;
}


} // namespace glsc



namespace glscbinding
{


template <>
std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLenum> & value)
{
    const auto name = aux::Meta::getString(value.value());
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
    auto name = aux::Meta::getString(value.value());
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLubyte *> & value)
{
    auto s = glscbinding::aux::wrapString(reinterpret_cast<const char*>(value.value()));
    stream.write(s.c_str(), static_cast<std::streamsize>(s.size()));

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLchar *> & value)
{
    auto s = glscbinding::aux::wrapString(reinterpret_cast<const char*>(value.value()));
    stream.write(s.c_str(), static_cast<std::streamsize>(s.size()));

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<glsc::GLuint_array_2> & value)
{
    std::stringstream ss;
    ss << "{ " << value.value()[0] << ", " << value.value()[1] << " }";
    stream << ss.str();

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

    if (typeid(*value) == typeid(Value<glsc::GLvoid *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLvoid *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLextension>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLextension>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLextension *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLextension *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLenum>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLenum>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLenum *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLenum *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLboolean>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLboolean>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLboolean *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLboolean *>*>(value);
    }


    // Omit glsc::GLbitfield


    // Omit glsc::GLvoid

    if (typeid(*value) == typeid(Value<glsc::GLbyte>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLbyte>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLbyte *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLbyte *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLshort>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLshort>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLshort *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLshort *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLint>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLint>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLint *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLint *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLclampx>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLclampx>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLclampx *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLclampx *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLubyte>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLubyte>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLubyte *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLubyte *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLushort>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLushort>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLushort *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLushort *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLuint>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLuint>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLuint *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLuint *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLsizei>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLsizei>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLsizei *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLsizei *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLfloat>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLfloat>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLfloat *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLfloat *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLclampf>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLclampf>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLclampf *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLclampf *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLdouble>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLdouble>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLdouble *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLdouble *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLclampd>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLclampd>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLclampd *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLclampd *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLeglClientBufferEXT>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLeglClientBufferEXT>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLeglClientBufferEXT *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLeglClientBufferEXT *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLeglImageOES>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLeglImageOES>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLeglImageOES *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLeglImageOES *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLchar>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLchar>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLchar *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLchar *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLcharARB>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLcharARB>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLcharARB *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLcharARB *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLhandleARB>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLhandleARB>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLhandleARB *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLhandleARB *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLhalfARB>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLhalfARB>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLhalfARB *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLhalfARB *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLhalf>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLhalf>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLhalf *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLhalf *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLfixed>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLfixed>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLfixed *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLfixed *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLintptr>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLintptr>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLintptr *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLintptr *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLsizeiptr>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLsizeiptr>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLsizeiptr *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLsizeiptr *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLint64>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLint64>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLint64 *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLint64 *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLuint64>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLuint64>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLuint64 *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLuint64 *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLintptrARB>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLintptrARB>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLintptrARB *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLintptrARB *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLsizeiptrARB>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLsizeiptrARB>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLsizeiptrARB *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLsizeiptrARB *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLint64EXT>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLint64EXT>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLint64EXT *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLint64EXT *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLuint64EXT>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLuint64EXT>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLuint64EXT *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLuint64EXT *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLsync>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLsync>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLsync *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLsync *>*>(value);
    }


    // Omit glsc::_cl_context


    // Omit glsc::_cl_event

    if (typeid(*value) == typeid(Value<glsc::GLDEBUGPROC>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLDEBUGPROC>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLDEBUGPROC *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLDEBUGPROC *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLDEBUGPROCARB>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLDEBUGPROCARB>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLDEBUGPROCARB *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLDEBUGPROCARB *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLDEBUGPROCKHR>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLDEBUGPROCKHR>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLDEBUGPROCKHR *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLDEBUGPROCKHR *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLubyte>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLubyte>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLubyte *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLubyte *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLfloat>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLfloat>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLfloat *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLfloat *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLintptr>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLintptr>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLintptr *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLintptr *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLsizeiptr>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLsizeiptr>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLsizeiptr *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLsizeiptr *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLDEBUGPROCAMD>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLDEBUGPROCAMD>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLDEBUGPROCAMD *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLDEBUGPROCAMD *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLhalfNV>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLhalfNV>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLhalfNV *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLhalfNV *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLvdpauSurfaceNV>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLvdpauSurfaceNV>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLvdpauSurfaceNV *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLvdpauSurfaceNV *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLVULKANPROCNV>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLVULKANPROCNV>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLVULKANPROCNV *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLVULKANPROCNV *>*>(value);
    }

    if (typeid(*value) == typeid(Value<glsc::GLuint_array_2>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLuint_array_2>*>(value);
    }
    if (typeid(*value) == typeid(Value<glsc::GLuint_array_2 *>))
    {
        return stream << *reinterpret_cast<const Value<glsc::GLuint_array_2 *>*>(value);
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

    // expect an AbstractValue with a pointer in first member
    return stream << *reinterpret_cast<const Value<void *>*>(value);
}


} // namespace glscbinding
