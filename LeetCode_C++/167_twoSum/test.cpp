#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include <limits.h>

#include <cstdlib>
#include <iostream>
#include <string>

#include "solution.h"

using ::testing::_;
using ::testing::AtLeast;
using ::testing::Exactly;
using ::testing::Return;
using namespace testing;
using namespace std;

TEST(TEST, TEST)
{
    Solution obj;
    std::vector<int> v1 { -1, 0 };
    EXPECT_EQ((std::vector<int> { 1, 2 }), obj.twoSum(v1, -1));

    std::vector<int> v2 { 2, 3, 4 };
    EXPECT_EQ((std::vector<int> { 1, 3 }), obj.twoSum(v2, 6));

    std::vector<int> v3 { 2, 7, 11, 15 };
    EXPECT_EQ((std::vector<int> { 1, 2 }), obj.twoSum(v3, 9));
}
