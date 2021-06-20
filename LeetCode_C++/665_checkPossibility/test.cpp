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
    std::vector<int> nums{4,2,3};
    EXPECT_EQ(true, obj.checkPossibility(nums));

    std::vector<int> nums2{4,2,1};
    EXPECT_EQ(false, obj.checkPossibility(nums2));
}
