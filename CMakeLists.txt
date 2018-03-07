cmake_minimum_required(VERSION 3.8)
project(Clion)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Monster.cpp Monster.h Zombi.cpp Zombi.h Ogre.cpp Ogre.h)
add_executable(Clion ${SOURCE_FILES})