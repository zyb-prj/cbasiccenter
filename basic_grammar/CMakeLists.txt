# 将当前目录下所有的源文件保存至名为DIR_LIB_SRCS的变量中
aux_source_directory(./src DIR_LIB_SRCS)

# 添加头文件
include_directories(include)

# 生成链接库
add_library (basic_grammar_obj ${DIR_LIB_SRCS})