cmake_minimum_required(VERSION 3.4)
project(the_build)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(main main.cpp)

enable_testing()
add_subdirectory(sup_part/gtest)
file(GLOB tests "tests/*.cpp")
foreach(test ${tests})
     add_executable(check ${test})
     target_link_libraries(check gtest_main gmock_main)
     add_test(NAME check COMMAND check)
endforeach(test ${tests})
