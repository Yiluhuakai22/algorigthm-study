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
    vector<int> nums{1, 2, 1, 2, 1, 2, 0, 0, 0, 0, 0, 0, 1, 2, 1, 2, 1};
    obj.sortColors(nums);
    EXPECT_EQ((std::vector<int>{0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2}), nums);
}
