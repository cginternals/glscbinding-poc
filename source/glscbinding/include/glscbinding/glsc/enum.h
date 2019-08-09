
#pragma once


#include <glscbinding/noglsc.h>

#include <glscbinding/glscbinding_features.h>


namespace glsc
{


enum class GLenum : unsigned int
{
    // AlphaFunction

    GL_NEVER                                     = 0x0200,
    GL_LESS                                      = 0x0201,
    GL_EQUAL                                     = 0x0202,
    GL_LEQUAL                                    = 0x0203,
    GL_GREATER                                   = 0x0204,
    GL_NOTEQUAL                                  = 0x0205,
    GL_GEQUAL                                    = 0x0206,
    GL_ALWAYS                                    = 0x0207,

    // AttributeType

//  GL_SAMPLER_2D                                = 0x8B5E, // reuse UniformType

    // BlendEquationModeEXT

    GL_FUNC_ADD                                  = 0x8006,
    GL_FUNC_SUBTRACT                             = 0x800A,
    GL_FUNC_REVERSE_SUBTRACT                     = 0x800B,

    // BlendingFactor

//  GL_ZERO                                      = 0, // reuse StencilOp
    GL_SRC_COLOR                                 = 0x0300,
    GL_ONE_MINUS_SRC_COLOR                       = 0x0301,
    GL_SRC_ALPHA                                 = 0x0302,
    GL_ONE_MINUS_SRC_ALPHA                       = 0x0303,
    GL_DST_ALPHA                                 = 0x0304,
    GL_ONE_MINUS_DST_ALPHA                       = 0x0305,
    GL_DST_COLOR                                 = 0x0306,
    GL_ONE_MINUS_DST_COLOR                       = 0x0307,
    GL_SRC_ALPHA_SATURATE                        = 0x0308,
    GL_CONSTANT_COLOR                            = 0x8001,
    GL_ONE_MINUS_CONSTANT_COLOR                  = 0x8002,
    GL_CONSTANT_ALPHA                            = 0x8003,
    GL_ONE_MINUS_CONSTANT_ALPHA                  = 0x8004,
    GL_ONE                                       = 1,

    // BlitFramebufferFilter

//  GL_NEAREST                                   = 0x2600, // reuse TextureMagFilter
//  GL_LINEAR                                    = 0x2601, // reuse FogMode

    // BufferPNameARB

    GL_BUFFER_SIZE                               = 0x8764,
    GL_BUFFER_USAGE                              = 0x8765,

    // BufferStorageTarget

//  GL_ARRAY_BUFFER                              = 0x8892, // reuse BufferTargetARB
//  GL_ELEMENT_ARRAY_BUFFER                      = 0x8893, // reuse BufferTargetARB

    // BufferTargetARB

    GL_ARRAY_BUFFER                              = 0x8892,
    GL_ELEMENT_ARRAY_BUFFER                      = 0x8893,

    // BufferUsageARB

    GL_STREAM_DRAW                               = 0x88E0,
    GL_STATIC_DRAW                               = 0x88E4,
    GL_DYNAMIC_DRAW                              = 0x88E8,

    // CheckFramebufferStatusTarget

//  GL_FRAMEBUFFER                               = 0x8D40, // reuse FramebufferTarget

    // ColorBuffer

//  GL_NONE                                      = 0, // reuse CombinerBiasNV
//  GL_FRONT                                     = 0x0404, // reuse ColorMaterialFace
//  GL_BACK                                      = 0x0405, // reuse ColorMaterialFace
//  GL_FRONT_AND_BACK                            = 0x0408, // reuse ColorMaterialFace
//  GL_COLOR_ATTACHMENT0                         = 0x8CE0, // reuse DrawBufferMode

    // ColorMaterialFace

    GL_FRONT                                     = 0x0404,
    GL_BACK                                      = 0x0405,
    GL_FRONT_AND_BACK                            = 0x0408,

    // ColorPointerType

    GL_BYTE                                      = 0x1400,
    GL_UNSIGNED_BYTE                             = 0x1401,
    GL_SHORT                                     = 0x1402,
    GL_UNSIGNED_SHORT                            = 0x1403,
    GL_INT                                       = 0x1404,
    GL_UNSIGNED_INT                              = 0x1405,
    GL_FLOAT                                     = 0x1406,

    // CombinerBiasNV

    GL_NONE                                      = 0,

    // CombinerScaleNV

//  GL_NONE                                      = 0, // reuse CombinerBiasNV

    // CopyBufferSubDataTarget

//  GL_ARRAY_BUFFER                              = 0x8892, // reuse BufferTargetARB
//  GL_ELEMENT_ARRAY_BUFFER                      = 0x8893, // reuse BufferTargetARB

    // CopyImageSubDataTarget

//  GL_TEXTURE_2D                                = 0x0DE1, // reuse EnableCap
//  GL_RENDERBUFFER                              = 0x8D41, // reuse RenderbufferTarget

    // CullFaceMode

//  GL_FRONT                                     = 0x0404, // reuse ColorMaterialFace
//  GL_BACK                                      = 0x0405, // reuse ColorMaterialFace
//  GL_FRONT_AND_BACK                            = 0x0408, // reuse ColorMaterialFace

    // DebugSeverity

//  GL_DONT_CARE                                 = 0x1100, // reuse HintMode

    // DebugSource

//  GL_DONT_CARE                                 = 0x1100, // reuse HintMode

    // DebugType

//  GL_DONT_CARE                                 = 0x1100, // reuse HintMode

    // DepthFunction

//  GL_NEVER                                     = 0x0200, // reuse AlphaFunction
//  GL_LESS                                      = 0x0201, // reuse AlphaFunction
//  GL_EQUAL                                     = 0x0202, // reuse AlphaFunction
//  GL_LEQUAL                                    = 0x0203, // reuse AlphaFunction
//  GL_GREATER                                   = 0x0204, // reuse AlphaFunction
//  GL_NOTEQUAL                                  = 0x0205, // reuse AlphaFunction
//  GL_GEQUAL                                    = 0x0206, // reuse AlphaFunction
//  GL_ALWAYS                                    = 0x0207, // reuse AlphaFunction

    // DrawBufferMode

//  GL_NONE                                      = 0, // reuse CombinerBiasNV
//  GL_FRONT                                     = 0x0404, // reuse ColorMaterialFace
//  GL_BACK                                      = 0x0405, // reuse ColorMaterialFace
//  GL_FRONT_AND_BACK                            = 0x0408, // reuse ColorMaterialFace
    GL_COLOR_ATTACHMENT0                         = 0x8CE0,

    // DrawElementsType

//  GL_UNSIGNED_BYTE                             = 0x1401, // reuse ColorPointerType
//  GL_UNSIGNED_SHORT                            = 0x1403, // reuse ColorPointerType
//  GL_UNSIGNED_INT                              = 0x1405, // reuse ColorPointerType

    // EnableCap

    GL_CULL_FACE                                 = 0x0B44,
    GL_DEPTH_TEST                                = 0x0B71,
    GL_STENCIL_TEST                              = 0x0B90,
    GL_DITHER                                    = 0x0BD0,
    GL_BLEND                                     = 0x0BE2,
    GL_SCISSOR_TEST                              = 0x0C11,
    GL_TEXTURE_2D                                = 0x0DE1,
    GL_POLYGON_OFFSET_FILL                       = 0x8037,
    GL_SAMPLE_ALPHA_TO_COVERAGE                  = 0x809E,
    GL_SAMPLE_COVERAGE                           = 0x80A0,

    // ErrorCode

    GL_NO_ERROR                                  = 0,
    GL_INVALID_ENUM                              = 0x0500,
    GL_INVALID_VALUE                             = 0x0501,
    GL_INVALID_OPERATION                         = 0x0502,
    GL_OUT_OF_MEMORY                             = 0x0505,
    GL_INVALID_FRAMEBUFFER_OPERATION             = 0x0506,

    // FogCoordinatePointerType

//  GL_FLOAT                                     = 0x1406, // reuse ColorPointerType

    // FogMode

    GL_LINEAR                                    = 0x2601,

    // FogPointerTypeEXT

//  GL_FLOAT                                     = 0x1406, // reuse ColorPointerType

    // FogPointerTypeIBM

//  GL_FLOAT                                     = 0x1406, // reuse ColorPointerType

    // FramebufferAttachment

//  GL_COLOR_ATTACHMENT0                         = 0x8CE0, // reuse DrawBufferMode
    GL_DEPTH_ATTACHMENT                          = 0x8D00,

    // FramebufferAttachmentParameterName

    GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME        = 0x8CD1,
    GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL      = 0x8CD2,

    // FramebufferStatus

    GL_FRAMEBUFFER_UNDEFINED                     = 0x8219,
    GL_FRAMEBUFFER_COMPLETE                      = 0x8CD5,
    GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT         = 0x8CD6,
    GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT = 0x8CD7,
    GL_FRAMEBUFFER_UNSUPPORTED                   = 0x8CDD,

    // FramebufferTarget

    GL_FRAMEBUFFER                               = 0x8D40,

    // FrontFaceDirection

    GL_CW                                        = 0x0900,
    GL_CCW                                       = 0x0901,

    // GetFramebufferParameter

//  GL_SAMPLE_BUFFERS                            = 0x80A8, // reuse GetPName
//  GL_SAMPLES                                   = 0x80A9, // reuse GetPName
//  GL_IMPLEMENTATION_COLOR_READ_TYPE            = 0x8B9A, // reuse GetPName
//  GL_IMPLEMENTATION_COLOR_READ_FORMAT          = 0x8B9B, // reuse GetPName

    // GetPName

