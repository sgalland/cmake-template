cmake_minimum_required(VERSION 3.26)
project(exeproj)
set(CMAKE_C_STANDARD 90)
set(CMAKE_C_FLAGS "-Wall -Werror -pedantic")
set(CMAKE_BUILD_TYPE Debug)


# Add the projects in these folders to the make process
add_subdirectory(exe)
add_subdirectory(lib)

target_link_libraries(exeproj PRIVATE lib)




