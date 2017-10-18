cmake_minimum_required(VERSION 3.8)
project(WasteRecycling)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Src/Garbage.cpp Src/Garbage.h Src/PaperGarbage.cpp Src/PaperGarbage.h Src/PlasticGarbage.cpp Src/PlasticGarbage.h)
add_executable(WasteRecycling ${SOURCE_FILES})