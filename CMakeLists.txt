cmake_minimum_required (VERSION 3.0)
project (getUserName)

add_library (getUserName STATIC
    src/getUserName.h
    src/getUserName.cc
)

target_include_directories (getUserName PUBLIC src)
