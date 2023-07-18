cmake_minimum_required(VERSION 3.20.6)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

option(BUILD_TEST "is build test" ON)

if (BUILD_TEST)
    enable_testing()
endif()

project(ShiroRuntime)

add_executable(
    ShiroRuntime
)
target_sources(
    ShiroRuntime
    PRIVATE
    Main.cpp
)

set_target_properties(
    ShiroRuntime
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/Bin"
    CXX_STANDARD 23
)

add_subdirectory(ThirdParty)

if (BUILD_TEST)
    # Must it be in the top directory?
    include(GoogleTest)

    # Might need to reconfigure compile options...
    # GoogleTest seems to set CMAKE_CXX_STANDARD to 11

    function(shiro_discover_tests)
        cmake_parse_arguments(
            MYFUNC
            ""
            ""
            "TARGET;SOURCES;LIBRARIES"
            ${ARGN}
        )

        add_executable(
            ${MYFUNC_TARGET}
            ${MYFUNC_SOURCES}
        )

        target_link_libraries(
            ${MYFUNC_TARGET}
            PRIVATE
            ${MYFUNC_LIBRARIES} GTest::gtest GTest::gtest_main
        )
        
        set_target_properties(
            ${MYFUNC_TARGET}
            PROPERTIES
            CXX_STANDARD 23
        )

        gtest_discover_tests(
            ${MYFUNC_TARGET}
            DISCOVERY_TIMEOUT 20
        )
    endfunction()

    add_subdirectory(Test)
endif()
