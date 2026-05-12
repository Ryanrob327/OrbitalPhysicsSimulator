cmake_minimum_required(VERSION 3.15)
project(OrbitalSimulator)

set(CMAKE_CXX_STANDARD 17)

find_package(raylib REQUIRED)

file(GLOB SRC_FILES src/*.cpp)

add_executable(game ${SRC_FILES})

target_include_directories(game PRIVATE include)

target_link_libraries(game raylib)