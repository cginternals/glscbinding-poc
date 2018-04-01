
#include <iostream>
#include <sstream>
#include <array>
#include <string>
#include <type_traits>

#include <GLFW/glfw3.h>

#include <glscbinding/Version.h>
#include <glscbinding/Binding.h>

#include <glscbinding/glsc/types.h>
#include <glscbinding/glsc/enum.h>
#include <glscbinding/glsc/functions.h>

#include <glscbinding-aux/Meta.h>
#include <glscbinding-aux/ContextInfo.h>
#include <glscbinding-aux/ValidVersions.h>
#include <glscbinding-aux/types_to_string.h>


using namespace glsc;
using namespace glscbinding;

namespace
{

    void error(int errnum, const char * errmsg)
    {
        std::cerr << errnum << ": " << errmsg << std::endl;
    }

    static const std::array<GLfloat  , 9> identity3{ { 1.f, 0.f, 0.f,  0.f, 1.f, 0.f,  0.f, 0.f, 1.f } };
    static const std::array<GLfloat  , 16> identity4{ { 1.f, 0.f, 0.f, 0.f,  0.f, 1.f, 0.f, 0.f,  0.f, 0.f, 1.f, 0.f,  0.f, 0.f, 0.f, 1.f } };

    template <typename T>
    void glrequest(const GLenum pname, T * data);

    template <>
    void glrequest<GLboolean>(const GLenum pname, GLboolean * data)
    {
        glGetBooleanv(pname, data);
    }

    template <>
    void glrequest<GLenum>(const GLenum pname, GLenum * data)
    {
        glGetIntegerv(pname, reinterpret_cast<GLint *>(data));
    }

    template <>
    void glrequest<GLint>(const GLenum pname, GLint * data)
    {
        glGetIntegerv(pname, data);
    }

    template <>
    void glrequest<GLfloat>(const GLenum pname, GLfloat * data)
    {
        glGetFloatv(pname, data);
    }

    //template <>
    //void glrequest<GLdouble>(const GLenum pname, GLdouble * data)
    //{
    //    glGetDoublev(pname, data);
    //}

    template <typename T, size_t count>
    struct identity
    {
        static bool valid(const std::array<T, count> &)
        {
            return false;
        }
        static std::string str()
        {
            return "";
        }
    };

    template <>
    struct identity<GLfloat  , 9>
    {
        static bool valid(const std::array<GLfloat  , 9> & data)
        {
            return identity3 == data;
        }
        static std::string str()
        {
            return "identity3";
        }
    };

    template <>
    struct identity<GLfloat  , 16>
    {
        static bool valid(const std::array<GLfloat  , 16> & data)
        {
            return identity4 == data;
        }
        static std::string str()
        {
            return "identity4";
        }
    };

    template <typename T, size_t count>
    std::string string(const std::array<T, count> & data)
    {
        if (identity<T, count>::valid(data))
        {
            return identity<T, count>::str();
        }

        std::stringstream stream;

        if (count == 1)
        {
            stream << data[0];

            return stream.str();
        }

        stream << "(";

        for (size_t i = 0; i < count; ++i)
        {
            stream << data[i];
            if (i + 1 < count)
                stream << ", ";
        }

        stream << ")";

        return stream.str();
    }

    template <typename T>
    std::string string(const std::vector<T> & data, size_t count)
    {
        std::stringstream stream;

            for (size_t i = 0; i < count; ++i)
            {
                stream << data[i];
                if (i + 1 < count)
                    stream << ", ";
            }

            if (data.size() == 1)
                stream << "NONE";

        return stream.str();
    }

    template <typename T, size_t count>
    bool request(const GLenum pname, std::array<T, count> & data)
    {
        glrequest<T>(pname, data.data());

        static const size_t MAX_PSTRING_LENGTH { 37 };    // actually, it's 44 / average is 23,
                                                          // but 37 works for 452 of 462 glGet enums (98%)

        const std::string pstring{ aux::Meta::getString(pname) };
        const std::string spaces{ std::string((aux::Meta::getString(pname).length() > 37) ? 0 : (MAX_PSTRING_LENGTH - pstring.length()), ' ') };

        if (glGetError() != GL_NO_ERROR)
        {
            std::cout << "\t" << pstring << spaces << " = NOT AVAILABLE";
            return false;
        }
        std::cout << "\t" << aux::Meta::getString(pname) << spaces << " = " << string<T, count>(data);
        return true;
    }

