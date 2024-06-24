cmake_minimum_required(VERSION 3.10)
project(CPL VERSION 1.0)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加 src 目录到构建
add_subdirectory(src)

# 指定头文件目录
include_directories(include)
