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

    vector<int> nums{};
    EXPECT_EQ((vector<int>{-1, -1}), obj.searchRange(nums, 0));

    vector<int> nums2{0};
    EXPECT_EQ((vector<int>{0, 0}), obj.searchRange(nums2, 0));

    vector<int> nums4{2, 2};
    EXPECT_EQ((vector<int>{-1, -1}), obj.searchRange(nums4, 1));

    vector<int> nums3{5, 7, 7, 8, 8, 10};
    EXPECT_EQ((vector<int>{3, 4}), obj.searchRange(nums3, 8));
    EXPECT_EQ((vector<int>{-1, -1}), obj.searchRange(nums3, 6));
    EXPECT_EQ((vector<int>{0, 0}), obj.searchRange(nums3, 5));
    EXPECT_EQ((vector<int>{5, 5}), obj.searchRange(nums3, 10));
    EXPECT_EQ((vector<int>{-1, -1}), obj.searchRange(nums3, 4));
}