    GL_LINE_WIDTH                                = 0x0B21,
//  GL_CULL_FACE                                 = 0x0B44, // reuse EnableCap
    GL_CULL_FACE_MODE                            = 0x0B45,
    GL_FRONT_FACE                                = 0x0B46,
    GL_DEPTH_RANGE                               = 0x0B70,
//  GL_DEPTH_TEST                                = 0x0B71, // reuse EnableCap
    GL_DEPTH_WRITEMASK                           = 0x0B72,
    GL_DEPTH_CLEAR_VALUE                         = 0x0B73,
    GL_DEPTH_FUNC                                = 0x0B74,
//  GL_STENCIL_TEST                              = 0x0B90, // reuse EnableCap
    GL_STENCIL_CLEAR_VALUE                       = 0x0B91,
    GL_STENCIL_FUNC                              = 0x0B92,
    GL_STENCIL_VALUE_MASK                        = 0x0B93,
    GL_STENCIL_FAIL                              = 0x0B94,
    GL_STENCIL_PASS_DEPTH_FAIL                   = 0x0B95,
    GL_STENCIL_PASS_DEPTH_PASS                   = 0x0B96,
    GL_STENCIL_REF                               = 0x0B97,
    GL_STENCIL_WRITEMASK                         = 0x0B98,
    GL_VIEWPORT                                  = 0x0BA2,
//  GL_DITHER                                    = 0x0BD0, // reuse EnableCap
//  GL_BLEND                                     = 0x0BE2, // reuse EnableCap
    GL_SCISSOR_BOX                               = 0x0C10,
//  GL_SCISSOR_TEST                              = 0x0C11, // reuse EnableCap
    GL_COLOR_CLEAR_VALUE                         = 0x0C22,
    GL_COLOR_WRITEMASK                           = 0x0C23,
    GL_UNPACK_ALIGNMENT                          = 0x0CF5,
    GL_PACK_ALIGNMENT                            = 0x0D05,
    GL_MAX_TEXTURE_SIZE                          = 0x0D33,
    GL_MAX_VIEWPORT_DIMS                         = 0x0D3A,
    GL_SUBPIXEL_BITS                             = 0x0D50,
    GL_RED_BITS                                  = 0x0D52,
    GL_GREEN_BITS                                = 0x0D53,
    GL_BLUE_BITS                                 = 0x0D54,
    GL_ALPHA_BITS                                = 0x0D55,
    GL_DEPTH_BITS                                = 0x0D56,
    GL_STENCIL_BITS                              = 0x0D57,
//  GL_TEXTURE_2D                                = 0x0DE1, // reuse EnableCap
    GL_POLYGON_OFFSET_UNITS                      = 0x2A00,
    GL_BLEND_COLOR                               = 0x8005,
    GL_BLEND_EQUATION_RGB                        = 0x8009,
//  GL_POLYGON_OFFSET_FILL                       = 0x8037, // reuse EnableCap
    GL_POLYGON_OFFSET_FACTOR                     = 0x8038,
    GL_TEXTURE_BINDING_2D                        = 0x8069,
    GL_SAMPLE_BUFFERS                            = 0x80A8,
    GL_SAMPLES                                   = 0x80A9,
    GL_SAMPLE_COVERAGE_VALUE                     = 0x80AA,
    GL_SAMPLE_COVERAGE_INVERT                    = 0x80AB,
    GL_BLEND_DST_RGB                             = 0x80C8,
    GL_BLEND_SRC_RGB                             = 0x80C9,
    GL_BLEND_DST_ALPHA                           = 0x80CA,
    GL_BLEND_SRC_ALPHA                           = 0x80CB,
    GL_ALIASED_POINT_SIZE_RANGE                  = 0x846D,
    GL_ALIASED_LINE_WIDTH_RANGE                  = 0x846E,
    GL_ACTIVE_TEXTURE                            = 0x84E0,
    GL_MAX_RENDERBUFFER_SIZE                     = 0x84E8,
    GL_NUM_COMPRESSED_TEXTURE_FORMATS            = 0x86A2,
    GL_COMPRESSED_TEXTURE_FORMATS                = 0x86A3,
    GL_NUM_PROGRAM_BINARY_FORMATS                = 0x87FE,
    GL_PROGRAM_BINARY_FORMATS                    = 0x87FF,
    GL_STENCIL_BACK_FUNC                         = 0x8800,
    GL_STENCIL_BACK_FAIL                         = 0x8801,
    GL_STENCIL_BACK_PASS_DEPTH_FAIL              = 0x8802,
    GL_STENCIL_BACK_PASS_DEPTH_PASS              = 0x8803,
    GL_BLEND_EQUATION_ALPHA                      = 0x883D,
    GL_MAX_VERTEX_ATTRIBS                        = 0x8869,
    GL_MAX_TEXTURE_IMAGE_UNITS                   = 0x8872,
    GL_ARRAY_BUFFER_BINDING                      = 0x8894,
    GL_ELEMENT_ARRAY_BUFFER_BINDING              = 0x8895,
    GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS            = 0x8B4C,
    GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS          = 0x8B4D,
    GL_CURRENT_PROGRAM                           = 0x8B8D,
    GL_IMPLEMENTATION_COLOR_READ_TYPE            = 0x8B9A,
    GL_IMPLEMENTATION_COLOR_READ_FORMAT          = 0x8B9B,
    GL_STENCIL_BACK_REF                          = 0x8CA3,
    GL_STENCIL_BACK_VALUE_MASK                   = 0x8CA4,
    GL_STENCIL_BACK_WRITEMASK                    = 0x8CA5,
    GL_RENDERBUFFER_BINDING                      = 0x8CA7,
    GL_MAX_VERTEX_UNIFORM_VECTORS                = 0x8DFB,
    GL_MAX_VARYING_VECTORS                       = 0x8DFC,
    GL_MAX_FRAGMENT_UNIFORM_VECTORS              = 0x8DFD,

    // GetTextureParameter

    GL_TEXTURE_MAG_FILTER                        = 0x2800,
    GL_TEXTURE_MIN_FILTER                        = 0x2801,
    GL_TEXTURE_WRAP_S                            = 0x2802,
    GL_TEXTURE_WRAP_T                            = 0x2803,

    // GlslTypeToken

//  GL_INT                                       = 0x1404, // reuse ColorPointerType
//  GL_UNSIGNED_INT                              = 0x1405, // reuse ColorPointerType
//  GL_FLOAT                                     = 0x1406, // reuse ColorPointerType
//  GL_SAMPLER_2D                                = 0x8B5E, // reuse UniformType

    // GraphicsResetStatus

//  GL_NO_ERROR                                  = 0, // reuse ErrorCode
    GL_GUILTY_CONTEXT_RESET                      = 0x8253,
    GL_INNOCENT_CONTEXT_RESET                    = 0x8254,
    GL_UNKNOWN_CONTEXT_RESET                     = 0x8255,

    // HintMode

    GL_DONT_CARE                                 = 0x1100,
    GL_FASTEST                                   = 0x1101,
    GL_NICEST                                    = 0x1102,

    // HintTarget

    GL_GENERATE_MIPMAP_HINT                      = 0x8192,
    GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES       = 0x8B8B,

    // IndexPointerType

//  GL_SHORT                                     = 0x1402, // reuse ColorPointerType
//  GL_INT                                       = 0x1404, // reuse ColorPointerType
//  GL_FLOAT                                     = 0x1406, // reuse ColorPointerType

    // InternalFormat

//  GL_RED                                       = 0x1903, // reuse PixelFormat
//  GL_RGB                                       = 0x1907, // reuse PixelFormat
//  GL_RGBA                                      = 0x1908, // reuse PixelFormat
    GL_RGB8                                      = 0x8051,
    GL_RGB8_OES                                  = 0x8051,
    GL_RGBA4                                     = 0x8056,
    GL_RGB5_A1                                   = 0x8057,
    GL_RGBA8                                     = 0x8058,
    GL_RGBA8_OES                                 = 0x8058,
    GL_DEPTH_COMPONENT16                         = 0x81A5,
    GL_DEPTH_COMPONENT24_OES                     = 0x81A6,
    GL_DEPTH_COMPONENT32_OES                     = 0x81A7,
//  GL_RG                                        = 0x8227, // reuse PixelFormat
    GL_R8                                        = 0x8229,
    GL_RG8                                       = 0x822B,
    GL_COMPRESSED_RGB_S3TC_DXT1_EXT              = 0x83F0,
    GL_COMPRESSED_RGBA_S3TC_DXT1_EXT             = 0x83F1,
    GL_COMPRESSED_RGBA_S3TC_DXT3_EXT             = 0x83F2,
    GL_COMPRESSED_RGBA_S3TC_DXT5_EXT             = 0x83F3,

    // InternalFormatPName

//  GL_SAMPLES                                   = 0x80A9, // reuse GetPName

    // LightEnvModeSGIX

    GL_REPLACE                                   = 0x1E01,

    // ListNameType

//  GL_BYTE                                      = 0x1400, // reuse ColorPointerType
//  GL_UNSIGNED_BYTE                             = 0x1401, // reuse ColorPointerType
//  GL_SHORT                                     = 0x1402, // reuse ColorPointerType
//  GL_UNSIGNED_SHORT                            = 0x1403, // reuse ColorPointerType
//  GL_INT                                       = 0x1404, // reuse ColorPointerType
//  GL_UNSIGNED_INT                              = 0x1405, // reuse ColorPointerType
//  GL_FLOAT                                     = 0x1406, // reuse ColorPointerType

    // LogicOp

    GL_INVERT                                    = 0x150A,

    // MaterialFace

//  GL_FRONT                                     = 0x0404, // reuse ColorMaterialFace
//  GL_BACK                                      = 0x0405, // reuse ColorMaterialFace
//  GL_FRONT_AND_BACK                            = 0x0408, // reuse ColorMaterialFace

    // MatrixMode

    GL_TEXTURE                                   = 0x1702,

    // NormalPointerType

//  GL_BYTE                                      = 0x1400, // reuse ColorPointerType
//  GL_SHORT                                     = 0x1402, // reuse ColorPointerType
//  GL_INT                                       = 0x1404, // reuse ColorPointerType
//  GL_FLOAT                                     = 0x1406, // reuse ColorPointerType

    // ObjectIdentifier

//  GL_TEXTURE                                   = 0x1702, // reuse MatrixMode
//  GL_FRAMEBUFFER                               = 0x8D40, // reuse FramebufferTarget
//  GL_RENDERBUFFER                              = 0x8D41, // reuse RenderbufferTarget

    // PathFillMode

//  GL_INVERT                                    = 0x150A, // reuse LogicOp

    // PathGenMode

//  GL_NONE                                      = 0, // reuse CombinerBiasNV

    // PathTransformType

//  GL_NONE                                      = 0, // reuse CombinerBiasNV

    // PixelFormat

//  GL_UNSIGNED_SHORT                            = 0x1403, // reuse ColorPointerType
//  GL_UNSIGNED_INT                              = 0x1405, // reuse ColorPointerType
    GL_RED                                       = 0x1903,
    GL_RGB                                       = 0x1907,
    GL_RGBA                                      = 0x1908,
    GL_RG                                        = 0x8227,

    // PixelStoreParameter

//  GL_UNPACK_ALIGNMENT                          = 0x0CF5, // reuse GetPName
//  GL_PACK_ALIGNMENT                            = 0x0D05, // reuse GetPName

