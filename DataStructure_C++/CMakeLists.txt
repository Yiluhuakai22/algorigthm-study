project(TEST_DataStructure) # cmake -G "MinGW Makefiles" ..

# 测试代码目录
set(TEST_DIRS 
bubble_sort 
merge_sort 
quick_sort 
selection_sort 
voidinsertion_sort 
)

FOREACH(TEST_NAME ${TEST_DIRS})     
        message("TEST_NAME = ${TEST_NAME}") 
        set(VAR TEST_${TEST_NAME})    
        # 添加源文件查找路径
        AUX_SOURCE_DIRECTORY("${CMAKE_CURRENT_SOURCE_DIR}/${TEST_NAME}" ${VAR})  
        # 生成测试可执行程序
        add_executable(${TEST_NAME} ${${VAR}})
        target_link_libraries(${TEST_NAME}
        PRIVATE 
        gtest
        gtest_main  # 使用gtest带的main函数,如果检测到外部有main函数，则使用外部main函数,外部main函数要配置gtest初始化。
        gmock
        gmock_main  # 使用gmock带的main函数,如果检测到外部有main函数，则使用外部main函数,与gtest_main同时存在则自动配置。
        pthread )
ENDFOREACH(TEST_NAME)
