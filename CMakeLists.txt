cmake_minimum_required(VERSION 3.26)
project(Employee_management_system)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(include)
include_directories(src)

add_executable(ManagementSystem
        include/menu.h
        src/main.cpp
        src/menu.cpp
        include/staff.h
        src/staff.cpp)