    // PixelTexGenMode

//  GL_NONE                                      = 0, // reuse CombinerBiasNV
//  GL_RGB                                       = 0x1907, // reuse PixelFormat
//  GL_RGBA                                      = 0x1908, // reuse PixelFormat

    // PixelType

//  GL_BYTE                                      = 0x1400, // reuse ColorPointerType
//  GL_UNSIGNED_BYTE                             = 0x1401, // reuse ColorPointerType
//  GL_SHORT                                     = 0x1402, // reuse ColorPointerType
//  GL_UNSIGNED_SHORT                            = 0x1403, // reuse ColorPointerType
//  GL_INT                                       = 0x1404, // reuse ColorPointerType
//  GL_UNSIGNED_INT                              = 0x1405, // reuse ColorPointerType
//  GL_FLOAT                                     = 0x1406, // reuse ColorPointerType
    GL_UNSIGNED_SHORT_4_4_4_4                    = 0x8033,
    GL_UNSIGNED_SHORT_5_5_5_1                    = 0x8034,

    // PrecisionType

    GL_LOW_FLOAT                                 = 0x8DF0,
    GL_MEDIUM_FLOAT                              = 0x8DF1,
    GL_HIGH_FLOAT                                = 0x8DF2,
    GL_LOW_INT                                   = 0x8DF3,
    GL_MEDIUM_INT                                = 0x8DF4,
    GL_HIGH_INT                                  = 0x8DF5,

    // PrimitiveType

    GL_POINTS                                    = 0x0000,
    GL_LINES                                     = 0x0001,
    GL_LINE_LOOP                                 = 0x0002,
    GL_LINE_STRIP                                = 0x0003,
    GL_TRIANGLES                                 = 0x0004,
    GL_TRIANGLE_STRIP                            = 0x0005,
    GL_TRIANGLE_FAN                              = 0x0006,

    // ProgramPropertyARB

    GL_LINK_STATUS                               = 0x8B82,

    // ReadBufferMode

//  GL_FRONT                                     = 0x0404, // reuse ColorMaterialFace
//  GL_BACK                                      = 0x0405, // reuse ColorMaterialFace
//  GL_COLOR_ATTACHMENT0                         = 0x8CE0, // reuse DrawBufferMode

    // RenderbufferParameterName

    GL_RENDERBUFFER_WIDTH                        = 0x8D42,
    GL_RENDERBUFFER_HEIGHT                       = 0x8D43,
    GL_RENDERBUFFER_INTERNAL_FORMAT              = 0x8D44,
    GL_RENDERBUFFER_RED_SIZE                     = 0x8D50,
    GL_RENDERBUFFER_GREEN_SIZE                   = 0x8D51,
    GL_RENDERBUFFER_BLUE_SIZE                    = 0x8D52,
    GL_RENDERBUFFER_ALPHA_SIZE                   = 0x8D53,
    GL_RENDERBUFFER_DEPTH_SIZE                   = 0x8D54,
    GL_RENDERBUFFER_STENCIL_SIZE                 = 0x8D55,

    // RenderbufferTarget

    GL_RENDERBUFFER                              = 0x8D41,

    // SamplerParameterI

//  GL_TEXTURE_MAG_FILTER                        = 0x2800, // reuse GetTextureParameter
//  GL_TEXTURE_MIN_FILTER                        = 0x2801, // reuse GetTextureParameter
//  GL_TEXTURE_WRAP_S                            = 0x2802, // reuse GetTextureParameter
//  GL_TEXTURE_WRAP_T                            = 0x2803, // reuse GetTextureParameter

    // StencilFaceDirection

//  GL_FRONT                                     = 0x0404, // reuse ColorMaterialFace
//  GL_BACK                                      = 0x0405, // reuse ColorMaterialFace
//  GL_FRONT_AND_BACK                            = 0x0408, // reuse ColorMaterialFace

    // StencilFunction

//  GL_NEVER                                     = 0x0200, // reuse AlphaFunction
//  GL_LESS                                      = 0x0201, // reuse AlphaFunction
//  GL_EQUAL                                     = 0x0202, // reuse AlphaFunction
//  GL_LEQUAL                                    = 0x0203, // reuse AlphaFunction
//  GL_GREATER                                   = 0x0204, // reuse AlphaFunction
//  GL_NOTEQUAL                                  = 0x0205, // reuse AlphaFunction
//  GL_GEQUAL                                    = 0x0206, // reuse AlphaFunction
//  GL_ALWAYS                                    = 0x0207, // reuse AlphaFunction

    // StencilOp

    GL_ZERO                                      = 0,
//  GL_INVERT                                    = 0x150A, // reuse LogicOp
    GL_KEEP                                      = 0x1E00,
//  GL_REPLACE                                   = 0x1E01, // reuse LightEnvModeSGIX
    GL_INCR                                      = 0x1E02,
    GL_DECR                                      = 0x1E03,
    GL_INCR_WRAP                                 = 0x8507,
    GL_DECR_WRAP                                 = 0x8508,

    // StringName

    GL_VENDOR                                    = 0x1F00,
    GL_RENDERER                                  = 0x1F01,
    GL_VERSION                                   = 0x1F02,
    GL_EXTENSIONS                                = 0x1F03,
    GL_SHADING_LANGUAGE_VERSION                  = 0x8B8C,

    // TexCoordPointerType

//  GL_SHORT                                     = 0x1402, // reuse ColorPointerType
//  GL_INT                                       = 0x1404, // reuse ColorPointerType
//  GL_FLOAT                                     = 0x1406, // reuse ColorPointerType

    // TextureCompareMode

//  GL_NONE                                      = 0, // reuse CombinerBiasNV

    // TextureEnvMode

//  GL_BLEND                                     = 0x0BE2, // reuse EnableCap

    // TextureMagFilter

    GL_NEAREST                                   = 0x2600,
//  GL_LINEAR                                    = 0x2601, // reuse FogMode

    // TextureMinFilter

//  GL_NEAREST                                   = 0x2600, // reuse TextureMagFilter
//  GL_LINEAR                                    = 0x2601, // reuse FogMode
    GL_NEAREST_MIPMAP_NEAREST                    = 0x2700,
    GL_LINEAR_MIPMAP_NEAREST                     = 0x2701,
    GL_NEAREST_MIPMAP_LINEAR                     = 0x2702,
    GL_LINEAR_MIPMAP_LINEAR                      = 0x2703,

    // TextureParameterName

//  GL_TEXTURE_MAG_FILTER                        = 0x2800, // reuse GetTextureParameter
//  GL_TEXTURE_MIN_FILTER                        = 0x2801, // reuse GetTextureParameter
//  GL_TEXTURE_WRAP_S                            = 0x2802, // reuse GetTextureParameter
//  GL_TEXTURE_WRAP_T                            = 0x2803, // reuse GetTextureParameter

    // TextureSwizzle

//  GL_ZERO                                      = 0, // reuse StencilOp
//  GL_RED                                       = 0x1903, // reuse PixelFormat
//  GL_ONE                                       = 1, // reuse BlendingFactor

    // TextureTarget

//  GL_TEXTURE_2D                                = 0x0DE1, // reuse EnableCap

    // TextureUnit

    GL_TEXTURE0                                  = 0x84C0,
    GL_TEXTURE1                                  = 0x84C1,
    GL_TEXTURE2                                  = 0x84C2,
    GL_TEXTURE3                                  = 0x84C3,
    GL_TEXTURE4                                  = 0x84C4,
    GL_TEXTURE5                                  = 0x84C5,
    GL_TEXTURE6                                  = 0x84C6,
    GL_TEXTURE7                                  = 0x84C7,
    GL_TEXTURE8                                  = 0x84C8,
    GL_TEXTURE9                                  = 0x84C9,
    GL_TEXTURE10                                 = 0x84CA,
    GL_TEXTURE11                                 = 0x84CB,
    GL_TEXTURE12                                 = 0x84CC,
    GL_TEXTURE13                                 = 0x84CD,
    GL_TEXTURE14                                 = 0x84CE,
    GL_TEXTURE15                                 = 0x84CF,
    GL_TEXTURE16                                 = 0x84D0,
    GL_TEXTURE17                                 = 0x84D1,
    GL_TEXTURE18                                 = 0x84D2,
    GL_TEXTURE19                                 = 0x84D3,
    GL_TEXTURE20                                 = 0x84D4,
    GL_TEXTURE21                                 = 0x84D5,
    GL_TEXTURE22                                 = 0x84D6,
    GL_TEXTURE23                                 = 0x84D7,
    GL_TEXTURE24                                 = 0x84D8,
    GL_TEXTURE25                                 = 0x84D9,
    GL_TEXTURE26                                 = 0x84DA,
    GL_TEXTURE27                                 = 0x84DB,
    GL_TEXTURE28                                 = 0x84DC,
    GL_TEXTURE29                                 = 0x84DD,
    GL_TEXTURE30                                 = 0x84DE,
    GL_TEXTURE31                                 = 0x84DF,

    // TextureWrapMode

//  GL_LINEAR_MIPMAP_LINEAR                      = 0x2703, // reuse TextureMinFilter
    GL_REPEAT                                    = 0x2901,
    GL_CLAMP_TO_EDGE                             = 0x812F,
    GL_MIRRORED_REPEAT                           = 0x8370,

    // UNGROUPED

    GL_CONTEXT_LOST                              = 0x0507,
    GL_BLEND_EQUATION                            = 0x8009,
    GL_LOSE_CONTEXT_ON_RESET                     = 0x8252,
    GL_RESET_NOTIFICATION_STRATEGY               = 0x8256,
    GL_UNSIGNED_SHORT_5_6_5                      = 0x8363,
    GL_FRAMEBUFFER_BINDING                       = 0x8CA6,
    GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE        = 0x8CD0,
    GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS         = 0x8CD9,
    GL_STENCIL_ATTACHMENT                        = 0x8D20,
    GL_STENCIL_INDEX8                            = 0x8D48,
    GL_RGB565                                    = 0x8D62,
    GL_CONTEXT_ROBUST_ACCESS                     = 0x90F3,
    GL_TEXTURE_IMMUTABLE_FORMAT                  = 0x912F,

    // UniformType

//  GL_INT                                       = 0x1404, // reuse ColorPointerType
//  GL_UNSIGNED_INT                              = 0x1405, // reuse ColorPointerType
//  GL_FLOAT                                     = 0x1406, // reuse ColorPointerType
    GL_SAMPLER_2D                                = 0x8B5E,

