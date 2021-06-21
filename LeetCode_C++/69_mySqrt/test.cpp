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

TEST(TEST2, TEST2)
{
    Solution obj;
    EXPECT_EQ(2, obj.mySqrt2(8));
    EXPECT_EQ(46339, obj.mySqrt2(2147395599));
    EXPECT_EQ(46340, obj.mySqrt2(2147483647));
}

TEST(TEST, TEST)
{
    Solution obj;
    EXPECT_EQ(2, obj.mySqrt(8));
    EXPECT_EQ(46339, obj.mySqrt(2147395599));
    EXPECT_EQ(46340, obj.mySqrt(2147483647));
}


