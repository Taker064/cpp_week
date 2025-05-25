cmake_minimum_required(VERSION 3.10)
project(classtest)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 17)

# 出力ファイルを src/ に置く
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build)

add_executable(string3_3 src/string3_3.cpp)