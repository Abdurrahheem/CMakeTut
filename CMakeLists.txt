cmake_minimum_required(VERSION 3.20.0)

project(OLAS)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(Adder)

target_link_libraries(${PROJECT_NAME} adder)