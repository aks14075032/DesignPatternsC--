cmake_minimum_required(VERSION 3.22)
project(Builder)

set(CMAKE_CXX_STANDARD 14)

add_executable(Builder main.cpp Desktop.h DesktopBuilder.h DellDesktop.h DellDesktop.cpp HPDesktop.h HPDesktop.cpp DesktopDirector.h)
