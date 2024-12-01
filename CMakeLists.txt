cmake_minimum_required(VERSION 3.29)
project(rk2_oaip)

set(CMAKE_CXX_STANDARD 20)

add_executable(rk2_oaip main.cpp
        "class/MusicalInstrument.h"
        class/StringInstrument.h
        class/BrassInstrument.h
)
