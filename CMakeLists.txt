cmake_minimum_required(VERSION 3.10)
project(ColaPrioridad)

set(CMAKE_CXX_STANDARD 17)

add_executable(ColaPrioridad main.cpp Lib/Cola.h Lib/Genericas/VGeneral.cpp)
