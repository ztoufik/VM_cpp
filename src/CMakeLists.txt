file(GLOB CPP_FILES "${CMAKE_CURRENT_SOURCE_DIR}/cpp/*.cc")

add_library(VM_lib
    ${CPP_FILES}
)

# Specify include directories for this library
target_include_directories(VM_lib
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc
)
