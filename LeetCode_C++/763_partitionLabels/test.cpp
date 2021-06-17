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
    EXPECT_EQ((std::vector<int>{1}), obj.partitionLabels("a"));
    EXPECT_EQ((std::vector<int>{9, 7, 8}), obj.partitionLabels("ababcbacadefegdehijhklij"));
}
