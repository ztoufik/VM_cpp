
add_library(VM_lib
    ${CMAKE_CURRENT_SOURCE_DIR}/cpp/VM.cc
)

# Specify include directories for this library
target_include_directories(VM_lib
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc
)
