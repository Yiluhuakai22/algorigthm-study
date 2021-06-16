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
    std::vector<int> flowerbed{0};
    EXPECT_EQ(true, obj.canPlaceFlowers(flowerbed,1));
    
    std::vector<int> flowerbed2{0,0};
    EXPECT_EQ(true, obj.canPlaceFlowers(flowerbed2,1));

    std::vector<int> flowerbed3{0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,1,0};
    EXPECT_EQ(true, obj.canPlaceFlowers(flowerbed3,4));
}
