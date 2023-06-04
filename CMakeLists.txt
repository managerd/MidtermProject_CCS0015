cmake_minimum_required(VERSION 3.25)
project(MidtermProject)

set(CMAKE_CXX_STANDARD 14)

include_directories(MidtermProject)

add_executable(MidtermProject
        MidtermProject/dynamicStacks.cpp
        MidtermProject/dynamicStacks.h
        MidtermProject/main.cpp
        MidtermProject/staticQueue.cpp
        MidtermProject/staticQueue.h
        MidtermProject/staticStacks.cpp
        MidtermProject/staticStacks.h)
