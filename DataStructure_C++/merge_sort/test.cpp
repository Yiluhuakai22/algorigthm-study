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
    Solution<int> obj;
    std::vector<int> v1{1, 2, 4, 2, 6, 2, 65, 7, 3, 4, 2, 54};
    obj.merge_sort(v1, 0, v1.size() - 1);
    EXPECT_EQ((std::vector<int>{1, 2, 2, 2, 2, 3, 4, 4, 6, 7, 54, 65}), v1);
}

TEST(TEST2, TEST2)
{
    Solution<int> obj;
    std::vector<int> v1{1, 2, 4, 2, 6, 2, 65, 7, 3, 4, 2, 54};
    obj.merge_sort2(v1, v1.size());
    EXPECT_EQ((std::vector<int>{1, 2, 2, 2, 2, 3, 4, 4, 6, 7, 54, 65}), v1);
}
