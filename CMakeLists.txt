cmake_minimum_required(VERSION 3.10)

# set the project name
project(VM)

# specify the C++ standard
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
    doctest
    GIT_REPOSITORY https://github.com/doctest/doctest.git
    GIT_TAG v2.4.11
)
FetchContent_MakeAvailable(doctest)

# Add the src directory
add_subdirectory(src)

# Add the tests directory
add_subdirectory(test)

# Enable testing functionality
enable_testing()

# Optional: Create a custom target for running tests
add_custom_target(run_tests
    COMMAND ${CMAKE_CTEST_COMMAND} --output-on-failure
    DEPENDS unit_tests
)
