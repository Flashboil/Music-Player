cmake_minimum_required(VERSION 3.20)
project(music_player)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(music_player main.cpp
        Tracklist.cpp
        Tracklist.h)
