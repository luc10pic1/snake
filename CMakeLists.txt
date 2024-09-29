cmake_minimum_required(VERSION 3.29)
project(wallet)

set(CMAKE_CXX_STANDARD 20)
add_executable(wallet main.cpp
        map.cpp
        map.h
        snake.cpp
        snake.h)
find_package(SFML COMPONENTS system window graphics)
target_link_libraries(wallet sfml-system sfml-window sfml-graphics)

