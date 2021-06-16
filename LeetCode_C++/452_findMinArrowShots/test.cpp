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

    vector<vector<int>> points{{10, 16}, {2, 8}, {1, 6}, {7, 12}};
    EXPECT_EQ(2, obj.findMinArrowShots(points));

    vector<vector<int>> points2{{1,2},{3,4},{5,6},{7,8}};
    EXPECT_EQ(4, obj.findMinArrowShots(points2));

    vector<vector<int>> points3{{1,2},{2,3},{3,4},{4,5}};
    EXPECT_EQ(2, obj.findMinArrowShots(points3));

    vector<vector<int>> points4{{1,2}};
    EXPECT_EQ(1, obj.findMinArrowShots(points4));

    vector<vector<int>> points5{{2,3},{2,3}};
    EXPECT_EQ(1, obj.findMinArrowShots(points5));

    vector<vector<int>> points6{{-2147483646,-2147483645},{2147483646,2147483647}};
    EXPECT_EQ(2, obj.findMinArrowShots(points6));
}

TEST(TEST2, TEST2)
{
    Solution obj;

    vector<vector<int>> points{{10, 16}, {2, 8}, {1, 6}, {7, 12}};
    EXPECT_EQ(2, obj.findMinArrowShots2(points));

    vector<vector<int>> points2{{1,2},{3,4},{5,6},{7,8}};
    EXPECT_EQ(4, obj.findMinArrowShots2(points2));

    vector<vector<int>> points3{{1,2},{2,3},{3,4},{4,5}};
    EXPECT_EQ(2, obj.findMinArrowShots2(points3));

    vector<vector<int>> points4{{1,2}};
    EXPECT_EQ(1, obj.findMinArrowShots2(points4));

    vector<vector<int>> points5{{2,3},{2,3}};
    EXPECT_EQ(1, obj.findMinArrowShots2(points5));

    vector<vector<int>> points6{{-2147483646,-2147483645},{2147483646,2147483647}};
    EXPECT_EQ(2, obj.findMinArrowShots2(points6));
}
