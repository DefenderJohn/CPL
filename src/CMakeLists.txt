# 自动收集 src 目录下所有的源文件
file(GLOB_RECURSE SOURCES "*.cpp")

# 添加可执行文件
add_executable(CPL ${SOURCES})

# 包含头文件目录
target_include_directories(CPL PRIVATE ${PROJECT_SOURCE_DIR}/include)
