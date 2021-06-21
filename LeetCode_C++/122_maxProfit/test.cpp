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
    std::vector<int> prices{7, 1, 5, 3, 6, 4};
    EXPECT_EQ(7, obj.maxProfit(prices));

    std::vector<int> prices2{1, 2, 3, 4, 5};
    EXPECT_EQ(4, obj.maxProfit(prices2));

    std::vector<int> prices3{7, 6, 4, 3, 1};
    EXPECT_EQ(0, obj.maxProfit(prices3));
}
