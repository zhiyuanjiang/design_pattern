cmake_minimum_required(VERSION 3.22)
project(design_pattern)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -pipe -fPIC -g")

add_subdirectory(observer_pattern)

add_executable(test test.cpp)

target_link_libraries(
    test
    -lpthread
)
