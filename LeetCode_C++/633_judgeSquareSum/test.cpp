#include <limits.h>
#include "gtest/gtest.h"
#include "gmock/gmock.h"

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
    EXPECT_EQ(true, obj.judgeSquareSum(0));
    EXPECT_EQ(true, obj.judgeSquareSum(1));
    EXPECT_EQ(true, obj.judgeSquareSum(2));
    EXPECT_EQ(false, obj.judgeSquareSum(3));
    EXPECT_EQ(true, obj.judgeSquareSum(4));
    EXPECT_EQ(true, obj.judgeSquareSum(5));
}
