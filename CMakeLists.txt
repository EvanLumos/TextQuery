cmake_minimum_required(VERSION 3.13)
project(TextQuery)

set(CMAKE_CXX_STANDARD 11)

add_executable(TextQuery main.cpp TextQuery.cpp TextQuery.h QueryResult.h RunQuery.h)
#add_executable(TextQuery main.cpp )