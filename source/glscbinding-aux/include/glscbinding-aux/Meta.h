
#pragma once


#include <string>
#include <utility>
#include <vector>
#include <set>
#include <cstdint>

#include <glscbinding-aux/glscbinding-aux_api.h>
#include <glscbinding-aux/glscbinding-aux_features.h>

#include <glscbinding/glsc/types.h>
#include <glscbinding/AbstractFunction.h>


namespace glscbinding
{


class Version;


namespace aux
{


/**
*  @brief
*    Provisioning of meta information about OpenGL extensions, functions and conversion of strings and symbols of the OpenGL API
*/
class GLSCBINDING_AUX_API Meta
{
public:
    /**
    *  @brief
    *    Deleted Constructor as all functions are static
    */
    Meta() = delete;

    /**
    *  @brief
    *    Returns the revision of the parsed gl.xml file
    *
    *  @return
    *    The revision of the parsed gl.xml file
    */
    static int glscRevision();

    /**
    *  @brief
    *    Converts a string into a bitfield symbol
    *
    *  @param[in] bitfield
    *     The string representation of the bitfield
    *
    *  @return
    *    The symbol identified through the bitfield string, 0 if failed
    */
    static glsc::GLbitfield getBitfield(const std::string & bitfield);
    
    /**
    *  @brief
    *    Returns the list of all bitfields known by the gl.xml
    *
    *  @return
    *    The list of all bitfields known by the gl.xml
    */
    static std::vector<glsc::GLbitfield> bitfields();

    /**
    *  @brief
    *    Converts a GLenum to a string
    *
    *  @param[in] glscenum
    *    The enum to convert
    *
    *  @return
    *    A string representation of the GLenum symbol name
    *
    *  @remark
    *    Beware, that some enums in the OpenGL API have different symbol names but identical enum values and that this function cannot differentiate between them
    */
    // static const std::string & getString(glsc::GLenum glscenum);
    
    /**
    *  @brief
    *    Converts a string to an enum symbol
    *
    *  @param[in] glscenum
    *    The string representation of the enum
    *
    *  @return
    *    The symbol identified through the enum string, 0 if failed
    */
    static glsc::GLenum getEnum(const std::string & glscenum);
    
    /**
    *  @brief
    *    Returns the list of all enums known by the gl.xml
    *
    *  @return
    *    The list of all enums known by the gl.xml
    */
    static std::set<glsc::GLenum> enums();

    /**
    *  @brief
    *    Converts a GLboolean to a string
    *
    *  @param[in] glscboolean
    *    The boolean to convert
    *
    *  @return
    *    A string representation of the GLboolean symbol name
    *
    *  @remark
    *    Can either be `GLSC_TRUE` or `GLSC_FALSE`
    */
    static const std::string & getString(const glsc::GLboolean & glscboolean);
    
    /**
    *  @brief
    *    Converts a string to a GLboolean symbol
    *
    *  @param[in] boolean
    *    The string representation of the GLboolean
    *
    *  @return
    *    The symbol identified through the boolean string, `GLSC_FALSE` if failed
    */
    static glsc::GLboolean getBoolean(const std::string & boolean);

    /**
    *  @brief
    *    Converts a GLextension to its string representation
    *
    *  @param[in] glscextension
    *    The extension to convert
    *
    *  @return
    *    The string representation of the extension
    */
    static const std::string & getString(glsc::GLextension glscextension);
    
    /**
    *  @brief
    *    Converts a string to an GLextension
    *
    *  @param[in] extension
    *    The string representation of the extension
    *
    *  @return
    *    The symbol identified through the extension string, 'UNKNOWN' if failed
    */
    static glsc::GLextension getExtension(const std::string & extension);

    /**
    *  @brief
    *    Returns the set of all extensions known by the gl.xml
    *
    *  @return
    *    The set of all extensions known by the gl.xml
    */
    static std::set<glsc::GLextension> extensions();
    
    /**
    *  @brief
    *    Returns the set of extensions that are required for by the given version
    *
    *  @param[in] version
    *    The version/feature to return the required extensions for.
    *    If an null version is given, all extensions that have no
    *    version/feature associated are returned instead
    *
    *  @return
    *    The set of extensions that should be supported for the given version.
    *    All non-versioned extensions can be queried by providing the null version
    */
    static const std::set<glsc::GLextension> extensions(const Version & version);

    /**
    *  @brief
    *    Returns the list of extensions that are requiring a function
    *
    *  @param[in] function
    *    The name of the function, including the 'glsc' prefix
    *
    *  @return
    *    The set of extensions that are requiring a function
    */
    static const std::set<glsc::GLextension> extensions(const std::string & glscfunction);

    /**
    *  @brief
    *    Returns the list of features that are requiring a function
    *
    *  @param[in] function
    *    The name of the function, including the 'glsc' prefix
    *
    *  @return
    *    The set of features that are requiring a function
    */
    static const std::set<Version> versions(const std::string & glscfunction);
    
    /**
    *  @brief
    *    Returns the set of functions that are required for the version
    *
    *  @param[in] version
    *    The version to return the required functions for
    *
    *  @return
    *    The set of functions that are required for the version
    *
    *  @remark
    *    This is exclusive (preceeding versions are ignored)
    */
    static const std::set<AbstractFunction *> functions(const Version & version);

    /**
    *  @brief
    *    Returns the set of functions that are required for the extension
    *
    *  @param[in] extension
    *    The extension to return the required functions for
    *
    *  @return
    *    The set of functions that are required for the extension
    */
    static const std::set<AbstractFunction *> functions(glsc::GLextension extension);

    /**
    *  @brief
    *    Returns the first Version (Feature) that required the extension
    *
    *  @param[in] glscextension
    *    The extension
    *
    *  @return
    *    The first Version (Feature) that required the extension
    */
    static const Version & version(glsc::GLextension glscextension);
    
    /**
    *  @brief
    *    Returns the list of all Versions (Features) known by the gl.xml
    *
    *  @return
    *    The list of all Versions (Features) known by the gl.xml
    */
    static const std::set<Version> & versions();

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] bitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(glsc::AttribMask glscbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] bitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(glsc::ClearBufferMask glscbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] bitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(glsc::FragmentShaderDestMaskATI glscbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] bitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(glsc::FragmentShaderDestModMaskATI glscbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] bitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(glsc::PathFontStyle glscbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] bitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(glsc::UnusedMask glscbitfield);


    /**
    *  @brief
    *    Convert enum to symbol name string representation
    *
    *  @param[in] enum
    *    The enum value
    *
    *  @return
    *    The shortest string representation of the value
    *
    *  @remark
    *    Beware, that some enums in the API have different symbol names but identical enum values and that this function cannot differentiate between them
    */
    static const std::string & getString(glsc::GLenum glscenum);

    /**
    *  @brief
    *    Convert enum to symbol name string representation
    *
    *  @param[in] enum
    *    The enum value
    *
    *  @return
    *    All string representations of the value
    */
    static std::vector<std::string> getStrings(glsc::GLenum glscenum);


private:
    /**
    *  @brief
    *    Returns the bucket index of an identifier used for the actual lookup into the compile-time maps
    *
    *  @param[in] identifier
    *    The identifier for the bucket lookup
    *
    *  @param[in] prefixLength
    *    The length of the prefix (e.g., 'glsc' or 'GLSC_') to omit to get the actual first character of the identifier
    *
    *  @return
    *    The bucket index of an identifier
    */
    static size_t alphabeticalGroupIndex(const std::string & identifier, std::uint8_t prefixLength);
};


} } // namespace glscbinding::aux