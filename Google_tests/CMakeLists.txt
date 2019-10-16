# 'Google_test' is the subproject name
project(Google_tests)

# 'lib' is the folder with Google Test sources
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# 'Google_Tests_run' is the target name
# 'test1.cpp tests2.cpp' are source files with tests
add_executable(       Google_Tests_run_a_lib test_implementation_a.cpp)
target_link_libraries(Google_Tests_run_a_lib sut_lib)
target_link_libraries(Google_Tests_run_a_lib gtest gtest_main)


add_executable(       Google_Tests_run_b_mock test_implementation_b.cpp mock_implementation_a.cpp)
target_link_libraries(Google_Tests_run_b_mock sut_lib)
target_link_libraries(Google_Tests_run_b_mock gtest gtest_main)


add_executable(       Google_Tests_run_b_lib test_implementation_b.cpp)
target_link_libraries(Google_Tests_run_b_lib sut_lib)
target_link_libraries(Google_Tests_run_b_lib gtest gtest_main)


add_executable(       Google_Tests_run_c_mock_a test_implementation_c.cpp mock_implementation_a.cpp)
target_link_libraries(Google_Tests_run_c_mock_a sut_lib)
target_link_libraries(Google_Tests_run_c_mock_a gtest gtest_main)

add_executable(       Google_Tests_run_c_mock_b test_implementation_c.cpp mock_implementation_b.cpp)
target_link_libraries(Google_Tests_run_c_mock_b sut_lib)
target_link_libraries(Google_Tests_run_c_mock_b gtest gtest_main)

add_executable(       Google_Tests_run_c_lib test_implementation_c.cpp)
target_link_libraries(Google_Tests_run_c_lib sut_lib)
target_link_libraries(Google_Tests_run_c_lib gtest gtest_main)
