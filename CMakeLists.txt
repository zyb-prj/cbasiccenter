# CMake最低版本号要求
cmake_minimum_required(VERSION 3.23)

# 项目信息，工程名为cbasiccenter
project(cbasiccenter)

# 指定c语言版本为c99
set(CMAKE_C_STANDARD 99)

# 查找目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# 添加子目录
add_subdirectory(basic_grammar common_tools)

# 指定生成目标：指示变量main.c中的源文件需要编译成一个名为cbasiccenter的可执行文件
add_executable(execute ${DIR_SRCS} common_tools/src/key_to_value.c common_tools/include/key_to_value.h)

# 添加链接库：将子目录中的源码编译为动态连接库
target_link_libraries(execute basic_grammar_obj common_tools_obj)