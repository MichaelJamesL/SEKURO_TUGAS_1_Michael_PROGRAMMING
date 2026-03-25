cmake_minimum_required(VERSION 3.10)
project(robot)
#[TODO] Implentasikan CMakeList di bawah ini

set(SOURCE_FILES
    src/main.cpp
    src/robot.cpp
    src/robotair.cpp
)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})