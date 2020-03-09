cmake_minimum_required(VERSION 2.8)

add_compile_options(-O3)
set(CMAKE_CXX_STANDARD 20)

add_library(tsv STATIC src/tsv.cpp)

target_include_directories(tsv PUBLIC include)

add_executable(1_practice src/main.cpp)
target_link_libraries(1_practice tsv)
