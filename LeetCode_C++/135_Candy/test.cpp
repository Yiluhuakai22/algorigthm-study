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
    std::vector<int> ratings{1, 2, 4, 6, 3, 67, 54, 12, 1, 1, 1, 1, 4, 7, 56, 2};
    EXPECT_EQ(34, obj.candy(ratings));
}
