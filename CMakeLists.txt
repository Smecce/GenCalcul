cmake_minimum_required(VERSION 3.16)

project(GenCalcul VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Файл compile_commands.json нужен IntelliSense в VSCode
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(gencalcul
    src/main.cpp
    src/core/Calculator.cpp
    src/operations/Addition.cpp
    src/operations/Multiplication.cpp
)

target_include_directories(gencalcul PRIVATE include)

if(MSVC)
    target_compile_options(gencalcul PRIVATE /W4)
else()
    target_compile_options(gencalcul PRIVATE -Wall -Wextra -Wpedantic)
endif()
