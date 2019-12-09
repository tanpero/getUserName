cmake_minimum_required (VERSION 3.0)
project (getUserName)

add_library (getUserName STATIC
    src/getUserName.h
    src/getUserName.cc
)

target_include_directories (getUserName PUBLIC src)

add_executable(getUserName-test test/main.cc)
target_link_libraries(getUserName-test getUserName)
