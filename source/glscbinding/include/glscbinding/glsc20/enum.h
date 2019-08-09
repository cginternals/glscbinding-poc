
#pragma once


#include <glscbinding/noglsc.h>

#include <glscbinding/glsc/enum.h>


namespace glsc20
{


// import enums to namespace
using glsc::GL_ACTIVE_TEXTURE;
using glsc::GL_ALIASED_LINE_WIDTH_RANGE;
using glsc::GL_ALIASED_POINT_SIZE_RANGE;
using glsc::GL_ALPHA_BITS;
using glsc::GL_ALWAYS;
using glsc::GL_ARRAY_BUFFER;
using glsc::GL_ARRAY_BUFFER_BINDING;
using glsc::GL_BACK;
using glsc::GL_BLEND;
using glsc::GL_BLEND_COLOR;
using glsc::GL_BLEND_DST_ALPHA;
using glsc::GL_BLEND_DST_RGB;
using glsc::GL_BLEND_EQUATION;
using glsc::GL_BLEND_EQUATION_ALPHA;
using glsc::GL_BLEND_EQUATION_RGB;
using glsc::GL_BLEND_SRC_ALPHA;
using glsc::GL_BLEND_SRC_RGB;
using glsc::GL_BLUE_BITS;
using glsc::GL_BUFFER_SIZE;
using glsc::GL_BUFFER_USAGE;
using glsc::GL_BYTE;
using glsc::GL_CCW;
using glsc::GL_CLAMP_TO_EDGE;
using glsc::GL_COLOR_ATTACHMENT0;
using glsc::GL_COLOR_CLEAR_VALUE;
using glsc::GL_COLOR_WRITEMASK;
using glsc::GL_COMPRESSED_TEXTURE_FORMATS;
using glsc::GL_CONSTANT_ALPHA;
using glsc::GL_CONSTANT_COLOR;
using glsc::GL_CONTEXT_LOST;
using glsc::GL_CONTEXT_ROBUST_ACCESS;
using glsc::GL_CULL_FACE;
using glsc::GL_CULL_FACE_MODE;
using glsc::GL_CURRENT_PROGRAM;
using glsc::GL_CURRENT_VERTEX_ATTRIB;
using glsc::GL_CW;
using glsc::GL_DECR;
using glsc::GL_DECR_WRAP;
using glsc::GL_DEPTH_ATTACHMENT;
using glsc::GL_DEPTH_BITS;
using glsc::GL_DEPTH_CLEAR_VALUE;
using glsc::GL_DEPTH_COMPONENT16;
using glsc::GL_DEPTH_FUNC;
using glsc::GL_DEPTH_RANGE;
using glsc::GL_DEPTH_TEST;
using glsc::GL_DEPTH_WRITEMASK;
using glsc::GL_DITHER;
using glsc::GL_DONT_CARE;
using glsc::GL_DST_ALPHA;
using glsc::GL_DST_COLOR;
using glsc::GL_DYNAMIC_DRAW;
using glsc::GL_ELEMENT_ARRAY_BUFFER;
using glsc::GL_ELEMENT_ARRAY_BUFFER_BINDING;
using glsc::GL_EQUAL;
using glsc::GL_EXTENSIONS;
using glsc::GL_FASTEST;
using glsc::GL_FLOAT;
using glsc::GL_FRAMEBUFFER;
using glsc::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;
using glsc::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;
using glsc::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;
using glsc::GL_FRAMEBUFFER_BINDING;
using glsc::GL_FRAMEBUFFER_COMPLETE;
using glsc::GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
using glsc::GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS;
using glsc::GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;
using glsc::GL_FRAMEBUFFER_UNDEFINED;
using glsc::GL_FRAMEBUFFER_UNSUPPORTED;
using glsc::GL_FRONT;
using glsc::GL_FRONT_AND_BACK;
using glsc::GL_FRONT_FACE;
using glsc::GL_FUNC_ADD;
using glsc::GL_FUNC_REVERSE_SUBTRACT;
using glsc::GL_FUNC_SUBTRACT;
using glsc::GL_GENERATE_MIPMAP_HINT;
using glsc::GL_GEQUAL;
using glsc::GL_GREATER;
using glsc::GL_GREEN_BITS;
using glsc::GL_GUILTY_CONTEXT_RESET;
using glsc::GL_HIGH_FLOAT;
using glsc::GL_HIGH_INT;
using glsc::GL_IMPLEMENTATION_COLOR_READ_FORMAT;
using glsc::GL_IMPLEMENTATION_COLOR_READ_TYPE;
using glsc::GL_INCR;
using glsc::GL_INCR_WRAP;
using glsc::GL_INNOCENT_CONTEXT_RESET;
using glsc::GL_INT;
using glsc::GL_INVALID_ENUM;
using glsc::GL_INVALID_FRAMEBUFFER_OPERATION;
using glsc::GL_INVALID_OPERATION;
using glsc::GL_INVALID_VALUE;
using glsc::GL_INVERT;
using glsc::GL_KEEP;
using glsc::GL_LEQUAL;
using glsc::GL_LESS;
using glsc::GL_LINE_LOOP;
using glsc::GL_LINE_STRIP;
using glsc::GL_LINE_WIDTH;
using glsc::GL_LINEAR;
using glsc::GL_LINEAR_MIPMAP_LINEAR;
using glsc::GL_LINEAR_MIPMAP_NEAREST;
using glsc::GL_LINES;
using glsc::GL_LINK_STATUS;
using glsc::GL_LOSE_CONTEXT_ON_RESET;
using glsc::GL_LOW_FLOAT;
using glsc::GL_LOW_INT;
using glsc::GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS;
using glsc::GL_MAX_FRAGMENT_UNIFORM_VECTORS;
using glsc::GL_MAX_RENDERBUFFER_SIZE;
using glsc::GL_MAX_TEXTURE_IMAGE_UNITS;
using glsc::GL_MAX_TEXTURE_SIZE;
using glsc::GL_MAX_VARYING_VECTORS;
using glsc::GL_MAX_VERTEX_ATTRIBS;
using glsc::GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS;
using glsc::GL_MAX_VERTEX_UNIFORM_VECTORS;
using glsc::GL_MAX_VIEWPORT_DIMS;
using glsc::GL_MEDIUM_FLOAT;
using glsc::GL_MEDIUM_INT;
using glsc::GL_MIRRORED_REPEAT;
using glsc::GL_NEAREST;
using glsc::GL_NEAREST_MIPMAP_LINEAR;
using glsc::GL_NEAREST_MIPMAP_NEAREST;
using glsc::GL_NEVER;
using glsc::GL_NICEST;
using glsc::GL_NO_ERROR;
using glsc::GL_NONE;
using glsc::GL_NOTEQUAL;
using glsc::GL_NUM_COMPRESSED_TEXTURE_FORMATS;
using glsc::GL_NUM_PROGRAM_BINARY_FORMATS;
using glsc::GL_ONE;
using glsc::GL_ONE_MINUS_CONSTANT_ALPHA;
using glsc::GL_ONE_MINUS_CONSTANT_COLOR;
using glsc::GL_ONE_MINUS_DST_ALPHA;
using glsc::GL_ONE_MINUS_DST_COLOR;
using glsc::GL_ONE_MINUS_SRC_ALPHA;
using glsc::GL_ONE_MINUS_SRC_COLOR;
using glsc::GL_OUT_OF_MEMORY;
using glsc::GL_PACK_ALIGNMENT;
using glsc::GL_POINTS;
using glsc::GL_POLYGON_OFFSET_FACTOR;
using glsc::GL_POLYGON_OFFSET_FILL;
using glsc::GL_POLYGON_OFFSET_UNITS;
using glsc::GL_PROGRAM_BINARY_FORMATS;
using glsc::GL_R8;
using glsc::GL_RED;
using glsc::GL_RED_BITS;
using glsc::GL_RENDERBUFFER;
using glsc::GL_RENDERBUFFER_ALPHA_SIZE;
using glsc::GL_RENDERBUFFER_BINDING;
using glsc::GL_RENDERBUFFER_BLUE_SIZE;
using glsc::GL_RENDERBUFFER_DEPTH_SIZE;
using glsc::GL_RENDERBUFFER_GREEN_SIZE;
using glsc::GL_RENDERBUFFER_HEIGHT;
using glsc::GL_RENDERBUFFER_INTERNAL_FORMAT;
using glsc::GL_RENDERBUFFER_RED_SIZE;
using glsc::GL_RENDERBUFFER_STENCIL_SIZE;
using glsc::GL_RENDERBUFFER_WIDTH;
using glsc::GL_RENDERER;
using glsc::GL_REPEAT;
using glsc::GL_REPLACE;
using glsc::GL_RESET_NOTIFICATION_STRATEGY;
using glsc::GL_RG;
using glsc::GL_RG8;
using glsc::GL_RGB;
using glsc::GL_RGB565;
using glsc::GL_RGB5_A1;
using glsc::GL_RGB8;
using glsc::GL_RGBA;
using glsc::GL_RGBA4;
using glsc::GL_RGBA8;
using glsc::GL_SAMPLE_ALPHA_TO_COVERAGE;
using glsc::GL_SAMPLE_BUFFERS;
using glsc::GL_SAMPLE_COVERAGE;
using glsc::GL_SAMPLE_COVERAGE_INVERT;
using glsc::GL_SAMPLE_COVERAGE_VALUE;
using glsc::GL_SAMPLER_2D;
using glsc::GL_SAMPLES;
using glsc::GL_SCISSOR_BOX;
using glsc::GL_SCISSOR_TEST;
using glsc::GL_SHADING_LANGUAGE_VERSION;
using glsc::GL_SHORT;
using glsc::GL_SRC_ALPHA;
using glsc::GL_SRC_ALPHA_SATURATE;
using glsc::GL_SRC_COLOR;
using glsc::GL_STATIC_DRAW;
using glsc::GL_STENCIL_ATTACHMENT;
using glsc::GL_STENCIL_BACK_FAIL;
using glsc::GL_STENCIL_BACK_FUNC;
using glsc::GL_STENCIL_BACK_PASS_DEPTH_FAIL;
using glsc::GL_STENCIL_BACK_PASS_DEPTH_PASS;
using glsc::GL_STENCIL_BACK_REF;
using glsc::GL_STENCIL_BACK_VALUE_MASK;
using glsc::GL_STENCIL_BACK_WRITEMASK;
using glsc::GL_STENCIL_BITS;
using glsc::GL_STENCIL_CLEAR_VALUE;
using glsc::GL_STENCIL_FAIL;
using glsc::GL_STENCIL_FUNC;
using glsc::GL_STENCIL_INDEX8;
using glsc::GL_STENCIL_PASS_DEPTH_FAIL;
using glsc::GL_STENCIL_PASS_DEPTH_PASS;
using glsc::GL_STENCIL_REF;
using glsc::GL_STENCIL_TEST;
using glsc::GL_STENCIL_VALUE_MASK;
using glsc::GL_STENCIL_WRITEMASK;
using glsc::GL_STREAM_DRAW;
using glsc::GL_SUBPIXEL_BITS;
using glsc::GL_TEXTURE;
using glsc::GL_TEXTURE0;
using glsc::GL_TEXTURE1;
using glsc::GL_TEXTURE10;
using glsc::GL_TEXTURE11;
using glsc::GL_TEXTURE12;
using glsc::GL_TEXTURE13;
using glsc::GL_TEXTURE14;
using glsc::GL_TEXTURE15;
using glsc::GL_TEXTURE16;
using glsc::GL_TEXTURE17;
using glsc::GL_TEXTURE18;
using glsc::GL_TEXTURE19;
using glsc::GL_TEXTURE2;
using glsc::GL_TEXTURE20;
using glsc::GL_TEXTURE21;
using glsc::GL_TEXTURE22;
using glsc::GL_TEXTURE23;
using glsc::GL_TEXTURE24;
using glsc::GL_TEXTURE25;
using glsc::GL_TEXTURE26;
using glsc::GL_TEXTURE27;
using glsc::GL_TEXTURE28;
using glsc::GL_TEXTURE29;
using glsc::GL_TEXTURE3;
using glsc::GL_TEXTURE30;
using glsc::GL_TEXTURE31;
using glsc::GL_TEXTURE4;
using glsc::GL_TEXTURE5;
using glsc::GL_TEXTURE6;
using glsc::GL_TEXTURE7;
using glsc::GL_TEXTURE8;
using glsc::GL_TEXTURE9;
using glsc::GL_TEXTURE_2D;
using glsc::GL_TEXTURE_BINDING_2D;
using glsc::GL_TEXTURE_IMMUTABLE_FORMAT;
using glsc::GL_TEXTURE_MAG_FILTER;
using glsc::GL_TEXTURE_MIN_FILTER;
using glsc::GL_TEXTURE_WRAP_S;
using glsc::GL_TEXTURE_WRAP_T;
using glsc::GL_TRIANGLE_FAN;
using glsc::GL_TRIANGLE_STRIP;
using glsc::GL_TRIANGLES;
using glsc::GL_UNKNOWN_CONTEXT_RESET;
using glsc::GL_UNPACK_ALIGNMENT;
using glsc::GL_UNSIGNED_BYTE;
using glsc::GL_UNSIGNED_INT;
using glsc::GL_UNSIGNED_SHORT;
using glsc::GL_UNSIGNED_SHORT_4_4_4_4;
using glsc::GL_UNSIGNED_SHORT_5_5_5_1;
using glsc::GL_UNSIGNED_SHORT_5_6_5;
using glsc::GL_VENDOR;
using glsc::GL_VERSION;
using glsc::GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;
using glsc::GL_VERTEX_ATTRIB_ARRAY_ENABLED;
using glsc::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED;
using glsc::GL_VERTEX_ATTRIB_ARRAY_POINTER;
using glsc::GL_VERTEX_ATTRIB_ARRAY_SIZE;
using glsc::GL_VERTEX_ATTRIB_ARRAY_STRIDE;
using glsc::GL_VERTEX_ATTRIB_ARRAY_TYPE;
using glsc::GL_VIEWPORT;
using glsc::GL_ZERO;


} // namespace glsc20