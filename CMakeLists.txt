cmake_minimum_required(VERSION 3.10)
project(Strings_with_pointers C)

set(CMAKE_C_STANDARD 11)

add_executable(random_write_read_file main.c file.c file.h read.c read.h write.c write.h)