cmake_minimum_required(VERSION 3.13)
project(statki)

set(CMAKE_CXX_STANDARD 14)

add_executable(statki main.cpp Statek.cpp Statek.h Ladunek.cpp Ladunek.h Luzny.cpp Luzny.h Kontener.cpp Kontener.h)