cmake_minimum_required(VERSION 3.10)

project(MathFunctions VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(MathFunctions mysqrt.cc)
target_include_directories(MathFunctions
  PUBLIC include
)

add_executable(MathFunctionsTest test.cc)
target_link_libraries(MathFunctionsTest MathFunctions)

enable_testing()

add_test(NAME run_test COMMAND MathFunctionsTest)

install(TARGETS MathFunctions LIBRARY DESTINATION .)
install(FILES mymath.h DESTINATION include)
