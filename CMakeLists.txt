cmake_minimum_required(VERSION 4.1)
project(ostepcode C)

set(CMAKE_C_STANDARD 90)

add_executable(ostepcode introduction/virtualization_first_example.c
        introduction/concurrency_first_example.c)
