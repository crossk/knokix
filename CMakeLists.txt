cmake_minimum_required(VERSION 3.10)

project(knokix)

set(EXEC_NAME "knokix")

file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE INCLUDES "src/*.hpp")

find_package(Threads REQUIRED)
find_package(SFML COMPONENTS graphics audio window system REQUIRED)

add_executable(${EXEC_NAME} ${INCLUDES} ${SOURCES})

target_link_libraries(${EXEC_NAME} sfml-graphics sfml-audio sfml-window sfml-system Threads::Threads ${CMAKE_DL_LIBS})
