project(TEST_SOLUTION)

# 测试代码目录
set(TEST_DIRS
1_twoSum 
88_merge 
122_maxProfit 
135_candy 
142_detectCycle 
167_twoSum 
406_reconstructQueue 
435_eraseOverlapIntervals
452_findMinArrowShots
455_findContentChildren 
605_canPlaceFlowers 
665_checkPossibility 
763_partitionLabels  
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

# message("1.PROJECT_BINARY_DIR = ${PROJECT_BINARY_DIR}")
# message("2.PROJECT_SOURCE _DIR = ${_DIR}")
# message("3.CMAKE_CURRENT_SOURCE_DIR = ${CMAKE_CURRENT_SOURCE_DIR}")
# message("4.CMAKE_CURRRENT_BINARY_DIR = ${CMAKE_CURRRENT_BINARY_DIR}")
# message("5.CMAKE_CURRENT_LIST_FILE = ${CMAKE_CURRENT_LIST_FILE}")
# message("6.CMAKE_CURRENT_LIST_LINE = ${CMAKE_CURRENT_LIST_LINE}")
# message("7.CMAKE_MODULE_PATH = ${CMAKE_MODULE_PATH}")
# message("8.CMAKE_SOURCE_DIR = ${CMAKE_SOURCE_DIR}")
# message("9.EXECUTABLE_OUTPUT_PATH = ${EXECUTABLE_OUTPUT_PATH}")
# message("10.LIBRARY_OUTPUT_PATH = ${LIBRARY_OUTPUT_PATH}")
# message("11.PROJECT_NAME = ${PROJECT_NAME}")
# message("12.PROJECT_VERSION_MAJOR = ${PROJECT_VERSION_MAJOR}")
# message("13.PROJECT_VERSION_MINOR = ${PROJECT_VERSION_MINOR}")
# message("14.PROJECT_VERSION_PATCH = ${PROJECT_VERSION_PATCH}")
# message("15.CMAKE_SYSTEM = ${CMAKE_SYSTEM}")
# message("16.CMAKE_SYSTEM_NAME = ${CMAKE_SYSTEM_NAME}")
# message("17.CMAKE_SYSTEM_VERSION = ${CMAKE_SYSTEM_VERSION}")
# message("18.BUILD_SHARED_LIBS = ${BUILD_SHARED_LIBS}")
# message("19.CMAKE_C_FLAGS = ${CMAKE_C_FLAGS}")
# message("20.CMAKE_CXX_FLAGS = ${CMAKE_CXX_FLAGS}")
# message("21.CMAKE_SYSTEM_PROCESSOR   = ${CMAKE_SYSTEM_PROCESSOR}")