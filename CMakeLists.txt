cmake_minimum_required(VERSION 3.26)
project(exeproj)
set(CMAKE_C_STANDARD 90)

add_subdirectory(exe)
add_subdirectory(lib)

target_link_libraries(exe PUBLIC lib)

target_include_directories(exe PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/lib"
                          )

