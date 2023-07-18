cmake_minimum_required(VERSION 3.20.6)

project(ShiroThirdParty)

if (BUILD_TEST)
    option(BUILD_GMOCK "Builds the googlemock subproject" OFF)
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

    set(GTest_DIR ${CMAKE_CURRENT_SOURCE_DIR}/googletest)
    set(GTest_BINARY_DIR ${CMAKE_CURRENT_BINARY_DIR}/googletest)
    add_subdirectory(${GTest_DIR} ${GTest_BINARY_DIR})
endif()
