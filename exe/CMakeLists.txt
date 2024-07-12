cmake_minimum_required(VERSION 3.26)
project(exeproj)
set(CMAKE_C_STANDARD 90)

add_executable(exeproj src/main.c)

target_link_libraries(exeproj PUBLIC lib)
target_include_directories(exeproj PUBLIC
                          "${CMAKE_SOURCE_DIR}"
                          "${CMAKE_SOURCE_DIR}/lib/src"
                          )