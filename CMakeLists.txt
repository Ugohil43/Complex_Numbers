cmake_minimum_required(VERSION 3.5.0)

set(SOURCES
    ./src/MyComplex.h
    ./src/MyComplex.cpp
    )

include_directories(
    ./src/
    )
add_executable(MadnessShapes ./main.cpp ${SOURCES})