cmake_minimum_required(VERSION 4.0)
project(guibowser)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)

FetchContent_Declare(
        raylib
        GIT_REPOSITORY "https://github.com/raysan5/raylib.git"
        GIT_TAG "master" # Or a specific tag, e.g., 4.5.0
        GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(raylib)

add_executable(guibowser main.cpp)

target_link_libraries(guibowser PRIVATE raylib)