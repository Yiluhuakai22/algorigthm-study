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
    std::vector<vector<int>> people{{7,0},{4,4},{7,1},{5,0},{6,1},{5,2}};
    EXPECT_EQ((std::vector<vector<int>>{{5,0},{7,0},{5,2},{6,1},{4,4},{7,1}}), obj.reconstructQueue(people));

    std::vector<vector<int>> people2{{6,0},{5,0},{4,0},{3,2},{2,2},{1,4}};
    EXPECT_EQ((std::vector<vector<int>>{{4,0},{5,0},{2,2},{3,2},{1,4},{6,0}}), obj.reconstructQueue(people2));
}
