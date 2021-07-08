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

    vector<int> nums{3, 2, 1, 5, 6, 4};
    EXPECT_EQ(5, obj.findKthLargest(nums, 2));

    vector<int> nums2{3,2,3,1,2,4,5,5,6};
    EXPECT_EQ(4, obj.findKthLargest(nums2, 4));
}

TEST(TEST2, TEST2)
{
    Solution obj;

    vector<int> nums{3, 2, 1, 5, 6, 4};
    EXPECT_EQ(5, obj.findKthLargest2(nums, 2));

    vector<int> nums2{3,2,3,1,2,4,5,5,6};
    EXPECT_EQ(4, obj.findKthLargest2(nums2, 4));
}
