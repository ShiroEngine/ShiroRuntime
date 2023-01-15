cmake_minimum_required(VERSION 3.18.1)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

option(BUILD_TEST "is build test" ON)

if (BUILD_TEST)
    enable_testing()
endif()

project(ShiroRuntime)

add_executable(
    ShiroRuntime
    Main.cpp
)

set_target_properties(
    ShiroRuntime
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/Bin"
)

add_subdirectory(ThirdParty)

if (BUILD_TEST)
    add_subdirectory(Test)
endif()