    // VertexArrayPName

//  GL_VERTEX_ATTRIB_ARRAY_ENABLED               = 0x8622, // reuse VertexAttribPropertyARB
//  GL_VERTEX_ATTRIB_ARRAY_SIZE                  = 0x8623, // reuse VertexAttribPropertyARB
//  GL_VERTEX_ATTRIB_ARRAY_STRIDE                = 0x8624, // reuse VertexAttribPropertyARB
//  GL_VERTEX_ATTRIB_ARRAY_TYPE                  = 0x8625, // reuse VertexAttribPropertyARB
//  GL_VERTEX_ATTRIB_ARRAY_NORMALIZED            = 0x886A, // reuse VertexAttribPropertyARB

    // VertexAttribEnum

//  GL_VERTEX_ATTRIB_ARRAY_ENABLED               = 0x8622, // reuse VertexAttribPropertyARB
//  GL_VERTEX_ATTRIB_ARRAY_SIZE                  = 0x8623, // reuse VertexAttribPropertyARB
//  GL_VERTEX_ATTRIB_ARRAY_STRIDE                = 0x8624, // reuse VertexAttribPropertyARB
//  GL_VERTEX_ATTRIB_ARRAY_TYPE                  = 0x8625, // reuse VertexAttribPropertyARB
//  GL_CURRENT_VERTEX_ATTRIB                     = 0x8626, // reuse VertexAttribPropertyARB
//  GL_VERTEX_ATTRIB_ARRAY_NORMALIZED            = 0x886A, // reuse VertexAttribPropertyARB
//  GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING        = 0x889F, // reuse VertexAttribPropertyARB

    // VertexAttribIType

//  GL_BYTE                                      = 0x1400, // reuse ColorPointerType
//  GL_UNSIGNED_BYTE                             = 0x1401, // reuse ColorPointerType
//  GL_SHORT                                     = 0x1402, // reuse ColorPointerType
//  GL_UNSIGNED_SHORT                            = 0x1403, // reuse ColorPointerType
//  GL_INT                                       = 0x1404, // reuse ColorPointerType
//  GL_UNSIGNED_INT                              = 0x1405, // reuse ColorPointerType

    // VertexAttribPointerPropertyARB

    GL_VERTEX_ATTRIB_ARRAY_POINTER               = 0x8645,

    // VertexAttribPointerType

//  GL_BYTE                                      = 0x1400, // reuse ColorPointerType
//  GL_UNSIGNED_BYTE                             = 0x1401, // reuse ColorPointerType
//  GL_SHORT                                     = 0x1402, // reuse ColorPointerType
//  GL_UNSIGNED_SHORT                            = 0x1403, // reuse ColorPointerType
//  GL_INT                                       = 0x1404, // reuse ColorPointerType
//  GL_UNSIGNED_INT                              = 0x1405, // reuse ColorPointerType
//  GL_FLOAT                                     = 0x1406, // reuse ColorPointerType

    // VertexAttribPropertyARB

    GL_VERTEX_ATTRIB_ARRAY_ENABLED               = 0x8622,
    GL_VERTEX_ATTRIB_ARRAY_SIZE                  = 0x8623,
    GL_VERTEX_ATTRIB_ARRAY_STRIDE                = 0x8624,
    GL_VERTEX_ATTRIB_ARRAY_TYPE                  = 0x8625,
    GL_CURRENT_VERTEX_ATTRIB                     = 0x8626,
    GL_VERTEX_ATTRIB_ARRAY_NORMALIZED            = 0x886A,
    GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING        = 0x889F,

    // VertexAttribType

//  GL_BYTE                                      = 0x1400, // reuse ColorPointerType
//  GL_UNSIGNED_BYTE                             = 0x1401, // reuse ColorPointerType
//  GL_SHORT                                     = 0x1402, // reuse ColorPointerType
//  GL_UNSIGNED_SHORT                            = 0x1403, // reuse ColorPointerType
//  GL_INT                                       = 0x1404, // reuse ColorPointerType
//  GL_UNSIGNED_INT                              = 0x1405, // reuse ColorPointerType
//  GL_FLOAT                                     = 0x1406, // reuse ColorPointerType

    // VertexBufferObjectParameter

//  GL_BUFFER_SIZE                               = 0x8764, // reuse BufferPNameARB
//  GL_BUFFER_USAGE                              = 0x8765, // reuse BufferPNameARB

    // VertexBufferObjectUsage

//  GL_STREAM_DRAW                               = 0x88E0, // reuse BufferUsageARB
//  GL_STATIC_DRAW                               = 0x88E4, // reuse BufferUsageARB
//  GL_DYNAMIC_DRAW                              = 0x88E8, // reuse BufferUsageARB

