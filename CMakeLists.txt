cmake_minimum_required(VERSION 3.15)
project(OrbitalSimulator)

set(CMAKE_CXX_STANDARD 17)

find_package(raylib REQUIRED)

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS src/*.cpp)

add_executable(game ${SOURCES})

target_include_directories(game PRIVATE include)

target_link_libraries(game raylib)