    template <typename T>
    bool request(const GLenum pname, std::vector<T> & data, size_t count)
    {
        glrequest<T>(pname, data.data());

        static const size_t MAX_PSTRING_LENGTH{ 37 };    // actually, it's 44 / average is 23,
        // but 37 works for 452 of 462 glGet enums (98%)

        const std::string pstring{ aux::Meta::getString(pname) };
        const std::string spaces{ std::string(MAX_PSTRING_LENGTH - pstring.length(), ' ') };

        if (glGetError() != GL_NO_ERROR)
        {
            std::cout << "\t" << pstring << spaces << " = NOT AVAILABLE";
            return false;
        }
        std::cout << "\t" << aux::Meta::getString(pname) << spaces << " = " << string<T>(data, count);
        return true;
    }

    template <typename T, size_t count>
    void requestState(const GLenum pname)
    {
        std::array<T, count> data;
        request<T, count>(pname, data);

        std::cout << std::endl;
    }

    enum class ExpectedType
    {
        Default
    ,   Minimum
    ,   Maximum
    };

    template <typename T, size_t count>
    void requestState(const GLenum pname, const std::array<T, count> & expected, ExpectedType expectedType = ExpectedType::Default)
    {
        std::array<T, count> data;
        
        if (!request<T, count>(pname, data))
        {
            std::cout << std::endl;
            return;
        }

        switch (expectedType)
        {
        case ExpectedType::Minimum:
            if (!expected.empty() && expected > data)
                std::cout << ", expected mimimum of " << string<T, count>(expected);
            break;

        case ExpectedType::Maximum:
            if (!expected.empty() && expected < data)
                std::cout << ", expected maximum of " << string<T, count>(expected);
            break;
        case ExpectedType::Default:
        default:
            if (!expected.empty() && expected != data)
                std::cout << ", expected " << string<T, count>(expected);
            break;

        }

        std::cout << std::endl;
    }

    template <typename T, GLenum count>
    void requestState(const GLenum pname)
    {
        int counti = 0;
        glGetIntegerv(count, &counti);

        std::vector<T> data(counti);
        request<T>(pname, data, counti);

        std::cout << std::endl;
    }
    
    template <typename T, size_t count, GLenum maxCount>
    void requestState(const GLenum pname, const std::array<T, count> & expected)
    {
        int maxCounti = 0;
        glGetIntegerv(maxCount, &maxCounti);

        std::array<T, count> data;
        for (int i = 0; i < maxCounti; ++i)
        {
            request<T, count>(static_cast<GLenum>(static_cast<int>(pname)+i), data);

            if (!expected.empty() && expected != data)
                std::cout << ", expected " << string<T, count>(expected);

            std::cout << std::endl;
        }
    }
}

