#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include <limits.h>

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
    string s="ADOBECODEBANC",t="ABC";
    EXPECT_EQ("BANC", obj.minWindow(s,t));
    
    string s2="a",t2="a";
    EXPECT_EQ("a", obj.minWindow(s2,t2));

}
