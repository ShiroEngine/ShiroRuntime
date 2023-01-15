cmake_minimum_required(VERSION 3.18.1)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

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
