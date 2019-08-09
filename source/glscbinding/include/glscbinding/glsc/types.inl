
#pragma once


#include <glscbinding/glsc/types.h>


namespace std
{


template<>
struct hash<glsc::GLextension>
{
    std::size_t operator()(const glsc::GLextension & t) const
    {
        return hash<std::underlying_type<glsc::GLextension>::type>()(static_cast<std::underlying_type<glsc::GLextension>::type>(t));
    }
};


} // namespace std


namespace std
{


template<>
struct hash<glsc::GLenum>
{
    std::size_t operator()(const glsc::GLenum & t) const
    {
        return hash<std::underlying_type<glsc::GLenum>::type>()(static_cast<std::underlying_type<glsc::GLenum>::type>(t));
    }
};


} // namespace std


namespace glsc
{


GLSCBINDING_CONSTEXPR inline GLenum operator+(const GLenum & a, const std::underlying_type<GLenum>::type b)
{
    return static_cast<GLenum>(static_cast<std::underlying_type<GLenum>::type>(a) + b);
}

GLSCBINDING_CONSTEXPR inline GLenum operator-(const GLenum & a, const std::underlying_type<GLenum>::type b)
{
    return static_cast<GLenum>(static_cast<std::underlying_type<GLenum>::type>(a) - b);
}

GLSCBINDING_CONSTEXPR inline bool operator==(const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<std::underlying_type<GLenum>::type>(a) == b;
}

GLSCBINDING_CONSTEXPR inline bool operator!=(const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<std::underlying_type<GLenum>::type>(a) != b;
}

GLSCBINDING_CONSTEXPR inline bool operator< (const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<std::underlying_type<GLenum>::type>(a) < b;
}

GLSCBINDING_CONSTEXPR inline bool operator<=(const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<std::underlying_type<GLenum>::type>(a) <= b;
}

GLSCBINDING_CONSTEXPR inline bool operator> (const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<std::underlying_type<GLenum>::type>(a) > b;
}

GLSCBINDING_CONSTEXPR inline bool operator>=(const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<std::underlying_type<GLenum>::type>(a) >= b;
}

GLSCBINDING_CONSTEXPR inline bool operator==(std::underlying_type<GLenum>::type a, const GLenum & b)
{
    return a == static_cast<std::underlying_type<GLenum>::type>(b);
}

GLSCBINDING_CONSTEXPR inline bool operator!=(std::underlying_type<GLenum>::type a, const GLenum & b)
{
    return a != static_cast<std::underlying_type<GLenum>::type>(b);
}

GLSCBINDING_CONSTEXPR inline bool operator< (std::underlying_type<GLenum>::type a, const GLenum & b)
{
    return a < static_cast<std::underlying_type<GLenum>::type>(b);
}

GLSCBINDING_CONSTEXPR inline bool operator<=(std::underlying_type<GLenum>::type a, const GLenum & b)
{
    return a <= static_cast<std::underlying_type<GLenum>::type>(b);
}

GLSCBINDING_CONSTEXPR inline bool operator> (std::underlying_type<GLenum>::type a, const GLenum & b)
{
    return a > static_cast<std::underlying_type<GLenum>::type>(b);
}

GLSCBINDING_CONSTEXPR inline bool operator>=(std::underlying_type<GLenum>::type a, const GLenum & b)
{
    return a >= static_cast<std::underlying_type<GLenum>::type>(b);
}


} // namespace glsc


namespace std
{


template<>
struct hash<glsc::AttribMask>
{
    std::size_t operator()(const glsc::AttribMask & t) const
    {
        return hash<std::underlying_type<glsc::AttribMask>::type>()(static_cast<std::underlying_type<glsc::AttribMask>::type>(t));
    }
};


} // namespace std


namespace glsc
{


GLSCBINDING_CONSTEXPR inline AttribMask operator|(const AttribMask & a, const AttribMask & b)
{
    return static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) | static_cast<std::underlying_type<AttribMask>::type>(b));
}

inline AttribMask & operator|=(AttribMask & a, const AttribMask & b)
{
    a = static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) | static_cast<std::underlying_type<AttribMask>::type>(b));

    return a;
}

GLSCBINDING_CONSTEXPR inline AttribMask operator&(const AttribMask & a, const AttribMask & b)
{
    return static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) & static_cast<std::underlying_type<AttribMask>::type>(b));
}

inline AttribMask & operator&=(AttribMask & a, const AttribMask & b)
{
    a = static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) & static_cast<std::underlying_type<AttribMask>::type>(b));

    return a;
}

GLSCBINDING_CONSTEXPR inline AttribMask operator^(const AttribMask & a, const AttribMask & b)
{
    return static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) ^ static_cast<std::underlying_type<AttribMask>::type>(b));
}

inline AttribMask & operator^=(AttribMask & a, const AttribMask & b)
{
    a = static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) ^ static_cast<std::underlying_type<AttribMask>::type>(b));

    return a;
}


} // namespace glsc


