
# 
# Configuration for all sub-projects
# 

# Generate version-header
configure_file(version.h.in ${CMAKE_CURRENT_BINARY_DIR}/include/${META_PROJECT_NAME}/${META_PROJECT_NAME}-version.h)


# 
# Sub-projects
# 

set(IDE_FOLDER "")

# Libraries
add_subdirectory(glscbinding)
add_subdirectory(glscbinding-aux)

# Examples
set(IDE_FOLDER "Examples")
# add_subdirectory(examples)

# Examples
set(IDE_FOLDER "Tools")
add_subdirectory(tools)

# Tests
if(OPTION_BUILD_TESTS AND NOT MINGW)
    set(IDE_FOLDER "Tests")
    add_subdirectory(tests)
endif()


# 
# Deployment
# 

# Deploy generated headers
install(DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/include/${META_PROJECT_NAME} DESTINATION include COMPONENT dev)
