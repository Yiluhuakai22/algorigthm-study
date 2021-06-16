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
    std::vector<vector<int>> intervals{{1, 2}, {2, 3}, {3, 4}, {1, 3}};
    EXPECT_EQ(1, obj.eraseOverlapIntervals(intervals));
    std::vector<vector<int>> intervals2{{1, 2}, {1, 2}, {1, 2}};
    EXPECT_EQ(2, obj.eraseOverlapIntervals(intervals2));
    std::vector<vector<int>> intervals3{{1, 2}, {2, 3}};
    EXPECT_EQ(0, obj.eraseOverlapIntervals(intervals3));
}