namespace std
{


template<>
struct hash<glsc::ClearBufferMask>
{
    std::size_t operator()(const glsc::ClearBufferMask & t) const
    {
        return hash<std::underlying_type<glsc::ClearBufferMask>::type>()(static_cast<std::underlying_type<glsc::ClearBufferMask>::type>(t));
    }
};


} // namespace std


namespace glsc
{


GLSCBINDING_CONSTEXPR inline ClearBufferMask operator|(const ClearBufferMask & a, const ClearBufferMask & b)
{
    return static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) | static_cast<std::underlying_type<ClearBufferMask>::type>(b));
}

inline ClearBufferMask & operator|=(ClearBufferMask & a, const ClearBufferMask & b)
{
    a = static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) | static_cast<std::underlying_type<ClearBufferMask>::type>(b));

    return a;
}

GLSCBINDING_CONSTEXPR inline ClearBufferMask operator&(const ClearBufferMask & a, const ClearBufferMask & b)
{
    return static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) & static_cast<std::underlying_type<ClearBufferMask>::type>(b));
}

inline ClearBufferMask & operator&=(ClearBufferMask & a, const ClearBufferMask & b)
{
    a = static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) & static_cast<std::underlying_type<ClearBufferMask>::type>(b));

    return a;
}

GLSCBINDING_CONSTEXPR inline ClearBufferMask operator^(const ClearBufferMask & a, const ClearBufferMask & b)
{
    return static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) ^ static_cast<std::underlying_type<ClearBufferMask>::type>(b));
}

inline ClearBufferMask & operator^=(ClearBufferMask & a, const ClearBufferMask & b)
{
    a = static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) ^ static_cast<std::underlying_type<ClearBufferMask>::type>(b));

    return a;
}


} // namespace glsc


namespace std
{


template<>
struct hash<glsc::PathFontStyle>
{
    std::size_t operator()(const glsc::PathFontStyle & t) const
    {
        return hash<std::underlying_type<glsc::PathFontStyle>::type>()(static_cast<std::underlying_type<glsc::PathFontStyle>::type>(t));
    }
};


} // namespace std


namespace glsc
{


GLSCBINDING_CONSTEXPR inline PathFontStyle operator|(const PathFontStyle & a, const PathFontStyle & b)
{
    return static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) | static_cast<std::underlying_type<PathFontStyle>::type>(b));
}

inline PathFontStyle & operator|=(PathFontStyle & a, const PathFontStyle & b)
{
    a = static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) | static_cast<std::underlying_type<PathFontStyle>::type>(b));

    return a;
}

GLSCBINDING_CONSTEXPR inline PathFontStyle operator&(const PathFontStyle & a, const PathFontStyle & b)
{
    return static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) & static_cast<std::underlying_type<PathFontStyle>::type>(b));
}

inline PathFontStyle & operator&=(PathFontStyle & a, const PathFontStyle & b)
{
    a = static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) & static_cast<std::underlying_type<PathFontStyle>::type>(b));

    return a;
}

GLSCBINDING_CONSTEXPR inline PathFontStyle operator^(const PathFontStyle & a, const PathFontStyle & b)
{
    return static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) ^ static_cast<std::underlying_type<PathFontStyle>::type>(b));
}

inline PathFontStyle & operator^=(PathFontStyle & a, const PathFontStyle & b)
{
    a = static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) ^ static_cast<std::underlying_type<PathFontStyle>::type>(b));

    return a;
}


} // namespace glsc


namespace std
{


template<>
struct hash<glsc::UnusedMask>
{
    std::size_t operator()(const glsc::UnusedMask & t) const
    {
        return hash<std::underlying_type<glsc::UnusedMask>::type>()(static_cast<std::underlying_type<glsc::UnusedMask>::type>(t));
    }
};


} // namespace std


namespace glsc
{


GLSCBINDING_CONSTEXPR inline UnusedMask operator|(const UnusedMask & a, const UnusedMask & b)
{
    return static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) | static_cast<std::underlying_type<UnusedMask>::type>(b));
}

inline UnusedMask & operator|=(UnusedMask & a, const UnusedMask & b)
{
    a = static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) | static_cast<std::underlying_type<UnusedMask>::type>(b));

    return a;
}

GLSCBINDING_CONSTEXPR inline UnusedMask operator&(const UnusedMask & a, const UnusedMask & b)
{
    return static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) & static_cast<std::underlying_type<UnusedMask>::type>(b));
}

inline UnusedMask & operator&=(UnusedMask & a, const UnusedMask & b)
{
    a = static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) & static_cast<std::underlying_type<UnusedMask>::type>(b));

    return a;
}

GLSCBINDING_CONSTEXPR inline UnusedMask operator^(const UnusedMask & a, const UnusedMask & b)
{
    return static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) ^ static_cast<std::underlying_type<UnusedMask>::type>(b));
}

inline UnusedMask & operator^=(UnusedMask & a, const UnusedMask & b)
{
    a = static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) ^ static_cast<std::underlying_type<UnusedMask>::type>(b));

    return a;
}


} // namespace glsc