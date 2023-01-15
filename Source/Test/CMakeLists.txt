cmake_minimum_required(VERSION 3.18.1)

if (NOT BUILD_TEST)
    RETURN()
endif()

set(TARGET_NAME_BASE ShiroRuntime)
set(TARGET_NAME Test_${TARGET_NAME_BASE})

# ShiroRuntime is always built.
# For a different target, you can limit it using the BUILD_TARGET_ONLY variable.
#if (BUILD_TARGET_ONLY)
#    if (NOT "${BUILD_TARGET_ONLY}" STREQUAL "${TARGET_NAME_BASE}")
#        RETURN()
#    endif()
#endif()


project(${TARGET_NAME})

shiro_discover_tests(
    TARGET
    ${TARGET_NAME}

    SOURCES
    "Test_Main.cpp"

#    LIBRARIES
#    Shiro::${TARGET_NAME_BASE}
)
