file(GLOB SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cc")

add_executable(unit_tests ${SOURCES})

# Explicitly include doctest headers
target_include_directories(unit_tests
    PRIVATE ${doctest_SOURCE_DIR}/doctest
)

target_link_libraries( unit_tests 
    PRIVATE VM_lib 
    PRIVATE doctest::doctest)


add_test(Name unit_tests COMMAND unit_test)
