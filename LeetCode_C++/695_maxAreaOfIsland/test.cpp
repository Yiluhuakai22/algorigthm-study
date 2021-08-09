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
    vector<vector<int>> grid{{0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
                             {0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0},
                             {0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0}};

    EXPECT_EQ(6, obj.maxAreaOfIsland(grid));
}
