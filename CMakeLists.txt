cmake_minimum_required(VERSION 3.16)
project(4k-restorer CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(4krestorer
    src/main.cpp
    src/upscale.cpp
    src/interpolate.cpp
    src/denoise.cpp
    src/cli.cpp
)

target_include_directories(4krestorer PRIVATE include)

if(WIN32)
    target_link_libraries(4krestorer PRIVATE userenv)
endif()
