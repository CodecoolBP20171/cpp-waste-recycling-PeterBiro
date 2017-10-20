cmake_minimum_required(VERSION 3.8)
project(WasteRecycling)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Src/Garbage.cpp Src/Garbage.h Src/PaperGarbage.cpp Src/PaperGarbage.h Src/PlasticGarbage.cpp Src/PlasticGarbage.h Src/DustbinContentError.hpp Src/Dustbin.cpp Src/Dustbin.h Src/MetalGarbage.cpp Src/MetalGarbage.h Src/Dustbin9000.cpp Src/Dustbin9000.h Src/BottleCap.cpp Src/BottleCap.h)
add_executable(WasteRecycling ${SOURCE_FILES})