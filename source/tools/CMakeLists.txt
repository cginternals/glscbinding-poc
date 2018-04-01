
# Check if tools are enabled
if(NOT OPTION_BUILD_TOOLS)
    return()
endif()


# Tools
add_subdirectory("glscfunctions")
add_subdirectory("glscinfo")
add_subdirectory("glscmeta")
add_subdirectory("glscqueries")
