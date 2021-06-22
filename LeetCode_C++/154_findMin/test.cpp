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
    EXPECT_EQ(0, obj.findMin(nums));

    vector<int> nums2{3, 3, 1, 3};
    EXPECT_EQ(1, obj.findMin(nums2));

    vector<int> nums3{3, 3, 1, 1};
    EXPECT_EQ(1, obj.findMin(nums3));
}
