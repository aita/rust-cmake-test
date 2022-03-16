cmake_minimum_required(VERSION 3.10)

project(MyMath VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(MyMath mysqrt.cc mymath.h)

add_executable(MyMathTest test.cc)
target_link_libraries(MyMathTest MyMath)

enable_testing()

add_test(NAME run_test COMMAND MyMathTest)

install(TARGETS MyMath LIBRARY DESTINATION .)
install(FILES mymath.h DESTINATION include)
