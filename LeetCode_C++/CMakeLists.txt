project(TEST_SOLUTION)

# gtest库相关
# 如果把gtest放到test目录下，则使用如下包含关系：
add_subdirectory(./googletest)  # 编译gtest
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/googletest/googletest/include)  # 包含gtest等头文件
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/googletest/googlemock/include)  # 包含gmock等头文件

# 生成测试可执行程序目录设置
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../build/bin)

# 增加测试工程
add_subdirectory(1_Two_Sum)
add_subdirectory(135_Candy)
add_subdirectory(455_Find_Content_Children)