int main(int argc, const char * argv[])
{
    if (!glfwInit())
        return 1;

    glfwSetErrorCallback(error);

    glfwDefaultWindowHints();
    glfwWindowHint(GLFW_VISIBLE, false);
    glfwWindowHint(GLFW_CLIENT_API, GLFW_OPENGL_ES_API);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

    GLFWwindow * window = glfwCreateWindow(320, 240, "", nullptr, nullptr);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }
    glfwHideWindow(window);

    glfwMakeContextCurrent(window);

    Binding::initialize([](const char * name) {
        return glfwGetProcAddress(name);
    });

    std::cout << std::endl << "[QUERYING STATE VALUES]" << std::endl;

    std::cout << std::endl << "Viewport States" << std::endl;
    requestState<GLint    , 4>(GL_VIEWPORT);
    requestState<GLint    , 2>(GL_MAX_VIEWPORT_DIMS);

    std::cout << std::endl << "Rasterization States" << std::endl;
    requestState<GLboolean, 1>(GL_CULL_FACE, { { GL_FALSE } });
    requestState<GLenum   , 1>(GL_CULL_FACE_MODE, { { GL_BACK } });
    requestState<GLenum   , 1>(GL_FRONT_FACE, { { GL_CCW } });
    requestState<GLfloat  , 1>(GL_POLYGON_OFFSET_FACTOR, { { 0 } });
    requestState<GLfloat  , 1>(GL_POLYGON_OFFSET_UNITS, { { 0 } });
    requestState<GLboolean, 1>(GL_POLYGON_OFFSET_FILL, { { GL_FALSE } });

    std::cout << std::endl << "Pixel Operations" << std::endl;
    requestState<GLboolean, 1>(GL_SCISSOR_TEST, { { GL_FALSE } });
    requestState<GLint    , 4>(GL_SCISSOR_BOX);
    requestState<GLboolean, 1>(GL_STENCIL_TEST, { { GL_FALSE } });
    requestState<GLenum   , 1>(GL_STENCIL_FUNC, { { GL_ALWAYS } });
    // requestState<GLint    , 1>(GL_STENCIL_VALUE_MASK, { { 1 } });
    requestState<GLint    , 1>(GL_STENCIL_REF, { { 0 } });
    requestState<GLenum   , 1>(GL_STENCIL_FAIL, { { GL_KEEP } });
    requestState<GLenum   , 1>(GL_STENCIL_PASS_DEPTH_FAIL, { { GL_KEEP } });
    requestState<GLenum   , 1>(GL_STENCIL_PASS_DEPTH_PASS, { { GL_KEEP } });
    requestState<GLboolean, 1>(GL_DEPTH_TEST, { { GL_FALSE } });
    requestState<GLenum   , 1>(GL_DEPTH_FUNC, { { GL_LESS } });
    requestState<GLboolean, 1>(GL_DITHER, { { GL_TRUE } });

    std::cout << std::endl << "Framebuffer Control States" << std::endl;
    requestState<GLboolean, 4>(GL_COLOR_WRITEMASK, { { GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE } });
    requestState<GLboolean, 1>(GL_DEPTH_WRITEMASK, { { GL_TRUE } });
    // requestState<GLint    , 1>(GL_STENCIL_WRITEMASK, { { 1 } });
    requestState<GLfloat  , 4>(GL_COLOR_CLEAR_VALUE, { { 0, 0, 0, 0 } });
    requestState<GLfloat  , 1>(GL_DEPTH_CLEAR_VALUE, { { 1 } });
    requestState<GLint    , 1>(GL_STENCIL_CLEAR_VALUE, { { 0 } });


    std::cout << std::endl << "Pixel Store States" << std::endl;
    requestState<GLint    , 1>(GL_PACK_ALIGNMENT, { { 4 } });
    requestState<GLint    , 1>(GL_UNPACK_ALIGNMENT, { { 4 } });

    std::cout << std::endl << "Implementation-Dependent States" << std::endl;
    requestState<GLint    , 1>(GL_MAX_RENDERBUFFER_SIZE);
    requestState<GLint    , 1>(GL_MAX_TEXTURE_SIZE, { { 64 } }, ExpectedType::Minimum);
    requestState<GLint    , 1>(GL_MAX_VARYING_VECTORS, { { 15 } }, ExpectedType::Minimum);
    requestState<GLint    , 1>(GL_NUM_COMPRESSED_TEXTURE_FORMATS, { { 4 } }, ExpectedType::Minimum);
    requestState<GLenum   , GL_NUM_COMPRESSED_TEXTURE_FORMATS>(GL_COMPRESSED_TEXTURE_FORMATS);
    requestState<GLint    , 1>(GL_NUM_PROGRAM_BINARY_FORMATS);
    requestState<GLenum   , GL_NUM_PROGRAM_BINARY_FORMATS>(GL_PROGRAM_BINARY_FORMATS);
    requestState<GLint    , 1>(GL_SUBPIXEL_BITS, { { 4 } }, ExpectedType::Minimum);

    std::cout << std::endl << "Implementation-Dependent Pixel-Depth States" << std::endl;
    requestState<GLint    , 1>(GL_RED_BITS);
    requestState<GLint    , 1>(GL_GREEN_BITS);
    requestState<GLint    , 1>(GL_BLUE_BITS);
    requestState<GLint    , 1>(GL_ALPHA_BITS);
    requestState<GLint    , 1>(GL_DEPTH_BITS);
    requestState<GLint    , 1>(GL_STENCIL_BITS);

    std::cout << std::endl << "Active Texture States" << std::endl;
    requestState<GLenum   , 1>(GL_ACTIVE_TEXTURE, { { GL_TEXTURE0 } });
    requestState<GLint    , 1>(GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS, { { 48 } }, ExpectedType::Minimum);

    std::cout << std::endl << "Line Width States" << std::endl;
    requestState<GLfloat  , 1>(GL_LINE_WIDTH, { { 1 } });
    requestState<GLfloat  , 2>(GL_ALIASED_LINE_WIDTH_RANGE);

    std::cout << std::endl << "Bind Buffer States" << std::endl;
    requestState<GLint    , 1>(GL_ARRAY_BUFFER_BINDING, { { 0 } });
    requestState<GLint    , 1>(GL_ELEMENT_ARRAY_BUFFER_BINDING, { { 0 } });

    std::cout << std::endl << "Blend Color States" << std::endl;
    requestState<GLfloat  , 4>(GL_BLEND_COLOR);

    std::cout << std::endl << "Blend Func States" << std::endl;
    requestState<GLenum   , 1>(GL_BLEND_DST_RGB, { { GL_ZERO } });
    requestState<GLenum   , 1>(GL_BLEND_DST_ALPHA, { { GL_ZERO } });
    requestState<GLenum   , 1>(GL_BLEND_SRC_RGB, { { GL_ONE } });
    requestState<GLenum   , 1>(GL_BLEND_SRC_ALPHA, { { GL_ONE } });
    requestState<GLboolean, 1>(GL_BLEND, { { GL_FALSE } });
    
    std::cout << std::endl << "Blend Equation Separate States" << std::endl;
    requestState<GLenum   , 1>(GL_BLEND_EQUATION_ALPHA);
    requestState<GLenum   , 1>(GL_BLEND_EQUATION_RGB);

    std::cout << std::endl << "Hint States" << std::endl;
    requestState<GLenum   , 1>(GL_GENERATE_MIPMAP_HINT, { { GL_DONT_CARE } });

    std::cout << std::endl << "Pixel Representation States" << std::endl;
    requestState<GLenum   , 1>(GL_IMPLEMENTATION_COLOR_READ_FORMAT);
    requestState<GLenum   , 1>(GL_IMPLEMENTATION_COLOR_READ_TYPE);

    std::cout << std::endl << "Fragment Shader States" << std::endl;
    requestState<GLint    , 1>(GL_MAX_FRAGMENT_UNIFORM_VECTORS, { { 256 } }, ExpectedType::Minimum);

    std::cout << std::endl << "Texture Max States" << std::endl;
    requestState<GLfloat  , 1>(GL_MAX_TEXTURE_IMAGE_UNITS, { { 16 } }, ExpectedType::Minimum);

    std::cout << std::endl << "Vertex Max States" << std::endl;
    requestState<GLint    , 1>(GL_MAX_VERTEX_ATTRIBS, { { 16 } }, ExpectedType::Minimum);
    requestState<GLint    , 1>(GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS, { { 16 } }, ExpectedType::Minimum);
    requestState<GLint    , 1>(GL_MAX_VERTEX_UNIFORM_VECTORS, { { 256 } }, ExpectedType::Minimum);

    std::cout << std::endl << "Sample States" << std::endl;
    requestState<GLint    , 1>(GL_SAMPLE_BUFFERS);
    requestState<GLboolean, 1>(GL_SAMPLE_COVERAGE_INVERT);
    requestState<GLfloat  , 1>(GL_SAMPLE_COVERAGE_VALUE);
    requestState<GLint    , 1>(GL_SAMPLES);

    std::cout << std::endl << "Stencil Separate States" << std::endl;
    requestState<GLenum   , 1>(GL_STENCIL_BACK_FAIL, { { GL_KEEP } });
    requestState<GLenum   , 1>(GL_STENCIL_BACK_FUNC, { { GL_ALWAYS } });
    requestState<GLenum   , 1>(GL_STENCIL_BACK_PASS_DEPTH_FAIL, { { GL_KEEP } });
    requestState<GLenum   , 1>(GL_STENCIL_BACK_PASS_DEPTH_PASS, { { GL_KEEP } });
    requestState<GLint    , 1>(GL_STENCIL_BACK_REF, { { 0 } });
    // requestState<GLint    , 1>(GL_STENCIL_BACK_VALUE_MASK, { { 1 } });
    // requestState<GLint    , 1>(GL_STENCIL_BACK_WRITEMASK, { { 1 } });

    std::cout << std::endl << "Texture Type States" << std::endl;
    requestState<GLboolean, 1>(GL_TEXTURE_2D, { { GL_FALSE } });
    requestState<GLint    , 1>(GL_TEXTURE_BINDING_2D, { { 0 } });

    std::cout << std::endl << "Ungrouped States" << std::endl;
    requestState<GLfloat  , 2>(GL_ALIASED_POINT_SIZE_RANGE);
    requestState<GLint    , 1>(GL_CURRENT_PROGRAM);
    requestState<GLfloat  , 2>(GL_DEPTH_RANGE, { { 0, 1 } });
    requestState<GLint    , 1>(GL_RENDERBUFFER_BINDING, { { 0 } });

    std::cout << std::endl << std::endl << "[QUERYING STATE VALUES - UNGROUPED/TODO]" << std::endl;


    std::cout << std::endl
        << "OpenGL SC Version:  " << aux::ContextInfo::version() << std::endl
        << "OpenGL SC Vendor:   " << aux::ContextInfo::vendor() << std::endl
        << "OpenGL SC Renderer: " << aux::ContextInfo::renderer() << std::endl
        << "OpenGL SC Revision: " << aux::Meta::glscRevision() << " (gl.xml)" << std::endl << std::endl;

    glfwTerminate();
    return 0;
}
