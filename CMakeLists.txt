cmake_minimum_required(VERSION 2.8)

project(Calculator CXX)

set(CMAKE_CXX_FLAGS "-Wextra -Wall -Werror -Winit-self -Wold-style-cast -Woverloaded-virtual -Wuninitialized -Wmissing-declarations -ansi -pedantic -std=c++11")

ADD_LIBRARY(Calc Calculator.cpp)
TARGET_LINK_LIBRARIES(Calc)

ADD_EXECUTABLE(Calculator main.cpp)
TARGET_LINK_LIBRARIES(Calculator Calc)

add_subdirectory(tests)
