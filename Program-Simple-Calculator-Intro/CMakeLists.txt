cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

project(calculator VERSION 0.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(calculator/include)

add_library(
	calculator
	OBJECT
	calculator/include/Token.h
	calculator/include/TokenStream.h
	calculator/impl/TokenStream.cpp
)

#target_compile_properties()

set(UNIT_TEST_SRC "tests/unitTestToken.cpp")

add_executable(${PROJECT_NAME}_test ${UNIT_TEST_SRC})

target_link_libraries(${PROJECT_NAME}_test PRIVATE calculator)


