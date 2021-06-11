cmake_minimum_required(VERSION 3.0)  # cmake -G "MinGW Makefiles" ..
project(ALGORIGTHM_STUDY)


# 生成测试可执行程序目录设置
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/bin)

# gtest库相关
# 如果把gtest放到test目录下，则使用如下包含关系：
add_subdirectory(./ext/googletest)  # 编译gtest
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/ext/googletest/googletest/include)  # 包含gtest等头文件
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/ext/googletest/googlemock/include)  # 包含gmock等头文件

# 头文件目录
# include_directories("${CMAKE_CURRENT_SOURCE_DIR}/LeetCode_C++")
# 源文件目录
# AUX_SOURCE_DIRECTORY("${CMAKE_CURRENT_SOURCE_DIR}/LeetCode_C++" DIR_SRCS)

# 生成可执行文件
# add_executable(gtest_win ./src/main.cpp ${DIR_SRCS})

# 增加工程
add_subdirectory(LeetCode_C++)