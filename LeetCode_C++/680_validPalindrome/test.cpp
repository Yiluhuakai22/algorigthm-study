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
    EXPECT_EQ(true, obj.validPalindrome("b"));
    EXPECT_EQ(true, obj.validPalindrome("xdddbababeccebababddd"));
    EXPECT_EQ(true, obj.validPalindrome("aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga"));
    EXPECT_EQ(true, obj.validPalindrome("abca"));
    EXPECT_EQ(true, obj.validPalindrome("bddb"));
    EXPECT_EQ(false, obj.validPalindrome("abaca"));
}
