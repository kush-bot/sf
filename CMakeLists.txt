cmake_minimum_required(VERSION 3.20)

project(sf)


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(sf main.cpp src/Data/CsvFeed.cpp)


target_include_directories(sf PRIVATE include src)
