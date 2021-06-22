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

    vector<int> nums{2, 5, 6, 0, 0, 1, 2};
    EXPECT_EQ(false, obj.search(nums, 3));
    EXPECT_EQ(true, obj.search(nums, 2));
}
