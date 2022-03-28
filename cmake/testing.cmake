include(cmake/googletest.cmake)
enable_testing()
include(GoogleTest)

# --------------------------------- Cat --------------------------------- #

add_executable(
    CatTests
    libanimals/cat.test.cpp
)
target_include_directories(
    CatTests
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
target_link_libraries(
    CatTests
    gtest_main
)
gtest_discover_tests(CatTests)
