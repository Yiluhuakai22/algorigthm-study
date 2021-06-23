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

    vector<int> nums1{1, 3}, nums2{2};
    EXPECT_EQ(2.0, obj.findMedianSortedArrays(nums1, nums2));

    vector<int> nums3{1, 2}, nums4{3, 4};
    EXPECT_EQ(2.5, obj.findMedianSortedArrays(nums3, nums4));

    vector<int> nums5{0, 0}, nums6{0, 0};
    EXPECT_EQ(0, obj.findMedianSortedArrays(nums5, nums6));

    vector<int> nums7{}, nums8{1};
    EXPECT_EQ(1.0, obj.findMedianSortedArrays(nums7, nums8));
}

TEST(TEST2, TEST2)
{
    Solution obj;

    vector<int> nums1{1, 3}, nums2{2};
    EXPECT_EQ(2.0, obj.findMedianSortedArrays2(nums1, nums2));

    vector<int> nums3{1, 2}, nums4{3, 4};
    EXPECT_EQ(2.5, obj.findMedianSortedArrays2(nums3, nums4));

    vector<int> nums5{0, 0}, nums6{0, 0};
    EXPECT_EQ(0, obj.findMedianSortedArrays2(nums5, nums6));

    vector<int> nums7{}, nums8{1};
    EXPECT_EQ(1.0, obj.findMedianSortedArrays2(nums7, nums8));
}
