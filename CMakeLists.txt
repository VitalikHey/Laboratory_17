cmake_minimum_required(VERSION 3.26)
project(Laboratory_17 C)

set(CMAKE_C_STANDARD 11)

add_executable(Laboratory_17
        main.c
        libs/string/tasks/string.h
        libs/string/tasks/string.c
        libs/string/test_for_tasks/test_for_tasks.h
        libs/string/test_for_tasks/test_for_tasks.c)