    // VertexPointerType

//  GL_SHORT                                     = 0x1402, // reuse ColorPointerType
//  GL_INT                                       = 0x1404, // reuse ColorPointerType
//  GL_FLOAT                                     = 0x1406, // reuse ColorPointerType

};


// import enums to namespace

// AlphaFunction

GLSCBINDING_CONSTEXPR static const GLenum GL_NEVER = GLenum::GL_NEVER;
GLSCBINDING_CONSTEXPR static const GLenum GL_LESS = GLenum::GL_LESS;
GLSCBINDING_CONSTEXPR static const GLenum GL_EQUAL = GLenum::GL_EQUAL;
GLSCBINDING_CONSTEXPR static const GLenum GL_LEQUAL = GLenum::GL_LEQUAL;
GLSCBINDING_CONSTEXPR static const GLenum GL_GREATER = GLenum::GL_GREATER;
GLSCBINDING_CONSTEXPR static const GLenum GL_NOTEQUAL = GLenum::GL_NOTEQUAL;
GLSCBINDING_CONSTEXPR static const GLenum GL_GEQUAL = GLenum::GL_GEQUAL;
GLSCBINDING_CONSTEXPR static const GLenum GL_ALWAYS = GLenum::GL_ALWAYS;

// AttributeType

// GLSCBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D = GLenum::GL_SAMPLER_2D; // reuse UniformType

// BlendEquationModeEXT

GLSCBINDING_CONSTEXPR static const GLenum GL_FUNC_ADD = GLenum::GL_FUNC_ADD;
GLSCBINDING_CONSTEXPR static const GLenum GL_FUNC_SUBTRACT = GLenum::GL_FUNC_SUBTRACT;
GLSCBINDING_CONSTEXPR static const GLenum GL_FUNC_REVERSE_SUBTRACT = GLenum::GL_FUNC_REVERSE_SUBTRACT;

// BlendingFactor

// GLSCBINDING_CONSTEXPR static const GLenum GL_ZERO = GLenum::GL_ZERO; // reuse StencilOp
GLSCBINDING_CONSTEXPR static const GLenum GL_SRC_COLOR = GLenum::GL_SRC_COLOR;
GLSCBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_SRC_COLOR = GLenum::GL_ONE_MINUS_SRC_COLOR;
GLSCBINDING_CONSTEXPR static const GLenum GL_SRC_ALPHA = GLenum::GL_SRC_ALPHA;
GLSCBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_SRC_ALPHA = GLenum::GL_ONE_MINUS_SRC_ALPHA;
GLSCBINDING_CONSTEXPR static const GLenum GL_DST_ALPHA = GLenum::GL_DST_ALPHA;
GLSCBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_DST_ALPHA = GLenum::GL_ONE_MINUS_DST_ALPHA;
GLSCBINDING_CONSTEXPR static const GLenum GL_DST_COLOR = GLenum::GL_DST_COLOR;
GLSCBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_DST_COLOR = GLenum::GL_ONE_MINUS_DST_COLOR;
GLSCBINDING_CONSTEXPR static const GLenum GL_SRC_ALPHA_SATURATE = GLenum::GL_SRC_ALPHA_SATURATE;
GLSCBINDING_CONSTEXPR static const GLenum GL_CONSTANT_COLOR = GLenum::GL_CONSTANT_COLOR;
GLSCBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_CONSTANT_COLOR = GLenum::GL_ONE_MINUS_CONSTANT_COLOR;
GLSCBINDING_CONSTEXPR static const GLenum GL_CONSTANT_ALPHA = GLenum::GL_CONSTANT_ALPHA;
GLSCBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_CONSTANT_ALPHA = GLenum::GL_ONE_MINUS_CONSTANT_ALPHA;
GLSCBINDING_CONSTEXPR static const GLenum GL_ONE = GLenum::GL_ONE;

// BlitFramebufferFilter

// GLSCBINDING_CONSTEXPR static const GLenum GL_NEAREST = GLenum::GL_NEAREST; // reuse TextureMagFilter
// GLSCBINDING_CONSTEXPR static const GLenum GL_LINEAR = GLenum::GL_LINEAR; // reuse FogMode

// BufferPNameARB

GLSCBINDING_CONSTEXPR static const GLenum GL_BUFFER_SIZE = GLenum::GL_BUFFER_SIZE;
GLSCBINDING_CONSTEXPR static const GLenum GL_BUFFER_USAGE = GLenum::GL_BUFFER_USAGE;

// BufferStorageTarget

// GLSCBINDING_CONSTEXPR static const GLenum GL_ARRAY_BUFFER = GLenum::GL_ARRAY_BUFFER; // reuse BufferTargetARB
// GLSCBINDING_CONSTEXPR static const GLenum GL_ELEMENT_ARRAY_BUFFER = GLenum::GL_ELEMENT_ARRAY_BUFFER; // reuse BufferTargetARB

// BufferTargetARB

GLSCBINDING_CONSTEXPR static const GLenum GL_ARRAY_BUFFER = GLenum::GL_ARRAY_BUFFER;
GLSCBINDING_CONSTEXPR static const GLenum GL_ELEMENT_ARRAY_BUFFER = GLenum::GL_ELEMENT_ARRAY_BUFFER;

// BufferUsageARB

GLSCBINDING_CONSTEXPR static const GLenum GL_STREAM_DRAW = GLenum::GL_STREAM_DRAW;
GLSCBINDING_CONSTEXPR static const GLenum GL_STATIC_DRAW = GLenum::GL_STATIC_DRAW;
GLSCBINDING_CONSTEXPR static const GLenum GL_DYNAMIC_DRAW = GLenum::GL_DYNAMIC_DRAW;

// CheckFramebufferStatusTarget

// GLSCBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER = GLenum::GL_FRAMEBUFFER; // reuse FramebufferTarget

// ColorBuffer

// GLSCBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse CombinerBiasNV
// GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorMaterialFace
// GLSCBINDING_CONSTEXPR static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorMaterialFace
// GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK; // reuse ColorMaterialFace
// GLSCBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT0 = GLenum::GL_COLOR_ATTACHMENT0; // reuse DrawBufferMode

// ColorMaterialFace

GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT = GLenum::GL_FRONT;
GLSCBINDING_CONSTEXPR static const GLenum GL_BACK = GLenum::GL_BACK;
GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK;

// ColorPointerType

GLSCBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE;
GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE;
GLSCBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT;
GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT;
GLSCBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT;
GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT;
GLSCBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT;

// CombinerBiasNV

GLSCBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE;

// CombinerScaleNV

// GLSCBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse CombinerBiasNV

// CopyBufferSubDataTarget

// GLSCBINDING_CONSTEXPR static const GLenum GL_ARRAY_BUFFER = GLenum::GL_ARRAY_BUFFER; // reuse BufferTargetARB
// GLSCBINDING_CONSTEXPR static const GLenum GL_ELEMENT_ARRAY_BUFFER = GLenum::GL_ELEMENT_ARRAY_BUFFER; // reuse BufferTargetARB

// CopyImageSubDataTarget

// GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_2D = GLenum::GL_TEXTURE_2D; // reuse EnableCap
// GLSCBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER = GLenum::GL_RENDERBUFFER; // reuse RenderbufferTarget

// CullFaceMode

// GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorMaterialFace
// GLSCBINDING_CONSTEXPR static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorMaterialFace
// GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK; // reuse ColorMaterialFace

// DebugSeverity

// GLSCBINDING_CONSTEXPR static const GLenum GL_DONT_CARE = GLenum::GL_DONT_CARE; // reuse HintMode

// DebugSource

// GLSCBINDING_CONSTEXPR static const GLenum GL_DONT_CARE = GLenum::GL_DONT_CARE; // reuse HintMode

// DebugType

// GLSCBINDING_CONSTEXPR static const GLenum GL_DONT_CARE = GLenum::GL_DONT_CARE; // reuse HintMode

// DepthFunction

// GLSCBINDING_CONSTEXPR static const GLenum GL_NEVER = GLenum::GL_NEVER; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_LESS = GLenum::GL_LESS; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_EQUAL = GLenum::GL_EQUAL; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_LEQUAL = GLenum::GL_LEQUAL; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_GREATER = GLenum::GL_GREATER; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_NOTEQUAL = GLenum::GL_NOTEQUAL; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_GEQUAL = GLenum::GL_GEQUAL; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_ALWAYS = GLenum::GL_ALWAYS; // reuse AlphaFunction

// DrawBufferMode

// GLSCBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse CombinerBiasNV
// GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorMaterialFace
// GLSCBINDING_CONSTEXPR static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorMaterialFace
// GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK; // reuse ColorMaterialFace
GLSCBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT0 = GLenum::GL_COLOR_ATTACHMENT0;

// DrawElementsType

// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType

// EnableCap

GLSCBINDING_CONSTEXPR static const GLenum GL_CULL_FACE = GLenum::GL_CULL_FACE;
GLSCBINDING_CONSTEXPR static const GLenum GL_DEPTH_TEST = GLenum::GL_DEPTH_TEST;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_TEST = GLenum::GL_STENCIL_TEST;
GLSCBINDING_CONSTEXPR static const GLenum GL_DITHER = GLenum::GL_DITHER;
GLSCBINDING_CONSTEXPR static const GLenum GL_BLEND = GLenum::GL_BLEND;
GLSCBINDING_CONSTEXPR static const GLenum GL_SCISSOR_TEST = GLenum::GL_SCISSOR_TEST;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_2D = GLenum::GL_TEXTURE_2D;
GLSCBINDING_CONSTEXPR static const GLenum GL_POLYGON_OFFSET_FILL = GLenum::GL_POLYGON_OFFSET_FILL;
GLSCBINDING_CONSTEXPR static const GLenum GL_SAMPLE_ALPHA_TO_COVERAGE = GLenum::GL_SAMPLE_ALPHA_TO_COVERAGE;
GLSCBINDING_CONSTEXPR static const GLenum GL_SAMPLE_COVERAGE = GLenum::GL_SAMPLE_COVERAGE;

// ErrorCode

GLSCBINDING_CONSTEXPR static const GLenum GL_NO_ERROR = GLenum::GL_NO_ERROR;
GLSCBINDING_CONSTEXPR static const GLenum GL_INVALID_ENUM = GLenum::GL_INVALID_ENUM;
GLSCBINDING_CONSTEXPR static const GLenum GL_INVALID_VALUE = GLenum::GL_INVALID_VALUE;
GLSCBINDING_CONSTEXPR static const GLenum GL_INVALID_OPERATION = GLenum::GL_INVALID_OPERATION;
GLSCBINDING_CONSTEXPR static const GLenum GL_OUT_OF_MEMORY = GLenum::GL_OUT_OF_MEMORY;
GLSCBINDING_CONSTEXPR static const GLenum GL_INVALID_FRAMEBUFFER_OPERATION = GLenum::GL_INVALID_FRAMEBUFFER_OPERATION;

// FogCoordinatePointerType

// GLSCBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// FogMode

GLSCBINDING_CONSTEXPR static const GLenum GL_LINEAR = GLenum::GL_LINEAR;

// FogPointerTypeEXT

// GLSCBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// FogPointerTypeIBM

// GLSCBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// FramebufferAttachment

// GLSCBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT0 = GLenum::GL_COLOR_ATTACHMENT0; // reuse DrawBufferMode
GLSCBINDING_CONSTEXPR static const GLenum GL_DEPTH_ATTACHMENT = GLenum::GL_DEPTH_ATTACHMENT;

// FramebufferAttachmentParameterName

GLSCBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME = GLenum::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;
GLSCBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL = GLenum::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;

// FramebufferStatus

GLSCBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_UNDEFINED = GLenum::GL_FRAMEBUFFER_UNDEFINED;
GLSCBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_COMPLETE = GLenum::GL_FRAMEBUFFER_COMPLETE;
GLSCBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT = GLenum::GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
GLSCBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT = GLenum::GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;
GLSCBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_UNSUPPORTED = GLenum::GL_FRAMEBUFFER_UNSUPPORTED;

// FramebufferTarget

GLSCBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER = GLenum::GL_FRAMEBUFFER;

// FrontFaceDirection

GLSCBINDING_CONSTEXPR static const GLenum GL_CW = GLenum::GL_CW;
GLSCBINDING_CONSTEXPR static const GLenum GL_CCW = GLenum::GL_CCW;

// GetFramebufferParameter

// GLSCBINDING_CONSTEXPR static const GLenum GL_SAMPLE_BUFFERS = GLenum::GL_SAMPLE_BUFFERS; // reuse GetPName
// GLSCBINDING_CONSTEXPR static const GLenum GL_SAMPLES = GLenum::GL_SAMPLES; // reuse GetPName
// GLSCBINDING_CONSTEXPR static const GLenum GL_IMPLEMENTATION_COLOR_READ_TYPE = GLenum::GL_IMPLEMENTATION_COLOR_READ_TYPE; // reuse GetPName
// GLSCBINDING_CONSTEXPR static const GLenum GL_IMPLEMENTATION_COLOR_READ_FORMAT = GLenum::GL_IMPLEMENTATION_COLOR_READ_FORMAT; // reuse GetPName

// GetPName

GLSCBINDING_CONSTEXPR static const GLenum GL_LINE_WIDTH = GLenum::GL_LINE_WIDTH;
// GLSCBINDING_CONSTEXPR static const GLenum GL_CULL_FACE = GLenum::GL_CULL_FACE; // reuse EnableCap
GLSCBINDING_CONSTEXPR static const GLenum GL_CULL_FACE_MODE = GLenum::GL_CULL_FACE_MODE;
GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT_FACE = GLenum::GL_FRONT_FACE;
GLSCBINDING_CONSTEXPR static const GLenum GL_DEPTH_RANGE = GLenum::GL_DEPTH_RANGE;
// GLSCBINDING_CONSTEXPR static const GLenum GL_DEPTH_TEST = GLenum::GL_DEPTH_TEST; // reuse EnableCap
GLSCBINDING_CONSTEXPR static const GLenum GL_DEPTH_WRITEMASK = GLenum::GL_DEPTH_WRITEMASK;
GLSCBINDING_CONSTEXPR static const GLenum GL_DEPTH_CLEAR_VALUE = GLenum::GL_DEPTH_CLEAR_VALUE;
GLSCBINDING_CONSTEXPR static const GLenum GL_DEPTH_FUNC = GLenum::GL_DEPTH_FUNC;
// GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_TEST = GLenum::GL_STENCIL_TEST; // reuse EnableCap
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_CLEAR_VALUE = GLenum::GL_STENCIL_CLEAR_VALUE;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_FUNC = GLenum::GL_STENCIL_FUNC;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_VALUE_MASK = GLenum::GL_STENCIL_VALUE_MASK;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_FAIL = GLenum::GL_STENCIL_FAIL;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_PASS_DEPTH_FAIL = GLenum::GL_STENCIL_PASS_DEPTH_FAIL;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_PASS_DEPTH_PASS = GLenum::GL_STENCIL_PASS_DEPTH_PASS;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_REF = GLenum::GL_STENCIL_REF;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_WRITEMASK = GLenum::GL_STENCIL_WRITEMASK;
GLSCBINDING_CONSTEXPR static const GLenum GL_VIEWPORT = GLenum::GL_VIEWPORT;
// GLSCBINDING_CONSTEXPR static const GLenum GL_DITHER = GLenum::GL_DITHER; // reuse EnableCap
// GLSCBINDING_CONSTEXPR static const GLenum GL_BLEND = GLenum::GL_BLEND; // reuse EnableCap
GLSCBINDING_CONSTEXPR static const GLenum GL_SCISSOR_BOX = GLenum::GL_SCISSOR_BOX;
// GLSCBINDING_CONSTEXPR static const GLenum GL_SCISSOR_TEST = GLenum::GL_SCISSOR_TEST; // reuse EnableCap
GLSCBINDING_CONSTEXPR static const GLenum GL_COLOR_CLEAR_VALUE = GLenum::GL_COLOR_CLEAR_VALUE;
GLSCBINDING_CONSTEXPR static const GLenum GL_COLOR_WRITEMASK = GLenum::GL_COLOR_WRITEMASK;
GLSCBINDING_CONSTEXPR static const GLenum GL_UNPACK_ALIGNMENT = GLenum::GL_UNPACK_ALIGNMENT;
GLSCBINDING_CONSTEXPR static const GLenum GL_PACK_ALIGNMENT = GLenum::GL_PACK_ALIGNMENT;
GLSCBINDING_CONSTEXPR static const GLenum GL_MAX_TEXTURE_SIZE = GLenum::GL_MAX_TEXTURE_SIZE;
GLSCBINDING_CONSTEXPR static const GLenum GL_MAX_VIEWPORT_DIMS = GLenum::GL_MAX_VIEWPORT_DIMS;
GLSCBINDING_CONSTEXPR static const GLenum GL_SUBPIXEL_BITS = GLenum::GL_SUBPIXEL_BITS;
GLSCBINDING_CONSTEXPR static const GLenum GL_RED_BITS = GLenum::GL_RED_BITS;
GLSCBINDING_CONSTEXPR static const GLenum GL_GREEN_BITS = GLenum::GL_GREEN_BITS;
GLSCBINDING_CONSTEXPR static const GLenum GL_BLUE_BITS = GLenum::GL_BLUE_BITS;
GLSCBINDING_CONSTEXPR static const GLenum GL_ALPHA_BITS = GLenum::GL_ALPHA_BITS;
GLSCBINDING_CONSTEXPR static const GLenum GL_DEPTH_BITS = GLenum::GL_DEPTH_BITS;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_BITS = GLenum::GL_STENCIL_BITS;
// GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_2D = GLenum::GL_TEXTURE_2D; // reuse EnableCap
GLSCBINDING_CONSTEXPR static const GLenum GL_POLYGON_OFFSET_UNITS = GLenum::GL_POLYGON_OFFSET_UNITS;
GLSCBINDING_CONSTEXPR static const GLenum GL_BLEND_COLOR = GLenum::GL_BLEND_COLOR;
GLSCBINDING_CONSTEXPR static const GLenum GL_BLEND_EQUATION_RGB = GLenum::GL_BLEND_EQUATION_RGB;
// GLSCBINDING_CONSTEXPR static const GLenum GL_POLYGON_OFFSET_FILL = GLenum::GL_POLYGON_OFFSET_FILL; // reuse EnableCap
GLSCBINDING_CONSTEXPR static const GLenum GL_POLYGON_OFFSET_FACTOR = GLenum::GL_POLYGON_OFFSET_FACTOR;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_2D = GLenum::GL_TEXTURE_BINDING_2D;
GLSCBINDING_CONSTEXPR static const GLenum GL_SAMPLE_BUFFERS = GLenum::GL_SAMPLE_BUFFERS;
GLSCBINDING_CONSTEXPR static const GLenum GL_SAMPLES = GLenum::GL_SAMPLES;
GLSCBINDING_CONSTEXPR static const GLenum GL_SAMPLE_COVERAGE_VALUE = GLenum::GL_SAMPLE_COVERAGE_VALUE;
GLSCBINDING_CONSTEXPR static const GLenum GL_SAMPLE_COVERAGE_INVERT = GLenum::GL_SAMPLE_COVERAGE_INVERT;
GLSCBINDING_CONSTEXPR static const GLenum GL_BLEND_DST_RGB = GLenum::GL_BLEND_DST_RGB;
GLSCBINDING_CONSTEXPR static const GLenum GL_BLEND_SRC_RGB = GLenum::GL_BLEND_SRC_RGB;
GLSCBINDING_CONSTEXPR static const GLenum GL_BLEND_DST_ALPHA = GLenum::GL_BLEND_DST_ALPHA;
GLSCBINDING_CONSTEXPR static const GLenum GL_BLEND_SRC_ALPHA = GLenum::GL_BLEND_SRC_ALPHA;
GLSCBINDING_CONSTEXPR static const GLenum GL_ALIASED_POINT_SIZE_RANGE = GLenum::GL_ALIASED_POINT_SIZE_RANGE;
GLSCBINDING_CONSTEXPR static const GLenum GL_ALIASED_LINE_WIDTH_RANGE = GLenum::GL_ALIASED_LINE_WIDTH_RANGE;
GLSCBINDING_CONSTEXPR static const GLenum GL_ACTIVE_TEXTURE = GLenum::GL_ACTIVE_TEXTURE;
GLSCBINDING_CONSTEXPR static const GLenum GL_MAX_RENDERBUFFER_SIZE = GLenum::GL_MAX_RENDERBUFFER_SIZE;
GLSCBINDING_CONSTEXPR static const GLenum GL_NUM_COMPRESSED_TEXTURE_FORMATS = GLenum::GL_NUM_COMPRESSED_TEXTURE_FORMATS;
GLSCBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_TEXTURE_FORMATS = GLenum::GL_COMPRESSED_TEXTURE_FORMATS;
GLSCBINDING_CONSTEXPR static const GLenum GL_NUM_PROGRAM_BINARY_FORMATS = GLenum::GL_NUM_PROGRAM_BINARY_FORMATS;
GLSCBINDING_CONSTEXPR static const GLenum GL_PROGRAM_BINARY_FORMATS = GLenum::GL_PROGRAM_BINARY_FORMATS;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_FUNC = GLenum::GL_STENCIL_BACK_FUNC;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_FAIL = GLenum::GL_STENCIL_BACK_FAIL;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_PASS_DEPTH_FAIL = GLenum::GL_STENCIL_BACK_PASS_DEPTH_FAIL;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_PASS_DEPTH_PASS = GLenum::GL_STENCIL_BACK_PASS_DEPTH_PASS;
GLSCBINDING_CONSTEXPR static const GLenum GL_BLEND_EQUATION_ALPHA = GLenum::GL_BLEND_EQUATION_ALPHA;
GLSCBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_ATTRIBS = GLenum::GL_MAX_VERTEX_ATTRIBS;
GLSCBINDING_CONSTEXPR static const GLenum GL_MAX_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_TEXTURE_IMAGE_UNITS;
GLSCBINDING_CONSTEXPR static const GLenum GL_ARRAY_BUFFER_BINDING = GLenum::GL_ARRAY_BUFFER_BINDING;
GLSCBINDING_CONSTEXPR static const GLenum GL_ELEMENT_ARRAY_BUFFER_BINDING = GLenum::GL_ELEMENT_ARRAY_BUFFER_BINDING;
GLSCBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS;
GLSCBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS;
GLSCBINDING_CONSTEXPR static const GLenum GL_CURRENT_PROGRAM = GLenum::GL_CURRENT_PROGRAM;
GLSCBINDING_CONSTEXPR static const GLenum GL_IMPLEMENTATION_COLOR_READ_TYPE = GLenum::GL_IMPLEMENTATION_COLOR_READ_TYPE;
GLSCBINDING_CONSTEXPR static const GLenum GL_IMPLEMENTATION_COLOR_READ_FORMAT = GLenum::GL_IMPLEMENTATION_COLOR_READ_FORMAT;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_REF = GLenum::GL_STENCIL_BACK_REF;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_VALUE_MASK = GLenum::GL_STENCIL_BACK_VALUE_MASK;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_WRITEMASK = GLenum::GL_STENCIL_BACK_WRITEMASK;
GLSCBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_BINDING = GLenum::GL_RENDERBUFFER_BINDING;
GLSCBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_UNIFORM_VECTORS = GLenum::GL_MAX_VERTEX_UNIFORM_VECTORS;
GLSCBINDING_CONSTEXPR static const GLenum GL_MAX_VARYING_VECTORS = GLenum::GL_MAX_VARYING_VECTORS;
GLSCBINDING_CONSTEXPR static const GLenum GL_MAX_FRAGMENT_UNIFORM_VECTORS = GLenum::GL_MAX_FRAGMENT_UNIFORM_VECTORS;

// GetTextureParameter

GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MAG_FILTER = GLenum::GL_TEXTURE_MAG_FILTER;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MIN_FILTER = GLenum::GL_TEXTURE_MIN_FILTER;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_S = GLenum::GL_TEXTURE_WRAP_S;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_T = GLenum::GL_TEXTURE_WRAP_T;

// GlslTypeToken

// GLSCBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D = GLenum::GL_SAMPLER_2D; // reuse UniformType

// GraphicsResetStatus

// GLSCBINDING_CONSTEXPR static const GLenum GL_NO_ERROR = GLenum::GL_NO_ERROR; // reuse ErrorCode
GLSCBINDING_CONSTEXPR static const GLenum GL_GUILTY_CONTEXT_RESET = GLenum::GL_GUILTY_CONTEXT_RESET;
GLSCBINDING_CONSTEXPR static const GLenum GL_INNOCENT_CONTEXT_RESET = GLenum::GL_INNOCENT_CONTEXT_RESET;
GLSCBINDING_CONSTEXPR static const GLenum GL_UNKNOWN_CONTEXT_RESET = GLenum::GL_UNKNOWN_CONTEXT_RESET;

// HintMode

GLSCBINDING_CONSTEXPR static const GLenum GL_DONT_CARE = GLenum::GL_DONT_CARE;
GLSCBINDING_CONSTEXPR static const GLenum GL_FASTEST = GLenum::GL_FASTEST;
GLSCBINDING_CONSTEXPR static const GLenum GL_NICEST = GLenum::GL_NICEST;

// HintTarget

GLSCBINDING_CONSTEXPR static const GLenum GL_GENERATE_MIPMAP_HINT = GLenum::GL_GENERATE_MIPMAP_HINT;
GLSCBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES = GLenum::GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES;

// IndexPointerType

// GLSCBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// InternalFormat

// GLSCBINDING_CONSTEXPR static const GLenum GL_RED = GLenum::GL_RED; // reuse PixelFormat
// GLSCBINDING_CONSTEXPR static const GLenum GL_RGB = GLenum::GL_RGB; // reuse PixelFormat
// GLSCBINDING_CONSTEXPR static const GLenum GL_RGBA = GLenum::GL_RGBA; // reuse PixelFormat
GLSCBINDING_CONSTEXPR static const GLenum GL_RGB8 = GLenum::GL_RGB8;
GLSCBINDING_CONSTEXPR static const GLenum GL_RGB8_OES = GLenum::GL_RGB8_OES;
GLSCBINDING_CONSTEXPR static const GLenum GL_RGBA4 = GLenum::GL_RGBA4;
GLSCBINDING_CONSTEXPR static const GLenum GL_RGB5_A1 = GLenum::GL_RGB5_A1;
GLSCBINDING_CONSTEXPR static const GLenum GL_RGBA8 = GLenum::GL_RGBA8;
GLSCBINDING_CONSTEXPR static const GLenum GL_RGBA8_OES = GLenum::GL_RGBA8_OES;
GLSCBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT16 = GLenum::GL_DEPTH_COMPONENT16;
GLSCBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT24_OES = GLenum::GL_DEPTH_COMPONENT24_OES;
GLSCBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT32_OES = GLenum::GL_DEPTH_COMPONENT32_OES;
// GLSCBINDING_CONSTEXPR static const GLenum GL_RG = GLenum::GL_RG; // reuse PixelFormat
GLSCBINDING_CONSTEXPR static const GLenum GL_R8 = GLenum::GL_R8;
GLSCBINDING_CONSTEXPR static const GLenum GL_RG8 = GLenum::GL_RG8;
GLSCBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGB_S3TC_DXT1_EXT = GLenum::GL_COMPRESSED_RGB_S3TC_DXT1_EXT;
GLSCBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_S3TC_DXT1_EXT = GLenum::GL_COMPRESSED_RGBA_S3TC_DXT1_EXT;
GLSCBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_S3TC_DXT3_EXT = GLenum::GL_COMPRESSED_RGBA_S3TC_DXT3_EXT;
GLSCBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_S3TC_DXT5_EXT = GLenum::GL_COMPRESSED_RGBA_S3TC_DXT5_EXT;

// InternalFormatPName

// GLSCBINDING_CONSTEXPR static const GLenum GL_SAMPLES = GLenum::GL_SAMPLES; // reuse GetPName

// LightEnvModeSGIX

GLSCBINDING_CONSTEXPR static const GLenum GL_REPLACE = GLenum::GL_REPLACE;

// ListNameType

// GLSCBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// LogicOp

GLSCBINDING_CONSTEXPR static const GLenum GL_INVERT = GLenum::GL_INVERT;

// MaterialFace

// GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorMaterialFace
// GLSCBINDING_CONSTEXPR static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorMaterialFace
// GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK; // reuse ColorMaterialFace

// MatrixMode

GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE = GLenum::GL_TEXTURE;

// NormalPointerType

// GLSCBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// ObjectIdentifier

// GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE = GLenum::GL_TEXTURE; // reuse MatrixMode
// GLSCBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER = GLenum::GL_FRAMEBUFFER; // reuse FramebufferTarget
// GLSCBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER = GLenum::GL_RENDERBUFFER; // reuse RenderbufferTarget

// PathFillMode

// GLSCBINDING_CONSTEXPR static const GLenum GL_INVERT = GLenum::GL_INVERT; // reuse LogicOp

// PathGenMode

// GLSCBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse CombinerBiasNV

// PathTransformType

// GLSCBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse CombinerBiasNV

// PixelFormat

// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
GLSCBINDING_CONSTEXPR static const GLenum GL_RED = GLenum::GL_RED;
GLSCBINDING_CONSTEXPR static const GLenum GL_RGB = GLenum::GL_RGB;
GLSCBINDING_CONSTEXPR static const GLenum GL_RGBA = GLenum::GL_RGBA;
GLSCBINDING_CONSTEXPR static const GLenum GL_RG = GLenum::GL_RG;

// PixelStoreParameter

// GLSCBINDING_CONSTEXPR static const GLenum GL_UNPACK_ALIGNMENT = GLenum::GL_UNPACK_ALIGNMENT; // reuse GetPName
// GLSCBINDING_CONSTEXPR static const GLenum GL_PACK_ALIGNMENT = GLenum::GL_PACK_ALIGNMENT; // reuse GetPName

// PixelTexGenMode

// GLSCBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse CombinerBiasNV
// GLSCBINDING_CONSTEXPR static const GLenum GL_RGB = GLenum::GL_RGB; // reuse PixelFormat
// GLSCBINDING_CONSTEXPR static const GLenum GL_RGBA = GLenum::GL_RGBA; // reuse PixelFormat

// PixelType

// GLSCBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT_4_4_4_4 = GLenum::GL_UNSIGNED_SHORT_4_4_4_4;
GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT_5_5_5_1 = GLenum::GL_UNSIGNED_SHORT_5_5_5_1;

// PrecisionType

GLSCBINDING_CONSTEXPR static const GLenum GL_LOW_FLOAT = GLenum::GL_LOW_FLOAT;
GLSCBINDING_CONSTEXPR static const GLenum GL_MEDIUM_FLOAT = GLenum::GL_MEDIUM_FLOAT;
GLSCBINDING_CONSTEXPR static const GLenum GL_HIGH_FLOAT = GLenum::GL_HIGH_FLOAT;
GLSCBINDING_CONSTEXPR static const GLenum GL_LOW_INT = GLenum::GL_LOW_INT;
GLSCBINDING_CONSTEXPR static const GLenum GL_MEDIUM_INT = GLenum::GL_MEDIUM_INT;
GLSCBINDING_CONSTEXPR static const GLenum GL_HIGH_INT = GLenum::GL_HIGH_INT;

// PrimitiveType

GLSCBINDING_CONSTEXPR static const GLenum GL_POINTS = GLenum::GL_POINTS;
GLSCBINDING_CONSTEXPR static const GLenum GL_LINES = GLenum::GL_LINES;
GLSCBINDING_CONSTEXPR static const GLenum GL_LINE_LOOP = GLenum::GL_LINE_LOOP;
GLSCBINDING_CONSTEXPR static const GLenum GL_LINE_STRIP = GLenum::GL_LINE_STRIP;
GLSCBINDING_CONSTEXPR static const GLenum GL_TRIANGLES = GLenum::GL_TRIANGLES;
GLSCBINDING_CONSTEXPR static const GLenum GL_TRIANGLE_STRIP = GLenum::GL_TRIANGLE_STRIP;
GLSCBINDING_CONSTEXPR static const GLenum GL_TRIANGLE_FAN = GLenum::GL_TRIANGLE_FAN;

// ProgramPropertyARB

GLSCBINDING_CONSTEXPR static const GLenum GL_LINK_STATUS = GLenum::GL_LINK_STATUS;

// ReadBufferMode

// GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorMaterialFace
// GLSCBINDING_CONSTEXPR static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorMaterialFace
// GLSCBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT0 = GLenum::GL_COLOR_ATTACHMENT0; // reuse DrawBufferMode

// RenderbufferParameterName

GLSCBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_WIDTH = GLenum::GL_RENDERBUFFER_WIDTH;
GLSCBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_HEIGHT = GLenum::GL_RENDERBUFFER_HEIGHT;
GLSCBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_INTERNAL_FORMAT = GLenum::GL_RENDERBUFFER_INTERNAL_FORMAT;
GLSCBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_RED_SIZE = GLenum::GL_RENDERBUFFER_RED_SIZE;
GLSCBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_GREEN_SIZE = GLenum::GL_RENDERBUFFER_GREEN_SIZE;
GLSCBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_BLUE_SIZE = GLenum::GL_RENDERBUFFER_BLUE_SIZE;
GLSCBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_ALPHA_SIZE = GLenum::GL_RENDERBUFFER_ALPHA_SIZE;
GLSCBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_DEPTH_SIZE = GLenum::GL_RENDERBUFFER_DEPTH_SIZE;
GLSCBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_STENCIL_SIZE = GLenum::GL_RENDERBUFFER_STENCIL_SIZE;

// RenderbufferTarget

GLSCBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER = GLenum::GL_RENDERBUFFER;

// SamplerParameterI

// GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MAG_FILTER = GLenum::GL_TEXTURE_MAG_FILTER; // reuse GetTextureParameter
// GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MIN_FILTER = GLenum::GL_TEXTURE_MIN_FILTER; // reuse GetTextureParameter
// GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_S = GLenum::GL_TEXTURE_WRAP_S; // reuse GetTextureParameter
// GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_T = GLenum::GL_TEXTURE_WRAP_T; // reuse GetTextureParameter

// StencilFaceDirection

// GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorMaterialFace
// GLSCBINDING_CONSTEXPR static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorMaterialFace
// GLSCBINDING_CONSTEXPR static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK; // reuse ColorMaterialFace

// StencilFunction

// GLSCBINDING_CONSTEXPR static const GLenum GL_NEVER = GLenum::GL_NEVER; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_LESS = GLenum::GL_LESS; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_EQUAL = GLenum::GL_EQUAL; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_LEQUAL = GLenum::GL_LEQUAL; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_GREATER = GLenum::GL_GREATER; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_NOTEQUAL = GLenum::GL_NOTEQUAL; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_GEQUAL = GLenum::GL_GEQUAL; // reuse AlphaFunction
// GLSCBINDING_CONSTEXPR static const GLenum GL_ALWAYS = GLenum::GL_ALWAYS; // reuse AlphaFunction

// StencilOp

GLSCBINDING_CONSTEXPR static const GLenum GL_ZERO = GLenum::GL_ZERO;
// GLSCBINDING_CONSTEXPR static const GLenum GL_INVERT = GLenum::GL_INVERT; // reuse LogicOp
GLSCBINDING_CONSTEXPR static const GLenum GL_KEEP = GLenum::GL_KEEP;
// GLSCBINDING_CONSTEXPR static const GLenum GL_REPLACE = GLenum::GL_REPLACE; // reuse LightEnvModeSGIX
GLSCBINDING_CONSTEXPR static const GLenum GL_INCR = GLenum::GL_INCR;
GLSCBINDING_CONSTEXPR static const GLenum GL_DECR = GLenum::GL_DECR;
GLSCBINDING_CONSTEXPR static const GLenum GL_INCR_WRAP = GLenum::GL_INCR_WRAP;
GLSCBINDING_CONSTEXPR static const GLenum GL_DECR_WRAP = GLenum::GL_DECR_WRAP;

// StringName

GLSCBINDING_CONSTEXPR static const GLenum GL_VENDOR = GLenum::GL_VENDOR;
GLSCBINDING_CONSTEXPR static const GLenum GL_RENDERER = GLenum::GL_RENDERER;
GLSCBINDING_CONSTEXPR static const GLenum GL_VERSION = GLenum::GL_VERSION;
GLSCBINDING_CONSTEXPR static const GLenum GL_EXTENSIONS = GLenum::GL_EXTENSIONS;
GLSCBINDING_CONSTEXPR static const GLenum GL_SHADING_LANGUAGE_VERSION = GLenum::GL_SHADING_LANGUAGE_VERSION;

// TexCoordPointerType

// GLSCBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// TextureCompareMode

// GLSCBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse CombinerBiasNV

// TextureEnvMode

// GLSCBINDING_CONSTEXPR static const GLenum GL_BLEND = GLenum::GL_BLEND; // reuse EnableCap

// TextureMagFilter

GLSCBINDING_CONSTEXPR static const GLenum GL_NEAREST = GLenum::GL_NEAREST;
// GLSCBINDING_CONSTEXPR static const GLenum GL_LINEAR = GLenum::GL_LINEAR; // reuse FogMode

// TextureMinFilter

// GLSCBINDING_CONSTEXPR static const GLenum GL_NEAREST = GLenum::GL_NEAREST; // reuse TextureMagFilter
// GLSCBINDING_CONSTEXPR static const GLenum GL_LINEAR = GLenum::GL_LINEAR; // reuse FogMode
GLSCBINDING_CONSTEXPR static const GLenum GL_NEAREST_MIPMAP_NEAREST = GLenum::GL_NEAREST_MIPMAP_NEAREST;
GLSCBINDING_CONSTEXPR static const GLenum GL_LINEAR_MIPMAP_NEAREST = GLenum::GL_LINEAR_MIPMAP_NEAREST;
GLSCBINDING_CONSTEXPR static const GLenum GL_NEAREST_MIPMAP_LINEAR = GLenum::GL_NEAREST_MIPMAP_LINEAR;
GLSCBINDING_CONSTEXPR static const GLenum GL_LINEAR_MIPMAP_LINEAR = GLenum::GL_LINEAR_MIPMAP_LINEAR;

// TextureParameterName

// GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MAG_FILTER = GLenum::GL_TEXTURE_MAG_FILTER; // reuse GetTextureParameter
// GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MIN_FILTER = GLenum::GL_TEXTURE_MIN_FILTER; // reuse GetTextureParameter
// GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_S = GLenum::GL_TEXTURE_WRAP_S; // reuse GetTextureParameter
// GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_T = GLenum::GL_TEXTURE_WRAP_T; // reuse GetTextureParameter

// TextureSwizzle

// GLSCBINDING_CONSTEXPR static const GLenum GL_ZERO = GLenum::GL_ZERO; // reuse StencilOp
// GLSCBINDING_CONSTEXPR static const GLenum GL_RED = GLenum::GL_RED; // reuse PixelFormat
// GLSCBINDING_CONSTEXPR static const GLenum GL_ONE = GLenum::GL_ONE; // reuse BlendingFactor

// TextureTarget

// GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_2D = GLenum::GL_TEXTURE_2D; // reuse EnableCap

// TextureUnit

GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE0 = GLenum::GL_TEXTURE0;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE1 = GLenum::GL_TEXTURE1;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE2 = GLenum::GL_TEXTURE2;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE3 = GLenum::GL_TEXTURE3;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE4 = GLenum::GL_TEXTURE4;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE5 = GLenum::GL_TEXTURE5;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE6 = GLenum::GL_TEXTURE6;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE7 = GLenum::GL_TEXTURE7;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE8 = GLenum::GL_TEXTURE8;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE9 = GLenum::GL_TEXTURE9;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE10 = GLenum::GL_TEXTURE10;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE11 = GLenum::GL_TEXTURE11;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE12 = GLenum::GL_TEXTURE12;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE13 = GLenum::GL_TEXTURE13;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE14 = GLenum::GL_TEXTURE14;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE15 = GLenum::GL_TEXTURE15;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE16 = GLenum::GL_TEXTURE16;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE17 = GLenum::GL_TEXTURE17;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE18 = GLenum::GL_TEXTURE18;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE19 = GLenum::GL_TEXTURE19;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE20 = GLenum::GL_TEXTURE20;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE21 = GLenum::GL_TEXTURE21;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE22 = GLenum::GL_TEXTURE22;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE23 = GLenum::GL_TEXTURE23;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE24 = GLenum::GL_TEXTURE24;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE25 = GLenum::GL_TEXTURE25;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE26 = GLenum::GL_TEXTURE26;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE27 = GLenum::GL_TEXTURE27;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE28 = GLenum::GL_TEXTURE28;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE29 = GLenum::GL_TEXTURE29;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE30 = GLenum::GL_TEXTURE30;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE31 = GLenum::GL_TEXTURE31;

// TextureWrapMode

// GLSCBINDING_CONSTEXPR static const GLenum GL_LINEAR_MIPMAP_LINEAR = GLenum::GL_LINEAR_MIPMAP_LINEAR; // reuse TextureMinFilter
GLSCBINDING_CONSTEXPR static const GLenum GL_REPEAT = GLenum::GL_REPEAT;
GLSCBINDING_CONSTEXPR static const GLenum GL_CLAMP_TO_EDGE = GLenum::GL_CLAMP_TO_EDGE;
GLSCBINDING_CONSTEXPR static const GLenum GL_MIRRORED_REPEAT = GLenum::GL_MIRRORED_REPEAT;

// UNGROUPED

GLSCBINDING_CONSTEXPR static const GLenum GL_CONTEXT_LOST = GLenum::GL_CONTEXT_LOST;
GLSCBINDING_CONSTEXPR static const GLenum GL_BLEND_EQUATION = GLenum::GL_BLEND_EQUATION;
GLSCBINDING_CONSTEXPR static const GLenum GL_LOSE_CONTEXT_ON_RESET = GLenum::GL_LOSE_CONTEXT_ON_RESET;
GLSCBINDING_CONSTEXPR static const GLenum GL_RESET_NOTIFICATION_STRATEGY = GLenum::GL_RESET_NOTIFICATION_STRATEGY;
GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT_5_6_5 = GLenum::GL_UNSIGNED_SHORT_5_6_5;
GLSCBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_BINDING = GLenum::GL_FRAMEBUFFER_BINDING;
GLSCBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;
GLSCBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS = GLenum::GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_ATTACHMENT = GLenum::GL_STENCIL_ATTACHMENT;
GLSCBINDING_CONSTEXPR static const GLenum GL_STENCIL_INDEX8 = GLenum::GL_STENCIL_INDEX8;
GLSCBINDING_CONSTEXPR static const GLenum GL_RGB565 = GLenum::GL_RGB565;
GLSCBINDING_CONSTEXPR static const GLenum GL_CONTEXT_ROBUST_ACCESS = GLenum::GL_CONTEXT_ROBUST_ACCESS;
GLSCBINDING_CONSTEXPR static const GLenum GL_TEXTURE_IMMUTABLE_FORMAT = GLenum::GL_TEXTURE_IMMUTABLE_FORMAT;

// UniformType

// GLSCBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType
GLSCBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D = GLenum::GL_SAMPLER_2D;

// VertexArrayPName

// GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_ENABLED = GLenum::GL_VERTEX_ATTRIB_ARRAY_ENABLED; // reuse VertexAttribPropertyARB
// GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_SIZE = GLenum::GL_VERTEX_ATTRIB_ARRAY_SIZE; // reuse VertexAttribPropertyARB
// GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_STRIDE = GLenum::GL_VERTEX_ATTRIB_ARRAY_STRIDE; // reuse VertexAttribPropertyARB
// GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_TYPE = GLenum::GL_VERTEX_ATTRIB_ARRAY_TYPE; // reuse VertexAttribPropertyARB
// GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_NORMALIZED = GLenum::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED; // reuse VertexAttribPropertyARB

// VertexAttribEnum

// GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_ENABLED = GLenum::GL_VERTEX_ATTRIB_ARRAY_ENABLED; // reuse VertexAttribPropertyARB
// GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_SIZE = GLenum::GL_VERTEX_ATTRIB_ARRAY_SIZE; // reuse VertexAttribPropertyARB
// GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_STRIDE = GLenum::GL_VERTEX_ATTRIB_ARRAY_STRIDE; // reuse VertexAttribPropertyARB
// GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_TYPE = GLenum::GL_VERTEX_ATTRIB_ARRAY_TYPE; // reuse VertexAttribPropertyARB
// GLSCBINDING_CONSTEXPR static const GLenum GL_CURRENT_VERTEX_ATTRIB = GLenum::GL_CURRENT_VERTEX_ATTRIB; // reuse VertexAttribPropertyARB
// GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_NORMALIZED = GLenum::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED; // reuse VertexAttribPropertyARB
// GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = GLenum::GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING; // reuse VertexAttribPropertyARB

// VertexAttribIType

// GLSCBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType

// VertexAttribPointerPropertyARB

GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_POINTER = GLenum::GL_VERTEX_ATTRIB_ARRAY_POINTER;

// VertexAttribPointerType

// GLSCBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// VertexAttribPropertyARB

GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_ENABLED = GLenum::GL_VERTEX_ATTRIB_ARRAY_ENABLED;
GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_SIZE = GLenum::GL_VERTEX_ATTRIB_ARRAY_SIZE;
GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_STRIDE = GLenum::GL_VERTEX_ATTRIB_ARRAY_STRIDE;
GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_TYPE = GLenum::GL_VERTEX_ATTRIB_ARRAY_TYPE;
GLSCBINDING_CONSTEXPR static const GLenum GL_CURRENT_VERTEX_ATTRIB = GLenum::GL_CURRENT_VERTEX_ATTRIB;
GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_NORMALIZED = GLenum::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED;
GLSCBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = GLenum::GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;

// VertexAttribType

// GLSCBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType

// VertexBufferObjectParameter

// GLSCBINDING_CONSTEXPR static const GLenum GL_BUFFER_SIZE = GLenum::GL_BUFFER_SIZE; // reuse BufferPNameARB
// GLSCBINDING_CONSTEXPR static const GLenum GL_BUFFER_USAGE = GLenum::GL_BUFFER_USAGE; // reuse BufferPNameARB

// VertexBufferObjectUsage

// GLSCBINDING_CONSTEXPR static const GLenum GL_STREAM_DRAW = GLenum::GL_STREAM_DRAW; // reuse BufferUsageARB
// GLSCBINDING_CONSTEXPR static const GLenum GL_STATIC_DRAW = GLenum::GL_STATIC_DRAW; // reuse BufferUsageARB
// GLSCBINDING_CONSTEXPR static const GLenum GL_DYNAMIC_DRAW = GLenum::GL_DYNAMIC_DRAW; // reuse BufferUsageARB

// VertexPointerType

// GLSCBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse ColorPointerType
// GLSCBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse ColorPointerType



} // namespace glsc