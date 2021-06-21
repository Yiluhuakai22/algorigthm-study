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
    std::vector<int> nums1 = { 1, 2, 3, 0, 0, 0 }, nums2 = { 2, 5, 6 }, nums3 = { 1 }, nums4 = {};
    obj.merge(nums1, 3, nums2, 3);
    EXPECT_EQ((std::vector<int> { 1, 2, 2, 3, 5, 6 }), nums1);

    obj.merge(nums3, 1, nums4, 0);
    EXPECT_EQ((std::vector<int> { 1 }), nums3);
}
