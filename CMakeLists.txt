cmake_minimum_required(VERSION 3.0)  # cmake -G "MinGW Makefiles" ..
project(ALGORIGTHM_STUDY)

# 头文件目录
# include_directories("${CMAKE_CURRENT_SOURCE_DIR}/LeetCode_C++")
# 源文件目录
# AUX_SOURCE_DIRECTORY("${CMAKE_CURRENT_SOURCE_DIR}/LeetCode_C++" DIR_SRCS)

# 生成可执行文件
# add_executable(gtest_win ./src/main.cpp ${DIR_SRCS})

# 增加工程
add_subdirectory(LeetCode_C++)