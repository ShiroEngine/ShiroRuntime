cmake_minimum_required(VERSION 3.18.1)

if (BUILD_TEST)
    set(GTest_DIR ${CMAKE_CURRENT_SOURCE_DIR}/googletest)
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
    add_subdirectory(${GTest_DIR})
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

        gtest_discover_tests(
            ${MYFUNC_TARGET}
            DISCOVERY_TIMEOUT 20
        )
    endfunction()

endif()
