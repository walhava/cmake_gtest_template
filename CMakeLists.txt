cmake_minimum_required(VERSION 3.15)
project(test_test)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)
add_executable(sut_run ${SOURCE_FILES})

include_directories(sut_lib)
add_subdirectory(sut_lib)

target_link_libraries(sut_run sut_lib)

add_subdirectory(Google_tests)