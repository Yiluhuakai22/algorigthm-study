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

    vector<int> nums{0};
    EXPECT_EQ(0, obj.singleNonDuplicate(nums));

    vector<int> nums2{1, 2, 2};
    EXPECT_EQ(1, obj.singleNonDuplicate(nums2));

    vector<int> nums3{1, 1, 2};
    EXPECT_EQ(2, obj.singleNonDuplicate(nums3));

    vector<int> nums4{1, 1, 2, 3, 3, 4, 4, 8, 8};
    EXPECT_EQ(2, obj.singleNonDuplicate(nums4));

    vector<int> nums5{3, 3, 7, 7, 10, 11, 11};
    EXPECT_EQ(10, obj.singleNonDuplicate(nums5));
}
